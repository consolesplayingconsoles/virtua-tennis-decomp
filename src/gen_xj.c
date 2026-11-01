/* Straight-line functions with calls and guards (batch gen_xj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
float cpuLineXAtZ(Stk3, Stk3, float);
extern int cpuReachRange();
int cpuShotRange(int, int, int, int, int, float, float, float, float, float);
int cpuShotRangeFix(int, int, int, int, Stk3);
float cpuVecCos(Stk4);
int motionAdvance(int);
int motionChange(int, int, int, int, int, float, float);
int motionRootAtFrame(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int muneSlotLoad(int, int);
int muneSlotReset(int, int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlCloseEvent(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRand(void);
float nlRandom(void);
int nlTranslate(float, float, float);
int playerPut(int, int, int, int, float, float, float);
int sndSeDecide(void);
int uniformSlotLoad(int, int, int, int, int, int);
int uniformSlotReset(int, int);
int unlockCountW0(void);
Stk3 vecMake(float, float, float);
int FUN_8c070872(int a4, int a5);
float FUN_8c0486e4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8);
int FUN_8c0a8cec(int a4, float f4, float f5);
float FUN_8c04a0a0(int a4, float f4, float f5, float f6, float f7, float f8);

int FUN_8c070872(int a4, int a5)
{
    int stk[24];
    register int t0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u6;
    register float u7;
    register float u12;
    register float u17;
    register float u18;
    register float u20;
    register float u26;
    register float u27;
    register float u28;
    register float t29;
    register float u34;
    register float u35;
    register float u36;
    register float u42;
    register float u43;
    register float u44;
    register int t58;
    register float t54;
    register float u63;
    register float u64;
    register float u71;
    register float u72;
    register float u79;
    register float u80;
    register float u87;
    register float u88;
    register float u95;
    register float u96;
    register float u102;
    register float u103;
    register float u105;
    register float u112;
    register float u113;
    register float u114;
    register float t115;
    register float u120;
    register float u121;
    register float u122;
    register float u128;
    register float u129;
    register float u130;
    register int t144;
    register float t140;
    register float u152;
    register float u153;
    register float u156;
    register float u158;
    register float u160;
    register float u163;
    register float u161;
    register float u174;
    register float u183;
    register float u185;
    register float u188;
    register float u195;
    register float u201;
    register float u208;
    register float u223;
    register float u224;
    register float u231;
    register float u232;
    register float u247;
    register float u250;
    register float u248;
    register float u257;
    register int t264;
    register int t269;
    register float u272;
    register float u281;
    register float u283;
    register float u286;
    register float u292;
    register float u307;
    register float u308;
    register float u315;
    register float u316;
    register float u337;
    register float u340;
    register float u338;
    register float u347;
    register int t354;
    register int t359;
    register float u362;
    register float u371;
    register float u373;
    register float u376;
    register float u382;
    register float u397;
    register float u398;
    register float u405;
    register float u406;
    register float u439;
    register float u441;
    register float u444;
    register float u451;
    register float u458;
    register float u465;
    register float u471;
    register float u472;
    register float u474;
    register float u480;
    register float u481;
    register float u482;
    register float t483;
    register float u488;
    register float u489;
    register float u490;
    register float u496;
    register float u497;
    register float u498;
    register int t512;
    register float t508;
    register float u517;
    register float u518;
    register float u525;
    register float u526;
    register float u533;
    register float u534;
    register float u541;
    register float u542;
    register float u549;
    register float u550;
    register float u556;
    register float u557;
    register float u559;
    register float u566;
    register float u567;
    register float u568;
    register float t569;
    register float u574;
    register float u575;
    register float u576;
    register float u582;
    register float u583;
    register float u584;
    register int t598;
    register float t594;
    register float u606;
    register float u607;
    register float u610;
    register float u612;
    register float u614;
    register float u617;
    register float u615;
    register float u628;
    register float u637;
    register float u639;
    register float u642;
    register float u649;
    register float u655;
    register float u662;
    register float u677;
    register float u678;
    register float u685;
    register float u686;
    register float u701;
    register float u704;
    register float u702;
    register float u711;
    register int t718;
    register int t723;
    register float u726;
    register float u735;
    register float u737;
    register float u740;
    register float u746;
    register float u761;
    register float u762;
    register float u769;
    register float u770;
    register float u791;
    register float u794;
    register float u792;
    register float u801;
    register int t808;
    register int t813;
    register float u816;
    register float u825;
    register float u827;
    register float u830;
    register float u836;
    register float u851;
    register float u852;
    register float u859;
    register float u860;
    register float u899;
    register float u900;
    register float u902;
    register float u908;
    register float u909;
    register float u910;
    register float t911;
    register float u916;
    register float u917;
    register float u918;
    register float u924;
    register float u925;
    register float u926;
    register int t940;
    register float t936;
    register float u945;
    register float u946;
    register float u953;
    register float u954;
    register float u961;
    register float u962;
    register float u969;
    register float u970;
    register float u977;
    register float u978;
    register float u984;
    register float u985;
    register float u987;
    register float u994;
    register float u995;
    register float u996;
    register float t997;
    register float u1002;
    register float u1003;
    register float u1004;
    register float u1010;
    register float u1011;
    register float u1012;
    register int t1026;
    register float t1022;
    register float u1034;
    register float u1035;
    register float u1038;
    register float u1040;
    register float u1042;
    register float u1045;
    register float u1043;
    register float u1056;
    register float u1065;
    register float u1067;
    register float u1070;
    register float u1077;
    register float u1083;
    register float u1090;
    register float u1105;
    register float u1106;
    register float u1113;
    register float u1114;
    register float u1129;
    register float u1132;
    register float u1130;
    register float u1139;
    register int t1146;
    register int t1151;
    register float u1154;
    register float u1163;
    register float u1165;
    register float u1168;
    register float u1174;
    register float u1189;
    register float u1190;
    register float u1197;
    register float u1198;
    register float u1219;
    register float u1222;
    register float u1220;
    register float u1229;
    register int t1236;
    register int t1241;
    register float u1244;
    register float u1253;
    register float u1255;
    register float u1258;
    register float u1264;
    register float u1279;
    register float u1280;
    register float u1287;
    register float u1288;
    register float t1333;
    register float u1334;
    register float u1335;
    register float u1340;
    register float u1345;
    register float u1346;
    register float u1348;
    register float u1354;
    register float u1355;
    register float u1356;
    register float t1357;
    register float u1362;
    register float u1363;
    register float u1364;
    register float u1370;
    register float u1371;
    register float u1372;
    register int t1386;
    register float t1382;
    register float u1391;
    register float u1392;
    register float u1399;
    register float u1400;
    register float u1407;
    register float u1408;
    register float u1415;
    register float u1416;
    register float u1423;
    register float u1424;
    register float u1430;
    register float u1431;
    register float u1433;
    register float u1440;
    register float u1441;
    register float u1442;
    register float t1443;
    register float u1448;
    register float u1449;
    register float u1450;
    register float u1456;
    register float u1457;
    register float u1458;
    register int t1472;
    register float t1468;
    register float u1480;
    register float u1481;
    register float u1484;
    register float u1486;
    register float u1488;
    register float u1491;
    register float u1489;
    register float u1502;
    register float u1511;
    register float u1513;
    register float u1516;
    register float u1523;
    register float u1529;
    register float u1536;
    register float u1551;
    register float u1552;
    register float u1559;
    register float u1560;
    register float u1575;
    register float u1578;
    register float u1576;
    register float u1585;
    register int t1592;
    register int t1597;
    register float u1600;
    register float u1609;
    register float u1611;
    register float u1614;
    register float u1620;
    register float u1635;
    register float u1636;
    register float u1643;
    register float u1644;
    register float u1665;
    register float u1668;
    register float u1666;
    register float u1675;
    register int t1682;
    register int t1687;
    register float u1690;
    register float u1699;
    register float u1701;
    register float u1704;
    register float u1710;
    register float u1725;
    register float u1726;
    register float u1733;
    register float u1734;
    register float u1767;
    register float u1769;
    register float u1772;
    register float u1779;
    register float u1786;
    register float u1793;
    register float u1799;
    register float u1800;
    register float u1802;
    register float u1808;
    register float u1809;
    register float u1810;
    register float t1811;
    register float u1816;
    register float u1817;
    register float u1818;
    register float u1824;
    register float u1825;
    register float u1826;
    register int t1840;
    register float t1836;
    register float u1845;
    register float u1846;
    register float u1853;
    register float u1854;
    register float u1861;
    register float u1862;
    register float u1869;
    register float u1870;
    register float u1877;
    register float u1878;
    register float u1884;
    register float u1885;
    register float u1887;
    register float u1894;
    register float u1895;
    register float u1896;
    register float t1897;
    register float u1902;
    register float u1903;
    register float u1904;
    register float u1910;
    register float u1911;
    register float u1912;
    register int t1926;
    register float t1922;
    register float u1934;
    register float u1935;
    register float u1938;
    register float u1940;
    register float u1942;
    register float u1945;
    register float u1943;
    register float u1956;
    register float u1965;
    register float u1967;
    register float u1970;
    register float u1977;
    register float u1983;
    register float u1990;
    register float u2005;
    register float u2006;
    register float u2013;
    register float u2014;
    register float u2029;
    register float u2032;
    register float u2030;
    register float u2039;
    register int t2046;
    register int t2051;
    register float u2054;
    register float u2063;
    register float u2065;
    register float u2068;
    register float u2074;
    register float u2089;
    register float u2090;
    register float u2097;
    register float u2098;
    register float u2119;
    register float u2122;
    register float u2120;
    register float u2129;
    register int t2136;
    register int t2141;
    register float u2144;
    register float u2153;
    register float u2155;
    register float u2158;
    register float u2164;
    register float u2179;
    register float u2180;
    register float u2187;
    register float u2188;
    register float u2227;
    register float u2228;
    register float u2230;
    register float u2236;
    register float u2237;
    register float u2238;
    register float t2239;
    register float u2244;
    register float u2245;
    register float u2246;
    register float u2252;
    register float u2253;
    register float u2254;
    register int t2268;
    register float t2264;
    register float u2273;
    register float u2274;
    register float u2281;
    register float u2282;
    register float u2289;
    register float u2290;
    register float u2297;
    register float u2298;
    register float u2305;
    register float u2306;
    register float u2312;
    register float u2313;
    register float u2315;
    register float u2322;
    register float u2323;
    register float u2324;
    register float t2325;
    register float u2330;
    register float u2331;
    register float u2332;
    register float u2338;
    register float u2339;
    register float u2340;
    register int t2354;
    register float t2350;
    register float u2362;
    register float u2363;
    register float u2366;
    register float u2368;
    register float u2370;
    register float u2373;
    register float u2371;
    register float u2384;
    register float u2393;
    register float u2395;
    register float u2398;
    register float u2405;
    register float u2411;
    register float u2418;
    register float u2433;
    register float u2434;
    register float u2441;
    register float u2442;
    register float u2457;
    register float u2460;
    register float u2458;
    register float u2467;
    register int t2474;
    register int t2479;
    register float u2482;
    register float u2491;
    register float u2493;
    register float u2496;
    register float u2502;
    register float u2517;
    register float u2518;
    register float u2525;
    register float u2526;
    register float u2547;
    register float u2550;
    register float u2548;
    register float u2557;
    register int t2564;
    register int t2569;
    register float u2572;
    register float u2581;
    register float u2583;
    register float u2586;
    register float u2592;
    register float u2607;
    register float u2608;
    register float u2615;
    register float u2616;
    register float u2661;
    register float u2662;
    register float u2664;
    register int t2716;
    register int t2707;
    register float u2673;
    register float u2674;
    register int t2679;
    register int t2677;
    register float u2683;
    register float u2684;
    register int t2689;
    register int t2687;
    register float u2693;
    register float u2694;
    register int t2699;
    register int t2697;
    register float u2728;
    register float u2729;
    register float u2730;
    register float t2731;
    register float u2736;
    register float u2737;
    register float u2738;
    register float u2744;
    register float u2745;
    register float u2746;
    register int t2760;
    register float t2756;
    register float u2764;
    register float u2766;
    register int t2775;
    register int t1328;
    register int t434;
    register float u47;
    register int t428;
    register float u133;
    register int t423;
    register int t333;
    register int t243;
    register float u218;
    register int t219;
    register int t328;
    register int t323;
    register float u302;
    register int t303;
    register int t418;
    register int t413;
    register float u392;
    register int t393;
    register int t1322;
    register int t894;
    register int t888;
    register float u501;
    register int t882;
    register float u587;
    register int t877;
    register int t787;
    register int t697;
    register float u672;
    register int t673;
    register int t782;
    register int t777;
    register float u756;
    register int t757;
    register int t872;
    register int t867;
    register float u846;
    register int t847;
    register int t1316;
    register float u929;
    register int t1310;
    register float u1015;
    register int t1305;
    register int t1215;
    register int t1125;
    register float u1100;
    register int t1101;
    register int t1210;
    register int t1205;
    register float u1184;
    register int t1185;
    register int t1300;
    register int t1295;
    register float u1274;
    register int t1275;
    register int t2769;
    register int t2656;
    register int t1762;
    register float u1375;
    register int t1756;
    register float u1461;
    register int t1751;
    register int t1661;
    register int t1571;
    register float u1546;
    register int t1547;
    register int t1656;
    register int t1651;
    register float u1630;
    register int t1631;
    register int t1746;
    register int t1741;
    register float u1720;
    register int t1721;
    register int t2650;
    register int t2222;
    register int t2216;
    register float u1829;
    register int t2210;
    register float u1915;
    register int t2205;
    register int t2115;
    register int t2025;
    register float u2000;
    register int t2001;
    register int t2110;
    register int t2105;
    register float u2084;
    register int t2085;
    register int t2200;
    register int t2195;
    register float u2174;
    register int t2175;
    register int t2644;
    register float u2257;
    register int t2638;
    register float u2343;
    register int t2633;
    register int t2543;
    register int t2453;
    register float u2428;
    register int t2429;
    register int t2538;
    register int t2533;
    register float u2512;
    register int t2513;
    register int t2628;
    register int t2623;
    register float u2602;
    register int t2603;
    register float u2671;
    register float u2749;

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u2 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
    u3 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u4 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    *(float *)(((int)stk + 32)) = ((u3 + u4) * 0.5f);
    if (((*(int *)((a4 + 0xB60))) & 4) == 0) {
        u6 = *(float *)((a4 + 0xB9C));
        u7 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        u12 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
        if ((((u6 - u7) > 0.0f) - (0.0f > (u6 - u7))) != (((u6 - u12) > 0.0f) - (0.0f > (u6 - u12)))) {
            u17 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u18 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u20 = ((-u17) + u18);
            if (!(0.0f > (u17 - u18))) {
                u20 = (u17 - u18);
            }
            if (!(20.0f > u20)) {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u26 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u27 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u28 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u27 - u28), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u26));
                t29 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                if (!(0.0f > t29)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u34 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u35 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u36 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u35 - u36), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u34));
                    u47 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                } else {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u42 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u43 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u44 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u43 - u44), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u42));
                    u47 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                }
                t58 = a5;
                if (0.707099974f > u47) {
                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                    t54 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(a5, 0x1, t54, (*(float *)(((int)stk + 28))));
                    t58 = (a5 + 0x1);
                }
                u63 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u64 = *(float *)((a4 + 0xAE8));
                cpuAimPointSet(t58, 0x1, ((float)(((u63 - u64) > 0.0f) - (0.0f > (u63 - u64))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u71 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u72 = *(float *)((a4 + 0xAE8));
                cpuAimPointSet((t58 + 0x1), 0x1, ((float)(((u71 - u72) > 0.0f) - (0.0f > (u71 - u72))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u79 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u80 = *(float *)((a4 + 0xAE8));
                cpuAimPointSet(((t58 + 0x1) + 0x1), 0x1, ((float)(((u79 - u80) > 0.0f) - (0.0f > (u79 - u80))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u87 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u88 = *(float *)((a4 + 0xAE8));
                cpuAimPointSet((((t58 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u87 - u88) > 0.0f) - (0.0f > (u87 - u88)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                u95 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u96 = *(float *)((a4 + 0xAE8));
                cpuAimPointSet(((((t58 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u95 - u96) > 0.0f) - (0.0f > (u95 - u96)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                t434 = (((((t58 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
            } else {
                u102 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u103 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u105 = ((-u102) + u103);
                if (!(0.0f > (u102 - u103))) {
                    u105 = (u102 - u103);
                }
                if (!(20.0f > u105)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u112 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u113 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u114 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u113 - u114), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u112));
                    t115 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                    if (!(0.0f > t115)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u120 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u121 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u122 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u121 - u122), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u120));
                        u133 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                    } else {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u128 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u129 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u130 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u129 - u130), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u128));
                        u133 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                    }
                    t144 = a5;
                    if (0.707099974f > u133) {
                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                        t140 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(a5, 0x1, t140, (*(float *)(((int)stk + 28))));
                        t144 = (a5 + 0x1);
                    }
                    cpuAimPointSet(t144, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    cpuAimPointSet((t144 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t428 = ((t144 + 0x1) + 0x1);
                } else {
                    u152 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u153 = (-u152);
                    if (!(0.0f > u152)) {
                        u153 = u152;
                    }
                    if (!(47.5400009f > u153)) {
                        u156 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u158 = (-u156);
                        if (!(0.0f > u156)) {
                            u158 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                        }
                        if (!(47.5400009f > u158)) {
                            u160 = *(float *)((a4 + 0xB9C));
                            u163 = (((u1 + u2) * 0.5f) - u160);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u160))) {
                            } else {
                                u161 = ((u1 + u2) * 0.5f);
                                u161 = -u161;
                                u163 = (u161 + u160);
                            }
                            if (15.0f > u163) {
                                cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t243 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                            } else {
                                u174 = *(float *)((a4 + 0xB9C));
                                if (((u174 > 0.0f) - (0.0f > u174)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u183 = *(float *)((a4 + 0xB9C));
                                    u185 = ((-u183) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u183 - ((u1 + u2) * 0.5f)))) {
                                        u185 = (u183 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u185 > 30.0f) {
                                        u188 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)((u188 > 0.0f) - (0.0f > u188)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u195 = *(float *)((a4 + 0xB9C));
                                        u218 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t219 = ((u195 > 0.0f) - (0.0f > u195));
                                    } else {
                                        u201 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(a5, 0x1, ((float)((u201 > 0.0f) - (0.0f > u201)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        u208 = *(float *)((a4 + 0xB9C));
                                        u218 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t219 = (-((u208 > 0.0f) - (0.0f > u208)));
                                    }
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t219 * 54.8499985f), u218);
                                } else {
                                    u223 = *(float *)((a4 + 0xB9C));
                                    u224 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(a5, 0x1, ((float)(((u224 - u223) > 0.0f) - (0.0f > (u224 - u223))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u231 = *(float *)((a4 + 0xB9C));
                                    u232 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u232 - u231) > 0.0f) - (0.0f > (u232 - u231))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                }
                                t243 = ((a5 + 0x1) + 0x1);
                            }
                            t333 = t243;
                        } else {
                            u247 = *(float *)((a4 + 0xB9C));
                            u250 = (((u1 + u2) * 0.5f) - u247);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u247))) {
                            } else {
                                u248 = ((u1 + u2) * 0.5f);
                                u248 = -u248;
                                u250 = (u248 + u247);
                            }
                            if (15.0f > u250) {
                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u257 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u257 > 0.0f) - (0.0f > u257)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t328 = (((a5 + 0x1) + 0x1) + 0x1);
                            } else {
                                t264 = (int)((int)(nlRand()) % (int)0x5);
                                t269 = a5;
                                if (t264 == 0) {
                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t269 = (a5 + 0x1);
                                }
                                u272 = *(float *)((a4 + 0xB9C));
                                if (((u272 > 0.0f) - (0.0f > u272)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u281 = *(float *)((a4 + 0xB9C));
                                    u283 = ((-u281) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u281 - ((u1 + u2) * 0.5f)))) {
                                        u283 = (u281 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u283 > 30.0f) {
                                        u286 = *(float *)((a4 + 0xB9C));
                                        u302 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t303 = ((u286 > 0.0f) - (0.0f > u286));
                                    } else {
                                        u292 = *(float *)((a4 + 0xB9C));
                                        u302 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t303 = ((u292 > 0.0f) - (0.0f > u292));
                                    }
                                    cpuAimPointSet(t269, 0x1, ((float)t303 * 54.8499985f), u302);
                                    t323 = (t269 + 0x1);
                                } else {
                                    u307 = *(float *)((a4 + 0xB9C));
                                    u308 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(t269, 0x1, ((float)(((u308 - u307) > 0.0f) - (0.0f > (u308 - u307))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u315 = *(float *)((a4 + 0xB9C));
                                    u316 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((t269 + 0x1), 0x1, ((float)(((u316 - u315) > 0.0f) - (0.0f > (u316 - u315))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t323 = ((t269 + 0x1) + 0x1);
                                }
                                t328 = t323;
                            }
                            t333 = t328;
                        }
                        t423 = t333;
                    } else {
                        u337 = *(float *)((a4 + 0xB9C));
                        u340 = (((u1 + u2) * 0.5f) - u337);
                        if (!(0.0f > (((u1 + u2) * 0.5f) - u337))) {
                        } else {
                            u338 = ((u1 + u2) * 0.5f);
                            u338 = -u338;
                            u340 = (u338 + u337);
                        }
                        if (15.0f > u340) {
                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            u347 = *(float *)((a4 + 0xB9C));
                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u347 > 0.0f) - (0.0f > u347)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            t418 = (((a5 + 0x1) + 0x1) + 0x1);
                        } else {
                            t354 = (int)((int)(nlRand()) % (int)0x5);
                            t359 = a5;
                            if (t354 == 0) {
                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t359 = (a5 + 0x1);
                            }
                            u362 = *(float *)((a4 + 0xB9C));
                            if (((u362 > 0.0f) - (0.0f > u362)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                u371 = *(float *)((a4 + 0xB9C));
                                u373 = ((-u371) + ((u1 + u2) * 0.5f));
                                if (!(0.0f > (u371 - ((u1 + u2) * 0.5f)))) {
                                    u373 = (u371 - ((u1 + u2) * 0.5f));
                                }
                                if (u373 > 30.0f) {
                                    u376 = *(float *)((a4 + 0xB9C));
                                    u392 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    t393 = ((u376 > 0.0f) - (0.0f > u376));
                                } else {
                                    u382 = *(float *)((a4 + 0xB9C));
                                    u392 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                    t393 = ((u382 > 0.0f) - (0.0f > u382));
                                }
                                cpuAimPointSet(t359, 0x1, ((float)t393 * 54.8499985f), u392);
                                t413 = (t359 + 0x1);
                            } else {
                                u397 = *(float *)((a4 + 0xB9C));
                                u398 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                cpuAimPointSet(t359, 0x1, ((float)(((u398 - u397) > 0.0f) - (0.0f > (u398 - u397))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u405 = *(float *)((a4 + 0xB9C));
                                u406 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                cpuAimPointSet((t359 + 0x1), 0x1, ((float)(((u406 - u405) > 0.0f) - (0.0f > (u406 - u405))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t413 = ((t359 + 0x1) + 0x1);
                            }
                            t418 = t413;
                        }
                        t423 = t418;
                    }
                    t428 = t423;
                }
                t434 = t428;
            }
            t1328 = t434;
        } else {
            u439 = ((-u6) + u7);
            if (!(0.0f > (u6 - u7))) {
                u439 = (u6 - u7);
            }
            if (u439 > 20.0f) {
                u441 = ((-u6) + u12);
                if (!(0.0f > (u6 - u12))) {
                    u441 = (u6 - u12);
                }
                if (u441 > 20.0f) {
                    u444 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(a5, 0x1, ((float)((u444 > 0.0f) - (0.0f > u444)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u451 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u451 > 0.0f) - (0.0f > u451)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u458 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u458 > 0.0f) - (0.0f > u458)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    u465 = *(float *)((a4 + 0xB9C));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u465 > 0.0f) - (0.0f > u465)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t894 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                } else {
                    u471 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u472 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u474 = ((-u471) + u472);
                    if (!(0.0f > (u471 - u472))) {
                        u474 = (u471 - u472);
                    }
                    if (!(20.0f > u474)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u480 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u481 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u482 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u481 - u482), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u480));
                        t483 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t483)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u488 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u489 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u490 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u489 - u490), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u488));
                            u501 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u496 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u497 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u498 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u497 - u498), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u496));
                            u501 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t512 = a5;
                        if (0.707099974f > u501) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t508 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t508, (*(float *)(((int)stk + 28))));
                            t512 = (a5 + 0x1);
                        }
                        u517 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u518 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(t512, 0x1, ((float)(((u517 - u518) > 0.0f) - (0.0f > (u517 - u518))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u525 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u526 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet((t512 + 0x1), 0x1, ((float)(((u525 - u526) > 0.0f) - (0.0f > (u525 - u526))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u533 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u534 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(((t512 + 0x1) + 0x1), 0x1, ((float)(((u533 - u534) > 0.0f) - (0.0f > (u533 - u534))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u541 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u542 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet((((t512 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u541 - u542) > 0.0f) - (0.0f > (u541 - u542)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u549 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u550 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(((((t512 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u549 - u550) > 0.0f) - (0.0f > (u549 - u550)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t888 = (((((t512 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u556 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u557 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u559 = ((-u556) + u557);
                        if (!(0.0f > (u556 - u557))) {
                            u559 = (u556 - u557);
                        }
                        if (!(20.0f > u559)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u566 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u567 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u568 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u567 - u568), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u566));
                            t569 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t569)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u574 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u575 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u576 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u575 - u576), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u574));
                                u587 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u582 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u583 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u584 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u583 - u584), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u582));
                                u587 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t598 = a5;
                            if (0.707099974f > u587) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t594 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t594, (*(float *)(((int)stk + 28))));
                                t598 = (a5 + 0x1);
                            }
                            cpuAimPointSet(t598, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((t598 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t882 = ((t598 + 0x1) + 0x1);
                        } else {
                            u606 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u607 = (-u606);
                            if (!(0.0f > u606)) {
                                u607 = u606;
                            }
                            if (!(47.5400009f > u607)) {
                                u610 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u612 = (-u610);
                                if (!(0.0f > u610)) {
                                    u612 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                }
                                if (!(47.5400009f > u612)) {
                                    u614 = *(float *)((a4 + 0xB9C));
                                    u617 = (((u1 + u2) * 0.5f) - u614);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u614))) {
                                    } else {
                                        u615 = ((u1 + u2) * 0.5f);
                                        u615 = -u615;
                                        u617 = (u615 + u614);
                                    }
                                    if (15.0f > u617) {
                                        cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t697 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                    } else {
                                        u628 = *(float *)((a4 + 0xB9C));
                                        if (((u628 > 0.0f) - (0.0f > u628)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u637 = *(float *)((a4 + 0xB9C));
                                            u639 = ((-u637) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u637 - ((u1 + u2) * 0.5f)))) {
                                                u639 = (u637 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u639 > 30.0f) {
                                                u642 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u642 > 0.0f) - (0.0f > u642)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u649 = *(float *)((a4 + 0xB9C));
                                                u672 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t673 = ((u649 > 0.0f) - (0.0f > u649));
                                            } else {
                                                u655 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u655 > 0.0f) - (0.0f > u655)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                u662 = *(float *)((a4 + 0xB9C));
                                                u672 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t673 = (-((u662 > 0.0f) - (0.0f > u662)));
                                            }
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t673 * 54.8499985f), u672);
                                        } else {
                                            u677 = *(float *)((a4 + 0xB9C));
                                            u678 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(a5, 0x1, ((float)(((u678 - u677) > 0.0f) - (0.0f > (u678 - u677))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u685 = *(float *)((a4 + 0xB9C));
                                            u686 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u686 - u685) > 0.0f) - (0.0f > (u686 - u685))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        }
                                        t697 = ((a5 + 0x1) + 0x1);
                                    }
                                    t787 = t697;
                                } else {
                                    u701 = *(float *)((a4 + 0xB9C));
                                    u704 = (((u1 + u2) * 0.5f) - u701);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u701))) {
                                    } else {
                                        u702 = ((u1 + u2) * 0.5f);
                                        u702 = -u702;
                                        u704 = (u702 + u701);
                                    }
                                    if (15.0f > u704) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u711 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u711 > 0.0f) - (0.0f > u711)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t782 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t718 = (int)((int)(nlRand()) % (int)0x5);
                                        t723 = a5;
                                        if (t718 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t723 = (a5 + 0x1);
                                        }
                                        u726 = *(float *)((a4 + 0xB9C));
                                        if (((u726 > 0.0f) - (0.0f > u726)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u735 = *(float *)((a4 + 0xB9C));
                                            u737 = ((-u735) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u735 - ((u1 + u2) * 0.5f)))) {
                                                u737 = (u735 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u737 > 30.0f) {
                                                u740 = *(float *)((a4 + 0xB9C));
                                                u756 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t757 = ((u740 > 0.0f) - (0.0f > u740));
                                            } else {
                                                u746 = *(float *)((a4 + 0xB9C));
                                                u756 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t757 = ((u746 > 0.0f) - (0.0f > u746));
                                            }
                                            cpuAimPointSet(t723, 0x1, ((float)t757 * 54.8499985f), u756);
                                            t777 = (t723 + 0x1);
                                        } else {
                                            u761 = *(float *)((a4 + 0xB9C));
                                            u762 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t723, 0x1, ((float)(((u762 - u761) > 0.0f) - (0.0f > (u762 - u761))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u769 = *(float *)((a4 + 0xB9C));
                                            u770 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t723 + 0x1), 0x1, ((float)(((u770 - u769) > 0.0f) - (0.0f > (u770 - u769))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t777 = ((t723 + 0x1) + 0x1);
                                        }
                                        t782 = t777;
                                    }
                                    t787 = t782;
                                }
                                t877 = t787;
                            } else {
                                u791 = *(float *)((a4 + 0xB9C));
                                u794 = (((u1 + u2) * 0.5f) - u791);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u791))) {
                                } else {
                                    u792 = ((u1 + u2) * 0.5f);
                                    u792 = -u792;
                                    u794 = (u792 + u791);
                                }
                                if (15.0f > u794) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u801 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u801 > 0.0f) - (0.0f > u801)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t872 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t808 = (int)((int)(nlRand()) % (int)0x5);
                                    t813 = a5;
                                    if (t808 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t813 = (a5 + 0x1);
                                    }
                                    u816 = *(float *)((a4 + 0xB9C));
                                    if (((u816 > 0.0f) - (0.0f > u816)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u825 = *(float *)((a4 + 0xB9C));
                                        u827 = ((-u825) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u825 - ((u1 + u2) * 0.5f)))) {
                                            u827 = (u825 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u827 > 30.0f) {
                                            u830 = *(float *)((a4 + 0xB9C));
                                            u846 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t847 = ((u830 > 0.0f) - (0.0f > u830));
                                        } else {
                                            u836 = *(float *)((a4 + 0xB9C));
                                            u846 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t847 = ((u836 > 0.0f) - (0.0f > u836));
                                        }
                                        cpuAimPointSet(t813, 0x1, ((float)t847 * 54.8499985f), u846);
                                        t867 = (t813 + 0x1);
                                    } else {
                                        u851 = *(float *)((a4 + 0xB9C));
                                        u852 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t813, 0x1, ((float)(((u852 - u851) > 0.0f) - (0.0f > (u852 - u851))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u859 = *(float *)((a4 + 0xB9C));
                                        u860 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t813 + 0x1), 0x1, ((float)(((u860 - u859) > 0.0f) - (0.0f > (u860 - u859))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t867 = ((t813 + 0x1) + 0x1);
                                    }
                                    t872 = t867;
                                }
                                t877 = t872;
                            }
                            t882 = t877;
                        }
                        t888 = t882;
                    }
                    t894 = t888;
                }
                t1322 = t894;
            } else {
                u899 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u900 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u902 = ((-u899) + u900);
                if (!(0.0f > (u899 - u900))) {
                    u902 = (u899 - u900);
                }
                if (!(20.0f > u902)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u908 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u909 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u910 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u909 - u910), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u908));
                    t911 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                    if (!(0.0f > t911)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u916 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u917 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u918 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u917 - u918), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u916));
                        u929 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                    } else {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u924 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u925 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u926 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u925 - u926), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u924));
                        u929 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                    }
                    t940 = a5;
                    if (0.707099974f > u929) {
                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                        t936 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(a5, 0x1, t936, (*(float *)(((int)stk + 28))));
                        t940 = (a5 + 0x1);
                    }
                    u945 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u946 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(t940, 0x1, ((float)(((u945 - u946) > 0.0f) - (0.0f > (u945 - u946))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u953 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u954 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet((t940 + 0x1), 0x1, ((float)(((u953 - u954) > 0.0f) - (0.0f > (u953 - u954))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u961 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u962 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(((t940 + 0x1) + 0x1), 0x1, ((float)(((u961 - u962) > 0.0f) - (0.0f > (u961 - u962))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u969 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u970 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet((((t940 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u969 - u970) > 0.0f) - (0.0f > (u969 - u970)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u977 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u978 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(((((t940 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u977 - u978) > 0.0f) - (0.0f > (u977 - u978)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t1316 = (((((t940 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                } else {
                    u984 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u985 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u987 = ((-u984) + u985);
                    if (!(0.0f > (u984 - u985))) {
                        u987 = (u984 - u985);
                    }
                    if (!(20.0f > u987)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u994 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u995 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u996 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u995 - u996), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u994));
                        t997 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t997)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1002 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1003 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1004 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1003 - u1004), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1002));
                            u1015 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1010 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1011 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1012 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1011 - u1012), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1010));
                            u1015 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t1026 = a5;
                        if (0.707099974f > u1015) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t1022 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t1022, (*(float *)(((int)stk + 28))));
                            t1026 = (a5 + 0x1);
                        }
                        cpuAimPointSet(t1026, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((t1026 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t1310 = ((t1026 + 0x1) + 0x1);
                    } else {
                        u1034 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1035 = (-u1034);
                        if (!(0.0f > u1034)) {
                            u1035 = u1034;
                        }
                        if (!(47.5400009f > u1035)) {
                            u1038 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1040 = (-u1038);
                            if (!(0.0f > u1038)) {
                                u1040 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                            }
                            if (!(47.5400009f > u1040)) {
                                u1042 = *(float *)((a4 + 0xB9C));
                                u1045 = (((u1 + u2) * 0.5f) - u1042);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u1042))) {
                                } else {
                                    u1043 = ((u1 + u2) * 0.5f);
                                    u1043 = -u1043;
                                    u1045 = (u1043 + u1042);
                                }
                                if (15.0f > u1045) {
                                    cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1125 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                } else {
                                    u1056 = *(float *)((a4 + 0xB9C));
                                    if (((u1056 > 0.0f) - (0.0f > u1056)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u1065 = *(float *)((a4 + 0xB9C));
                                        u1067 = ((-u1065) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u1065 - ((u1 + u2) * 0.5f)))) {
                                            u1067 = (u1065 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u1067 > 30.0f) {
                                            u1070 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u1070 > 0.0f) - (0.0f > u1070)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u1077 = *(float *)((a4 + 0xB9C));
                                            u1100 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t1101 = ((u1077 > 0.0f) - (0.0f > u1077));
                                        } else {
                                            u1083 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u1083 > 0.0f) - (0.0f > u1083)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            u1090 = *(float *)((a4 + 0xB9C));
                                            u1100 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t1101 = (-((u1090 > 0.0f) - (0.0f > u1090)));
                                        }
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t1101 * 54.8499985f), u1100);
                                    } else {
                                        u1105 = *(float *)((a4 + 0xB9C));
                                        u1106 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(a5, 0x1, ((float)(((u1106 - u1105) > 0.0f) - (0.0f > (u1106 - u1105))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u1113 = *(float *)((a4 + 0xB9C));
                                        u1114 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u1114 - u1113) > 0.0f) - (0.0f > (u1114 - u1113))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    }
                                    t1125 = ((a5 + 0x1) + 0x1);
                                }
                                t1215 = t1125;
                            } else {
                                u1129 = *(float *)((a4 + 0xB9C));
                                u1132 = (((u1 + u2) * 0.5f) - u1129);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u1129))) {
                                } else {
                                    u1130 = ((u1 + u2) * 0.5f);
                                    u1130 = -u1130;
                                    u1132 = (u1130 + u1129);
                                }
                                if (15.0f > u1132) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1139 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1139 > 0.0f) - (0.0f > u1139)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1210 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t1146 = (int)((int)(nlRand()) % (int)0x5);
                                    t1151 = a5;
                                    if (t1146 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t1151 = (a5 + 0x1);
                                    }
                                    u1154 = *(float *)((a4 + 0xB9C));
                                    if (((u1154 > 0.0f) - (0.0f > u1154)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u1163 = *(float *)((a4 + 0xB9C));
                                        u1165 = ((-u1163) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u1163 - ((u1 + u2) * 0.5f)))) {
                                            u1165 = (u1163 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u1165 > 30.0f) {
                                            u1168 = *(float *)((a4 + 0xB9C));
                                            u1184 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t1185 = ((u1168 > 0.0f) - (0.0f > u1168));
                                        } else {
                                            u1174 = *(float *)((a4 + 0xB9C));
                                            u1184 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t1185 = ((u1174 > 0.0f) - (0.0f > u1174));
                                        }
                                        cpuAimPointSet(t1151, 0x1, ((float)t1185 * 54.8499985f), u1184);
                                        t1205 = (t1151 + 0x1);
                                    } else {
                                        u1189 = *(float *)((a4 + 0xB9C));
                                        u1190 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t1151, 0x1, ((float)(((u1190 - u1189) > 0.0f) - (0.0f > (u1190 - u1189))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u1197 = *(float *)((a4 + 0xB9C));
                                        u1198 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t1151 + 0x1), 0x1, ((float)(((u1198 - u1197) > 0.0f) - (0.0f > (u1198 - u1197))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t1205 = ((t1151 + 0x1) + 0x1);
                                    }
                                    t1210 = t1205;
                                }
                                t1215 = t1210;
                            }
                            t1305 = t1215;
                        } else {
                            u1219 = *(float *)((a4 + 0xB9C));
                            u1222 = (((u1 + u2) * 0.5f) - u1219);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1219))) {
                            } else {
                                u1220 = ((u1 + u2) * 0.5f);
                                u1220 = -u1220;
                                u1222 = (u1220 + u1219);
                            }
                            if (15.0f > u1222) {
                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u1229 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1229 > 0.0f) - (0.0f > u1229)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t1300 = (((a5 + 0x1) + 0x1) + 0x1);
                            } else {
                                t1236 = (int)((int)(nlRand()) % (int)0x5);
                                t1241 = a5;
                                if (t1236 == 0) {
                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1241 = (a5 + 0x1);
                                }
                                u1244 = *(float *)((a4 + 0xB9C));
                                if (((u1244 > 0.0f) - (0.0f > u1244)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u1253 = *(float *)((a4 + 0xB9C));
                                    u1255 = ((-u1253) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u1253 - ((u1 + u2) * 0.5f)))) {
                                        u1255 = (u1253 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u1255 > 30.0f) {
                                        u1258 = *(float *)((a4 + 0xB9C));
                                        u1274 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t1275 = ((u1258 > 0.0f) - (0.0f > u1258));
                                    } else {
                                        u1264 = *(float *)((a4 + 0xB9C));
                                        u1274 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t1275 = ((u1264 > 0.0f) - (0.0f > u1264));
                                    }
                                    cpuAimPointSet(t1241, 0x1, ((float)t1275 * 54.8499985f), u1274);
                                    t1295 = (t1241 + 0x1);
                                } else {
                                    u1279 = *(float *)((a4 + 0xB9C));
                                    u1280 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(t1241, 0x1, ((float)(((u1280 - u1279) > 0.0f) - (0.0f > (u1280 - u1279))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1287 = *(float *)((a4 + 0xB9C));
                                    u1288 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((t1241 + 0x1), 0x1, ((float)(((u1288 - u1287) > 0.0f) - (0.0f > (u1288 - u1287))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t1295 = ((t1241 + 0x1) + 0x1);
                                }
                                t1300 = t1295;
                            }
                            t1305 = t1300;
                        }
                        t1310 = t1305;
                    }
                    t1316 = t1310;
                }
                t1322 = t1316;
            }
            t1328 = t1322;
        }
        t2775 = t1328;
    } else {
        t1333 = cpuDistXZ((0xAE8 + a4), (0xBA8 + a4));
        if (!(10.0f > t1333)) {
            u1334 = *(float *)((a4 + 0xB9C));
            u1335 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u1340 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            if ((((u1334 - u1335) > 0.0f) - (0.0f > (u1334 - u1335))) != (((u1334 - u1340) > 0.0f) - (0.0f > (u1334 - u1340)))) {
                u1345 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u1346 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u1348 = ((-u1345) + u1346);
                if (!(0.0f > (u1345 - u1346))) {
                    u1348 = (u1345 - u1346);
                }
                if (!(20.0f > u1348)) {
                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                    u1354 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1355 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1356 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1355 - u1356), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1354));
                    t1357 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                    if (!(0.0f > t1357)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u1362 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1363 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1364 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1363 - u1364), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1362));
                        u1375 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                    } else {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u1370 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1371 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1372 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1371 - u1372), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1370));
                        u1375 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                    }
                    t1386 = a5;
                    if (0.707099974f > u1375) {
                        *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                        *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                        t1382 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        cpuAimPointSet(a5, 0x1, t1382, (*(float *)(((int)stk + 28))));
                        t1386 = (a5 + 0x1);
                    }
                    u1391 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1392 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(t1386, 0x1, ((float)(((u1391 - u1392) > 0.0f) - (0.0f > (u1391 - u1392))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u1399 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1400 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet((t1386 + 0x1), 0x1, ((float)(((u1399 - u1400) > 0.0f) - (0.0f > (u1399 - u1400))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u1407 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1408 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(((t1386 + 0x1) + 0x1), 0x1, ((float)(((u1407 - u1408) > 0.0f) - (0.0f > (u1407 - u1408))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u1415 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1416 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet((((t1386 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u1415 - u1416) > 0.0f) - (0.0f > (u1415 - u1416)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    u1423 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u1424 = *(float *)((a4 + 0xAE8));
                    cpuAimPointSet(((((t1386 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u1423 - u1424) > 0.0f) - (0.0f > (u1423 - u1424)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t1762 = (((((t1386 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                } else {
                    u1430 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1431 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                    u1433 = ((-u1430) + u1431);
                    if (!(0.0f > (u1430 - u1431))) {
                        u1433 = (u1430 - u1431);
                    }
                    if (!(20.0f > u1433)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u1440 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1441 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1442 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u1441 - u1442), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1440));
                        t1443 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t1443)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1448 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1449 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1450 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1449 - u1450), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1448));
                            u1461 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1456 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1457 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1458 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1457 - u1458), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1456));
                            u1461 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t1472 = a5;
                        if (0.707099974f > u1461) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t1468 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t1468, (*(float *)(((int)stk + 28))));
                            t1472 = (a5 + 0x1);
                        }
                        cpuAimPointSet(t1472, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        cpuAimPointSet((t1472 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t1756 = ((t1472 + 0x1) + 0x1);
                    } else {
                        u1480 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u1481 = (-u1480);
                        if (!(0.0f > u1480)) {
                            u1481 = u1480;
                        }
                        if (!(47.5400009f > u1481)) {
                            u1484 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1486 = (-u1484);
                            if (!(0.0f > u1484)) {
                                u1486 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                            }
                            if (!(47.5400009f > u1486)) {
                                u1488 = *(float *)((a4 + 0xB9C));
                                u1491 = (((u1 + u2) * 0.5f) - u1488);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u1488))) {
                                } else {
                                    u1489 = ((u1 + u2) * 0.5f);
                                    u1489 = -u1489;
                                    u1491 = (u1489 + u1488);
                                }
                                if (15.0f > u1491) {
                                    cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1571 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                } else {
                                    u1502 = *(float *)((a4 + 0xB9C));
                                    if (((u1502 > 0.0f) - (0.0f > u1502)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u1511 = *(float *)((a4 + 0xB9C));
                                        u1513 = ((-u1511) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u1511 - ((u1 + u2) * 0.5f)))) {
                                            u1513 = (u1511 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u1513 > 30.0f) {
                                            u1516 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u1516 > 0.0f) - (0.0f > u1516)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u1523 = *(float *)((a4 + 0xB9C));
                                            u1546 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t1547 = ((u1523 > 0.0f) - (0.0f > u1523));
                                        } else {
                                            u1529 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(a5, 0x1, ((float)((u1529 > 0.0f) - (0.0f > u1529)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            u1536 = *(float *)((a4 + 0xB9C));
                                            u1546 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t1547 = (-((u1536 > 0.0f) - (0.0f > u1536)));
                                        }
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)t1547 * 54.8499985f), u1546);
                                    } else {
                                        u1551 = *(float *)((a4 + 0xB9C));
                                        u1552 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(a5, 0x1, ((float)(((u1552 - u1551) > 0.0f) - (0.0f > (u1552 - u1551))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u1559 = *(float *)((a4 + 0xB9C));
                                        u1560 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u1560 - u1559) > 0.0f) - (0.0f > (u1560 - u1559))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    }
                                    t1571 = ((a5 + 0x1) + 0x1);
                                }
                                t1661 = t1571;
                            } else {
                                u1575 = *(float *)((a4 + 0xB9C));
                                u1578 = (((u1 + u2) * 0.5f) - u1575);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u1575))) {
                                } else {
                                    u1576 = ((u1 + u2) * 0.5f);
                                    u1576 = -u1576;
                                    u1578 = (u1576 + u1575);
                                }
                                if (15.0f > u1578) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1585 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1585 > 0.0f) - (0.0f > u1585)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1656 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t1592 = (int)((int)(nlRand()) % (int)0x5);
                                    t1597 = a5;
                                    if (t1592 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t1597 = (a5 + 0x1);
                                    }
                                    u1600 = *(float *)((a4 + 0xB9C));
                                    if (((u1600 > 0.0f) - (0.0f > u1600)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u1609 = *(float *)((a4 + 0xB9C));
                                        u1611 = ((-u1609) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u1609 - ((u1 + u2) * 0.5f)))) {
                                            u1611 = (u1609 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u1611 > 30.0f) {
                                            u1614 = *(float *)((a4 + 0xB9C));
                                            u1630 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t1631 = ((u1614 > 0.0f) - (0.0f > u1614));
                                        } else {
                                            u1620 = *(float *)((a4 + 0xB9C));
                                            u1630 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t1631 = ((u1620 > 0.0f) - (0.0f > u1620));
                                        }
                                        cpuAimPointSet(t1597, 0x1, ((float)t1631 * 54.8499985f), u1630);
                                        t1651 = (t1597 + 0x1);
                                    } else {
                                        u1635 = *(float *)((a4 + 0xB9C));
                                        u1636 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t1597, 0x1, ((float)(((u1636 - u1635) > 0.0f) - (0.0f > (u1636 - u1635))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u1643 = *(float *)((a4 + 0xB9C));
                                        u1644 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t1597 + 0x1), 0x1, ((float)(((u1644 - u1643) > 0.0f) - (0.0f > (u1644 - u1643))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t1651 = ((t1597 + 0x1) + 0x1);
                                    }
                                    t1656 = t1651;
                                }
                                t1661 = t1656;
                            }
                            t1751 = t1661;
                        } else {
                            u1665 = *(float *)((a4 + 0xB9C));
                            u1668 = (((u1 + u2) * 0.5f) - u1665);
                            if (!(0.0f > (((u1 + u2) * 0.5f) - u1665))) {
                            } else {
                                u1666 = ((u1 + u2) * 0.5f);
                                u1666 = -u1666;
                                u1668 = (u1666 + u1665);
                            }
                            if (15.0f > u1668) {
                                cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                u1675 = *(float *)((a4 + 0xB9C));
                                cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1675 > 0.0f) - (0.0f > u1675)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                t1746 = (((a5 + 0x1) + 0x1) + 0x1);
                            } else {
                                t1682 = (int)((int)(nlRand()) % (int)0x5);
                                t1687 = a5;
                                if (t1682 == 0) {
                                    cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t1687 = (a5 + 0x1);
                                }
                                u1690 = *(float *)((a4 + 0xB9C));
                                if (((u1690 > 0.0f) - (0.0f > u1690)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                    u1699 = *(float *)((a4 + 0xB9C));
                                    u1701 = ((-u1699) + ((u1 + u2) * 0.5f));
                                    if (!(0.0f > (u1699 - ((u1 + u2) * 0.5f)))) {
                                        u1701 = (u1699 - ((u1 + u2) * 0.5f));
                                    }
                                    if (u1701 > 30.0f) {
                                        u1704 = *(float *)((a4 + 0xB9C));
                                        u1720 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                        t1721 = ((u1704 > 0.0f) - (0.0f > u1704));
                                    } else {
                                        u1710 = *(float *)((a4 + 0xB9C));
                                        u1720 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                        t1721 = ((u1710 > 0.0f) - (0.0f > u1710));
                                    }
                                    cpuAimPointSet(t1687, 0x1, ((float)t1721 * 54.8499985f), u1720);
                                    t1741 = (t1687 + 0x1);
                                } else {
                                    u1725 = *(float *)((a4 + 0xB9C));
                                    u1726 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet(t1687, 0x1, ((float)(((u1726 - u1725) > 0.0f) - (0.0f > (u1726 - u1725))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u1733 = *(float *)((a4 + 0xB9C));
                                    u1734 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    cpuAimPointSet((t1687 + 0x1), 0x1, ((float)(((u1734 - u1733) > 0.0f) - (0.0f > (u1734 - u1733))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                    t1741 = ((t1687 + 0x1) + 0x1);
                                }
                                t1746 = t1741;
                            }
                            t1751 = t1746;
                        }
                        t1756 = t1751;
                    }
                    t1762 = t1756;
                }
                t2656 = t1762;
            } else {
                u1767 = ((-u1334) + u1335);
                if (!(0.0f > (u1334 - u1335))) {
                    u1767 = (u1334 - u1335);
                }
                if (u1767 > 20.0f) {
                    u1769 = ((-u1334) + u1340);
                    if (!(0.0f > (u1334 - u1340))) {
                        u1769 = (u1334 - u1340);
                    }
                    if (u1769 > 20.0f) {
                        u1772 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(a5, 0x1, ((float)((u1772 > 0.0f) - (0.0f > u1772)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u1779 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((a5 + 0x1), 0x1, ((float)((u1779 > 0.0f) - (0.0f > u1779)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u1786 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u1786 > 0.0f) - (0.0f > u1786)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                        u1793 = *(float *)((a4 + 0xB9C));
                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, ((float)((u1793 > 0.0f) - (0.0f > u1793)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t2222 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u1799 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1800 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u1802 = ((-u1799) + u1800);
                        if (!(0.0f > (u1799 - u1800))) {
                            u1802 = (u1799 - u1800);
                        }
                        if (!(20.0f > u1802)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u1808 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1809 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1810 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u1809 - u1810), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1808));
                            t1811 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t1811)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1816 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1817 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1818 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1817 - u1818), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1816));
                                u1829 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1824 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1825 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1826 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1825 - u1826), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1824));
                                u1829 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t1840 = a5;
                            if (0.707099974f > u1829) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t1836 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t1836, (*(float *)(((int)stk + 28))));
                                t1840 = (a5 + 0x1);
                            }
                            u1845 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1846 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet(t1840, 0x1, ((float)(((u1845 - u1846) > 0.0f) - (0.0f > (u1845 - u1846))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u1853 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1854 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet((t1840 + 0x1), 0x1, ((float)(((u1853 - u1854) > 0.0f) - (0.0f > (u1853 - u1854))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u1861 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1862 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet(((t1840 + 0x1) + 0x1), 0x1, ((float)(((u1861 - u1862) > 0.0f) - (0.0f > (u1861 - u1862))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u1869 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1870 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet((((t1840 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u1869 - u1870) > 0.0f) - (0.0f > (u1869 - u1870)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            u1877 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u1878 = *(float *)((a4 + 0xAE8));
                            cpuAimPointSet(((((t1840 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u1877 - u1878) > 0.0f) - (0.0f > (u1877 - u1878)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t2216 = (((((t1840 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                        } else {
                            u1884 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1885 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u1887 = ((-u1884) + u1885);
                            if (!(0.0f > (u1884 - u1885))) {
                                u1887 = (u1884 - u1885);
                            }
                            if (!(20.0f > u1887)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u1894 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1895 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u1896 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u1895 - u1896), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1894));
                                t1897 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                                if (!(0.0f > t1897)) {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1902 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1903 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1904 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1903 - u1904), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1902));
                                    u1915 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                                } else {
                                    *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    u1910 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1911 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    u1912 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                    *(Stk3 *)(((int)stk + 8)) = vecMake((u1911 - u1912), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u1910));
                                    u1915 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                                }
                                t1926 = a5;
                                if (0.707099974f > u1915) {
                                    *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                    t1922 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet(a5, 0x1, t1922, (*(float *)(((int)stk + 28))));
                                    t1926 = (a5 + 0x1);
                                }
                                cpuAimPointSet(t1926, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                cpuAimPointSet((t1926 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                t2210 = ((t1926 + 0x1) + 0x1);
                            } else {
                                u1934 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u1935 = (-u1934);
                                if (!(0.0f > u1934)) {
                                    u1935 = u1934;
                                }
                                if (!(47.5400009f > u1935)) {
                                    u1938 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                    u1940 = (-u1938);
                                    if (!(0.0f > u1938)) {
                                        u1940 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                    }
                                    if (!(47.5400009f > u1940)) {
                                        u1942 = *(float *)((a4 + 0xB9C));
                                        u1945 = (((u1 + u2) * 0.5f) - u1942);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u1942))) {
                                        } else {
                                            u1943 = ((u1 + u2) * 0.5f);
                                            u1943 = -u1943;
                                            u1945 = (u1943 + u1942);
                                        }
                                        if (15.0f > u1945) {
                                            cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2025 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                        } else {
                                            u1956 = *(float *)((a4 + 0xB9C));
                                            if (((u1956 > 0.0f) - (0.0f > u1956)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u1965 = *(float *)((a4 + 0xB9C));
                                                u1967 = ((-u1965) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u1965 - ((u1 + u2) * 0.5f)))) {
                                                    u1967 = (u1965 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u1967 > 30.0f) {
                                                    u1970 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u1970 > 0.0f) - (0.0f > u1970)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                    u1977 = *(float *)((a4 + 0xB9C));
                                                    u2000 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t2001 = ((u1977 > 0.0f) - (0.0f > u1977));
                                                } else {
                                                    u1983 = *(float *)((a4 + 0xB9C));
                                                    cpuAimPointSet(a5, 0x1, ((float)((u1983 > 0.0f) - (0.0f > u1983)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                    u1990 = *(float *)((a4 + 0xB9C));
                                                    u2000 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t2001 = (-((u1990 > 0.0f) - (0.0f > u1990)));
                                                }
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2001 * 54.8499985f), u2000);
                                            } else {
                                                u2005 = *(float *)((a4 + 0xB9C));
                                                u2006 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(a5, 0x1, ((float)(((u2006 - u2005) > 0.0f) - (0.0f > (u2006 - u2005))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u2013 = *(float *)((a4 + 0xB9C));
                                                u2014 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u2014 - u2013) > 0.0f) - (0.0f > (u2014 - u2013))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            }
                                            t2025 = ((a5 + 0x1) + 0x1);
                                        }
                                        t2115 = t2025;
                                    } else {
                                        u2029 = *(float *)((a4 + 0xB9C));
                                        u2032 = (((u1 + u2) * 0.5f) - u2029);
                                        if (!(0.0f > (((u1 + u2) * 0.5f) - u2029))) {
                                        } else {
                                            u2030 = ((u1 + u2) * 0.5f);
                                            u2030 = -u2030;
                                            u2032 = (u2030 + u2029);
                                        }
                                        if (15.0f > u2032) {
                                            cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2039 = *(float *)((a4 + 0xB9C));
                                            cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2039 > 0.0f) - (0.0f > u2039)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2110 = (((a5 + 0x1) + 0x1) + 0x1);
                                        } else {
                                            t2046 = (int)((int)(nlRand()) % (int)0x5);
                                            t2051 = a5;
                                            if (t2046 == 0) {
                                                cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                t2051 = (a5 + 0x1);
                                            }
                                            u2054 = *(float *)((a4 + 0xB9C));
                                            if (((u2054 > 0.0f) - (0.0f > u2054)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                                u2063 = *(float *)((a4 + 0xB9C));
                                                u2065 = ((-u2063) + ((u1 + u2) * 0.5f));
                                                if (!(0.0f > (u2063 - ((u1 + u2) * 0.5f)))) {
                                                    u2065 = (u2063 - ((u1 + u2) * 0.5f));
                                                }
                                                if (u2065 > 30.0f) {
                                                    u2068 = *(float *)((a4 + 0xB9C));
                                                    u2084 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                    t2085 = ((u2068 > 0.0f) - (0.0f > u2068));
                                                } else {
                                                    u2074 = *(float *)((a4 + 0xB9C));
                                                    u2084 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                    t2085 = ((u2074 > 0.0f) - (0.0f > u2074));
                                                }
                                                cpuAimPointSet(t2051, 0x1, ((float)t2085 * 54.8499985f), u2084);
                                                t2105 = (t2051 + 0x1);
                                            } else {
                                                u2089 = *(float *)((a4 + 0xB9C));
                                                u2090 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet(t2051, 0x1, ((float)(((u2090 - u2089) > 0.0f) - (0.0f > (u2090 - u2089))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u2097 = *(float *)((a4 + 0xB9C));
                                                u2098 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                                cpuAimPointSet((t2051 + 0x1), 0x1, ((float)(((u2098 - u2097) > 0.0f) - (0.0f > (u2098 - u2097))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                t2105 = ((t2051 + 0x1) + 0x1);
                                            }
                                            t2110 = t2105;
                                        }
                                        t2115 = t2110;
                                    }
                                    t2205 = t2115;
                                } else {
                                    u2119 = *(float *)((a4 + 0xB9C));
                                    u2122 = (((u1 + u2) * 0.5f) - u2119);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u2119))) {
                                    } else {
                                        u2120 = ((u1 + u2) * 0.5f);
                                        u2120 = -u2120;
                                        u2122 = (u2120 + u2119);
                                    }
                                    if (15.0f > u2122) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2129 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2129 > 0.0f) - (0.0f > u2129)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2200 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t2136 = (int)((int)(nlRand()) % (int)0x5);
                                        t2141 = a5;
                                        if (t2136 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2141 = (a5 + 0x1);
                                        }
                                        u2144 = *(float *)((a4 + 0xB9C));
                                        if (((u2144 > 0.0f) - (0.0f > u2144)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u2153 = *(float *)((a4 + 0xB9C));
                                            u2155 = ((-u2153) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u2153 - ((u1 + u2) * 0.5f)))) {
                                                u2155 = (u2153 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u2155 > 30.0f) {
                                                u2158 = *(float *)((a4 + 0xB9C));
                                                u2174 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t2175 = ((u2158 > 0.0f) - (0.0f > u2158));
                                            } else {
                                                u2164 = *(float *)((a4 + 0xB9C));
                                                u2174 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t2175 = ((u2164 > 0.0f) - (0.0f > u2164));
                                            }
                                            cpuAimPointSet(t2141, 0x1, ((float)t2175 * 54.8499985f), u2174);
                                            t2195 = (t2141 + 0x1);
                                        } else {
                                            u2179 = *(float *)((a4 + 0xB9C));
                                            u2180 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t2141, 0x1, ((float)(((u2180 - u2179) > 0.0f) - (0.0f > (u2180 - u2179))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2187 = *(float *)((a4 + 0xB9C));
                                            u2188 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t2141 + 0x1), 0x1, ((float)(((u2188 - u2187) > 0.0f) - (0.0f > (u2188 - u2187))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t2195 = ((t2141 + 0x1) + 0x1);
                                        }
                                        t2200 = t2195;
                                    }
                                    t2205 = t2200;
                                }
                                t2210 = t2205;
                            }
                            t2216 = t2210;
                        }
                        t2222 = t2216;
                    }
                    t2650 = t2222;
                } else {
                    u2227 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u2228 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                    u2230 = ((-u2227) + u2228);
                    if (!(0.0f > (u2227 - u2228))) {
                        u2230 = (u2227 - u2228);
                    }
                    if (!(20.0f > u2230)) {
                        *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                        u2236 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2237 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2238 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        *(Stk3 *)(((int)stk + 8)) = vecMake((u2237 - u2238), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2236));
                        t2239 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                        if (!(0.0f > t2239)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u2244 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2245 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2246 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u2245 - u2246), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2244));
                            u2257 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                        } else {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u2252 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2253 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2254 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u2253 - u2254), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2252));
                            u2257 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                        }
                        t2268 = a5;
                        if (0.707099974f > u2257) {
                            *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                            *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                            t2264 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                            cpuAimPointSet(a5, 0x1, t2264, (*(float *)(((int)stk + 28))));
                            t2268 = (a5 + 0x1);
                        }
                        u2273 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2274 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(t2268, 0x1, ((float)(((u2273 - u2274) > 0.0f) - (0.0f > (u2273 - u2274))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u2281 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2282 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet((t2268 + 0x1), 0x1, ((float)(((u2281 - u2282) > 0.0f) - (0.0f > (u2281 - u2282))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u2289 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2290 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(((t2268 + 0x1) + 0x1), 0x1, ((float)(((u2289 - u2290) > 0.0f) - (0.0f > (u2289 - u2290))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u2297 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2298 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet((((t2268 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u2297 - u2298) > 0.0f) - (0.0f > (u2297 - u2298)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        u2305 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                        u2306 = *(float *)((a4 + 0xAE8));
                        cpuAimPointSet(((((t2268 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-(((u2305 - u2306) > 0.0f) - (0.0f > (u2305 - u2306)))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                        t2644 = (((((t2268 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                    } else {
                        u2312 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2313 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                        u2315 = ((-u2312) + u2313);
                        if (!(0.0f > (u2312 - u2313))) {
                            u2315 = (u2312 - u2313);
                        }
                        if (!(20.0f > u2315)) {
                            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                            u2322 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2323 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            u2324 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                            *(Stk3 *)(((int)stk + 8)) = vecMake((u2323 - u2324), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2322));
                            t2325 = cpuVecCos(*(Stk4 *)((int)stk + 8));
                            if (!(0.0f > t2325)) {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u2330 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u2331 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u2332 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u2331 - u2332), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2330));
                                u2343 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
                            } else {
                                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                u2338 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u2339 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                u2340 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                *(Stk3 *)(((int)stk + 8)) = vecMake((u2339 - u2340), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2338));
                                u2343 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
                            }
                            t2354 = a5;
                            if (0.707099974f > u2343) {
                                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                                t2350 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                cpuAimPointSet(a5, 0x1, t2350, (*(float *)(((int)stk + 28))));
                                t2354 = (a5 + 0x1);
                            }
                            cpuAimPointSet(t2354, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            cpuAimPointSet((t2354 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                            t2638 = ((t2354 + 0x1) + 0x1);
                        } else {
                            u2362 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                            u2363 = (-u2362);
                            if (!(0.0f > u2362)) {
                                u2363 = u2362;
                            }
                            if (!(47.5400009f > u2363)) {
                                u2366 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                                u2368 = (-u2366);
                                if (!(0.0f > u2366)) {
                                    u2368 = (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0)));
                                }
                                if (!(47.5400009f > u2368)) {
                                    u2370 = *(float *)((a4 + 0xB9C));
                                    u2373 = (((u1 + u2) * 0.5f) - u2370);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u2370))) {
                                    } else {
                                        u2371 = ((u1 + u2) * 0.5f);
                                        u2371 = -u2371;
                                        u2373 = (u2371 + u2370);
                                    }
                                    if (15.0f > u2373) {
                                        cpuAimPointSet(a5, 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet((a5 + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2453 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                                    } else {
                                        u2384 = *(float *)((a4 + 0xB9C));
                                        if (((u2384 > 0.0f) - (0.0f > u2384)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u2393 = *(float *)((a4 + 0xB9C));
                                            u2395 = ((-u2393) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u2393 - ((u1 + u2) * 0.5f)))) {
                                                u2395 = (u2393 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u2395 > 30.0f) {
                                                u2398 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u2398 > 0.0f) - (0.0f > u2398)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                                u2405 = *(float *)((a4 + 0xB9C));
                                                u2428 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t2429 = ((u2405 > 0.0f) - (0.0f > u2405));
                                            } else {
                                                u2411 = *(float *)((a4 + 0xB9C));
                                                cpuAimPointSet(a5, 0x1, ((float)((u2411 > 0.0f) - (0.0f > u2411)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                                u2418 = *(float *)((a4 + 0xB9C));
                                                u2428 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t2429 = (-((u2418 > 0.0f) - (0.0f > u2418)));
                                            }
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2429 * 54.8499985f), u2428);
                                        } else {
                                            u2433 = *(float *)((a4 + 0xB9C));
                                            u2434 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(a5, 0x1, ((float)(((u2434 - u2433) > 0.0f) - (0.0f > (u2434 - u2433))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2441 = *(float *)((a4 + 0xB9C));
                                            u2442 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((a5 + 0x1), 0x1, ((float)(((u2442 - u2441) > 0.0f) - (0.0f > (u2442 - u2441))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        }
                                        t2453 = ((a5 + 0x1) + 0x1);
                                    }
                                    t2543 = t2453;
                                } else {
                                    u2457 = *(float *)((a4 + 0xB9C));
                                    u2460 = (((u1 + u2) * 0.5f) - u2457);
                                    if (!(0.0f > (((u1 + u2) * 0.5f) - u2457))) {
                                    } else {
                                        u2458 = ((u1 + u2) * 0.5f);
                                        u2458 = -u2458;
                                        u2460 = (u2458 + u2457);
                                    }
                                    if (15.0f > u2460) {
                                        cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2467 = *(float *)((a4 + 0xB9C));
                                        cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2467 > 0.0f) - (0.0f > u2467)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2538 = (((a5 + 0x1) + 0x1) + 0x1);
                                    } else {
                                        t2474 = (int)((int)(nlRand()) % (int)0x5);
                                        t2479 = a5;
                                        if (t2474 == 0) {
                                            cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            t2479 = (a5 + 0x1);
                                        }
                                        u2482 = *(float *)((a4 + 0xB9C));
                                        if (((u2482 > 0.0f) - (0.0f > u2482)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                            u2491 = *(float *)((a4 + 0xB9C));
                                            u2493 = ((-u2491) + ((u1 + u2) * 0.5f));
                                            if (!(0.0f > (u2491 - ((u1 + u2) * 0.5f)))) {
                                                u2493 = (u2491 - ((u1 + u2) * 0.5f));
                                            }
                                            if (u2493 > 30.0f) {
                                                u2496 = *(float *)((a4 + 0xB9C));
                                                u2512 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                                t2513 = ((u2496 > 0.0f) - (0.0f > u2496));
                                            } else {
                                                u2502 = *(float *)((a4 + 0xB9C));
                                                u2512 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                                t2513 = ((u2502 > 0.0f) - (0.0f > u2502));
                                            }
                                            cpuAimPointSet(t2479, 0x1, ((float)t2513 * 54.8499985f), u2512);
                                            t2533 = (t2479 + 0x1);
                                        } else {
                                            u2517 = *(float *)((a4 + 0xB9C));
                                            u2518 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet(t2479, 0x1, ((float)(((u2518 - u2517) > 0.0f) - (0.0f > (u2518 - u2517))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                            u2525 = *(float *)((a4 + 0xB9C));
                                            u2526 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                            cpuAimPointSet((t2479 + 0x1), 0x1, ((float)(((u2526 - u2525) > 0.0f) - (0.0f > (u2526 - u2525))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                            t2533 = ((t2479 + 0x1) + 0x1);
                                        }
                                        t2538 = t2533;
                                    }
                                    t2543 = t2538;
                                }
                                t2633 = t2543;
                            } else {
                                u2547 = *(float *)((a4 + 0xB9C));
                                u2550 = (((u1 + u2) * 0.5f) - u2547);
                                if (!(0.0f > (((u1 + u2) * 0.5f) - u2547))) {
                                } else {
                                    u2548 = ((u1 + u2) * 0.5f);
                                    u2548 = -u2548;
                                    u2550 = (u2548 + u2547);
                                }
                                if (15.0f > u2550) {
                                    cpuAimPointSet(a5, 0x2, 54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    cpuAimPointSet((a5 + 0x1), 0x2, -54.8499985f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    u2557 = *(float *)((a4 + 0xB9C));
                                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)((u2557 > 0.0f) - (0.0f > u2557)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                    t2628 = (((a5 + 0x1) + 0x1) + 0x1);
                                } else {
                                    t2564 = (int)((int)(nlRand()) % (int)0x5);
                                    t2569 = a5;
                                    if (t2564 == 0) {
                                        cpuAimPointSet(a5, 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        t2569 = (a5 + 0x1);
                                    }
                                    u2572 = *(float *)((a4 + 0xB9C));
                                    if (((u2572 > 0.0f) - (0.0f > u2572)) != ((((u1 + u2) * 0.5f) > 0.0f) - (0.0f > ((u1 + u2) * 0.5f)))) {
                                        u2581 = *(float *)((a4 + 0xB9C));
                                        u2583 = ((-u2581) + ((u1 + u2) * 0.5f));
                                        if (!(0.0f > (u2581 - ((u1 + u2) * 0.5f)))) {
                                            u2583 = (u2581 - ((u1 + u2) * 0.5f));
                                        }
                                        if (u2583 > 30.0f) {
                                            u2586 = *(float *)((a4 + 0xB9C));
                                            u2602 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                                            t2603 = ((u2586 > 0.0f) - (0.0f > u2586));
                                        } else {
                                            u2592 = *(float *)((a4 + 0xB9C));
                                            u2602 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                                            t2603 = ((u2592 > 0.0f) - (0.0f > u2592));
                                        }
                                        cpuAimPointSet(t2569, 0x1, ((float)t2603 * 54.8499985f), u2602);
                                        t2623 = (t2569 + 0x1);
                                    } else {
                                        u2607 = *(float *)((a4 + 0xB9C));
                                        u2608 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet(t2569, 0x1, ((float)(((u2608 - u2607) > 0.0f) - (0.0f > (u2608 - u2607))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                                        u2615 = *(float *)((a4 + 0xB9C));
                                        u2616 = *(float *)((((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                                        cpuAimPointSet((t2569 + 0x1), 0x1, ((float)(((u2616 - u2615) > 0.0f) - (0.0f > (u2616 - u2615))) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                                        t2623 = ((t2569 + 0x1) + 0x1);
                                    }
                                    t2628 = t2623;
                                }
                                t2633 = t2628;
                            }
                            t2638 = t2633;
                        }
                        t2644 = t2638;
                    }
                    t2650 = t2644;
                }
                t2656 = t2650;
            }
            t2769 = t2656;
        } else {
            u2661 = *(float *)((a4 + 0xB9C));
            u2662 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2664 = ((-u2661) + u2662);
            if (!(0.0f > (u2661 - u2662))) {
                u2664 = (u2661 - u2662);
            }
            t2716 = a5;
            if (u2664 > 15.0f) {
                if (!(0.0f > (u2661 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)))))) {
                    u2671 = (u2661 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
                } else {
                    u2671 = ((-u2661) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8))));
                }
                t2707 = a5;
                if (u2671 > 15.0f) {
                    u2673 = *(float *)((a4 + 0xB00));
                    u2674 = *(float *)((a4 + 0xB9C));
                    *(float *)(((int)stk + 44)) = u2674;
                    t2679 = 0x1;
                    if (u2674 > 0.0f) {
                    } else {
                        t2677 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 44)))) {
                            t2677 = 0xFFFFFFFF;
                        }
                        t2679 = t2677;
                    }
                    cpuAimPointSet(a5, 0x1, ((float)t2679 * 54.8499985f), (u2673 * 118.849998f));
                    u2683 = *(float *)((a4 + 0xB00));
                    u2684 = *(float *)((a4 + 0xB9C));
                    *(float *)(((int)stk + 40)) = u2684;
                    t2689 = 0x1;
                    if (u2684 > 0.0f) {
                    } else {
                        t2687 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 40)))) {
                            t2687 = 0xFFFFFFFF;
                        }
                        t2689 = t2687;
                    }
                    cpuAimPointSet((a5 + 0x1), 0x1, ((float)t2689 * 54.8499985f), (u2683 * 118.849998f));
                    u2693 = *(float *)((a4 + 0xB00));
                    u2694 = *(float *)((a4 + 0xB9C));
                    *(float *)(((int)stk + 36)) = u2694;
                    t2699 = 0x1;
                    if (u2694 > 0.0f) {
                    } else {
                        t2697 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 36)))) {
                            t2697 = 0xFFFFFFFF;
                        }
                        t2699 = t2697;
                    }
                    cpuAimPointSet(((a5 + 0x1) + 0x1), 0x1, ((float)t2699 * 54.8499985f), (u2693 * 118.849998f));
                    cpuAimPointSet((((a5 + 0x1) + 0x1) + 0x1), 0x1, (*(float *)((a4 + 0xB9C))), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t2707 = ((((a5 + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t2716 = t2707;
            }
            *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
            u2728 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
            u2729 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            u2730 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
            *(Stk3 *)(((int)stk + 8)) = vecMake((u2729 - u2730), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2728));
            t2731 = cpuVecCos(*(Stk4 *)((int)stk + 8));
            if (!(0.0f > t2731)) {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u2736 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u2737 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2738 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u2737 - u2738), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2736));
                u2749 = (cpuVecCos(*(Stk4 *)((int)stk + 8)));
            } else {
                *(Stk3 *)(((int)stk + 20)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                u2744 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
                u2745 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u2746 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                *(Stk3 *)(((int)stk + 8)) = vecMake((u2745 - u2746), 0.0f, ((*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0))) - u2744));
                u2749 = (-(cpuVecCos(*(Stk4 *)((int)stk + 8))));
            }
            t2760 = t2716;
            if (0.707099974f > u2749) {
                *(float *)(((int)stk + 28)) = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)((a4 + 0xB9C))) - ((u1 + u2) * 0.5f)), 0.0f, ((*(float *)((a4 + 0xAF0))) - (*(float *)(((int)stk + 32)))));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
                t2756 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet(t2716, 0x1, t2756, (*(float *)(((int)stk + 28))));
                t2760 = (t2716 + 0x1);
            }
            u2764 = *(float *)((a4 + 0xB00));
            *(float *)(((int)stk + 28)) = (u2764 * 118.849998f);
            u2766 = (-1.0f);
            u2766 = u2766 + (1.0f + 1.0f) * (nlRandom());
            cpuAimPointSet(t2760, 0x1, (u2766 * 54.8499985f), (u2764 * 118.849998f));
            t2769 = (t2760 + 0x1);
        }
        t2775 = t2769;
    }
    return t2775;
}

float FUN_8c0486e4(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8)
{
    int stk[35];

    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_10;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    register float w0_9;
    v0_5 = a4;
    v0_9 = a7;
    w0_6 = f8;
    v0_10 = (0x8C0487E4);
    v0_0 = (v0_5);
    w0_3 = (41.1500015f);
    w0_0 = (118.849998f);
    v0_11 = *(int *)((v0_0 + 0xB5C));
    v0_6 = (0x8C2FC69C);
    v0_7 = (0x160);
    v0_1 = (((v0_11 * 0x160) + 0x8C2FC69C));
    v0_3 = ((((0x1 & (v0_11 + 0x1)) * 0xD78) + 0x8C287D84));
    v0_5 = (0x8C291F24);
    v0_8 = (0x8C287ACC);
    v0_2 = (0x0);
    v0_4 = (0x1);
    w0_2 = ((*(float *)((v0_10 + 0x0))));
    if (((int)(*(short *)(((((*(int *)(((((0x1 & (v0_11 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C) + 0x118))) >= (int)0x1E)) goto L_8C04874C;
    *(unsigned char *)((v0_1 + 0xB1)) = v0_4;
    L_8C04874C:;
    w0_1 = *(float *)((v0_3 + 0xAF0));
    w0_4 = *(float *)((v0_5 + 0x20));
    w0_9 = (0.0f);
    w0_5 = (w0_1);
    w0_7 = ((w0_4 - w0_1));
    if ((!((w0_4 - w0_1) > 0.0f))) goto L_8C048760;
    v0_11 = (0x1);
    L_8C04876A:;
    w0_8 = *(float *)((v0_5 + 0x2C));
    w0_9 = (0.0f);
    w0_4 = (w0_8);
    w0_1 = ((w0_5 - (*(float *)((v0_5 + 0x14)))));
    if ((!(w0_8 > 0.0f))) goto L_8C048780;
    v0_10 = (0x1);
    L_8C04878A:;
    w0_9 = (0.0f);
    if ((!((w0_1 + (float)((v0_10 << 2) + v0_10)) > 0.0f))) goto L_8C0487A2;
    v0_12 = (0x1);
    L_8C0487FA:;
    if (!((v0_11 != v0_12))) goto L_8C048F3C;
    if ((((*(int *)((v0_3 + 0xB60))) & 0x100) == 0)) goto L_8C048810;
    v0_5 = ((((*(int *)((v0_3 + 0xB5C))) * v0_7) + v0_6));
    if (((int)(*(signed char *)((v0_1 + 0x12C))) <= (int)(*(signed char *)((v0_1 + 0x12B))))) goto L_8C048D4E;
    v0_6 = *(int *)((v0_3 + 0xC5C));
    v0_8 = (v0_6);
    if (((int)v0_6 < (int)0x9)) goto L_8C048D4E;
    if (((int)v0_8 > (int)0xC)) goto L_8C048D4E;
    *(unsigned char *)((v0_1 + 0x12B)) = ((*(signed char *)((v0_1 + 0x12B))) + 0x1);
    *(unsigned char *)((v0_1 + 0xB1)) = v0_2;
    goto L_8C048D4E;
    L_8C048F3C:;
    *(unsigned char *)((v0_1 + 0xB0)) = v0_4;
    *(unsigned int *)((v0_0 + 0xA24)) = v0_2;
    v0_10 = (0xA24);
    L_8C048F5A:;
    return F0;
    L_8C048D4E:;
    w0_2 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + 1.0f);
    w0_8 = ((*(float *)((v0_0 + 0xB00))) * w0_2);
    w0_2 = *(float *)((v0_5 + 0x138));
    w0_10 = (w0_2);
    w0_8 = ((-(w0_8 * w0_0)));
    w0_9 = (0.0f);
    if ((w0_2 != 0.0f)) goto L_8C048E5E;
    w0_0 = *(float *)((v0_5 + 0x28));
    w0_4 = (w0_0);
    if ((w0_9 > w0_0)) goto L_8C048D80;
    w0_10 = (w0_4);
    L_8C048D84:;
    v0_10 = (0x8C048E10);
    if ((w0_10 > 0.5f)) goto L_8C048D90;
    goto L_8C048F5A;
    L_8C048D90:;
    v0_10 = (0x118);
    if (((int)(*(short *)((v0_5 + 0x118))) < (int)0x2D)) goto L_8C048D9E;
    goto L_8C048F5A;
    L_8C048D9E:;
    w0_0 = *(float *)((v0_5 + 0x28));
    w0_9 = (0.0f);
    w0_1 = (26.1500015f);
    w0_5 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C048DB0;
    v0_11 = (0x1);
    L_8C048DBA:;
    w0_0 = *(float *)((v0_3 + 0xAE8));
    w0_2 = *(float *)((v0_3 + 0xB9C));
    w0_9 = (0.0f);
    w0_4 = ((w0_2 - w0_0));
    if ((!((w0_2 - w0_0) > 0.0f))) goto L_8C048DCE;
    v0_12 = (0x1);
    L_8C048DD8:;
    if ((v0_11 != v0_12)) goto L_8C048E18;
    w0_0 = (*(float *)((v0_3 + 0xB9C)));
    w0_0 = w0_0 + w0_3 * (*(float *)((v0_5 + 0x28)));
    F0 = (w0_3);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C048DF2;
    w0_9 = (w0_4);
    L_8C048DF6:;
    if ((w0_9 > w0_1)) goto L_8C048E36;
    L_8C048E52:;
    *(float *)((v0_5 + 0x130)) = w0_4;
    *(float *)((v0_5 + 0x138)) = 1.0f;
    L_8C048F46:;
    *(unsigned int *)((v0_0 + 0xA24)) = v0_2;
    *(unsigned char *)((v0_1 + 0xB1)) = v0_2;
    *(unsigned char *)((v0_1 + 0xB0)) = v0_2;
    *(float *)((v0_0 + 0xA34)) = w0_4;
    *(float *)((v0_0 + 0xA3C)) = w0_8;
    v0_10 = (0xA3C);
    goto L_8C048F5A;
    L_8C048E36:;
    w0_9 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C048E40;
    v0_10 = (0x1);
    L_8C048E4A:;
    w0_4 = (((float)v0_10 * w0_1));
    goto L_8C048E52;
    L_8C048E40:;
    if ((!(w0_9 > w0_4))) goto L_8C048E48;
    v0_10 = (0xFFFFFFFF);
    goto L_8C048E4A;
    L_8C048E48:;
    v0_10 = (0x0);
    goto L_8C048E4A;
    L_8C048DF2:;
    w0_9 = ((-w0_4));
    goto L_8C048DF6;
    L_8C048E18:;
    w0_0 = (*(float *)((v0_3 + 0xB9C)));
    w0_0 = w0_0 + w0_3 * (*(float *)((v0_5 + 0x28)));
    F0 = (w0_3);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C048E2E;
    w0_9 = (w0_4);
    L_8C048E32:;
    if ((!(w0_9 > w0_1))) goto L_8C048E52;
    goto L_8C048E36;
    L_8C048E2E:;
    w0_9 = ((-w0_4));
    goto L_8C048E32;
    L_8C048DCE:;
    if ((!(w0_9 > w0_4))) goto L_8C048DD6;
    v0_12 = (0xFFFFFFFF);
    goto L_8C048DD8;
    L_8C048DD6:;
    v0_12 = (0x0);
    goto L_8C048DD8;
    L_8C048DB0:;
    if ((!(w0_9 > w0_5))) goto L_8C048DB8;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048DBA;
    L_8C048DB8:;
    v0_11 = (0x0);
    goto L_8C048DBA;
    L_8C048D80:;
    w0_10 = ((-w0_4));
    goto L_8C048D84;
    L_8C048E5E:;
    v0_10 = (0x118);
    if (((int)(*(short *)((v0_5 + 0x118))) >= (int)0xA)) goto L_8C048F5A;
    *(int *)((int)stk + 24) = (((int)stk + 28) + 0x10);
    cpuShotRange(v0_3, (((int)stk + 24) + 0x38), (((int)stk + 24) + 0x2C), (((int)stk + 24) + 0x20), (((int)stk + 28) + 0x10), w0_4, w0_1, w0_5, w0_7, w0_6);
    w0_0 = *(float *)((v0_3 + 0xB78));
    w0_9 = (0.0f);
    w0_4 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C048E90;
    v0_11 = (0x1);
    L_8C048E9A:;
    if (((int)v0_11 <= 0)) goto L_8C048EA4;
    w0_1 = ((*(float *)(((int)stk + 68))));
    L_8C048EA8:;
    if (((*(signed char *)((v0_1 + 0xB0))) != 0)) goto L_8C048F3C;
    v0_10 = (0xAE8);
    w0_9 = (0.0f);
    if ((!((w0_1 - (*(float *)((v0_0 + 0xAE8)))) > 0.0f))) goto L_8C048EC2;
    v0_11 = (0x1);
    L_8C048ED2:;
    if ((!(((*(float *)((v0_0 + 0xA34))) - (*(float *)((v0_0 + v0_10)))) > 0.0f))) goto L_8C048EF8;
    v0_10 = (0x1);
    L_8C048F0E:;
    if ((v0_11 != v0_10)) goto L_8C048F3C;
    v0_10 = (0xAE8);
    if ((0.0f > (w0_1 - (*(float *)((v0_0 + 0xAE8)))))) goto L_8C048F28;
    w0_9 = ((w0_1 - (*(float *)((v0_0 + v0_10)))));
    L_8C048F30:;
    if ((!(w0_9 > 10.0f))) goto L_8C048F3C;
    w0_4 = (w0_1);
    goto L_8C048F46;
    L_8C048F28:;
    w0_9 = (((-w0_1) + (*(float *)((v0_0 + v0_10)))));
    goto L_8C048F30;
    L_8C048EF8:;
    if ((!(0.0f > ((*(float *)((v0_0 + 0xA34))) - (*(float *)((v0_0 + 0xAE8))))))) goto L_8C048F0C;
    v0_10 = (0xFFFFFFFF);
    goto L_8C048F0E;
    L_8C048F0C:;
    v0_10 = (0x0);
    goto L_8C048F0E;
    L_8C048EC2:;
    w0_0 = *(float *)((v0_0 + v0_10));
    w0_10 = ((w0_1 - w0_0));
    if ((!(w0_9 > (w0_1 - w0_0)))) goto L_8C048ED0;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048ED2;
    L_8C048ED0:;
    v0_11 = (0x0);
    goto L_8C048ED2;
    L_8C048EA4:;
    w0_1 = ((*(float *)(((int)stk + 80))));
    goto L_8C048EA8;
    L_8C048E90:;
    if ((!(w0_9 > w0_4))) goto L_8C048E98;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048E9A;
    L_8C048E98:;
    v0_11 = (0x0);
    goto L_8C048E9A;
    L_8C048810:;
    v0_10 = (0xA24);
    if (((*(int *)((v0_0 + 0xA24))) != 0)) goto L_8C04881C;
    goto L_8C048F5A;
    L_8C04881C:;
    *(unsigned char *)((v0_1 + 0x12C)) = (*(int *)((((*(int *)((v0_0 + 0xC58))) << 2) + 0x8C159F50)));
    v0_11 = *(int *)((v0_5 + 0x54));
    v0_10 = (v0_11);
    if (((v0_11 & 4) != 0)) goto L_8C048836;
    w0_8 = *(float *)((v0_0 + 0xAF0));
    w0_9 = *(float *)((v0_1 + 0x30));
    w0_4 = (10.0f);
    w0_1 = ((w0_9 * 10.0f));
    w0_5 = (w0_8);
    w0_7 = ((w0_8 + (w0_9 * 10.0f)));
    if ((0.0f > (w0_8 + (w0_9 * 10.0f)))) goto L_8C0489B0;
    w0_9 = (w0_7);
    L_8C0489B8:;
    if ((!(59.4249992f > w0_9))) goto L_8C0489C8;
    *(unsigned char *)((v0_1 + 0x12B)) = 0x2;
    L_8C048A30:;
    if (((int)(*(signed char *)((v0_1 + 0x12C))) <= (int)(*(signed char *)((v0_1 + 0x12B))))) goto L_8C048AEE;
    v0_5 = *(int *)((v0_3 + 0xB5C));
    *(unsigned int *)(((int)stk + 36)) = ((v0_5 * v0_7) + v0_6);
    v0_5 = *(short *)((((v0_5 * v0_7) + v0_6) + 0x118));
    *(unsigned int *)(((int)stk + 40)) = v0_5;
    if (((int)v0_5 <= (int)0x1E)) goto L_8C048A68;
    v0_5 = (int)((*(int *)(((int)stk + 40))) - (((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 28) + 0x28), v0_8, v0_9, w0_4, w0_1, w0_5, w0_7, w0_6))) < (int)0x14;
    if (v0_5) goto L_8C048AE6;
    L_8C048A68:;
    v0_5 = (*(short *)(((*(int *)(((int)stk + 36))) + 0x118)));
    *(int *)((int)stk + 24) = v0_5;
    v0_5 = (int)(v0_5 - (((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 24) + 0x2C), v0_8, v0_9, w0_4, w0_1, w0_5, w0_7, w0_6))) >= (int)0x1E;
    if (v0_5) goto L_8C048AEE;
    w0_8 = *(float *)((v0_3 + 0xB9C));
    v0_10 = (0xB9C);
    w0_9 = (w0_8);
    if ((0.0f > w0_8)) goto L_8C048A92;
    w0_9 = ((*(float *)((v0_3 + v0_10))));
    L_8C048A94:;
    if ((!(w0_9 > 32.920002f))) goto L_8C048AEE;
    w0_8 = *(float *)((v0_0 + 0xAE8));
    w0_10 = (w0_8);
    w0_9 = (0.0f);
    if ((!(w0_8 > 0.0f))) goto L_8C048AAA;
    v0_10 = (0x1);
    L_8C048AB4:;
    w0_8 = *(float *)((v0_3 + 0xB9C));
    w0_10 = (w0_8);
    w0_9 = (0.0f);
    if ((!(w0_8 > 0.0f))) goto L_8C048AC2;
    v0_12 = (0x1);
    L_8C048AE2:;
    if ((v0_10 != v0_12)) goto L_8C048AEE;
    L_8C048AE6:;
    *(unsigned char *)((v0_1 + 0x12B)) = ((*(signed char *)((v0_1 + 0x12B))) + 0x1);
    L_8C048AEE:;
    w0_8 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + 1.0f);
    w0_8 = ((*(float *)((v0_0 + 0xB00))) * w0_8);
    v0_5 = ((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 28) + 0x34), v0_8, v0_9, w0_4, w0_1, w0_5, w0_7, w0_6);
    v0_8 = (v0_5);
    w0_8 = ((-(w0_8 * w0_0)));
    if (((int)v0_5 < 0)) goto L_8C048C04;
    v0_5 = *(int *)((v0_3 + 0xB5C));
    v0_9 = *(short *)((((v0_5 * v0_7) + v0_6) + 0x118));
    v0_10 = (int)(v0_9 - v0_8) >= (int)v0_4;
    v0_5 = (((v0_5 * v0_7) + v0_6));
    v0_8 = ((v0_9 - v0_8));
    if (v0_10) goto L_8C048B32;
    v0_8 = (v0_4);
    L_8C048B32:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x34)); }
    cpuShotRangeFix(v0_3, v0_8, (((int)stk + 16) + 0x34), (((int)stk + 16) + 0x28), *(Stk3 *)(((int)stk + 16)));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 68))) - (*(float *)((v0_3 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 64))) - (*(float *)((v0_3 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    *(float *)(((int)stk + 28)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_8));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 56))) - (*(float *)((v0_3 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 64))) - (*(float *)((v0_3 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    w0_0 = *(float *)(((int)stk + 28));
    w0_3 = *(float *)((v0_3 + 0xB9C));
    w0_4 = (w0_3);
    w0_1 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_8)));
    w0_7 = ((w0_0 - w0_3));
    w0_6 = (0.699999988f);
    if ((0.0f > (w0_0 - w0_3))) goto L_8C048BD2;
    w0_9 = (w0_7);
    L_8C048BDA:;
    w0_10 = (0.0f);
    w0_5 = ((w0_1 - w0_4));
    if ((0.0f > (w0_1 - w0_4))) goto L_8C048BE8;
    w0_10 = (w0_5);
    L_8C048BEE:;
    if ((!(w0_10 > w0_9))) goto L_8C048BF8;
    F0 = (w0_6);
    w0_1 = ((w0_1 * w0_2));
    L_8C048BFC:;
    w0_0 = w0_1;
    w0_0 = w0_0 + F0 * (*(float *)(((int)stk + 28)));
    w0_4 = (w0_0);
    goto L_8C048F46;
    L_8C048BF8:;
    F0 = (w0_2);
    w0_1 = ((w0_1 * w0_6));
    goto L_8C048BFC;
    L_8C048BE8:;
    w0_10 = (((-w0_1) + w0_4));
    goto L_8C048BEE;
    L_8C048BD2:;
    w0_9 = (((-(*(float *)(((int)stk + 28)))) + w0_4));
    goto L_8C048BDA;
    L_8C048C04:;
    w0_1 = *(float *)((v0_3 + 0xB9C));
    v0_10 = (0xB9C);
    w0_4 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C048C38;
    w0_9 = (w0_4);
    L_8C048C3C:;
    if ((!(w0_9 > w0_3))) goto L_8C048CC6;
    w0_4 = *(float *)((v0_3 + 0xB00));
    w0_5 = *(float *)((v0_3 + 0xBA4));
    w0_2 = *(float *)((v0_3 + 0xB9C));
    *(float *)(((int)stk + 32)) = w0_2;
    w0_10 = (0.0f);
    w0_1 = (0.0f);
    w0_5 = (((w0_4 * w0_0) - w0_5));
    if ((!(w0_2 > 0.0f))) goto L_8C048C64;
    v0_11 = (0x1);
    L_8C048C72:;
    *(Stk3 *)(((int)stk + 16)) = vecMake((((float)v0_11 * w0_3) - (*(float *)(((int)stk + 32)))), w0_1, w0_5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    w0_0 = *(float *)((v0_3 + 0xB9C));
    F0 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_8)));
    w0_9 = (0.0f);
    w0_1 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C048CAC;
    v0_11 = (0x1);
    L_8C048CB6:;
    w0_4 = ((F0 - ((float)v0_11 * 20.0f)));
    goto L_8C048F46;
    L_8C048CAC:;
    if ((!(w0_9 > w0_1))) goto L_8C048CB4;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048CB6;
    L_8C048CB4:;
    v0_11 = (0x0);
    goto L_8C048CB6;
    L_8C048C64:;
    if ((!(w0_10 > (*(float *)(((int)stk + 32)))))) goto L_8C048C70;
    v0_11 = (0xFFFFFFFF);
    goto L_8C048C72;
    L_8C048C70:;
    v0_11 = (0x0);
    goto L_8C048C72;
    L_8C048CC6:;
    w0_0 = *(float *)((v0_3 + v0_10));
    w0_4 = (w0_0);
    w0_1 = (24.1500015f);
    if ((0.0f > w0_0)) goto L_8C048CD6;
    w0_9 = (w0_4);
    L_8C048CDA:;
    if ((w0_9 > w0_1)) goto L_8C048CE2;
    goto L_8C048F46;
    L_8C048CE2:;
    w0_9 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C048CEC;
    v0_10 = (0x1);
    L_8C048CF6:;
    w0_4 = (((float)v0_10 * w0_1));
    goto L_8C048F46;
    L_8C048CEC:;
    if ((!(w0_9 > w0_4))) goto L_8C048CF4;
    v0_10 = (0xFFFFFFFF);
    goto L_8C048CF6;
    L_8C048CF4:;
    v0_10 = (0x0);
    goto L_8C048CF6;
    L_8C048CD6:;
    w0_9 = ((-w0_4));
    goto L_8C048CDA;
    L_8C048C38:;
    w0_9 = ((-w0_4));
    goto L_8C048C3C;
    L_8C048AC2:;
    if ((!(w0_9 > w0_10))) goto L_8C048AE0;
    v0_12 = (0xFFFFFFFF);
    goto L_8C048AE2;
    L_8C048AE0:;
    v0_12 = (0x0);
    goto L_8C048AE2;
    L_8C048AAA:;
    if ((!(w0_9 > w0_10))) goto L_8C048AB2;
    v0_10 = (0xFFFFFFFF);
    goto L_8C048AB4;
    L_8C048AB2:;
    v0_10 = (0x0);
    goto L_8C048AB4;
    L_8C048A92:;
    w0_9 = ((-w0_9));
    goto L_8C048A94;
    L_8C0489C8:;
    w0_8 = *(float *)((v0_0 + 0xAF0));
    w0_9 = *(float *)((v0_1 + 0x30));
    w0_1 = ((w0_8 + (w0_9 * w0_4)));
    w0_5 = (w0_8);
    w0_7 = ((w0_9 * w0_4));
    if ((0.0f > (w0_8 + (w0_9 * w0_4)))) goto L_8C0489E0;
    w0_9 = (w0_1);
    L_8C0489E8:;
    if ((95.0800018f > w0_9)) goto L_8C0489FE;
    if (!(((*(int *)((((*(int *)((v0_0 + 0xC58))) << 2) + 0x8C159F50))) == 0))) goto L_8C0489FE;
    *(unsigned char *)((v0_1 + 0x12B)) = v0_2;
    goto L_8C048A30;
    L_8C0489FE:;
    *(unsigned char *)((v0_1 + 0x12B)) = v0_4;
    goto L_8C048A30;
    L_8C0489E0:;
    w0_9 = (((-w0_5) - w0_7));
    goto L_8C0489E8;
    L_8C0489B0:;
    w0_9 = (((-w0_5) - w0_1));
    goto L_8C0489B8;
    L_8C048836:;
    if ((((*(int *)0x8C287B3C) & 0x4000) == 0)) goto L_8C048878;
    v0_3 = (int)((int)(((*(int *)(((v0_8 + 0x44) + 0x0))) + (*(int *)(((v0_8 + 0x44) + 0x4)))) + 0x6) % (int)0x6);
    v0_3 = (int)((unsigned int)((int)((unsigned int)v0_3 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_3)) ? 1u : 0u));
    v0_10 = (((v0_3 >> 1) + 0x2));
    if (((int)((v0_3 >> 1) + 0x2) < 0)) goto L_8C048864;
    v0_10 = ((v0_10 & 0x1));
    L_8C04886E:;
    v0_8 = (((((-v0_10) + 0x1) << 1) - 1));
    L_8C0488CE:;
    w0_1 = ((float)(-v0_8));
    w0_5 = (28.8050003f);
    if ((!((*(float *)((v0_0 + 0xC90))) > 1.39999998f))) goto L_8C048952;
    if (((*(signed char *)((v0_1 + 0x12B))) != 0)) goto L_8C048920;
    w0_8 = (((*(float *)((v0_0 + 0xB00))) * w0_0));
    L_8C04892C:;
    w0_0 = *(float *)((v0_5 + 0x58));
    w0_8 = ((-w0_8));
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C04893C;
    w0_9 = (w0_4);
    L_8C048940:;
    if ((w0_9 > w0_5)) goto L_8C048984;
    w0_4 = (((float)v0_8 * 8.2300005f));
    goto L_8C048F46;
    L_8C048984:;
    w0_9 = (32.920002f);
    L_8C04898E:;
    w0_4 = ((w0_1 * w0_9));
    goto L_8C048F46;
    L_8C04893C:;
    w0_9 = ((-w0_4));
    goto L_8C048940;
    L_8C048920:;
    w0_0 = *(float *)((v0_0 + 0xB00));
    w0_10 = ((w0_0 * 83.1949997f));
    w0_8 = ((w0_0 * 83.1949997f));
    goto L_8C04892C;
    L_8C048952:;
    w0_3 = *(float *)((v0_5 + 0x58));
    w0_2 = ((-((float)(*(signed char *)((v0_1 + 0x12B))) * w0_2)) + 1.0f);
    w0_2 = ((*(float *)((v0_0 + 0xB00))) * w0_2);
    F0 = ((w0_2 * w0_0));
    w0_10 = (1.0f);
    w0_8 = ((-(w0_2 * w0_0)));
    w0_4 = (w0_3);
    if ((0.0f > w0_3)) goto L_8C04897C;
    w0_9 = (w0_4);
    L_8C048980:;
    if ((!(w0_9 > w0_5))) goto L_8C04898A;
    goto L_8C048984;
    L_8C04898A:;
    w0_9 = (2.05750012f);
    goto L_8C04898E;
    L_8C04897C:;
    w0_9 = ((-w0_4));
    goto L_8C048980;
    L_8C048864:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x1)) + 0x1));
    goto L_8C04886E;
    L_8C048878:;
    v0_3 = *(int *)(((v0_8 + 0x44) + 0x0));
    v0_4 = *(int *)(((v0_8 + 0x44) + 0x4));
    v0_10 = (((v0_3 + v0_4) + 0x2));
    if (((int)((v0_3 + v0_4) + 0x2) < 0)) goto L_8C04888C;
    v0_10 = ((v0_10 & 0x1));
    L_8C048896:;
    v0_3 = *(int *)(((v0_8 + 0x34) + 0x0));
    v0_4 = *(int *)(((v0_8 + 0x34) + 0x4));
    v0_3 = (int)((unsigned int)((int)((unsigned int)(v0_3 + v0_4) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_3 + v0_4))) ? 1u : 0u));
    v0_4 = ((-(v0_10 << 1)) + 0x1);
    v0_10 = (((v0_3 >> 1) + 0x2));
    v0_8 = v0_4;
    if (((int)((v0_3 >> 1) + 0x2) < 0)) goto L_8C0488BA;
    v0_10 = ((v0_10 & 0x1));
    L_8C0488C4:;
    v0_8 = ((v0_8 * ((-(v0_10 << 1)) + 0x1)));
    goto L_8C0488CE;
    L_8C0488BA:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x1)) + 0x1));
    goto L_8C0488C4;
    L_8C04888C:;
    v0_10 = (((~(((~v0_10) + 0x1) & 0x1)) + 0x1));
    goto L_8C048896;
    L_8C0487A2:;
    if ((!(w0_4 > w0_9))) goto L_8C0487AA;
    v0_10 = (0x1);
    L_8C0487B6:;
    if ((!(0.0f > (w0_1 + (float)((v0_10 << 2) + v0_10))))) goto L_8C0487F8;
    v0_12 = (0xFFFFFFFF);
    goto L_8C0487FA;
    L_8C0487F8:;
    v0_12 = (0x0);
    goto L_8C0487FA;
    L_8C0487AA:;
    if ((!(0.0f > w0_4))) goto L_8C0487B4;
    v0_10 = (0xFFFFFFFF);
    goto L_8C0487B6;
    L_8C0487B4:;
    v0_10 = (0x0);
    goto L_8C0487B6;
    L_8C048780:;
    if ((!(w0_9 > w0_4))) goto L_8C048788;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04878A;
    L_8C048788:;
    v0_10 = (0x0);
    goto L_8C04878A;
    L_8C048760:;
    if ((!(w0_9 > w0_7))) goto L_8C048768;
    v0_11 = (0xFFFFFFFF);
    goto L_8C04876A;
    L_8C048768:;
    v0_11 = (0x0);
    goto L_8C04876A;
}

int FUN_8c0a8cec(int a4, float f4, float f5)
{
    int stk[30];

    register int R2;
    register int R7;
    int R11;
    register float F1;
    register float F2;
    register float F3;
    register float F4;
    register float F6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    v0_8 = a4;
    w0_0 = f5;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 24)) = 0x0;
    v0_0 = *(int *)((v0_8 + 0x18));
    *(unsigned int *)((((v0_0 * 0xD78) + 0x8C287D84) + 0x38)) = (*(int *)((((*(int *)(((v0_0 * 0x38) + 0x8C343264))) << 2) + 0x8C11098C)));
    w0_1 = *(float *)((0x8C102428 + ((*(int *)(((((*(int *)((v0_8 + 0x18))) * 0x38) + 0x8C343264) + 0x0))) * 0x6C)));
    *(float *)((((v0_0 * 0xD78) + 0x8C287D84) + 0x4C)) = w0_1;
    *(unsigned int *)((((v0_0 * 0xD78) + 0x8C287D84) + 0xC58)) = (*(int *)((((*(int *)((v0_8 + 0x18))) * 0x38) + 0x8C343264)));
    *(unsigned int *)((v0_8 + 0x44)) = (*(int *)((((v0_0 * 0xD78) + 0x8C287D84) + 0xC58)));
    *(unsigned int *)((((v0_0 * 0xD78) + 0x8C287D84) + 0xD4C)) = (*(int *)((((*(int *)((((v0_0 * 0xD78) + 0x8C287D84) + 0xC58))) * 0x6C) + 0x8C102460)));
    v0_0 = *(int *)((v0_8 + 0x18));
    v0_1 = *(int *)((((v0_0 * 0x38) + 0x8C343264) + 0x30));
    v0_4 = *(int *)((((v0_0 * 0x38) + 0x8C343264) + 0x4));
    *(volatile int *)(((0x8 + ((v0_0 * 0x38) + 0x8C343264)) + 0x0));
    *(unsigned int *)(((int)stk + 20)) = v0_1;
    v0_0 = *(int *)((((v0_0 * 0x38) + 0x8C343264) + 0x0));
    *(unsigned int *)(((int)stk + 16)) = 0x8C1853C0;
    *(unsigned int *)(((int)stk + 28)) = 0x8C185378;
    v0_1 = (0x8C343258);
    R11 = (0x1);
    v0_2 = (0x0);
    v0_3 = (v0_0);
    v0_0 = (v0_8);
    v0_8 = (0x8C185378);
    v0_7 = (0x0);
    v0_6 = (0x0);
    v0_4 = (v0_4);
    v0_5 = (0x38);
    L_8C0A8DB6:;
    if (((int)v0_7 < (int)0x9)) goto L_8C0A8D9A;
    if (((*(int *)0x8C287D5C) != 0)) goto L_8C0A8DD8;
    if (((*(int *)0x8C287ADC) != 4)) goto L_8C0A8DD8;
    if (((int)(*(int *)0x8C343AB4) <= (int)0x3)) goto L_8C0A8DD8;
    *(unsigned int *)(((int)stk + 24)) = R11;
    L_8C0A8DD8:;
    if (((*(int *)(((v0_3 << 2) + 0x8C1AFA64))) == 0)) goto L_8C0A8E46;
    if (((*(int *)(((((*(int *)((v0_0 + 0x18))) * v0_5) + (v0_1 + 0xC)) + 0x30))) == -1)) goto L_8C0A8E0C;
    if (!(((*(int *)(((((*(int *)(((int)stk + 20))) << 2) + (0x8C1AF8A4 + (v0_4 * 0x70))) + 0x0))) == 0))) goto L_8C0A8E0C;
    *(unsigned int *)(((int)stk + 32)) = v0_2;
    goto L_8C0A8E46;
    L_8C0A8E0C:;
    *(unsigned int *)(((int)stk + 32)) = R11;
    L_8C0A8E46:;
    v0_8 = ((*(int *)((v0_0 + 0x18))));
    if (((*(int *)((v0_0 + 0x40))) == (*(int *)((v0_0 + 0x44))))) goto L_8C0A8E56;
    v0_6 = (R11);
    L_8C0A8E56:;
    if (((unsigned short)(*(short *)((((v0_8 * v0_5) + (v0_1 + 0xC)) + 0x14))) != 1)) goto L_8C0A8E6A;
    *(unsigned int *)(((int)stk + 12)) = R11;
    L_8C0A8E6A:;
    if (((int)(unsigned short)(*(short *)(((((*(int *)((v0_0 + 0x18))) * v0_5) + (v0_1 + 0xC)) + 0x14))) <= 0)) goto L_8C0A8E90;
    v0_7 = *(int *)((v0_0 + 0x18));
    *(unsigned short *)((((v0_7 * v0_5) + (v0_1 + 0xC)) + 0x14)) = ((*(short *)((((v0_7 * v0_5) + (v0_1 + 0xC)) + 0x14))) + 0x1);
    L_8C0A8E90:;
    *(unsigned int *)((v0_0 + 0x40)) = (*(int *)((v0_0 + 0x44)));
    if (!(((int)v0_3 >= 0))) goto L_8C0A9390;
    if (((*(int *)0x8C20D14C) == 1)) goto L_8C0A8EAC;
    goto L_8C0A9390;
    L_8C0A9390:;
    *(unsigned int *)(((((*(int *)((v0_0 + 0x18))) * v0_5) + (v0_1 + 0xC)) + 0x28)) = v0_2;
    L_8C0A939E:;
    v0_8 = ((nlCloseEvent(v0_0)));
    L_8C0A94A6:;
    return v0_8;
    L_8C0A8EAC:;
    if (((*(int *)((((*(int *)((v0_0 + 0x18))) * 0x38) + 0x8C34328C))) == 0)) goto L_8C0A8EC0;
    goto L_8C0A9390;
    L_8C0A8EC0:;
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A8EDC;
    if (((*(int *)((((*(int *)((v0_0 + 0x18))) * 0x38) + 0x8C34326C))) == 0)) goto L_8C0A8EDC;
    goto L_8C0A939E;
    L_8C0A8EDC:;
    v0_9 = *(int *)0x8C34390C;
    v0_8 = (v0_9);
    v0_7 = (0x8C34390C);
    if ((v0_9 == 0)) goto L_8C0A8EF2;
    if (((*(int *)((v0_0 + 0x18))) != (v0_8 - 1))) goto L_8C0A8EF2;
    *(unsigned int *)((v0_7 + 0x0)) = v0_2;
    goto L_8C0A939E;
    L_8C0A8EF2:;
    if (((*(int *)((v0_0 + 0x4C))) != 0)) goto L_8C0A8FB2;
    if ((v0_6 == 0)) goto L_8C0A8FB2;
    if (((*(int *)((v0_0 + 0x60))) == v0_3)) goto L_8C0A8FB2;
    if (((*(int *)((v0_0 + 0x18))) != 0)) goto L_8C0A8F2C;
    *(unsigned int *)0x8C343AB8 = v0_2;
    L_8C0A8F30:;
    *(unsigned int *)((v0_0 + 0x28)) = ((int)((int)(nlRand()) % (int)0x17));
    if (((*(int *)(((v0_3 << 2) + 0x8C110CB4))) == 0)) goto L_8C0A8F7A;
    v0_6 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_6;
    v0_7 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    v0_8 = (*(int *)((((*(int *)((v0_7 + 0xC58))) * 0x6C) + 0x8C102424)));
    *(int *)((int)stk + 4) = v0_8;
    v0_7 = *(int *)((v0_0 + 0x28));
    w0_1 = *(float *)0x8C23D204;
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = v0_8;
    v0_8 = (0x8C110BE4);
    v0_7 = (((v0_7 << 2) << 1));
    v0_6 = (0x1);
    R7 = (0x12755C);
    F4 = (w0_1);
    L_8C0A8FA6:;
    motionSet((*(int *)(((int)stk + 16))), (*(int *)((v0_7 + v0_8))), v0_6, R7, *(int *)((int)stk + 4), *(int *)((int)stk + 8), F4);
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    L_8C0A8FB2:;
    v0_8 = (0x54);
    if (((*(int *)((v0_0 + 0x54))) == 0)) goto L_8C0A9014;
    v0_9 = *(int *)((v0_0 + v0_8));
    v0_8 = (v0_9);
    if (((int)v0_9 <= (int)0xF)) goto L_8C0A9004;
    if (((int)v0_8 > (int)0x46)) goto L_8C0A9004;
    *(unsigned int *)(((*(int *)((v0_0 + 0x5C))) + 0xD10)) = R11;
    L_8C0A900C:;
    *(unsigned int *)((v0_0 + 0x54)) = ((*(int *)((v0_0 + 0x54))) + 0x1);
    L_8C0A9014:;
    if (((*(int *)((v0_0 + 0x4C))) != 0)) goto L_8C0A90B2;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0A90B2;
    if (((*(int *)((v0_0 + 0x54))) != 0)) goto L_8C0A90B2;
    sndSeDecide();
    *(unsigned int *)0x8C1855C0 = ((*(int *)0x8C1855C0) + 0x1);
    *(unsigned int *)((v0_0 + 0x4C)) = R11;
    *(unsigned int *)((v0_0 + 0x28)) = 0x17;
    v0_8 = (0x8C1855C0);
    F4 = ((*(float *)0x8C23D204));
    if (((*(int *)(((v0_3 << 2) + 0x8C110CB4))) == 0)) goto L_8C0A906E;
    v0_8 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_8;
    v0_9 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 12)) = v0_9;
    v0_9 = *(int *)((((*(int *)((v0_9 + 0xC58))) * 0x6C) + 0x8C102424));
    *(unsigned int *)(((int)stk + 8)) = v0_8;
    v0_8 = (v0_9);
    L_8C0A9088:;
    v0_8 = v0_8;
    *(int *)((int)stk + 4) = v0_8;
    motionSet((*(int *)(((int)stk + 12))), (*(int *)(((((*(int *)((v0_0 + 0x28))) << 2) << 1) + 0x8C110BE4))), 0x0, 0x12755C, v0_8, *(int *)((int)stk + 8), F4);
    *(float *)(((*(int *)((v0_0 + 0x5C))) + 0xC)) = 30.0f;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    *(unsigned int *)((v0_0 + 0x54)) = R11;
    L_8C0A90B2:;
    w0_1 = (1.0f);
    if (((*(int *)((v0_0 + 0x4C))) != 0)) goto L_8C0A918C;
    if (((float)(*(int *)((v0_0 + 0x30))) > ((float)(*(int *)(((*(int *)((v0_0 + 0x5C))) + 0x30))) * 0.75f))) goto L_8C0A90DC;
    if (((*(int *)((v0_0 + 0x30))) != -1)) goto L_8C0A918C;
    L_8C0A90DC:;
    *(unsigned int *)((v0_0 + 0x30)) = v0_2;
    v0_6 = *(int *)((v0_0 + 0x2C));
    *(unsigned int *)((v0_0 + 0x2C)) = (v0_6 + 0x1);
    if ((((v0_6 + 0x1) & R11) != 0)) goto L_8C0A9134;
    v0_8 = (((int)((int)(nlRand()) % (int)0xD)));
    L_8C0A9144:;
    *(unsigned int *)((v0_0 + 0x28)) = v0_8;
    *(unsigned int *)(((int)stk + 12)) = 0x8C2873D0;
    if (((*(int *)(((v0_3 << 2) + 0x8C110CB4))) == 0)) goto L_8C0A916C;
    v0_7 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(int *)((int)stk + 8) = v0_7;
    v0_6 = *(int *)((v0_0 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    v0_8 = (0x8C110BE4);
    v0_7 = (((v0_6 << 2) << 1));
    v0_6 = (0x14);
    R7 = (0x0);
    F4 = (w0_1);
    L_8C0A9180:;
    motionChange((*(int *)((v0_0 + 0x5C))), (*(int *)((v0_7 + v0_8))), v0_6, R7, *(int *)((int)stk + 8), F4, w0_0);
    L_8C0A918C:;
    if (((*(int *)((v0_0 + 0x4C))) == 0)) goto L_8C0A9216;
    *(unsigned int *)((v0_0 + 0x34)) = ((*(int *)((v0_0 + 0x34))) + 0x1);
    *(unsigned int *)((v0_0 + 0x38)) = ((*(int *)((v0_0 + 0x38))) + 0x1);
    if (((*(int *)((v0_0 + 0x34))) != 80)) goto L_8C0A9216;
    v0_9 = *(int *)((v0_0 + 0x18));
    v0_8 = (v0_9);
    if ((v0_9 == 0)) goto L_8C0A91B2;
    if (!((v0_8 != 1))) goto L_8C0A91B2;
    *(unsigned int *)((v0_0 + 0x28)) = 0x1A;
    v0_8 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_8;
    motionChange((*(int *)((v0_0 + 0x5C))), 0x10943C, 0x1E, 0x1, v0_8, w0_1, w0_0);
    *(unsigned int *)((v0_0 + 0x50)) = 0x1;
    goto L_8C0A9216;
    L_8C0A91B2:;
    *(unsigned int *)((v0_0 + 0x28)) = 0x19;
    v0_8 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_8;
    motionChange((*(int *)((v0_0 + 0x5C))), 0x10D2D8, 0x1E, 0x1, v0_8, w0_1, w0_0);
    *(unsigned int *)((v0_0 + 0x50)) = v0_2;
    L_8C0A9216:;
    motionAdvance((*(int *)((v0_0 + 0x5C))));
    nlPushMatrix(0x0);
    if (((*(int *)0x8C287D5C) != 2)) goto L_8C0A923C;
    nlTranslate(8.0f, 21.0f, 95.0f);
    L_8C0A923C:;
    nlTranslate((*(float *)((v0_0 + 0x1C))), (*(float *)((v0_0 + 0x20))), (*(float *)((v0_0 + 0x24))));
    w0_1 = (0.0f);
    if (((*(int *)((v0_0 + 0x4C))) != 1)) goto L_8C0A92FE;
    nlPushUnitMatrix();
    v0_8 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 12)) = v0_8;
    w0_2 = *(float *)((v0_8 + 0xC));
    v0_8 = *(int *)(((int)stk + 12));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x24);
    motionRootAtFrame(v0_8, (int)w0_2, 0x0, 0x0, (((int)stk + 12) + 0x24));
    v0_8 = *(int *)((v0_0 + 0x5C));
    v0_9 = *(int *)((v0_8 + 0x48));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 12) + 0x18)) = *(struct mv3 *)((((((v0_9 << 1) + v0_9) << 2) << 2) + (v0_8 + 0x60))); }
    *(float *)(((int)stk + 40)) = w0_1;
    nlCalcPoint((((int)stk + 12) + 0x18), (((int)stk + 12) + 0x24));
    nlPopMatrix(0x1);
    if (((*(int *)((0xD4C + (*(int *)((v0_0 + 0x5C)))))) != 1)) goto L_8C0A92D6;
    w0_2 = *(float *)(((int)stk + 56));
    w0_3 = *(float *)(((int)stk + 52));
    w0_4 = *(float *)(((int)stk + 48));
    *(int *)((int)stk + 8) = (((int)stk + 12) + 0x24);
    *(Stk3 *)((((int)stk + 12) + 0x24)) = vecMake((-w0_4), w0_3, w0_2);
    L_8C0A92D6:;
    nlAddVector(((*(int *)((v0_0 + 0x5C))) + 0xAE8), (((int)stk + 12) + 0x24));
    v0_8 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 12)) = v0_8;
    nlTranslate((*(float *)((v0_8 + 0xAE8))), (*(float *)((v0_8 + 0xAEC))), (*(float *)((v0_8 + 0xAF0))));
    L_8C0A92FE:;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C0A930A;
    if (((*(int *)(((int)stk + 24))) != 0)) goto L_8C0A9316;
    L_8C0A930A:;
    nlTranslate(w0_1, 500.0f, w0_1);
    L_8C0A9316:;
    playerPut((*(int *)((v0_0 + 0x5C))), v0_7, v0_6, R7, F4, w0_0, F6);
    nlPopMatrix(0x1);
    *(unsigned int *)((v0_0 + 0x60)) = v0_3;
    v0_6 = ((*(int *)(((((*(int *)((v0_0 + 0x18))) * v0_5) + (v0_1 + 0xC)) + 0x28))));
    if ((v0_6 == 0)) goto L_8C0A93A8;
    goto L_8C0A9390;
    L_8C0A93A8:;
    if (((*(int *)((v0_0 + 0x3C))) != 0)) goto L_8C0A93C4;
    muneSlotReset(v0_4, v0_3);
    L_8C0A93CC:;
    *(unsigned int *)(((int)stk + 24)) = (unsigned short)(*(short *)(((((*(int *)((v0_0 + 0x18))) * v0_5) + (v0_1 + 0xC)) + 0x14)));
    if (((*(int *)(((v0_4 << 2) + 0x8C3438D8))) == 0)) goto L_8C0A93F4;
    uniformSlotLoad(v0_4, (*(int *)(((int)stk + 20))), v0_3, R7, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4));
    L_8C0A93F4:;
    v0_1 = (unlockCountW0()) == 0;
    if (v0_1) goto L_8C0A943A;
    if (((*(int *)0x8C287D5C) == 2)) goto L_8C0A943A;
    if (((*(int *)((((*(int *)((v0_0 + 0x18))) * 0x38) + 0x8C34326C))) != 0)) goto L_8C0A943A;
    if (((*(int *)(((v0_4 << 2) + 0x8C3438D8))) != 0)) goto L_8C0A943A;
    if (((*(int *)(((v0_3 << 2) + 0x8C1AFA64))) == 0)) goto L_8C0A943A;
    if (((*(int *)(((int)stk + 24))) == 0)) goto L_8C0A943A;
    uniformSlotReset(v0_4, (*(int *)(((int)stk + 20))));
    L_8C0A943A:;
    *(unsigned int *)((v0_0 + 0x30)) = ((*(int *)((v0_0 + 0x30))) + 0x1);
    *(unsigned int *)((v0_0 + 0x3C)) = ((*(int *)((v0_0 + 0x3C))) + 0x1);
    if (((*(int *)((v0_0 + 0x28))) != 25)) goto L_8C0A9476;
    if (((*(float *)(((*(int *)((v0_0 + 0x5C))) + 0xC))) != 179.0f)) goto L_8C0A9476;
    v0_1 = *(int *)((v0_0 + 0x5C));
    *(int *)((int)stk + 8) = (0xAE8 + v0_1);
    *(Stk3 *)((0xAE8 + v0_1)) = vecMake(0.519789994f, w0_1, -0.167899996f);
    L_8C0A9476:;
    v0_1 = *(int *)((v0_0 + 0x28));
    v0_8 = (v0_1);
    if ((v0_1 != 26)) goto L_8C0A94A6;
    v0_8 = (0xC);
    if (((*(float *)(((*(int *)((v0_0 + 0x5C))) + 0xC))) != 119.0f)) goto L_8C0A94A6;
    v0_0 = *(int *)((v0_0 + 0x5C));
    *(int *)((int)stk + 8) = (0xAE8 + v0_0);
    *(Stk3 *)((0xAE8 + v0_0)) = vecMake(0.497299999f, w0_1, -0.223199993f);
    goto L_8C0A94A6;
    L_8C0A93C4:;
    muneSlotLoad(v0_4, v0_3);
    goto L_8C0A93CC;
    L_8C0A916C:;
    v0_7 = (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)));
    *(int *)((int)stk + 8) = v0_7;
    v0_6 = *(int *)((v0_0 + 0x28));
    *(unsigned int *)(((int)stk + 8)) = v0_7;
    v0_8 = (0x8C110B14);
    v0_7 = (((v0_6 << 2) << 1));
    v0_6 = (0x14);
    R7 = (0x0);
    F4 = (w0_1);
    goto L_8C0A9180;
    L_8C0A9134:;
    v0_8 = ((((int)((int)(nlRand()) % (int)0xA)) + 0xD));
    goto L_8C0A9144;
    L_8C0A906E:;
    v0_8 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_8;
    v0_9 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 12)) = v0_9;
    v0_9 = *(int *)((((*(int *)((v0_9 + 0xC58))) * 0x6C) + 0x8C102424));
    *(unsigned int *)(((int)stk + 8)) = v0_8;
    v0_8 = (v0_9);
    goto L_8C0A9088;
    L_8C0A9004:;
    *(unsigned int *)(((*(int *)((v0_0 + 0x5C))) + 0xD10)) = v0_2;
    goto L_8C0A900C;
    L_8C0A8F7A:;
    v0_6 = (*(int *)0x8C2873D0);
    *(int *)((int)stk + 8) = v0_6;
    v0_7 = *(int *)((v0_0 + 0x5C));
    *(unsigned int *)(((int)stk + 16)) = v0_7;
    v0_8 = (*(int *)((((*(int *)((v0_7 + 0xC58))) * 0x6C) + 0x8C102424)));
    *(int *)((int)stk + 4) = v0_8;
    v0_7 = *(int *)((v0_0 + 0x28));
    w0_1 = *(float *)0x8C23D204;
    *(unsigned int *)(((int)stk + 8)) = v0_6;
    *(unsigned int *)(((int)stk + 4)) = v0_8;
    v0_8 = (0x8C110B14);
    v0_7 = (((v0_7 << 2) << 1));
    v0_6 = (0x1);
    R7 = (0x12755C);
    F4 = (w0_1);
    goto L_8C0A8FA6;
    L_8C0A8F2C:;
    *(unsigned int *)0x8C343ABC = v0_2;
    goto L_8C0A8F30;
    L_8C0A8D9A:;
    v0_8 = ((*(int *)(((int)stk + 28))));
    R7 = ((v0_7 << 2));
    L_8C0A8DAE:;
    if (((unsigned int)v0_8 < (unsigned int)(*(int *)(((int)stk + 16))))) goto L_8C0A8DA2;
    v0_7 = ((v0_7 + 0x1));
    goto L_8C0A8DB6;
    L_8C0A8DA2:;
    v0_9 = v0_3 != (*(int *)((v0_8 + R7)));
    v0_8 = ((v0_8 + 0x24));
    if (v0_9) goto L_8C0A8DAE;
    *(unsigned int *)(((int)stk + 24)) = R11;
    goto L_8C0A8DAE;
}

float FUN_8c04a0a0(int a4, float f4, float f5, float f6, float f7, float f8)
{
    int stk[32];

    register float F0;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_12;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    register float w0_9;
    v0_8 = a4;
    v0_3 = *(int *)((v0_8 + 0xB5C));
    w0_4 = *(float *)(((((0x1 & (v0_3 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    w0_6 = *(float *)0x8C291F44;
    v0_4 = (0x160);
    v0_0 = (0x0);
    v0_1 = (v0_8);
    v0_2 = (((v0_3 * 0x160) + 0x8C2FC69C));
    v0_3 = ((((0x1 & (v0_3 + 0x1)) * 0xD78) + 0x8C287D84));
    v0_9 = (0x8C291F24);
    v0_7 = (0x8C287ACC);
    v0_5 = (0x1);
    v0_6 = (0x8C2FC69C);
    w0_1 = (1.0f);
    w0_2 = (41.1500015f);
    w0_0 = (118.849998f);
    w0_7 = (0.0f);
    w0_3 = ((w0_6 - w0_4));
    w0_5 = (w0_4);
    if ((!((w0_6 - w0_4) > 0.0f))) goto L_8C04A102;
    v0_11 = (0x1);
    L_8C04A10C:;
    w0_3 = *(float *)((v0_9 + 0x2C));
    w0_7 = (0.0f);
    w0_4 = (w0_3);
    w0_6 = ((w0_5 - (*(float *)((v0_9 + 0x14)))));
    if ((!(w0_3 > 0.0f))) goto L_8C04A122;
    v0_10 = (0x1);
    L_8C04A12C:;
    w0_7 = (0.0f);
    if ((!((w0_6 + (float)((v0_10 << 2) + v0_10)) > 0.0f))) goto L_8C04A144;
    v0_10 = (0x1);
    L_8C04A1A0:;
    if ((v0_11 != v0_10)) goto L_8C04A1AE;
    *(unsigned char *)((v0_2 + 0xB0)) = v0_5;
    *(unsigned int *)((v0_1 + 0xA24)) = v0_0;
    v0_11 = (0xA24);
    L_8C04A7FE:;
    return F0;
    L_8C04A1AE:;
    v0_10 = (0x4);
    if ((((*(int *)((v0_3 + 0xB60))) & 0x100) == 0)) goto L_8C04A1BE;
    v0_8 = ((((*(int *)((v0_3 + 0xB5C))) * v0_4) + v0_6));
    if (((int)(*(signed char *)((v0_2 + 0x12C))) <= (int)(*(signed char *)((v0_2 + 0x12B))))) goto L_8C04A69E;
    v0_4 = *(int *)((v0_3 + 0xC5C));
    v0_7 = (v0_4);
    if (((int)v0_4 < (int)0x9)) goto L_8C04A69E;
    if (((int)v0_7 > (int)0xC)) goto L_8C04A69E;
    *(unsigned char *)((v0_2 + 0x12B)) = ((*(signed char *)((v0_2 + 0x12B))) + 0x1);
    *(unsigned char *)((v0_2 + 0xB1)) = v0_0;
    L_8C04A69E:;
    w0_3 = ((-((float)(*(signed char *)((v0_2 + 0x12B))) * 0.300000012f)) + w0_1);
    w0_3 = ((*(float *)((v0_1 + 0xB00))) * w0_3);
    w0_8 = ((w0_3 * w0_0));
    w0_6 = ((-(w0_3 * w0_0)));
    if (((v0_10 & (*(int *)((v0_9 + 0x54)))) == 0)) goto L_8C04A70C;
    if (((int)(*(short *)((v0_8 + 0x118))) >= (int)0x1E)) goto L_8C04A70C;
    w0_6 = ((((*(float *)((v0_1 + 0xAF0))) + (*(float *)((v0_2 + 0x30)))) + (1.0f + 1.0f)));
    L_8C04A7FA:;
    *(float *)((v0_1 + 0xA3C)) = w0_6;
    v0_11 = (0xA3C);
    goto L_8C04A7FE;
    L_8C04A70C:;
    v0_11 = (0x138);
    w0_7 = (0.0f);
    if (((*(float *)((v0_8 + 0x138))) != 0.0f)) goto L_8C04A7FE;
    w0_0 = *(float *)((v0_8 + 0x28));
    w0_4 = (w0_0);
    if ((w0_7 > w0_0)) goto L_8C04A722;
    w0_8 = (w0_4);
    L_8C04A726:;
    v0_11 = (0x8C04A7D0);
    if ((!(w0_8 > 0.5f))) goto L_8C04A7FE;
    v0_11 = (0x118);
    if (((int)(*(short *)((v0_8 + 0x118))) >= (int)0x2D)) goto L_8C04A7FE;
    w0_0 = *(float *)((v0_8 + 0x28));
    w0_7 = (0.0f);
    w0_3 = (26.1500015f);
    w0_5 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C04A74A;
    v0_10 = (0x1);
    L_8C04A754:;
    w0_0 = *(float *)((v0_3 + 0xAE8));
    w0_5 = *(float *)((v0_3 + 0xB9C));
    w0_7 = (0.0f);
    w0_4 = ((w0_5 - w0_0));
    if ((!((w0_5 - w0_0) > 0.0f))) goto L_8C04A768;
    v0_11 = (0x1);
    L_8C04A772:;
    if ((v0_10 != v0_11)) goto L_8C04A798;
    w0_0 = (*(float *)((v0_3 + 0xB9C)));
    w0_0 = w0_0 + w0_2 * (*(float *)((v0_8 + 0x28)));
    F0 = (w0_2);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C04A78C;
    w0_7 = (w0_4);
    L_8C04A790:;
    if ((w0_7 > w0_3)) goto L_8C04A7B6;
    L_8C04A7E2:;
    *(float *)((v0_8 + 0x130)) = w0_4;
    *(float *)((v0_8 + 0x138)) = w0_1;
    L_8C04A7EA:;
    *(unsigned int *)((v0_1 + 0xA24)) = v0_0;
    *(unsigned char *)((v0_2 + 0xB1)) = v0_0;
    *(unsigned char *)((v0_2 + 0xB0)) = v0_0;
    *(float *)((v0_1 + 0xA34)) = w0_4;
    goto L_8C04A7FA;
    L_8C04A7B6:;
    w0_7 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C04A7C0;
    v0_12 = (0x1);
    L_8C04A7DA:;
    w0_4 = (((float)v0_12 * w0_3));
    goto L_8C04A7E2;
    L_8C04A7C0:;
    if ((!(w0_7 > w0_4))) goto L_8C04A7D8;
    v0_12 = (0xFFFFFFFF);
    goto L_8C04A7DA;
    L_8C04A7D8:;
    v0_12 = (0x0);
    goto L_8C04A7DA;
    L_8C04A78C:;
    w0_7 = ((-w0_4));
    goto L_8C04A790;
    L_8C04A798:;
    w0_0 = (*(float *)((v0_3 + 0xB9C)));
    w0_0 = w0_0 + w0_2 * (*(float *)((v0_8 + 0x28)));
    F0 = (w0_2);
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C04A7AE;
    w0_7 = (w0_4);
    L_8C04A7B2:;
    if ((!(w0_7 > w0_3))) goto L_8C04A7E2;
    goto L_8C04A7B6;
    L_8C04A7AE:;
    w0_7 = ((-w0_4));
    goto L_8C04A7B2;
    L_8C04A768:;
    if ((!(w0_7 > w0_4))) goto L_8C04A770;
    v0_11 = (0xFFFFFFFF);
    goto L_8C04A772;
    L_8C04A770:;
    v0_11 = (0x0);
    goto L_8C04A772;
    L_8C04A74A:;
    if ((!(w0_7 > w0_5))) goto L_8C04A752;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04A754;
    L_8C04A752:;
    v0_10 = (0x0);
    goto L_8C04A754;
    L_8C04A722:;
    w0_8 = ((-w0_4));
    goto L_8C04A726;
    L_8C04A1BE:;
    v0_11 = (0xA24);
    if (((*(int *)((v0_1 + 0xA24))) != 0)) goto L_8C04A1CA;
    goto L_8C04A7FE;
    L_8C04A1CA:;
    *(unsigned char *)((v0_2 + 0x12C)) = (*(int *)((0x8C159F50 + ((*(int *)((v0_1 + 0xC58))) << 2))));
    v0_8 = (0x8C159F50);
    if (((v0_10 & (*(int *)((v0_9 + 0x54)))) != 0)) goto L_8C04A1E4;
    w0_7 = *(float *)((v0_1 + 0xAF0));
    w0_8 = *(float *)((v0_2 + 0x30));
    w0_4 = (10.0f);
    w0_3 = (w0_7);
    w0_5 = ((w0_7 + (w0_8 * 10.0f)));
    w0_6 = ((w0_8 * 10.0f));
    if ((0.0f > (w0_7 + (w0_8 * 10.0f)))) goto L_8C04A358;
    w0_7 = (w0_5);
    L_8C04A360:;
    if ((!(59.4249992f > w0_7))) goto L_8C04A370;
    *(unsigned char *)((v0_2 + 0x12B)) = 0x2;
    L_8C04A3CA:;
    if (((int)(*(signed char *)((v0_2 + 0x12C))) <= (int)(*(signed char *)((v0_2 + 0x12B))))) goto L_8C04A48A;
    v0_8 = *(int *)((v0_3 + 0xB5C));
    *(unsigned int *)(((int)stk + 32)) = ((v0_8 * v0_4) + v0_6);
    v0_8 = *(short *)((((v0_8 * v0_4) + v0_6) + 0x118));
    *(unsigned int *)(((int)stk + 40)) = v0_8;
    if (((int)v0_8 <= (int)0x1E)) goto L_8C04A402;
    v0_8 = (int)((*(int *)(((int)stk + 40))) - (((int (*)(int, int, int, int, float, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 28) + 0x1C), v0_7, v0_10, w0_4, w0_3, w0_5, w0_6, f8))) < (int)0x14;
    if (v0_8) goto L_8C04A482;
    L_8C04A402:;
    v0_8 = (*(short *)(((*(int *)(((int)stk + 32))) + 0x118)));
    *(int *)((int)stk + 24) = v0_8;
    v0_8 = (int)(v0_8 - (((int (*)(int, int, int, int, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 24) + 0x20), v0_7, v0_10, w0_4, w0_3, w0_5, w0_6))) >= (int)0x1E;
    if (v0_8) goto L_8C04A48A;
    w0_8 = *(float *)((v0_3 + 0xB9C));
    v0_11 = (0xB9C);
    w0_7 = (w0_8);
    if ((0.0f > w0_8)) goto L_8C04A42C;
    w0_7 = ((*(float *)((v0_3 + v0_11))));
    L_8C04A42E:;
    if ((!(w0_7 > 32.920002f))) goto L_8C04A48A;
    w0_9 = *(float *)((v0_1 + 0xAE8));
    w0_8 = (w0_9);
    w0_7 = (0.0f);
    if ((!(w0_9 > 0.0f))) goto L_8C04A444;
    v0_12 = (0x1);
    L_8C04A44E:;
    w0_9 = *(float *)((v0_3 + 0xB9C));
    w0_8 = (w0_9);
    w0_7 = (0.0f);
    if ((!(w0_9 > 0.0f))) goto L_8C04A45C;
    v0_11 = (0x1);
    L_8C04A47E:;
    if ((v0_12 != v0_11)) goto L_8C04A48A;
    L_8C04A482:;
    *(unsigned char *)((v0_2 + 0x12B)) = ((*(signed char *)((v0_2 + 0x12B))) + 0x1);
    L_8C04A48A:;
    w0_1 = ((-((float)(*(signed char *)((v0_2 + 0x12B))) * 0.300000012f)) + w0_1);
    w0_1 = ((*(float *)((v0_1 + 0xB00))) * w0_1);
    v0_7 = ((int (*)(int, int, int, int, float, float, float, float))(cpuReachRange))(v0_3, (((int)stk + 28) + 0x28), v0_7, v0_10, w0_4, w0_3, w0_5, w0_6);
    v0_9 = (v0_7);
    w0_6 = ((-(w0_1 * w0_0)));
    if (((int)v0_7 < 0)) goto L_8C04A56C;
    v0_8 = *(int *)((v0_3 + 0xB5C));
    v0_7 = *(short *)((((v0_8 * v0_4) + v0_6) + 0x118));
    v0_10 = (int)(v0_7 - v0_9) >= (int)v0_5;
    v0_8 = (((v0_8 * v0_4) + v0_6));
    v0_9 = ((v0_7 - v0_9));
    if (v0_10) goto L_8C04A4D0;
    v0_9 = (v0_5);
    L_8C04A4D0:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 28) + 0x28)); }
    cpuShotRangeFix(v0_3, v0_9, (((int)stk + 16) + 0x28), (((int)stk + 16) + 0x1C), *(Stk3 *)(((int)stk + 16)));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 56))) - (*(float *)((v0_3 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 52))) - (*(float *)((v0_3 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    *(float *)(((int)stk + 36)) = (cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_6));
    *(Stk3 *)(((int)stk + 16)) = vecMake(((*(float *)(((int)stk + 44))) - (*(float *)((v0_3 + 0xB9C)))), 0.0f, ((*(float *)(((int)stk + 52))) - (*(float *)((v0_3 + 0xBA4)))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    w0_0 = *(float *)(((int)stk + 36));
    w0_1 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_6)) * 0.5f);
    w0_1 = w0_1 + 0.5f * w0_0;
    F0 = (0.5f);
    w0_4 = (w0_1);
    goto L_8C04A7EA;
    L_8C04A56C:;
    w0_1 = *(float *)((v0_3 + 0xB9C));
    v0_11 = (0xB9C);
    w0_4 = (w0_1);
    if ((0.0f > w0_1)) goto L_8C04A57A;
    w0_7 = (w0_4);
    L_8C04A57E:;
    if ((!(w0_7 > w0_2))) goto L_8C04A632;
    w0_4 = *(float *)((v0_3 + 0xB00));
    w0_5 = *(float *)((v0_3 + 0xBA4));
    w0_1 = *(float *)((v0_3 + 0xB9C));
    *(float *)(((int)stk + 28)) = w0_1;
    w0_8 = (0.0f);
    w0_3 = (0.0f);
    w0_5 = (((w0_4 * w0_0) - w0_5));
    if ((!(w0_1 > 0.0f))) goto L_8C04A5A6;
    v0_10 = (0x1);
    L_8C04A5DE:;
    *(Stk3 *)(((int)stk + 16)) = vecMake((((float)v0_10 * w0_2) - (*(float *)(((int)stk + 28)))), w0_3, w0_5);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + v0_3)); }
    w0_0 = *(float *)((v0_3 + 0xB9C));
    F0 = ((cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)((int)stk + 4 + 12), w0_6)));
    w0_7 = (0.0f);
    w0_3 = (w0_0);
    if ((!(w0_0 > 0.0f))) goto L_8C04A618;
    v0_10 = (0x1);
    L_8C04A622:;
    w0_4 = ((F0 - ((float)v0_10 * 20.0f)));
    goto L_8C04A7EA;
    L_8C04A618:;
    if ((!(w0_7 > w0_3))) goto L_8C04A620;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04A622;
    L_8C04A620:;
    v0_10 = (0x0);
    goto L_8C04A622;
    L_8C04A5A6:;
    if ((!(w0_8 > (*(float *)(((int)stk + 28)))))) goto L_8C04A5DC;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04A5DE;
    L_8C04A5DC:;
    v0_10 = (0x0);
    goto L_8C04A5DE;
    L_8C04A632:;
    w0_0 = *(float *)((v0_3 + v0_11));
    w0_4 = (w0_0);
    w0_3 = (24.1500015f);
    if ((0.0f > w0_0)) goto L_8C04A642;
    w0_7 = (w0_4);
    L_8C04A646:;
    if ((w0_7 > w0_3)) goto L_8C04A64E;
    goto L_8C04A7EA;
    L_8C04A64E:;
    w0_7 = (0.0f);
    if ((!(w0_4 > 0.0f))) goto L_8C04A658;
    v0_12 = (0x1);
    L_8C04A662:;
    w0_4 = (((float)v0_12 * w0_3));
    goto L_8C04A7EA;
    L_8C04A658:;
    if ((!(w0_7 > w0_4))) goto L_8C04A660;
    v0_12 = (0xFFFFFFFF);
    goto L_8C04A662;
    L_8C04A660:;
    v0_12 = (0x0);
    goto L_8C04A662;
    L_8C04A642:;
    w0_7 = ((-w0_4));
    goto L_8C04A646;
    L_8C04A57A:;
    w0_7 = ((-w0_4));
    goto L_8C04A57E;
    L_8C04A45C:;
    if ((!(w0_7 > w0_8))) goto L_8C04A47C;
    v0_11 = (0xFFFFFFFF);
    goto L_8C04A47E;
    L_8C04A47C:;
    v0_11 = (0x0);
    goto L_8C04A47E;
    L_8C04A444:;
    if ((!(w0_7 > w0_8))) goto L_8C04A44C;
    v0_12 = (0xFFFFFFFF);
    goto L_8C04A44E;
    L_8C04A44C:;
    v0_12 = (0x0);
    goto L_8C04A44E;
    L_8C04A42C:;
    w0_7 = ((-w0_7));
    goto L_8C04A42E;
    L_8C04A370:;
    w0_7 = *(float *)((v0_1 + 0xAF0));
    w0_8 = *(float *)((v0_2 + 0x30));
    w0_3 = ((w0_8 * w0_4));
    w0_5 = (w0_7);
    w0_6 = ((w0_7 + (w0_8 * w0_4)));
    if ((0.0f > (w0_7 + (w0_8 * w0_4)))) goto L_8C04A3B0;
    w0_7 = (w0_6);
    L_8C04A3B8:;
    if ((!(95.0800018f > w0_7))) goto L_8C04A3C6;
    *(unsigned char *)((v0_2 + 0x12B)) = v0_5;
    goto L_8C04A3CA;
    L_8C04A3C6:;
    *(unsigned char *)((v0_2 + 0x12B)) = v0_0;
    goto L_8C04A3CA;
    L_8C04A3B0:;
    w0_7 = (((-w0_5) - w0_3));
    goto L_8C04A3B8;
    L_8C04A358:;
    w0_7 = (((-w0_3) - w0_6));
    goto L_8C04A360;
    L_8C04A1E4:;
    *(unsigned char *)((v0_2 + 0x12B)) = (*(int *)((v0_8 + ((*(int *)((v0_1 + 0xC58))) << 2))));
    v0_11 = (0x12B);
    if ((((*(int *)0x8C287B3C) & 0x4000) == 0)) goto L_8C04A232;
    v0_3 = (int)((int)(((*(int *)(((v0_7 + 0x44) + 0x0))) + (*(int *)(((v0_7 + 0x44) + 0x4)))) + 0x6) % (int)0x6);
    v0_3 = (int)((unsigned int)((int)((unsigned int)v0_3 + (unsigned int)0x0)) + ((((int)0x0 > (int)v0_3)) ? 1u : 0u));
    v0_11 = (((v0_3 >> 1) + 0x2));
    if (((int)((v0_3 >> 1) + 0x2) < 0)) goto L_8C04A21E;
    v0_11 = ((v0_11 & 0x1));
    L_8C04A228:;
    v0_8 = (((((-v0_11) + 0x1) << 1) - 1));
    L_8C04A2A4:;
    w0_3 = (28.8050003f);
    if ((!((*(float *)((v0_1 + 0xC90))) > 1.39999998f))) goto L_8C04A2EE;
    if (((*(signed char *)((v0_2 + 0x12B))) != 0)) goto L_8C04A2C6;
    w0_6 = (((*(float *)((v0_1 + 0xB00))) * w0_0));
    L_8C04A2D2:;
    w0_0 = *(float *)((v0_9 + 0x58));
    w0_6 = ((-w0_6));
    w0_4 = (w0_0);
    if ((0.0f > w0_0)) goto L_8C04A2E2;
    w0_7 = (w0_4);
    L_8C04A2E6:;
    if ((w0_7 > w0_3)) goto L_8C04A322;
    L_8C04A32E:;
    w0_8 = (8.2300005f);
    w0_7 = ((float)v0_8);
    L_8C04A336:;
    w0_4 = ((w0_7 * w0_8));
    goto L_8C04A7EA;
    L_8C04A322:;
    w0_8 = (32.920002f);
    w0_7 = ((float)(-v0_8));
    goto L_8C04A336;
    L_8C04A2E2:;
    w0_7 = ((-w0_4));
    goto L_8C04A2E6;
    L_8C04A2C6:;
    w0_0 = *(float *)((v0_1 + 0xB00));
    w0_8 = ((w0_0 * 83.1949997f));
    w0_6 = ((w0_0 * 83.1949997f));
    goto L_8C04A2D2;
    L_8C04A2EE:;
    w0_2 = *(float *)((v0_9 + 0x58));
    w0_1 = ((-((float)(*(signed char *)((v0_2 + 0x12B))) * 0.300000012f)) + w0_1);
    w0_1 = ((*(float *)((v0_1 + 0xB00))) * w0_1);
    F0 = ((w0_1 * w0_0));
    w0_8 = (0.300000012f);
    w0_6 = ((-(w0_1 * w0_0)));
    w0_4 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C04A31A;
    w0_8 = (w0_4);
    L_8C04A31E:;
    if ((!(w0_8 > w0_3))) goto L_8C04A32E;
    goto L_8C04A322;
    L_8C04A31A:;
    w0_8 = ((-w0_4));
    goto L_8C04A31E;
    L_8C04A21E:;
    v0_11 = (((~(((~v0_11) + 0x1) & 0x1)) + 0x1));
    goto L_8C04A228;
    L_8C04A232:;
    v0_3 = *(int *)(((v0_7 + 0x44) + 0x0));
    v0_4 = *(int *)(((v0_7 + 0x44) + 0x4));
    v0_11 = (((v0_3 + v0_4) + 0x2));
    if (((int)((v0_3 + v0_4) + 0x2) < 0)) goto L_8C04A246;
    v0_11 = ((v0_11 & 0x1));
    L_8C04A250:;
    v0_3 = *(int *)(((v0_7 + 0x34) + 0x0));
    v0_4 = *(int *)(((v0_7 + 0x34) + 0x4));
    v0_3 = (int)((unsigned int)((int)((unsigned int)(v0_3 + v0_4) + (unsigned int)0x0)) + ((((int)0x0 > (int)(v0_3 + v0_4))) ? 1u : 0u));
    v0_4 = ((-(v0_11 << 1)) + 0x1);
    v0_11 = (((v0_3 >> 1) + 0x2));
    v0_8 = v0_4;
    if (((int)((v0_3 >> 1) + 0x2) < 0)) goto L_8C04A290;
    v0_11 = ((v0_11 & 0x1));
    L_8C04A29A:;
    v0_8 = ((v0_8 * ((-(v0_11 << 1)) + 0x1)));
    goto L_8C04A2A4;
    L_8C04A290:;
    v0_11 = (((~(((~v0_11) + 0x1) & 0x1)) + 0x1));
    goto L_8C04A29A;
    L_8C04A246:;
    v0_11 = (((~(((~v0_11) + 0x1) & 0x1)) + 0x1));
    goto L_8C04A250;
    L_8C04A144:;
    if ((!(w0_4 > w0_7))) goto L_8C04A14C;
    v0_12 = (0x1);
    L_8C04A186:;
    if ((!(0.0f > (w0_6 + (float)((v0_12 << 2) + v0_12))))) goto L_8C04A19E;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04A1A0;
    L_8C04A19E:;
    v0_10 = (0x0);
    goto L_8C04A1A0;
    L_8C04A14C:;
    if ((!(0.0f > w0_4))) goto L_8C04A184;
    v0_12 = (0xFFFFFFFF);
    goto L_8C04A186;
    L_8C04A184:;
    v0_12 = (0x0);
    goto L_8C04A186;
    L_8C04A122:;
    if ((!(w0_7 > w0_4))) goto L_8C04A12A;
    v0_10 = (0xFFFFFFFF);
    goto L_8C04A12C;
    L_8C04A12A:;
    v0_10 = (0x0);
    goto L_8C04A12C;
    L_8C04A102:;
    if ((!(w0_7 > w0_3))) goto L_8C04A10A;
    v0_11 = (0xFFFFFFFF);
    goto L_8C04A10C;
    L_8C04A10A:;
    v0_11 = (0x0);
    goto L_8C04A10C;
}
