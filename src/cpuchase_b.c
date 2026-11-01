/* cpuChasePlan, as the reader (tools/5-generated/gen_equiv) writes it in the flat form, kept in a file of its own with the
   directed cases that cover it (tests/cpuchase_b/). */

typedef struct { int w[3]; } Stk3;
float cpuDistXZ(int, int);
int cpuInFan(int, int, Stk3);
int cpuLineCrossXZ(int, Stk3, Stk3, Stk3);
float cpuLineXAtZ(Stk3, Stk3, float);
extern int cpuReachPoint();
void cpuChasePlan(int a4, int a5, int a6, int a7);

void cpuChasePlan(int a4, int a5, int a6, int a7)
{
    register float u10;
    register int t59;
    register int t64;
    register int t75;
    register int t99;
    register int t111;
    register int t117;
    register int t127;
    register int t135;
    register int t140;
    register int t152;
    register int t155;
    register int t184;
    register int t192;
    register int t200;
    register float u203;
    register int t210;
    register float u216;
    register int t229;
    register int t235;
    register float u250;
    register int t254;
    register float u257;
    register int t327;
    register int t340;
    register int t349;
    register int t354;
    register int t371;
    register int t377;
    register int t382;
    register int t388;
    register int t403;
    register int t444;
    register float u450;
    register int t467;
    register int t472;
    register int t477;
    register float u489;
    register float u509;
    register int t514;
    register int t523;
    register int t528;
    register int t533;
    register int t535;
    register float u546;
    register int t590;
    register int t595;
    register int t599;
    register int t603;
    register int t620;
    register int t624;
    register int t630;
    register int t647;
    register int t653;
    register float t657;
    register int t660;
    register int t664;
    register int t668;
    register int t672;
    register int t678;
    register int t775;
    register int t784;
    register int t789;
    register int t792;
    register int t799;
    register int t807;
    register int t810;
    register float u819;
    register int t830;
    register int t839;
    register int t880;
    register int t886;
    register int t891;
    register int t899;
    register int t904;
    register int t936;
    register int t940;
    register int t949;
    register int t956;
    register int t1021;
    register float u1027;
    register int t1044;
    register int t1049;
    register int t1054;
    register float u1066;
    register float u1086;
    register int t1091;
    register int t1100;
    register int t1105;
    register int t1110;
    register int t1112;
    register float u1123;
    register int t1178;
    register int t1182;
    register int t1188;
    register int t1205;
    register int t1211;
    register float t1215;
    register int t1218;
    register int t1222;
    register int t1226;
    register int t1230;
    register int t1236;
    register int t1266;
    register int t1271;
    register int t1275;
    register int t1279;
    int stk[82];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register float F0;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F12;
    register int T_;
    int R1304;
    int R1308;
    int R1312;
    R1304 = *(int *)((int)stk + 304);
    R1308 = *(int *)((int)stk + 308);
    R1312 = *(int *)((int)stk + 312);
    R4 = a4;
    R1312 = R4;
    R1308 = (((*(int *)((R4 + 0xB5C))) * 0x160) + 0x8C2FC69C);
    R1304 = 0x8C291F24;
    if ((((*(int *)0x8C291F78) & 4) == 0)) goto L_8C03F708;
    if ((0.0f > (*(float *)(((R1304) + 0x6C))))) goto L_8C03F67E;
    F3 = ((*(float *)(((R1304) + 0x6C))));
    L_8C03F688:;
    u10 = *(float *)(((R1312) + 0xAF0));
    F1 = (u10);
    if ((0.0f > u10)) goto L_8C03F6A0;
    F2 = ((*(float *)(((R1312) + 0xAF0))));
    L_8C03F6AA:;
    if ((!(F2 > F3))) goto L_8C03F6B4;
    L_8C041684:;
    R0 = (0x3);
    L_8C041C4C:;
    return;
    L_8C03F6B4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    L_8C041C4A:;
    R0 = (0x1);
    goto L_8C041C4C;
    L_8C03F6A0:;
    F2 = ((-(*(float *)(((R1312) + 0xAF0)))));
    goto L_8C03F6AA;
    L_8C03F67E:;
    F3 = ((-(*(float *)(((R1304) + 0x6C)))));
    goto L_8C03F688;
    L_8C03F708:;
    R1 = (0xB5C);
    if (((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (R1312)))) << 2)))) != 2)) goto L_8C03F7C0;
    if (((*(signed char *)((0x12F + (R1308)))) == 0)) goto L_8C03F7C0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    R0 = (0xA0);
    R3 = ((R1308));
    F3 = (0.0f);
    if ((!(((*(float *)(((0xAE8 + (R1312)) + 0x0))) - (*(float *)(((0xB9C + (R1312)) + 0x0)))) > 0.0f))) goto L_8C03F766;
    R2 = (0x1);
    L_8C03F78C:;
    *(float *)((R3 + R0)) = ((*(float *)((R3 + R0))) - ((float)R2 * 10.0f));
    goto L_8C041C4A;
    L_8C03F766:;
    if ((!(F3 > ((*(float *)(((0xAE8 + (R1312)) + 0x0))) - (*(float *)(((0xB9C + (R1312)) + 0x0))))))) goto L_8C03F78A;
    R2 = (0xFFFFFFFF);
    goto L_8C03F78C;
    L_8C03F78A:;
    R2 = (0x0);
    goto L_8C03F78C;
    L_8C03F7C0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xAE8 + (R1312))); }
    t59 = ((int (*)(int, int, int, int, Stk3, float))(cpuReachPoint))((R1312), (0x84 + ((int)stk + 76)), (int)((float)(*(int *)(((R1312) + 0xC50))) * 0.5f), a7, *(Stk3 *)(((int)stk + 76)), F4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((R1312) + 0xAE8)); }
    t64 = ((int (*)(int, int, int, Stk3))(cpuReachPoint))((R1312), (((int)stk + 64) + 0x30), (int)((float)(*(int *)(((R1312) + 0xC50))) * 1.20000005f), *(Stk3 *)(((int)stk + 64)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((R1312) + 0xAE8)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((R1304) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((R1304) + 0x18)); }
    cpuLineCrossXZ((((int)stk + 28) + 0x48), *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)));
    *(float *)(((int)stk + 96)) = (-((*(float *)(((R1312) + 0xB00))) * 10.0f));
    *(float *)(((int)stk + 92)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((R1304) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((R1304) + 0x18)); }
    *(float *)(((int)stk + 88)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)(((int)stk + 96)))));
    t75 = *(int *)0x8C2FCC5C;
    R0 = (t75);
    if ((t75 == 4)) goto L_8C03F8B6;
    if ((R0 == 2)) goto L_8C040A06;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C0416A4;
    R1 = (0x1);
    L_8C0416C4:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)(((R1304) + 0x60)))) > 0.0f))) goto L_8C0416E0;
    R3 = (0x1);
    L_8C0416FE:;
    if ((R1 == R3)) goto L_8C041706;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C041A22;
    R3 = (0x1);
    L_8C041A3A:;
    t99 = R1312;
    R1 = (t99);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)((t99 + 0xBA4)))) > 0.0f))) goto L_8C041A52;
    R2 = (0x1);
    L_8C041A8A:;
    if ((R3 != R2)) goto L_8C041B5E;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C041AD0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    t111 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t111) goto L_8C041AD0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    goto L_8C041C4A;
    L_8C041AD0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t117 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t117) goto L_8C041B12;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041B12:;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C041B44;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t127 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t127) goto L_8C041C30;
    L_8C041B44:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041C30:;
    R0 = (0x2);
    goto L_8C041C4C;
    L_8C041B5E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t135 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t135) goto L_8C041BBC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041BBC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    t140 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t140) goto L_8C041BFE;
    if (((*(signed char *)(((R1308) + 0x12B))) != 0)) goto L_8C041BFE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    goto L_8C041C4A;
    L_8C041BFE:;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C041C34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t152 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t152) goto L_8C041C34;
    goto L_8C041C30;
    L_8C041C34:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041A52:;
    t155 = R1312;
    R1 = (t155);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((t155 + 0xBA4))))))) goto L_8C041A88;
    R2 = (0xFFFFFFFF);
    goto L_8C041A8A;
    L_8C041A88:;
    R2 = (0x0);
    goto L_8C041A8A;
    L_8C041A22:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C041A38;
    R3 = (0xFFFFFFFF);
    goto L_8C041A3A;
    L_8C041A38:;
    R3 = (0x0);
    goto L_8C041A3A;
    L_8C041706:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C04173C;
    R2 = (0x1);
    L_8C041754:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C04176C;
    R1 = (0x1);
    L_8C041786:;
    if ((R2 == R1)) goto L_8C04178E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t184 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t184) goto L_8C0419B6;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C0419D0;
    L_8C0419B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C0419D0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    t192 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t192) goto L_8C0419F4;
    goto L_8C041C30;
    L_8C0419F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    goto L_8C041C4A;
    L_8C04178E:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C0417A6;
    R3 = (0x1);
    L_8C0417BE:;
    t200 = R1312;
    u203 = (*(float *)(((int)stk + 108)));
    u203 = u203 + 10.0f * (*(float *)((t200 + 0xB00)));
    R1 = (t200);
    if ((!(u203 > 0.0f))) goto L_8C0417DA;
    R2 = (0x1);
    L_8C0417F8:;
    if ((R3 != R2)) goto L_8C04184C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 88)); }
    t210 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t210) goto L_8C04184C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((int)stk + 88)); }
    goto L_8C041C4A;
    L_8C04184C:;
    u216 = (*(float *)(((R1304) + 0x20)));
    u216 = u216 + 10.0f * (*(float *)(((R1312) + 0xB00)));
    F0 = (10.0f);
    F2 = (0.0f);
    if ((!(u216 > 0.0f))) goto L_8C04186C;
    R2 = (0x1);
    L_8C041888:;
    if ((!(((-((*(float *)(((R1312) + 0xB00))) * 10.0f)) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C0418A8;
    R1 = (0x1);
    L_8C0418CC:;
    if ((R2 != R1)) goto L_8C041906;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    t229 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t229) goto L_8C041906;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)((((int)stk + 88) + 0xC)); }
    goto L_8C041C4A;
    L_8C041906:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t235 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t235) goto L_8C041968;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041968:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C0418A8:;
    if ((!(0.0f > ((-((*(float *)((0xB00 + (R1312)))) * 10.0f)) - (*(float *)(((int)stk + 108))))))) goto L_8C0418CA;
    R1 = (0xFFFFFFFF);
    goto L_8C0418CC;
    L_8C0418CA:;
    R1 = (0x0);
    goto L_8C0418CC;
    L_8C04186C:;
    u250 = (*(float *)(((R1304) + 0x20)));
    u250 = u250 + F0 * (*(float *)(((R1312) + 0xB00)));
    if ((!(F2 > u250))) goto L_8C041886;
    R2 = (0xFFFFFFFF);
    goto L_8C041888;
    L_8C041886:;
    R2 = (0x0);
    goto L_8C041888;
    L_8C0417DA:;
    t254 = R1312;
    u257 = (*(float *)(((int)stk + 108)));
    u257 = u257 + 10.0f * (*(float *)((t254 + 0xB00)));
    R1 = (t254);
    if ((!(0.0f > u257))) goto L_8C0417F6;
    R2 = (0xFFFFFFFF);
    goto L_8C0417F8;
    L_8C0417F6:;
    R2 = (0x0);
    goto L_8C0417F8;
    L_8C0417A6:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C0417BC;
    R3 = (0xFFFFFFFF);
    goto L_8C0417BE;
    L_8C0417BC:;
    R3 = (0x0);
    goto L_8C0417BE;
    L_8C04176C:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xBA4 + (R1312)))))))) goto L_8C041784;
    R1 = (0xFFFFFFFF);
    goto L_8C041786;
    L_8C041784:;
    R1 = (0x0);
    goto L_8C041786;
    L_8C04173C:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C041752;
    R2 = (0xFFFFFFFF);
    goto L_8C041754;
    L_8C041752:;
    R2 = (0x0);
    goto L_8C041754;
    L_8C0416E0:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)(((R1304) + 0x60))))))) goto L_8C0416FC;
    R3 = (0xFFFFFFFF);
    goto L_8C0416FE;
    L_8C0416FC:;
    R3 = (0x0);
    goto L_8C0416FE;
    L_8C0416A4:;
    if ((!(F3 > ((*(float *)((0x20 + (R1304)))) - (*(float *)(((0xBA4 + (R1312)) + 0x0))))))) goto L_8C0416C2;
    R1 = (0xFFFFFFFF);
    goto L_8C0416C4;
    L_8C0416C2:;
    R1 = (0x0);
    goto L_8C0416C4;
    L_8C040A06:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C040A4C;
    R2 = (0x1);
    L_8C040A68:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C040A82;
    R3 = (0x1);
    L_8C040A9E:;
    if ((R2 == R3)) goto L_8C040AA6;
    R2 = (0x8C2FCC2C);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC34) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C040F70;
    R3 = (0x1);
    L_8C040F88:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C040FC4;
    R2 = (0x1);
    L_8C040FE0:;
    if ((R3 == R2)) goto L_8C040FE8;
    R2 = (0x8C2FCC38);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC40) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C0413E8;
    R3 = (0x1);
    L_8C041400:;
    t327 = R1312;
    R1 = (t327);
    if ((!(((*(float *)((t327 + 0xBA4))) - (*(float *)(((R1304) + 0x60)))) > 0.0f))) goto L_8C04141C;
    R2 = (0x1);
    L_8C04143A:;
    if ((R3 == R2)) goto L_8C041442;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C041610;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t340 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t340) goto L_8C041610;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    L_8C0415EC:;
    R0 = (0x4);
    goto L_8C041C4C;
    L_8C041610:;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C041642;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t349 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t349) goto L_8C041642;
    goto L_8C041C30;
    L_8C041642:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t354 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t354) goto L_8C041684;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C041442:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C04145A;
    R2 = (0x1);
    L_8C041472:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C04148A;
    R1 = (0x1);
    L_8C0414A4:;
    if ((R2 != R1)) goto L_8C04153A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t371 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t371) goto L_8C0414F4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C0414F4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t377 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t377) goto L_8C041520;
    goto L_8C041C30;
    L_8C041520:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C04153A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t382 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t382) goto L_8C04156C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C04156C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t388 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t388) goto L_8C041598;
    goto L_8C041C30;
    L_8C041598:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C04148A:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xBA4 + (R1312)))))))) goto L_8C0414A2;
    R1 = (0xFFFFFFFF);
    goto L_8C0414A4;
    L_8C0414A2:;
    R1 = (0x0);
    goto L_8C0414A4;
    L_8C04145A:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C041470;
    R2 = (0xFFFFFFFF);
    goto L_8C041472;
    L_8C041470:;
    R2 = (0x0);
    goto L_8C041472;
    L_8C04141C:;
    t403 = R1312;
    R1 = (t403);
    if ((!(0.0f > ((*(float *)((t403 + 0xBA4))) - (*(float *)(((R1304) + 0x60))))))) goto L_8C041438;
    R2 = (0xFFFFFFFF);
    goto L_8C04143A;
    L_8C041438:;
    R2 = (0x0);
    goto L_8C04143A;
    L_8C0413E8:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C0413FE;
    R3 = (0xFFFFFFFF);
    goto L_8C041400;
    L_8C0413FE:;
    R3 = (0x0);
    goto L_8C041400;
    L_8C040FE8:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C041000;
    R2 = (0x1);
    L_8C041018:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xAF0)))) > 0.0f))) goto L_8C041030;
    R1 = (0x1);
    L_8C04104A:;
    if ((R2 == R1)) goto L_8C041052;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C0411AE;
    R3 = (0x1);
    L_8C0411EE:;
    R1 = (0x8C2FCC38);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C041204;
    R2 = (0x1);
    L_8C04121C:;
    if ((R3 == R2)) goto L_8C041224;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t444 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t444) goto L_8C041396;
    goto L_8C041C30;
    L_8C041396:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C041224:;
    u450 = (*(float *)(((R1304) + 0x20)));
    u450 = u450 + 10.0f * (*(float *)(((R1312) + 0xB00)));
    F0 = (10.0f);
    F2 = (0.0f);
    if ((!(u450 > 0.0f))) goto L_8C041244;
    R2 = (0x1);
    L_8C041260:;
    if ((!(((-((*(float *)(((R1312) + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C041282;
    R1 = (0x1);
    L_8C0412BA:;
    if ((R2 != R1)) goto L_8C041336;
    R1 = (0x12B);
    if (((*(signed char *)((0x12B + (R1308)))) != 2)) goto L_8C0412FC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t467 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t467) goto L_8C0412FC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C0412FC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t472 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t472) goto L_8C041322;
    goto L_8C041C30;
    L_8C041322:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C041336:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t477 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t477) goto L_8C04135C;
    goto L_8C041C30;
    L_8C04135C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C041282:;
    if ((!(0.0f > ((-((*(float *)((0xB00 + (R1312)))) * 10.0f)) - (*(float *)0x8C2FCC34))))) goto L_8C0412B8;
    R1 = (0xFFFFFFFF);
    goto L_8C0412BA;
    L_8C0412B8:;
    R1 = (0x0);
    goto L_8C0412BA;
    L_8C041244:;
    u489 = (*(float *)(((R1304) + 0x20)));
    u489 = u489 + F0 * (*(float *)(((R1312) + 0xB00)));
    if ((!(F2 > u489))) goto L_8C04125E;
    R2 = (0xFFFFFFFF);
    goto L_8C041260;
    L_8C04125E:;
    R2 = (0x0);
    goto L_8C041260;
    L_8C041204:;
    R1 = (0x8C2FCC38);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40))))) goto L_8C04121A;
    R2 = (0xFFFFFFFF);
    goto L_8C04121C;
    L_8C04121A:;
    R2 = (0x0);
    goto L_8C04121C;
    L_8C0411AE:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C0411EC;
    R3 = (0xFFFFFFFF);
    goto L_8C0411EE;
    L_8C0411EC:;
    R3 = (0x0);
    goto L_8C0411EE;
    L_8C041052:;
    u509 = (*(float *)(((R1304) + 0x20)));
    u509 = u509 + 10.0f * (*(float *)(((R1312) + 0xB00)));
    F0 = (10.0f);
    F2 = (0.0f);
    if ((!(u509 > 0.0f))) goto L_8C041072;
    R3 = (0x1);
    L_8C04108E:;
    t514 = R1312;
    R1 = (t514);
    if ((!(((-((*(float *)((t514 + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C0410C8;
    R2 = (0x1);
    L_8C0410EC:;
    if ((R3 != R2)) goto L_8C04115C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t523 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t523) goto L_8C041122;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C041122:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t528 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t528) goto L_8C041148;
    goto L_8C041C30;
    L_8C041148:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C04115C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t533 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t533) goto L_8C041182;
    goto L_8C041C30;
    L_8C041182:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C0410C8:;
    t535 = R1312;
    R1 = (t535);
    if ((!(0.0f > ((-((*(float *)((t535 + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34))))) goto L_8C0410EA;
    R2 = (0xFFFFFFFF);
    goto L_8C0410EC;
    L_8C0410EA:;
    R2 = (0x0);
    goto L_8C0410EC;
    L_8C041072:;
    u546 = (*(float *)(((R1304) + 0x20)));
    u546 = u546 + F0 * (*(float *)(((R1312) + 0xB00)));
    if ((!(F2 > u546))) goto L_8C04108C;
    R3 = (0xFFFFFFFF);
    goto L_8C04108E;
    L_8C04108C:;
    R3 = (0x0);
    goto L_8C04108E;
    L_8C041030:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xAF0 + (R1312)))))))) goto L_8C041048;
    R1 = (0xFFFFFFFF);
    goto L_8C04104A;
    L_8C041048:;
    R1 = (0x0);
    goto L_8C04104A;
    L_8C041000:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C041016;
    R2 = (0xFFFFFFFF);
    goto L_8C041018;
    L_8C041016:;
    R2 = (0x0);
    goto L_8C041018;
    L_8C040FC4:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC40))))) goto L_8C040FDE;
    R2 = (0xFFFFFFFF);
    goto L_8C040FE0;
    L_8C040FDE:;
    R2 = (0x0);
    goto L_8C040FE0;
    L_8C040F70:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C040F86;
    R3 = (0xFFFFFFFF);
    goto L_8C040F88;
    L_8C040F86:;
    R3 = (0x0);
    goto L_8C040F88;
    L_8C040AA6:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C040ABE;
    R2 = (0x1);
    L_8C040AD6:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xAF0)))) > 0.0f))) goto L_8C040AEE;
    R1 = (0x1);
    L_8C040B16:;
    if ((R2 != R1)) goto L_8C040BFC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + (R1312))); }
    t590 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t590) goto L_8C040B5E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C040B5E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 88)); }
    t595 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t595) goto L_8C040B92;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((int)stk + 88)); }
    goto L_8C041C4A;
    L_8C040B92:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t599 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t599) goto L_8C040BC4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C040BC4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t603 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t603) goto L_8C040BE8;
    goto L_8C041C30;
    L_8C040BE8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040BFC:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C040C14;
    R3 = (0x1);
    L_8C040C56:;
    R1 = (0x8C2FCC2C);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C040C6C;
    R2 = (0x1);
    L_8C040C84:;
    if ((R3 != R2)) goto L_8C040D36;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t620 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t620) goto L_8C040CBE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C040CBE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t624 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t624) goto L_8C040CF0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040CF0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t630 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t630) goto L_8C040D1C;
    goto L_8C041C30;
    L_8C040D1C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C040D36:;
    R2 = (0x8C2FCC2C);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC34) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C040D4C;
    R3 = (0x1);
    L_8C040D7E:;
    R1 = (0x8C2FCC38);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C040D94;
    R2 = (0x1);
    L_8C040DAC:;
    if ((R3 == R2)) goto L_8C040DB4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t647 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t647) goto L_8C040F10;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040F10:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t653 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t653) goto L_8C040F3C;
    goto L_8C041C30;
    L_8C040F3C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C040DB4:;
    t657 = cpuDistXZ(((R1312) + 0xAE8), 0x8C2FCC2C);
    t660 = !((cpuDistXZ(((R1312) + 0xAE8), 0x8C2FCC38)) > t657);
    if (t660) goto L_8C040E42;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t664 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t664) goto L_8C040E0C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C040E0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t668 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t668) goto L_8C040E2E;
    goto L_8C041C30;
    L_8C040E2E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040E42:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t672 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t672) goto L_8C040E98;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040E98:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t678 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t678) goto L_8C040EC4;
    goto L_8C041C30;
    L_8C040EC4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C040D94:;
    R1 = (0x8C2FCC38);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40))))) goto L_8C040DAA;
    R2 = (0xFFFFFFFF);
    goto L_8C040DAC;
    L_8C040DAA:;
    R2 = (0x0);
    goto L_8C040DAC;
    L_8C040D4C:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((int)stk + 108))))))) goto L_8C040D7C;
    R3 = (0xFFFFFFFF);
    goto L_8C040D7E;
    L_8C040D7C:;
    R3 = (0x0);
    goto L_8C040D7E;
    L_8C040C6C:;
    R1 = (0x8C2FCC2C);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC34))))) goto L_8C040C82;
    R2 = (0xFFFFFFFF);
    goto L_8C040C84;
    L_8C040C82:;
    R2 = (0x0);
    goto L_8C040C84;
    L_8C040C14:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C040C54;
    R3 = (0xFFFFFFFF);
    goto L_8C040C56;
    L_8C040C54:;
    R3 = (0x0);
    goto L_8C040C56;
    L_8C040AEE:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xAF0 + (R1312)))))))) goto L_8C040B14;
    R1 = (0xFFFFFFFF);
    goto L_8C040B16;
    L_8C040B14:;
    R1 = (0x0);
    goto L_8C040B16;
    L_8C040ABE:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C040AD4;
    R2 = (0xFFFFFFFF);
    goto L_8C040AD6;
    L_8C040AD4:;
    R2 = (0x0);
    goto L_8C040AD6;
    L_8C040A82:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC34))))) goto L_8C040A9C;
    R3 = (0xFFFFFFFF);
    goto L_8C040A9E;
    L_8C040A9C:;
    R3 = (0x0);
    goto L_8C040A9E;
    L_8C040A4C:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C040A66;
    R2 = (0xFFFFFFFF);
    goto L_8C040A68;
    L_8C040A66:;
    R2 = (0x0);
    goto L_8C040A68;
    L_8C03F8B6:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C03F8D2;
    R1 = (0x1);
    L_8C03F8F2:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C03F950;
    R3 = (0x1);
    L_8C03F96C:;
    if ((R1 == R3)) goto L_8C03F974;
    R2 = (0x8C2FCC2C);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC34) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C03FE8C;
    R3 = (0x1);
    L_8C03FEA4:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C03FEBE;
    R2 = (0x1);
    L_8C03FEDA:;
    if ((R3 == R2)) goto L_8C03FEE2;
    R2 = (0x8C2FCC38);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC40) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C040310;
    R3 = (0x1);
    L_8C040328:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC4C)) > 0.0f))) goto L_8C040368;
    R2 = (0x1);
    L_8C040384:;
    if ((R3 == R2)) goto L_8C04038C;
    R3 = (0x8C2FCC44);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC4C) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C04079A;
    R2 = (0x1);
    L_8C0407B2:;
    t775 = R1312;
    R1 = (t775);
    if ((!(((*(float *)((t775 + 0xBA4))) - (*(float *)0x8C2FCC58)) > 0.0f))) goto L_8C0407CC;
    R3 = (0x1);
    L_8C040812:;
    if ((R2 != R3)) goto L_8C0408A6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC44); }
    t784 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t784) goto L_8C040848;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC44); }
    goto L_8C0415EC;
    L_8C040848:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t789 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t789) goto L_8C040870;
    goto L_8C041C30;
    L_8C040870:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC50); }
    t792 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t792) goto L_8C040892;
    goto L_8C041684;
    L_8C040892:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC50); }
    goto L_8C0415EC;
    L_8C0408A6:;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C040904;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC44); }
    t799 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t799) goto L_8C040904;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC44); }
    goto L_8C0415EC;
    L_8C040904:;
    if (((*(signed char *)(((R1308) + 0x12B))) == 0)) goto L_8C040938;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t807 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t807) goto L_8C040938;
    goto L_8C041C30;
    L_8C040938:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC50); }
    t810 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t810) goto L_8C04096A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC50); }
    goto L_8C0415EC;
    L_8C04096A:;
    if ((0.0f > (*(float *)(((R1312) + 0xBA4))))) goto L_8C040982;
    F3 = ((*(float *)(((R1312) + 0xBA4))));
    L_8C04098C:;
    u819 = *(float *)(((R1304) + 0x6C));
    F1 = (u819);
    if ((0.0f > u819)) goto L_8C0409A4;
    F2 = ((*(float *)(((R1304) + 0x6C))));
    L_8C0409AE:;
    if ((F3 > F2)) goto L_8C0409B6;
    goto L_8C041684;
    L_8C0409B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + (R1312))); }
    t830 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t830) goto L_8C0409E2;
    goto L_8C041684;
    L_8C0409E2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C0409A4:;
    F2 = ((-(*(float *)(((R1304) + 0x6C)))));
    goto L_8C0409AE;
    L_8C040982:;
    F3 = ((-(*(float *)(((R1312) + 0xBA4)))));
    goto L_8C04098C;
    L_8C0407CC:;
    t839 = R1312;
    R1 = (t839);
    if ((!(0.0f > ((*(float *)((t839 + 0xBA4))) - (*(float *)0x8C2FCC58))))) goto L_8C040810;
    R3 = (0xFFFFFFFF);
    goto L_8C040812;
    L_8C040810:;
    R3 = (0x0);
    goto L_8C040812;
    L_8C04079A:;
    if ((!(F3 > ((*(float *)((R3 + 0x8))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C0407B0;
    R2 = (0xFFFFFFFF);
    goto L_8C0407B2;
    L_8C0407B0:;
    R2 = (0x0);
    goto L_8C0407B2;
    L_8C04038C:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C0403A4;
    R2 = (0x1);
    L_8C0403BC:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xAF0)))) > 0.0f))) goto L_8C0403D4;
    R1 = (0x1);
    L_8C0403EE:;
    if ((R2 == R1)) goto L_8C0403F6;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4)))) > 0.0f))) goto L_8C0405B4;
    R2 = (0x1);
    L_8C0405D0:;
    if ((!(((*(float *)(((R1312) + 0xBA4))) - (*(float *)(((R1304) + 0x60)))) > 0.0f))) goto L_8C0405EC;
    R1 = (0x1);
    L_8C04060E:;
    if ((R2 != R1)) goto L_8C0406FC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t880 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t880) goto L_8C040646;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040646:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t886 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t886) goto L_8C040672;
    goto L_8C041C30;
    L_8C040672:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + (R1312))); }
    t891 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t891) goto L_8C0406B6;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C0406B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC44); }
    goto L_8C0415EC;
    L_8C0406FC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t899 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t899) goto L_8C040728;
    goto L_8C041C30;
    L_8C040728:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + (R1312))); }
    t904 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t904) goto L_8C04076C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C04076C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC44); }
    goto L_8C0415EC;
    L_8C0405EC:;
    if ((!(0.0f > ((*(float *)((0xBA4 + (R1312)))) - (*(float *)(((0x60 + (R1304)) + 0x0))))))) goto L_8C04060C;
    R1 = (0xFFFFFFFF);
    goto L_8C04060E;
    L_8C04060C:;
    R1 = (0x0);
    goto L_8C04060E;
    L_8C0405B4:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C0405CE;
    R2 = (0xFFFFFFFF);
    goto L_8C0405D0;
    L_8C0405CE:;
    R2 = (0x0);
    goto L_8C0405D0;
    L_8C0403F6:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C04040E;
    R3 = (0x1);
    L_8C040426:;
    R1 = (0x8C2FCC38);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C04043C;
    R2 = (0x1);
    L_8C040466:;
    if ((R3 != R2)) goto L_8C04049E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t936 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t936) goto L_8C04049E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C04049E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t940 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t940) goto L_8C0404DE;
    if (((*(signed char *)((0x12B + (R1308)))) != 2)) goto L_8C0404DE;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C0404DE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t949 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t949) goto L_8C040522;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C040522:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1304) + 0x58)); }
    t956 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t956) goto L_8C04054E;
    goto L_8C041C30;
    L_8C04054E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC44); }
    goto L_8C0415EC;
    L_8C04043C:;
    R1 = (0x8C2FCC38);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40))))) goto L_8C040464;
    R2 = (0xFFFFFFFF);
    goto L_8C040466;
    L_8C040464:;
    R2 = (0x0);
    goto L_8C040466;
    L_8C04040E:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C040424;
    R3 = (0xFFFFFFFF);
    goto L_8C040426;
    L_8C040424:;
    R3 = (0x0);
    goto L_8C040426;
    L_8C0403D4:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xAF0 + (R1312)))))))) goto L_8C0403EC;
    R1 = (0xFFFFFFFF);
    goto L_8C0403EE;
    L_8C0403EC:;
    R1 = (0x0);
    goto L_8C0403EE;
    L_8C0403A4:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C0403BA;
    R2 = (0xFFFFFFFF);
    goto L_8C0403BC;
    L_8C0403BA:;
    R2 = (0x0);
    goto L_8C0403BC;
    L_8C040368:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC4C))))) goto L_8C040382;
    R2 = (0xFFFFFFFF);
    goto L_8C040384;
    L_8C040382:;
    R2 = (0x0);
    goto L_8C040384;
    L_8C040310:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C040326;
    R3 = (0xFFFFFFFF);
    goto L_8C040328;
    L_8C040326:;
    R3 = (0x0);
    goto L_8C040328;
    L_8C03FEE2:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C03FF28;
    R2 = (0x1);
    L_8C03FF40:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xAF0)))) > 0.0f))) goto L_8C03FF58;
    R1 = (0x1);
    L_8C03FF72:;
    if ((R2 == R1)) goto L_8C03FF7A;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C0400DA;
    R3 = (0x1);
    L_8C0400F2:;
    R1 = (0x8C2FCC38);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C040108;
    R2 = (0x1);
    L_8C040146:;
    if ((R3 == R2)) goto L_8C04014E;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1021 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1021) goto L_8C0402E0;
    goto L_8C041C30;
    L_8C0402E0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C04014E:;
    u1027 = (*(float *)(((R1304) + 0x20)));
    u1027 = u1027 + 10.0f * (*(float *)(((R1312) + 0xB00)));
    F0 = (10.0f);
    F2 = (0.0f);
    if ((!(u1027 > 0.0f))) goto L_8C04016E;
    R2 = (0x1);
    L_8C04018A:;
    if ((!(((-((*(float *)(((R1312) + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C0401AC;
    R1 = (0x1);
    L_8C0401D2:;
    if ((R2 != R1)) goto L_8C04027A;
    R1 = (0x12B);
    if (((*(signed char *)((0x12B + (R1308)))) != 2)) goto L_8C04023C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t1044 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1044) goto L_8C04023C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C04023C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1049 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1049) goto L_8C040264;
    goto L_8C041C30;
    L_8C040264:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C04027A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1054 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1054) goto L_8C0402A2;
    goto L_8C041C30;
    L_8C0402A2:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C0401AC:;
    if ((!(0.0f > ((-((*(float *)((0xB00 + (R1312)))) * 10.0f)) - (*(float *)0x8C2FCC34))))) goto L_8C0401D0;
    R1 = (0xFFFFFFFF);
    goto L_8C0401D2;
    L_8C0401D0:;
    R1 = (0x0);
    goto L_8C0401D2;
    L_8C04016E:;
    u1066 = (*(float *)(((R1304) + 0x20)));
    u1066 = u1066 + F0 * (*(float *)(((R1312) + 0xB00)));
    if ((!(F2 > u1066))) goto L_8C040188;
    R2 = (0xFFFFFFFF);
    goto L_8C04018A;
    L_8C040188:;
    R2 = (0x0);
    goto L_8C04018A;
    L_8C040108:;
    R1 = (0x8C2FCC38);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40))))) goto L_8C040144;
    R2 = (0xFFFFFFFF);
    goto L_8C040146;
    L_8C040144:;
    R2 = (0x0);
    goto L_8C040146;
    L_8C0400DA:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C0400F0;
    R3 = (0xFFFFFFFF);
    goto L_8C0400F2;
    L_8C0400F0:;
    R3 = (0x0);
    goto L_8C0400F2;
    L_8C03FF7A:;
    u1086 = (*(float *)(((R1304) + 0x20)));
    u1086 = u1086 + 10.0f * (*(float *)(((R1312) + 0xB00)));
    F0 = (10.0f);
    F2 = (0.0f);
    if ((!(u1086 > 0.0f))) goto L_8C03FF9A;
    R3 = (0x1);
    L_8C03FFB6:;
    t1091 = R1312;
    R1 = (t1091);
    if ((!(((-((*(float *)((t1091 + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C03FFD8;
    R2 = (0x1);
    L_8C04000E:;
    if ((R3 != R2)) goto L_8C040084;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t1100 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1100) goto L_8C040046;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C040046:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1105 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1105) goto L_8C04006E;
    goto L_8C041C30;
    L_8C04006E:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C040084:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1110 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1110) goto L_8C0400AC;
    goto L_8C041C30;
    L_8C0400AC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03FFD8:;
    t1112 = R1312;
    R1 = (t1112);
    if ((!(0.0f > ((-((*(float *)((t1112 + 0xB00))) * 10.0f)) - (*(float *)0x8C2FCC34))))) goto L_8C04000C;
    R2 = (0xFFFFFFFF);
    goto L_8C04000E;
    L_8C04000C:;
    R2 = (0x0);
    goto L_8C04000E;
    L_8C03FF9A:;
    u1123 = (*(float *)(((R1304) + 0x20)));
    u1123 = u1123 + F0 * (*(float *)(((R1312) + 0xB00)));
    if ((!(F2 > u1123))) goto L_8C03FFB4;
    R3 = (0xFFFFFFFF);
    goto L_8C03FFB6;
    L_8C03FFB4:;
    R3 = (0x0);
    goto L_8C03FFB6;
    L_8C03FF58:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xAF0 + (R1312)))))))) goto L_8C03FF70;
    R1 = (0xFFFFFFFF);
    goto L_8C03FF72;
    L_8C03FF70:;
    R1 = (0x0);
    goto L_8C03FF72;
    L_8C03FF28:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C03FF3E;
    R2 = (0xFFFFFFFF);
    goto L_8C03FF40;
    L_8C03FF3E:;
    R2 = (0x0);
    goto L_8C03FF40;
    L_8C03FEBE:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC40))))) goto L_8C03FED8;
    R2 = (0xFFFFFFFF);
    goto L_8C03FEDA;
    L_8C03FED8:;
    R2 = (0x0);
    goto L_8C03FEDA;
    L_8C03FE8C:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((R1312) + 0xBA4))))))) goto L_8C03FEA2;
    R3 = (0xFFFFFFFF);
    goto L_8C03FEA4;
    L_8C03FEA2:;
    R3 = (0x0);
    goto L_8C03FEA4;
    L_8C03F974:;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C03F98C;
    R2 = (0x1);
    L_8C03F9A4:;
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)(((R1312) + 0xAF0)))) > 0.0f))) goto L_8C03F9BC;
    R1 = (0x1);
    L_8C03F9D6:;
    if ((R2 == R1)) goto L_8C03F9DE;
    F3 = (0.0f);
    if ((!(((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C03FB02;
    R3 = (0x1);
    L_8C03FB1A:;
    R1 = (0x8C2FCC2C);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC34)) > 0.0f))) goto L_8C03FB30;
    R2 = (0x1);
    L_8C03FB48:;
    if ((R3 != R2)) goto L_8C03FC26;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t1178 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1178) goto L_8C03FBA8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C03FBA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1182 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1182) goto L_8C03FBDC;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03FBDC:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t1188 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1188) goto L_8C03FC0A;
    goto L_8C041C30;
    L_8C03FC0A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C03FC26:;
    R2 = (0x8C2FCC2C);
    F3 = (0.0f);
    if ((!(((*(float *)0x8C2FCC34) - (*(float *)(((int)stk + 108)))) > 0.0f))) goto L_8C03FC3C;
    R3 = (0x1);
    L_8C03FC50:;
    R1 = (0x8C2FCC38);
    if ((!(((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40)) > 0.0f))) goto L_8C03FC66;
    R2 = (0x1);
    L_8C03FCAA:;
    if ((R3 == R2)) goto L_8C03FCB2;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1205 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1205) goto L_8C03FE28;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03FE28:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t1211 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1211) goto L_8C03FE56;
    goto L_8C041C30;
    L_8C03FE56:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C03FCB2:;
    t1215 = cpuDistXZ(((R1312) + 0xAE8), 0x8C2FCC2C);
    t1218 = !((cpuDistXZ(((R1312) + 0xAE8), 0x8C2FCC38)) > t1215);
    if (t1218) goto L_8C03FD46;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t1222 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1222) goto L_8C03FD0C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C03FD0C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1226 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1226) goto L_8C03FD30;
    goto L_8C041C30;
    L_8C03FD30:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03FD46:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1230 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1230) goto L_8C03FD7A;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03FD7A:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    t1236 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1236) goto L_8C03FDA8;
    goto L_8C041C30;
    L_8C03FDA8:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C03FC66:;
    R1 = (0x8C2FCC38);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC40))))) goto L_8C03FCA8;
    R2 = (0xFFFFFFFF);
    goto L_8C03FCAA;
    L_8C03FCA8:;
    R2 = (0x0);
    goto L_8C03FCAA;
    L_8C03FC3C:;
    if ((!(F3 > ((*(float *)((R2 + 0x8))) - (*(float *)(((int)stk + 108))))))) goto L_8C03FC4E;
    R3 = (0xFFFFFFFF);
    goto L_8C03FC50;
    L_8C03FC4E:;
    R3 = (0x0);
    goto L_8C03FC50;
    L_8C03FB30:;
    R1 = (0x8C2FCC2C);
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)0x8C2FCC34))))) goto L_8C03FB46;
    R2 = (0xFFFFFFFF);
    goto L_8C03FB48;
    L_8C03FB46:;
    R2 = (0x0);
    goto L_8C03FB48;
    L_8C03FB02:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C03FB18;
    R3 = (0xFFFFFFFF);
    goto L_8C03FB1A;
    L_8C03FB18:;
    R3 = (0x0);
    goto L_8C03FB1A;
    L_8C03F9DE:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((0xB9C + (R1312))); }
    t1266 = (cpuInFan((R1312), ((R1308) + 0xB8), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1266) goto L_8C03FA22;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((R1312) + 0xB9C)); }
    goto L_8C041C4A;
    L_8C03FA22:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((int)stk + 88)); }
    t1271 = (cpuInFan((R1312), (0x84 + ((int)stk + 76)), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1271) goto L_8C03FA7C;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(((int)stk + 88)); }
    goto L_8C041C4A;
    L_8C03FA7C:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC2C); }
    t1275 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) == 0;
    if (t1275) goto L_8C03FAB0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC2C); }
    goto L_8C0415EC;
    L_8C03FAB0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C2FCC38); }
    t1279 = (cpuInFan((R1312), (((int)stk + 76) + 0x24), *(Stk3 *)(((int)stk + 76)))) != 0;
    if (t1279) goto L_8C03FAD4;
    goto L_8C041C30;
    L_8C03FAD4:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((R1308) + 0xA0)) = *(struct mv3 *)(0x8C2FCC38); }
    goto L_8C0415EC;
    L_8C03F9BC:;
    if ((!(0.0f > ((*(float *)(((int)stk + 108))) - (*(float *)((0xAF0 + (R1312)))))))) goto L_8C03F9D4;
    R1 = (0xFFFFFFFF);
    goto L_8C03F9D6;
    L_8C03F9D4:;
    R1 = (0x0);
    goto L_8C03F9D6;
    L_8C03F98C:;
    if ((!(F3 > ((*(float *)(((R1304) + 0x20))) - (*(float *)(((int)stk + 108))))))) goto L_8C03F9A2;
    R2 = (0xFFFFFFFF);
    goto L_8C03F9A4;
    L_8C03F9A2:;
    R2 = (0x0);
    goto L_8C03F9A4;
    L_8C03F950:;
    if ((!(0.0f > ((*(float *)(((R1312) + 0xBA4))) - (*(float *)0x8C2FCC34))))) goto L_8C03F96A;
    R3 = (0xFFFFFFFF);
    goto L_8C03F96C;
    L_8C03F96A:;
    R3 = (0x0);
    goto L_8C03F96C;
    L_8C03F8D2:;
    if ((!(F3 > ((*(float *)((0x20 + (R1304)))) - (*(float *)(((0xBA4 + (R1312)) + 0x0))))))) goto L_8C03F8F0;
    R1 = (0xFFFFFFFF);
    goto L_8C03F8F2;
    L_8C03F8F0:;
    R1 = (0x0);
    goto L_8C03F8F2;
}

