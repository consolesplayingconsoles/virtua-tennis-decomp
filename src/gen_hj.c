/* Straight-line functions with calls and guards (batch gen_hj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int angDiff(int, int);
int angLerp(int, int, float);
int arcadePickRival(int, int);
int ballBoyInit(void);
int ballInit(int);
int camInit(void);
int camMoveBegin(float, float);
int colliObjClear(void);
int cpuInit(void);
int matchSetupPlayers(void);
int miniOnEvent(int, int, int, int, float, float);
int miniRoundStart(int, int, int, int);
int miniSetupObjects(int, int, int, int, float, float);
int motionIsEnd(int);
int nlArcTan2(float, float);
float nlCos(int);
float nlPow(float, float);
float nlRandom(void);
float nlSin(int);
int nlSubVector3op(int, int, int);
int playerCalcMotionSpeeds(void);
extern int playerPivotTurn();
int playerSetup(int, int, int, int);
int scoreReset(void);
int serveGetReceiver(void);
float vecDistXZ(Stk3, Stk3);
float vecLength(Stk3);
int playerMoveToTarget(int a4, int a5);
int matchStart(void);

int playerMoveToTarget(int a4, int a5)
{
    int t0;
    int t10808;
    int t2;
    int t6;
    float t10;
    int t16;
    int t17;
    int t22;
    int t26;
    float t43;
    int t69;
    int t81;
    int t82;
    int t83;
    int t93;
    int t96;
    int t97;
    int t99;
    int t102;
    int t105;
    int t108;
    int t121;
    int t122;
    int t123;
    int t141;
    int t144;
    int t145;
    int t147;
    int t150;
    int t153;
    int t156;
    int t169;
    int t170;
    int t171;
    int t192;
    int t195;
    int t196;
    int t198;
    int t201;
    int t204;
    int t207;
    int t220;
    int t221;
    int t222;
    float u236;
    int t239;
    int t237;
    int t247;
    int t244;
    float u251;
    float u253;
    float u274;
    float u276;
    int t278;
    int t279;
    int t284;
    int t285;
    int t288;
    int t289;
    int t298;
    int t301;
    int t302;
    int t304;
    int t307;
    int t310;
    int t313;
    int t326;
    int t327;
    int t328;
    int t350;
    int t353;
    int t354;
    int t356;
    int t359;
    int t362;
    int t365;
    int t378;
    int t379;
    int t380;
    int t410;
    int t413;
    int t414;
    int t416;
    int t419;
    int t422;
    int t425;
    int t438;
    int t439;
    int t440;
    int t462;
    int t465;
    int t466;
    int t468;
    int t471;
    int t474;
    int t477;
    int t490;
    int t491;
    int t492;
    int t541;
    int t542;
    int t543;
    int t553;
    int t556;
    int t557;
    int t559;
    int t562;
    int t565;
    int t568;
    int t581;
    int t582;
    int t583;
    int t601;
    int t604;
    int t605;
    int t607;
    int t610;
    int t613;
    int t616;
    int t629;
    int t630;
    int t631;
    int t652;
    int t655;
    int t656;
    int t658;
    int t661;
    int t664;
    int t667;
    int t680;
    int t681;
    int t682;
    float u696;
    int t699;
    int t697;
    int t707;
    int t704;
    float u711;
    float u713;
    float u734;
    float u736;
    int t738;
    int t739;
    int t744;
    int t745;
    int t748;
    int t749;
    int t758;
    int t761;
    int t762;
    int t764;
    int t767;
    int t770;
    int t773;
    int t786;
    int t787;
    int t788;
    int t810;
    int t813;
    int t814;
    int t816;
    int t819;
    int t822;
    int t825;
    int t838;
    int t839;
    int t840;
    int t870;
    int t873;
    int t874;
    int t876;
    int t879;
    int t882;
    int t885;
    int t898;
    int t899;
    int t900;
    int t922;
    int t925;
    int t926;
    int t928;
    int t931;
    int t934;
    int t937;
    int t950;
    int t951;
    int t952;
    int t1043;
    int t1044;
    int t1045;
    int t1055;
    int t1058;
    int t1059;
    int t1061;
    int t1064;
    int t1067;
    int t1070;
    int t1083;
    int t1084;
    int t1085;
    int t1103;
    int t1106;
    int t1107;
    int t1109;
    int t1112;
    int t1115;
    int t1118;
    int t1131;
    int t1132;
    int t1133;
    int t1154;
    int t1157;
    int t1158;
    int t1160;
    int t1163;
    int t1166;
    int t1169;
    int t1182;
    int t1183;
    int t1184;
    float u1198;
    int t1201;
    int t1199;
    int t1209;
    int t1206;
    float u1213;
    float u1215;
    float u1236;
    float u1238;
    int t1240;
    int t1241;
    int t1246;
    int t1247;
    int t1250;
    int t1251;
    int t1260;
    int t1263;
    int t1264;
    int t1266;
    int t1269;
    int t1272;
    int t1275;
    int t1288;
    int t1289;
    int t1290;
    int t1312;
    int t1315;
    int t1316;
    int t1318;
    int t1321;
    int t1324;
    int t1327;
    int t1340;
    int t1341;
    int t1342;
    int t1372;
    int t1375;
    int t1376;
    int t1378;
    int t1381;
    int t1384;
    int t1387;
    int t1400;
    int t1401;
    int t1402;
    int t1424;
    int t1427;
    int t1428;
    int t1430;
    int t1433;
    int t1436;
    int t1439;
    int t1452;
    int t1453;
    int t1454;
    int t1503;
    int t1504;
    int t1505;
    int t1515;
    int t1518;
    int t1519;
    int t1521;
    int t1524;
    int t1527;
    int t1530;
    int t1543;
    int t1544;
    int t1545;
    int t1563;
    int t1566;
    int t1567;
    int t1569;
    int t1572;
    int t1575;
    int t1578;
    int t1591;
    int t1592;
    int t1593;
    int t1614;
    int t1617;
    int t1618;
    int t1620;
    int t1623;
    int t1626;
    int t1629;
    int t1642;
    int t1643;
    int t1644;
    float u1658;
    int t1661;
    int t1659;
    int t1669;
    int t1666;
    float u1673;
    float u1675;
    float u1696;
    float u1698;
    int t1700;
    int t1701;
    int t1706;
    int t1707;
    int t1710;
    int t1711;
    int t1720;
    int t1723;
    int t1724;
    int t1726;
    int t1729;
    int t1732;
    int t1735;
    int t1748;
    int t1749;
    int t1750;
    int t1772;
    int t1775;
    int t1776;
    int t1778;
    int t1781;
    int t1784;
    int t1787;
    int t1800;
    int t1801;
    int t1802;
    int t1832;
    int t1835;
    int t1836;
    int t1838;
    int t1841;
    int t1844;
    int t1847;
    int t1860;
    int t1861;
    int t1862;
    int t1884;
    int t1887;
    int t1888;
    int t1890;
    int t1893;
    int t1896;
    int t1899;
    int t1912;
    int t1913;
    int t1914;
    int t2012;
    int t2029;
    int t2041;
    int t2042;
    int t2043;
    int t2053;
    int t2056;
    int t2057;
    int t2059;
    int t2062;
    int t2065;
    int t2068;
    int t2081;
    int t2082;
    int t2083;
    int t2101;
    int t2104;
    int t2105;
    int t2107;
    int t2110;
    int t2113;
    int t2116;
    int t2129;
    int t2130;
    int t2131;
    int t2152;
    int t2155;
    int t2156;
    int t2158;
    int t2161;
    int t2164;
    int t2167;
    int t2180;
    int t2181;
    int t2182;
    float u2196;
    int t2199;
    int t2197;
    int t2207;
    int t2204;
    float u2211;
    float u2213;
    float u2234;
    float u2236;
    int t2238;
    int t2239;
    int t2244;
    int t2245;
    int t2248;
    int t2249;
    int t2258;
    int t2261;
    int t2262;
    int t2264;
    int t2267;
    int t2270;
    int t2273;
    int t2286;
    int t2287;
    int t2288;
    int t2310;
    int t2313;
    int t2314;
    int t2316;
    int t2319;
    int t2322;
    int t2325;
    int t2338;
    int t2339;
    int t2340;
    int t2370;
    int t2373;
    int t2374;
    int t2376;
    int t2379;
    int t2382;
    int t2385;
    int t2398;
    int t2399;
    int t2400;
    int t2422;
    int t2425;
    int t2426;
    int t2428;
    int t2431;
    int t2434;
    int t2437;
    int t2450;
    int t2451;
    int t2452;
    int t2501;
    int t2502;
    int t2503;
    int t2513;
    int t2516;
    int t2517;
    int t2519;
    int t2522;
    int t2525;
    int t2528;
    int t2541;
    int t2542;
    int t2543;
    int t2561;
    int t2564;
    int t2565;
    int t2567;
    int t2570;
    int t2573;
    int t2576;
    int t2589;
    int t2590;
    int t2591;
    int t2612;
    int t2615;
    int t2616;
    int t2618;
    int t2621;
    int t2624;
    int t2627;
    int t2640;
    int t2641;
    int t2642;
    float u2656;
    int t2659;
    int t2657;
    int t2667;
    int t2664;
    float u2671;
    float u2673;
    float u2694;
    float u2696;
    int t2698;
    int t2699;
    int t2704;
    int t2705;
    int t2708;
    int t2709;
    int t2718;
    int t2721;
    int t2722;
    int t2724;
    int t2727;
    int t2730;
    int t2733;
    int t2746;
    int t2747;
    int t2748;
    int t2770;
    int t2773;
    int t2774;
    int t2776;
    int t2779;
    int t2782;
    int t2785;
    int t2798;
    int t2799;
    int t2800;
    int t2830;
    int t2833;
    int t2834;
    int t2836;
    int t2839;
    int t2842;
    int t2845;
    int t2858;
    int t2859;
    int t2860;
    int t2882;
    int t2885;
    int t2886;
    int t2888;
    int t2891;
    int t2894;
    int t2897;
    int t2910;
    int t2911;
    int t2912;
    int t3003;
    int t3004;
    int t3005;
    int t3015;
    int t3018;
    int t3019;
    int t3021;
    int t3024;
    int t3027;
    int t3030;
    int t3043;
    int t3044;
    int t3045;
    int t3063;
    int t3066;
    int t3067;
    int t3069;
    int t3072;
    int t3075;
    int t3078;
    int t3091;
    int t3092;
    int t3093;
    int t3114;
    int t3117;
    int t3118;
    int t3120;
    int t3123;
    int t3126;
    int t3129;
    int t3142;
    int t3143;
    int t3144;
    float u3158;
    int t3161;
    int t3159;
    int t3169;
    int t3166;
    float u3173;
    float u3175;
    float u3196;
    float u3198;
    int t3200;
    int t3201;
    int t3206;
    int t3207;
    int t3210;
    int t3211;
    int t3220;
    int t3223;
    int t3224;
    int t3226;
    int t3229;
    int t3232;
    int t3235;
    int t3248;
    int t3249;
    int t3250;
    int t3272;
    int t3275;
    int t3276;
    int t3278;
    int t3281;
    int t3284;
    int t3287;
    int t3300;
    int t3301;
    int t3302;
    int t3332;
    int t3335;
    int t3336;
    int t3338;
    int t3341;
    int t3344;
    int t3347;
    int t3360;
    int t3361;
    int t3362;
    int t3384;
    int t3387;
    int t3388;
    int t3390;
    int t3393;
    int t3396;
    int t3399;
    int t3412;
    int t3413;
    int t3414;
    int t3463;
    int t3464;
    int t3465;
    int t3475;
    int t3478;
    int t3479;
    int t3481;
    int t3484;
    int t3487;
    int t3490;
    int t3503;
    int t3504;
    int t3505;
    int t3523;
    int t3526;
    int t3527;
    int t3529;
    int t3532;
    int t3535;
    int t3538;
    int t3551;
    int t3552;
    int t3553;
    int t3574;
    int t3577;
    int t3578;
    int t3580;
    int t3583;
    int t3586;
    int t3589;
    int t3602;
    int t3603;
    int t3604;
    float u3618;
    int t3621;
    int t3619;
    int t3629;
    int t3626;
    float u3633;
    float u3635;
    float u3656;
    float u3658;
    int t3660;
    int t3661;
    int t3666;
    int t3667;
    int t3670;
    int t3671;
    int t3680;
    int t3683;
    int t3684;
    int t3686;
    int t3689;
    int t3692;
    int t3695;
    int t3708;
    int t3709;
    int t3710;
    int t3732;
    int t3735;
    int t3736;
    int t3738;
    int t3741;
    int t3744;
    int t3747;
    int t3760;
    int t3761;
    int t3762;
    int t3792;
    int t3795;
    int t3796;
    int t3798;
    int t3801;
    int t3804;
    int t3807;
    int t3820;
    int t3821;
    int t3822;
    int t3844;
    int t3847;
    int t3848;
    int t3850;
    int t3853;
    int t3856;
    int t3859;
    int t3872;
    int t3873;
    int t3874;
    int t3972;
    int t3993;
    int t3998;
    int t3999;
    int t4001;
    int t4029;
    int t4057;
    int t4069;
    int t4070;
    int t4071;
    int t4081;
    int t4084;
    int t4085;
    int t4087;
    int t4090;
    int t4093;
    int t4096;
    int t4109;
    int t4110;
    int t4111;
    int t4129;
    int t4132;
    int t4133;
    int t4135;
    int t4138;
    int t4141;
    int t4144;
    int t4157;
    int t4158;
    int t4159;
    int t4180;
    int t4183;
    int t4184;
    int t4186;
    int t4189;
    int t4192;
    int t4195;
    int t4208;
    int t4209;
    int t4210;
    float u4224;
    int t4227;
    int t4225;
    int t4235;
    int t4232;
    float u4239;
    float u4241;
    float u4262;
    float u4264;
    int t4266;
    int t4267;
    int t4272;
    int t4273;
    int t4276;
    int t4277;
    int t4286;
    int t4289;
    int t4290;
    int t4292;
    int t4295;
    int t4298;
    int t4301;
    int t4314;
    int t4315;
    int t4316;
    int t4338;
    int t4341;
    int t4342;
    int t4344;
    int t4347;
    int t4350;
    int t4353;
    int t4366;
    int t4367;
    int t4368;
    int t4398;
    int t4401;
    int t4402;
    int t4404;
    int t4407;
    int t4410;
    int t4413;
    int t4426;
    int t4427;
    int t4428;
    int t4450;
    int t4453;
    int t4454;
    int t4456;
    int t4459;
    int t4462;
    int t4465;
    int t4478;
    int t4479;
    int t4480;
    int t4529;
    int t4530;
    int t4531;
    int t4541;
    int t4544;
    int t4545;
    int t4547;
    int t4550;
    int t4553;
    int t4556;
    int t4569;
    int t4570;
    int t4571;
    int t4589;
    int t4592;
    int t4593;
    int t4595;
    int t4598;
    int t4601;
    int t4604;
    int t4617;
    int t4618;
    int t4619;
    int t4640;
    int t4643;
    int t4644;
    int t4646;
    int t4649;
    int t4652;
    int t4655;
    int t4668;
    int t4669;
    int t4670;
    float u4684;
    int t4687;
    int t4685;
    int t4695;
    int t4692;
    float u4699;
    float u4701;
    float u4722;
    float u4724;
    int t4726;
    int t4727;
    int t4732;
    int t4733;
    int t4736;
    int t4737;
    int t4746;
    int t4749;
    int t4750;
    int t4752;
    int t4755;
    int t4758;
    int t4761;
    int t4774;
    int t4775;
    int t4776;
    int t4798;
    int t4801;
    int t4802;
    int t4804;
    int t4807;
    int t4810;
    int t4813;
    int t4826;
    int t4827;
    int t4828;
    int t4858;
    int t4861;
    int t4862;
    int t4864;
    int t4867;
    int t4870;
    int t4873;
    int t4886;
    int t4887;
    int t4888;
    int t4910;
    int t4913;
    int t4914;
    int t4916;
    int t4919;
    int t4922;
    int t4925;
    int t4938;
    int t4939;
    int t4940;
    int t5031;
    int t5032;
    int t5033;
    int t5043;
    int t5046;
    int t5047;
    int t5049;
    int t5052;
    int t5055;
    int t5058;
    int t5071;
    int t5072;
    int t5073;
    int t5091;
    int t5094;
    int t5095;
    int t5097;
    int t5100;
    int t5103;
    int t5106;
    int t5119;
    int t5120;
    int t5121;
    int t5142;
    int t5145;
    int t5146;
    int t5148;
    int t5151;
    int t5154;
    int t5157;
    int t5170;
    int t5171;
    int t5172;
    float u5186;
    int t5189;
    int t5187;
    int t5197;
    int t5194;
    float u5201;
    float u5203;
    float u5224;
    float u5226;
    int t5228;
    int t5229;
    int t5234;
    int t5235;
    int t5238;
    int t5239;
    int t5248;
    int t5251;
    int t5252;
    int t5254;
    int t5257;
    int t5260;
    int t5263;
    int t5276;
    int t5277;
    int t5278;
    int t5300;
    int t5303;
    int t5304;
    int t5306;
    int t5309;
    int t5312;
    int t5315;
    int t5328;
    int t5329;
    int t5330;
    int t5360;
    int t5363;
    int t5364;
    int t5366;
    int t5369;
    int t5372;
    int t5375;
    int t5388;
    int t5389;
    int t5390;
    int t5412;
    int t5415;
    int t5416;
    int t5418;
    int t5421;
    int t5424;
    int t5427;
    int t5440;
    int t5441;
    int t5442;
    int t5491;
    int t5492;
    int t5493;
    int t5503;
    int t5506;
    int t5507;
    int t5509;
    int t5512;
    int t5515;
    int t5518;
    int t5531;
    int t5532;
    int t5533;
    int t5551;
    int t5554;
    int t5555;
    int t5557;
    int t5560;
    int t5563;
    int t5566;
    int t5579;
    int t5580;
    int t5581;
    int t5602;
    int t5605;
    int t5606;
    int t5608;
    int t5611;
    int t5614;
    int t5617;
    int t5630;
    int t5631;
    int t5632;
    float u5646;
    int t5649;
    int t5647;
    int t5657;
    int t5654;
    float u5661;
    float u5663;
    float u5684;
    float u5686;
    int t5688;
    int t5689;
    int t5694;
    int t5695;
    int t5698;
    int t5699;
    int t5708;
    int t5711;
    int t5712;
    int t5714;
    int t5717;
    int t5720;
    int t5723;
    int t5736;
    int t5737;
    int t5738;
    int t5760;
    int t5763;
    int t5764;
    int t5766;
    int t5769;
    int t5772;
    int t5775;
    int t5788;
    int t5789;
    int t5790;
    int t5820;
    int t5823;
    int t5824;
    int t5826;
    int t5829;
    int t5832;
    int t5835;
    int t5848;
    int t5849;
    int t5850;
    int t5872;
    int t5875;
    int t5876;
    int t5878;
    int t5881;
    int t5884;
    int t5887;
    int t5900;
    int t5901;
    int t5902;
    int t6000;
    int t6032;
    int t6198;
    int t6189;
    int t6180;
    int t6171;
    int t6162;
    int t6070;
    int t6068;
    float u6074;
    int t6080;
    int t6077;
    int t6094;
    int t6122;
    int t6146;
    int t6367;
    int t6358;
    int t6349;
    int t6340;
    int t6331;
    int t6239;
    int t6237;
    float u6243;
    int t6249;
    int t6246;
    int t6263;
    int t6291;
    int t6315;
    float u6384;
    float u6386;
    int t6398;
    int t6399;
    float u6402;
    float u6404;
    int t6458;
    int t6485;
    int t6486;
    float u6489;
    float u6491;
    int t6581;
    int t6582;
    float u6585;
    float u6587;
    int t6641;
    int t6668;
    int t6669;
    float u6672;
    float u6674;
    int t6754;
    int t6755;
    float u6793;
    float u6795;
    int t6807;
    int t6808;
    float u6811;
    float u6813;
    int t6867;
    int t6894;
    int t6895;
    float u6898;
    float u6900;
    int t6990;
    int t6991;
    float u6994;
    float u6996;
    int t7050;
    int t7077;
    int t7078;
    float u7081;
    float u7083;
    int t7163;
    int t7164;
    float u7181;
    float u7182;
    float u8965;
    float u7196;
    float t7198;
    float t7199;
    float u7201;
    float t7204;
    float u7206;
    int t7207;
    int t7208;
    int t7214;
    int t7215;
    int t7243;
    int t7244;
    int t7247;
    int t7251;
    int t7252;
    float t7261;
    int t7263;
    int t7264;
    int t7280;
    int t7281;
    int t7286;
    int t7287;
    int t7290;
    int t7305;
    int t7320;
    int t7342;
    int t7343;
    int t7348;
    int t7349;
    int t7352;
    int t7353;
    int t7362;
    int t7365;
    int t7366;
    int t7370;
    int t7376;
    int t7377;
    int t7378;
    int t7383;
    int t7384;
    int t7393;
    int t7394;
    int t7404;
    int t7407;
    int t7408;
    int t7412;
    int t7418;
    int t7419;
    int t7420;
    int t7425;
    int t7426;
    int t7462;
    int t7463;
    int t7478;
    int t7479;
    int t7484;
    int t7485;
    int t7488;
    int t7503;
    int t7518;
    int t7540;
    int t7541;
    int t7546;
    int t7547;
    int t7550;
    int t7551;
    int t7560;
    int t7563;
    int t7564;
    int t7568;
    int t7574;
    int t7575;
    int t7576;
    int t7581;
    int t7582;
    int t7591;
    int t7592;
    int t7602;
    int t7605;
    int t7606;
    int t7610;
    int t7616;
    int t7617;
    int t7618;
    int t7623;
    int t7624;
    int t7684;
    int t7685;
    int t7690;
    int t7691;
    int t7694;
    int t7709;
    int t7724;
    int t7746;
    int t7747;
    int t7752;
    int t7753;
    int t7756;
    int t7757;
    int t7766;
    int t7769;
    int t7770;
    int t7774;
    int t7780;
    int t7781;
    int t7782;
    int t7787;
    int t7788;
    int t7797;
    int t7798;
    int t7808;
    int t7811;
    int t7812;
    int t7816;
    int t7822;
    int t7823;
    int t7824;
    int t7829;
    int t7830;
    int t7866;
    int t7867;
    int t7882;
    int t7883;
    int t7888;
    int t7889;
    int t7892;
    int t7907;
    int t7922;
    int t7944;
    int t7945;
    int t7950;
    int t7951;
    int t7954;
    int t7955;
    int t7964;
    int t7967;
    int t7968;
    int t7972;
    int t7978;
    int t7979;
    int t7980;
    int t7985;
    int t7986;
    int t7995;
    int t7996;
    int t8006;
    int t8009;
    int t8010;
    int t8014;
    int t8020;
    int t8021;
    int t8022;
    int t8027;
    int t8028;
    int t8088;
    int t8089;
    int t8098;
    int t8102;
    int t8103;
    float t8112;
    int t8114;
    int t8115;
    int t8131;
    int t8132;
    int t8137;
    int t8138;
    int t8141;
    int t8156;
    int t8171;
    int t8193;
    int t8194;
    int t8199;
    int t8200;
    int t8203;
    int t8204;
    int t8213;
    int t8216;
    int t8217;
    int t8221;
    int t8227;
    int t8228;
    int t8229;
    int t8234;
    int t8235;
    int t8244;
    int t8245;
    int t8255;
    int t8258;
    int t8259;
    int t8263;
    int t8269;
    int t8270;
    int t8271;
    int t8276;
    int t8277;
    int t8313;
    int t8314;
    int t8329;
    int t8330;
    int t8335;
    int t8336;
    int t8339;
    int t8354;
    int t8369;
    int t8391;
    int t8392;
    int t8397;
    int t8398;
    int t8401;
    int t8402;
    int t8411;
    int t8414;
    int t8415;
    int t8419;
    int t8425;
    int t8426;
    int t8427;
    int t8432;
    int t8433;
    int t8442;
    int t8443;
    int t8453;
    int t8456;
    int t8457;
    int t8461;
    int t8467;
    int t8468;
    int t8469;
    int t8474;
    int t8475;
    int t8535;
    int t8536;
    int t8541;
    int t8542;
    int t8545;
    int t8560;
    int t8575;
    int t8597;
    int t8598;
    int t8603;
    int t8604;
    int t8607;
    int t8608;
    int t8617;
    int t8620;
    int t8621;
    int t8625;
    int t8631;
    int t8632;
    int t8633;
    int t8638;
    int t8639;
    int t8648;
    int t8649;
    int t8659;
    int t8662;
    int t8663;
    int t8667;
    int t8673;
    int t8674;
    int t8675;
    int t8680;
    int t8681;
    int t8717;
    int t8718;
    int t8733;
    int t8734;
    int t8739;
    int t8740;
    int t8743;
    int t8758;
    int t8773;
    int t8795;
    int t8796;
    int t8801;
    int t8802;
    int t8805;
    int t8806;
    int t8815;
    int t8818;
    int t8819;
    int t8823;
    int t8829;
    int t8830;
    int t8831;
    int t8836;
    int t8837;
    int t8846;
    int t8847;
    int t8857;
    int t8860;
    int t8861;
    int t8865;
    int t8871;
    int t8872;
    int t8873;
    int t8878;
    int t8879;
    float u8969;
    float t8971;
    float t8972;
    float u8974;
    float t8977;
    float u8979;
    int t8980;
    int t8981;
    int t8987;
    int t8988;
    int t9016;
    int t9017;
    int t9020;
    int t9024;
    int t9025;
    float t9034;
    int t9036;
    int t9037;
    int t9053;
    int t9054;
    int t9059;
    int t9060;
    int t9063;
    int t9078;
    int t9093;
    int t9115;
    int t9116;
    int t9121;
    int t9122;
    int t9125;
    int t9126;
    int t9135;
    int t9138;
    int t9139;
    int t9143;
    int t9149;
    int t9150;
    int t9151;
    int t9156;
    int t9157;
    int t9166;
    int t9167;
    int t9177;
    int t9180;
    int t9181;
    int t9185;
    int t9191;
    int t9192;
    int t9193;
    int t9198;
    int t9199;
    int t9235;
    int t9236;
    int t9251;
    int t9252;
    int t9257;
    int t9258;
    int t9261;
    int t9276;
    int t9291;
    int t9313;
    int t9314;
    int t9319;
    int t9320;
    int t9323;
    int t9324;
    int t9333;
    int t9336;
    int t9337;
    int t9341;
    int t9347;
    int t9348;
    int t9349;
    int t9354;
    int t9355;
    int t9364;
    int t9365;
    int t9375;
    int t9378;
    int t9379;
    int t9383;
    int t9389;
    int t9390;
    int t9391;
    int t9396;
    int t9397;
    int t9457;
    int t9458;
    int t9463;
    int t9464;
    int t9467;
    int t9482;
    int t9497;
    int t9519;
    int t9520;
    int t9525;
    int t9526;
    int t9529;
    int t9530;
    int t9539;
    int t9542;
    int t9543;
    int t9547;
    int t9553;
    int t9554;
    int t9555;
    int t9560;
    int t9561;
    int t9570;
    int t9571;
    int t9581;
    int t9584;
    int t9585;
    int t9589;
    int t9595;
    int t9596;
    int t9597;
    int t9602;
    int t9603;
    int t9639;
    int t9640;
    int t9655;
    int t9656;
    int t9661;
    int t9662;
    int t9665;
    int t9680;
    int t9695;
    int t9717;
    int t9718;
    int t9723;
    int t9724;
    int t9727;
    int t9728;
    int t9737;
    int t9740;
    int t9741;
    int t9745;
    int t9751;
    int t9752;
    int t9753;
    int t9758;
    int t9759;
    int t9768;
    int t9769;
    int t9779;
    int t9782;
    int t9783;
    int t9787;
    int t9793;
    int t9794;
    int t9795;
    int t9800;
    int t9801;
    int t9861;
    int t9862;
    int t9871;
    int t9875;
    int t9876;
    float t9885;
    int t9887;
    int t9888;
    int t9904;
    int t9905;
    int t9910;
    int t9911;
    int t9914;
    int t9929;
    int t9944;
    int t9966;
    int t9967;
    int t9972;
    int t9973;
    int t9976;
    int t9977;
    int t9986;
    int t9989;
    int t9990;
    int t9994;
    int t10000;
    int t10001;
    int t10002;
    int t10007;
    int t10008;
    int t10017;
    int t10018;
    int t10028;
    int t10031;
    int t10032;
    int t10036;
    int t10042;
    int t10043;
    int t10044;
    int t10049;
    int t10050;
    int t10086;
    int t10087;
    int t10102;
    int t10103;
    int t10108;
    int t10109;
    int t10112;
    int t10127;
    int t10142;
    int t10164;
    int t10165;
    int t10170;
    int t10171;
    int t10174;
    int t10175;
    int t10184;
    int t10187;
    int t10188;
    int t10192;
    int t10198;
    int t10199;
    int t10200;
    int t10205;
    int t10206;
    int t10215;
    int t10216;
    int t10226;
    int t10229;
    int t10230;
    int t10234;
    int t10240;
    int t10241;
    int t10242;
    int t10247;
    int t10248;
    int t10308;
    int t10309;
    int t10314;
    int t10315;
    int t10318;
    int t10333;
    int t10348;
    int t10370;
    int t10371;
    int t10376;
    int t10377;
    int t10380;
    int t10381;
    int t10390;
    int t10393;
    int t10394;
    int t10398;
    int t10404;
    int t10405;
    int t10406;
    int t10411;
    int t10412;
    int t10421;
    int t10422;
    int t10432;
    int t10435;
    int t10436;
    int t10440;
    int t10446;
    int t10447;
    int t10448;
    int t10453;
    int t10454;
    int t10490;
    int t10491;
    int t10506;
    int t10507;
    int t10512;
    int t10513;
    int t10516;
    int t10531;
    int t10546;
    int t10568;
    int t10569;
    int t10574;
    int t10575;
    int t10578;
    int t10579;
    int t10588;
    int t10591;
    int t10592;
    int t10596;
    int t10602;
    int t10603;
    int t10604;
    int t10609;
    int t10610;
    int t10619;
    int t10620;
    int t10630;
    int t10633;
    int t10634;
    int t10638;
    int t10644;
    int t10645;
    int t10646;
    int t10651;
    int t10652;
    int t10757;
    int t10802;
    int t10804;
    int t29;
    int t49;
    int t50;
    int t79;
    int t111;
    int t117;
    int t159;
    int t165;
    int t210;
    int t216;
    float u259;
    float u293;
    int t316;
    int t322;
    int t368;
    int t374;
    int t428;
    int t434;
    int t480;
    int t486;
    int t571;
    int t577;
    int t619;
    int t625;
    int t670;
    int t676;
    float u719;
    float u753;
    int t776;
    int t782;
    int t828;
    int t834;
    int t888;
    int t894;
    int t940;
    int t946;
    int t1073;
    int t1079;
    int t1121;
    int t1127;
    int t1172;
    int t1178;
    float u1221;
    float u1255;
    int t1278;
    int t1284;
    int t1330;
    int t1336;
    int t1390;
    int t1396;
    int t1442;
    int t1448;
    int t1533;
    int t1539;
    int t1581;
    int t1587;
    int t1632;
    int t1638;
    float u1681;
    float u1715;
    int t1738;
    int t1744;
    int t1790;
    int t1796;
    int t1850;
    int t1856;
    int t1902;
    int t1908;
    int t2039;
    int t2071;
    int t2077;
    int t2119;
    int t2125;
    int t2170;
    int t2176;
    float u2219;
    float u2253;
    int t2276;
    int t2282;
    int t2328;
    int t2334;
    int t2388;
    int t2394;
    int t2440;
    int t2446;
    int t2531;
    int t2537;
    int t2579;
    int t2585;
    int t2630;
    int t2636;
    float u2679;
    float u2713;
    int t2736;
    int t2742;
    int t2788;
    int t2794;
    int t2848;
    int t2854;
    int t2900;
    int t2906;
    int t3033;
    int t3039;
    int t3081;
    int t3087;
    int t3132;
    int t3138;
    float u3181;
    float u3215;
    int t3238;
    int t3244;
    int t3290;
    int t3296;
    int t3350;
    int t3356;
    int t3402;
    int t3408;
    int t3493;
    int t3499;
    int t3541;
    int t3547;
    int t3592;
    int t3598;
    float u3641;
    float u3675;
    int t3698;
    int t3704;
    int t3750;
    int t3756;
    int t3810;
    int t3816;
    int t3862;
    int t3868;
    int t3978;
    int t4067;
    int t4099;
    int t4105;
    int t4147;
    int t4153;
    int t4198;
    int t4204;
    float u4247;
    float u4281;
    int t4304;
    int t4310;
    int t4356;
    int t4362;
    int t4416;
    int t4422;
    int t4468;
    int t4474;
    int t4559;
    int t4565;
    int t4607;
    int t4613;
    int t4658;
    int t4664;
    float u4707;
    float u4741;
    int t4764;
    int t4770;
    int t4816;
    int t4822;
    int t4876;
    int t4882;
    int t4928;
    int t4934;
    int t5061;
    int t5067;
    int t5109;
    int t5115;
    int t5160;
    int t5166;
    float u5209;
    float u5243;
    int t5266;
    int t5272;
    int t5318;
    int t5324;
    int t5378;
    int t5384;
    int t5430;
    int t5436;
    int t5521;
    int t5527;
    int t5569;
    int t5575;
    int t5620;
    int t5626;
    float u5669;
    float u5703;
    int t5726;
    int t5732;
    int t5778;
    int t5784;
    int t5838;
    int t5844;
    int t5890;
    int t5896;
    float u10739;
    int t7174;
    int t6775;
    int t6034;
    int t6042;
    int t6049;
    int t6153;
    float u6062;
    int t6129;
    int t6107;
    int t6086;
    int t6099;
    int t6114;
    int t6138;
    int t6765;
    int t6203;
    int t6211;
    int t6218;
    int t6322;
    float u6231;
    int t6298;
    int t6276;
    int t6255;
    int t6268;
    int t6283;
    int t6307;
    int t6376;
    int t6393;
    int t6464;
    int t6576;
    int t6647;
    int t6785;
    int t6802;
    int t6873;
    int t6985;
    int t7056;
    float u10726;
    float u7191;
    float u8953;
    int t8940;
    int t7222;
    int t8934;
    int t8094;
    int t7240;
    int t8083;
    int t8077;
    int t7259;
    int t8071;
    int t7667;
    int t7661;
    int t7272;
    int t7468;
    int t7457;
    int t7296;
    int t7311;
    int t7326;
    int t7359;
    int t7375;
    int t7417;
    int t7655;
    int t7494;
    int t7509;
    int t7524;
    int t7557;
    int t7573;
    int t7615;
    int t8065;
    int t7676;
    int t7872;
    int t7861;
    int t7700;
    int t7715;
    int t7730;
    int t7763;
    int t7779;
    int t7821;
    int t8059;
    int t7898;
    int t7913;
    int t7928;
    int t7961;
    int t7977;
    int t8019;
    int t8928;
    int t8110;
    int t8922;
    int t8518;
    int t8512;
    int t8123;
    int t8319;
    int t8308;
    int t8147;
    int t8162;
    int t8177;
    int t8210;
    int t8226;
    int t8268;
    int t8506;
    int t8345;
    int t8360;
    int t8375;
    int t8408;
    int t8424;
    int t8466;
    int t8916;
    int t8527;
    int t8723;
    int t8712;
    int t8551;
    int t8566;
    int t8581;
    int t8614;
    int t8630;
    int t8672;
    int t8910;
    int t8749;
    int t8764;
    int t8779;
    int t8812;
    int t8828;
    int t8870;
    int t10713;
    int t8995;
    int t10707;
    int t9867;
    int t9013;
    int t9856;
    int t9850;
    int t9032;
    int t9844;
    int t9440;
    int t9434;
    int t9045;
    int t9241;
    int t9230;
    int t9069;
    int t9084;
    int t9099;
    int t9132;
    int t9148;
    int t9190;
    int t9428;
    int t9267;
    int t9282;
    int t9297;
    int t9330;
    int t9346;
    int t9388;
    int t9838;
    int t9449;
    int t9645;
    int t9634;
    int t9473;
    int t9488;
    int t9503;
    int t9536;
    int t9552;
    int t9594;
    int t9832;
    int t9671;
    int t9686;
    int t9701;
    int t9734;
    int t9750;
    int t9792;
    int t10701;
    int t9883;
    int t10695;
    int t10291;
    int t10285;
    int t9896;
    int t10092;
    int t10081;
    int t9920;
    int t9935;
    int t9950;
    int t9983;
    int t9999;
    int t10041;
    int t10279;
    int t10118;
    int t10133;
    int t10148;
    int t10181;
    int t10197;
    int t10239;
    int t10689;
    int t10300;
    int t10496;
    int t10485;
    int t10324;
    int t10339;
    int t10354;
    int t10387;
    int t10403;
    int t10445;
    int t10683;
    int t10522;
    int t10537;
    int t10552;
    int t10585;
    int t10601;
    int t10643;
    float u10755;
    int t10769;
    int t10794;
    int stk[42];

    *(unsigned int *)(((int)stk + 60)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 48)) = 0x8C291F24;
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    t0 = *(int *)((a4 + 0xB60));
    t10808 = t0;
    if ((t0 & 64) != 0) {
    } else {
        t2 = *(int *)((a4 + 0xBD4));
        if (((int)t2 > (int)0xFFFFFFFF) && ((int)t2 < (int)0x64)) {
            *(unsigned int *)((a4 + 0xBD4)) = ((*(int *)((a4 + 0xBD4))) - 1);
        }
        t6 = motionIsEnd(a4);
        if (t6 != 0) {
            *(unsigned int *)((a4 + 0xBD4)) = 0xFFFFFF9D;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xB6C + a4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
        t10 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        *(float *)(((int)stk + 76)) = (float)(*(int *)((a4 + 0xC50)));
        if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
            *(float *)(((int)stk + 76)) = 100.0f;
        }
        t16 = *(int *)((a4 + 0xB58));
        t17 = *(int *)((a4 + 0xBD4));
        *(unsigned int *)(((int)stk + 44)) = 0x0;
        t22 = nlArcTan2(((*(float *)((a4 + 0xB6C))) - (*(float *)((a4 + 0xAE8)))), ((*(float *)((a4 + 0xB74))) - (*(float *)((a4 + 0xAF0)))));
        angDiff(t22, (*(short *)((a4 + 0xB06))));
        t26 = angDiff(t22, (*(short *)((a4 + 0xB04))));
        *(unsigned int *)(((int)stk + 40)) = (short)t26;
        if ((int)(short)t26 >= 0) {
            t29 = (*(int *)(((int)stk + 40)));
        } else {
            t29 = (-(*(int *)(((int)stk + 40))));
        }
        *(unsigned short *)(((int)stk + 72)) = t29;
        *(unsigned short *)(((int)stk + 56)) = (angDiff((*(short *)((a4 + 0xB0A))), (*(short *)((a4 + 0xB04)))));
        *(unsigned short *)(((int)stk + 36)) = (angDiff((*(short *)((a4 + 0xB0C))), (*(short *)((a4 + 0xB04)))));
        *(unsigned short *)(((int)stk + 52)) = (angDiff((*(short *)((a4 + 0xB0A))), t22));
        *(unsigned short *)(((int)stk + 32)) = (angDiff((*(short *)((a4 + 0xB0C))), t22));
        nlSubVector3op((((int)stk + 28) + 0x38), (0xB6C + a4), (0xAE8 + a4));
        if (((*(int *)((a4 + 0xB60))) & 4) != 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xBA8 + a4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAE8 + a4)); }
            t43 = vecDistXZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
            if (10.0f > t43) {
                *(unsigned int *)(((int)stk + 80)) = 0x1;
            }
        }
        if ((((*(int *)((a4 + 0xB60))) & 0x1) != 0) && (t49 = *(int *)(((int)stk + 48)), t50 = *(int *)((0x54 + t49)), (t50 & 4) != 0)) {
            *(unsigned int *)(((int)stk + 80)) = 0x1;
        }
        *(unsigned int *)(((int)stk + 28)) = (*(short *)(((int)stk + 36)));
        if (!(t10 > 7.0f)) {
            if ((*(int *)(((int)stk + 80))) == 0) {
                *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
                if ((*(int *)0x8C287C60) == 0) {
                    *(unsigned short *)(((0xB06 + a4) + 0x0)) = (angLerp((*(short *)((a4 + 0xB06))), (*(short *)((a4 + 0xB0E))), ((*(float *)0x8C23D204) * 0.0500000007f)));
                }
                t69 = ((int (*)(int, int, int, int, int))(playerPivotTurn))(a4, 0x1, 0x0, 0x0, ((int)stk + 16));
                if (((int)t16 >= 0) && ((int)t16 <= (int)0x15)) {
                    *(unsigned int *)((a4 + 0xB58)) = 0x0;
                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                } else {
                    if (((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) {
                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                            t79 = (*(int *)(((int)stk + 28)));
                        } else {
                            t79 = (-(*(int *)(((int)stk + 28))));
                        }
                        if ((int)t79 >= (int)0x1000) {
                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                                *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                            } else {
                                if ((int)t17 < 0) {
                                    if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                        t81 = *(short *)((a4 + 0xB04));
                                        t82 = *(short *)((a4 + 0xB0A));
                                        t83 = (unsigned short)((t82 - t81) + 0x1000);
                                        if ((int)(unsigned short)((t82 - t81) + 0x1000) < 0) {
                                            t83 = ((unsigned short)((t82 - t81) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned int *)((a4 + 0xB58)) = (((int)t83 >> 13) + 0x29);
                                        if (t16 == 25) {
                                            *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                        }
                                        if ((int)t16 < (int)0x21) {
                                            t93 = (*(short *)((a4 + 0xB04)));
                                            t96 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                            t97 = angDiff(t96, t93);
                                            if ((int)(short)t97 >= 0) {
                                                t99 = (*(short *)((a4 + 0xB04)));
                                                t102 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t111 = (short)(angDiff(t102, t99));
                                            } else {
                                                t105 = (*(short *)((a4 + 0xB04)));
                                                t108 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t111 = (-(short)(angDiff(t108, t105)));
                                            }
                                            if ((int)t111 > (int)0x5000) {
                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                    t117 = (*(int *)(((int)stk + 28)));
                                                } else {
                                                    t117 = (-(*(int *)(((int)stk + 28))));
                                                }
                                                if ((int)t117 < (int)0x3000) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                    t121 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t122 = *(short *)(((0xB04 + a4) + 0x0));
                                                    t123 = (unsigned short)((t121 - t122) + 0x1000);
                                                    if ((int)(unsigned short)((t121 - t122) + 0x1000) < 0) {
                                                        t123 = ((unsigned short)((t121 - t122) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t123 >> 13));
                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((int)t16 > (int)0x28) {
                                                t141 = (*(short *)((a4 + 0xB04)));
                                                t144 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t145 = angDiff(t144, t141);
                                                if ((int)(short)t145 >= 0) {
                                                    t147 = (*(short *)((a4 + 0xB04)));
                                                    t150 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t159 = (short)(angDiff(t150, t147));
                                                } else {
                                                    t153 = (*(short *)((a4 + 0xB04)));
                                                    t156 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t159 = (-(short)(angDiff(t156, t153)));
                                                }
                                                if ((int)t159 > (int)0x5000) {
                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                        t165 = (*(int *)(((int)stk + 28)));
                                                    } else {
                                                        t165 = (-(*(int *)(((int)stk + 28))));
                                                    }
                                                    if ((int)t165 < (int)0x3000) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                        t169 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t170 = *(short *)(((0xB04 + a4) + 0x0));
                                                        t171 = (unsigned short)((t169 - t170) + 0x1000);
                                                        if ((int)(unsigned short)((t169 - t170) + 0x1000) < 0) {
                                                            t171 = ((unsigned short)((t169 - t170) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t171 >> 13));
                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((int)(*(int *)0x8C287B2C) > 0) {
                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                        t192 = (*(short *)((a4 + 0xB04)));
                                                        t195 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t196 = angDiff(t195, t192);
                                                        if ((int)(short)t196 >= 0) {
                                                            t198 = (*(short *)((a4 + 0xB04)));
                                                            t201 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t210 = (short)(angDiff(t201, t198));
                                                        } else {
                                                            t204 = (*(short *)((a4 + 0xB04)));
                                                            t207 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t210 = (-(short)(angDiff(t207, t204)));
                                                        }
                                                        if ((int)t210 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t216 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t216 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t216 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t220 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t221 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t222 = (unsigned short)((t220 - t221) + 0x1000);
                                                                if ((int)(unsigned short)((t220 - t221) + 0x1000) < 0) {
                                                                    t222 = ((unsigned short)((t220 - t221) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t222 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        u236 = *(float *)((a4 + 0xAF0));
                                                        t239 = 0x1;
                                                        if (u236 > 0.0f) {
                                                        } else {
                                                            t237 = 0x0;
                                                            if (0.0f > u236) {
                                                                t237 = 0xFFFFFFFF;
                                                            }
                                                            t239 = t237;
                                                        }
                                                        t247 = 0x1;
                                                        if ((*(float *)0x8C291F38) > 0.0f) {
                                                        } else {
                                                            t244 = 0x0;
                                                            if (0.0f > (*(float *)0x8C291F38)) {
                                                                t244 = 0xFFFFFFFF;
                                                            }
                                                            t247 = t244;
                                                        }
                                                        if (t239 == t247) {
                                                            u251 = *(float *)((a4 + 0xAF0));
                                                            u253 = (-u251);
                                                            if (!(0.0f > u251)) {
                                                                u253 = (*(float *)((a4 + 0xAF0)));
                                                            }
                                                            if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                u259 = (*(float *)0x8C291F38);
                                                            } else {
                                                                u259 = (-(*(float *)0x8C291F38));
                                                            }
                                                            if (u259 > (u253 + 20.0f)) {
                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                        u274 = *(float *)((a4 + 0xAF0));
                                                                        u276 = (-u274);
                                                                        if (!(0.0f > u274)) {
                                                                            u276 = (*(float *)((a4 + 0xAF0)));
                                                                        }
                                                                        t278 = *(int *)((a4 + 0xB5C));
                                                                        t279 = ((~(((~(t278 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                        if ((int)(t278 + 0x2) >= 0) {
                                                                            t279 = ((t278 + 0x2) & 0x1);
                                                                        }
                                                                        if (!(0.0f > (*(float *)((0x8C288874 + (t279 * 0xD78)))))) {
                                                                            t284 = *(int *)((a4 + 0xB5C));
                                                                            t285 = ((~(((~(t284 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t284 + 0x2) >= 0) {
                                                                                t285 = ((t284 + 0x2) & 0x1);
                                                                            }
                                                                            u293 = (*(float *)((0x8C288874 + (t285 * 0xD78))));
                                                                        } else {
                                                                            t288 = *(int *)((a4 + 0xB5C));
                                                                            t289 = ((~(((~(t288 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t288 + 0x2) >= 0) {
                                                                                t289 = ((t288 + 0x2) & 0x1);
                                                                            }
                                                                            u293 = (-(*(float *)((0x8C288874 + (t289 * 0xD78)))));
                                                                        }
                                                                        if (u276 > (u293 + 20.0f)) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                        } else {
                                                                            t298 = (*(short *)((a4 + 0xB04)));
                                                                            t301 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t302 = angDiff(t301, t298);
                                                                            if ((int)(short)t302 >= 0) {
                                                                                t304 = (*(short *)((a4 + 0xB04)));
                                                                                t307 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t316 = (short)(angDiff(t307, t304));
                                                                            } else {
                                                                                t310 = (*(short *)((a4 + 0xB04)));
                                                                                t313 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t316 = (-(short)(angDiff(t313, t310)));
                                                                            }
                                                                            if ((int)t316 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t322 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t322 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t322 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t326 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t327 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t328 = (unsigned short)((t326 - t327) + 0x1000);
                                                                                    if ((int)(unsigned short)((t326 - t327) + 0x1000) < 0) {
                                                                                        t328 = ((unsigned short)((t326 - t327) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t328 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t350 = (*(short *)((a4 + 0xB04)));
                                                                        t353 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t354 = angDiff(t353, t350);
                                                                        if ((int)(short)t354 >= 0) {
                                                                            t356 = (*(short *)((a4 + 0xB04)));
                                                                            t359 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t368 = (short)(angDiff(t359, t356));
                                                                        } else {
                                                                            t362 = (*(short *)((a4 + 0xB04)));
                                                                            t365 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t368 = (-(short)(angDiff(t365, t362)));
                                                                        }
                                                                        if ((int)t368 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t374 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t374 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t374 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t378 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t379 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t380 = (unsigned short)((t378 - t379) + 0x1000);
                                                                                if ((int)(unsigned short)((t378 - t379) + 0x1000) < 0) {
                                                                                    t380 = ((unsigned short)((t378 - t379) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t380 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                }
                                                            } else {
                                                                t410 = (*(short *)((a4 + 0xB04)));
                                                                t413 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t414 = angDiff(t413, t410);
                                                                if ((int)(short)t414 >= 0) {
                                                                    t416 = (*(short *)((a4 + 0xB04)));
                                                                    t419 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t428 = (short)(angDiff(t419, t416));
                                                                } else {
                                                                    t422 = (*(short *)((a4 + 0xB04)));
                                                                    t425 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t428 = (-(short)(angDiff(t425, t422)));
                                                                }
                                                                if ((int)t428 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t434 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t434 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t434 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t438 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t439 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t440 = (unsigned short)((t438 - t439) + 0x1000);
                                                                        if ((int)(unsigned short)((t438 - t439) + 0x1000) < 0) {
                                                                            t440 = ((unsigned short)((t438 - t439) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t440 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t462 = (*(short *)((a4 + 0xB04)));
                                                            t465 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t466 = angDiff(t465, t462);
                                                            if ((int)(short)t466 >= 0) {
                                                                t468 = (*(short *)((a4 + 0xB04)));
                                                                t471 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t480 = (short)(angDiff(t471, t468));
                                                            } else {
                                                                t474 = (*(short *)((a4 + 0xB04)));
                                                                t477 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t480 = (-(short)(angDiff(t477, t474)));
                                                            }
                                                            if ((int)t480 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t486 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t486 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t486 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t490 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t491 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t492 = (unsigned short)((t490 - t491) + 0x1000);
                                                                    if ((int)(unsigned short)((t490 - t491) + 0x1000) < 0) {
                                                                        t492 = ((unsigned short)((t490 - t491) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t492 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                    } else {
                                        if ((int)t16 >= (int)0x16) {
                                            if ((int)t16 <= (int)0x18) {
                                                t541 = *(short *)((a4 + 0xB04));
                                                t542 = *(short *)((a4 + 0xB0A));
                                                t543 = (unsigned short)((t542 - t541) + 0x1000);
                                                if ((int)(unsigned short)((t542 - t541) + 0x1000) < 0) {
                                                    t543 = ((unsigned short)((t542 - t541) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)((a4 + 0xB58)) = (((int)t543 >> 13) + 0x29);
                                                if (t16 == 25) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                }
                                                if ((int)t16 < (int)0x21) {
                                                    t553 = (*(short *)((a4 + 0xB04)));
                                                    t556 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t557 = angDiff(t556, t553);
                                                    if ((int)(short)t557 >= 0) {
                                                        t559 = (*(short *)((a4 + 0xB04)));
                                                        t562 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t571 = (short)(angDiff(t562, t559));
                                                    } else {
                                                        t565 = (*(short *)((a4 + 0xB04)));
                                                        t568 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t571 = (-(short)(angDiff(t568, t565)));
                                                    }
                                                    if ((int)t571 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t577 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t577 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t577 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t581 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t582 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t583 = (unsigned short)((t581 - t582) + 0x1000);
                                                            if ((int)(unsigned short)((t581 - t582) + 0x1000) < 0) {
                                                                t583 = ((unsigned short)((t581 - t582) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t583 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)t16 > (int)0x28) {
                                                        t601 = (*(short *)((a4 + 0xB04)));
                                                        t604 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t605 = angDiff(t604, t601);
                                                        if ((int)(short)t605 >= 0) {
                                                            t607 = (*(short *)((a4 + 0xB04)));
                                                            t610 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t619 = (short)(angDiff(t610, t607));
                                                        } else {
                                                            t613 = (*(short *)((a4 + 0xB04)));
                                                            t616 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t619 = (-(short)(angDiff(t616, t613)));
                                                        }
                                                        if ((int)t619 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t625 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t625 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t625 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t629 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t630 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t631 = (unsigned short)((t629 - t630) + 0x1000);
                                                                if ((int)(unsigned short)((t629 - t630) + 0x1000) < 0) {
                                                                    t631 = ((unsigned short)((t629 - t630) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t631 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(*(int *)0x8C287B2C) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                        } else {
                                                            if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                t652 = (*(short *)((a4 + 0xB04)));
                                                                t655 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t656 = angDiff(t655, t652);
                                                                if ((int)(short)t656 >= 0) {
                                                                    t658 = (*(short *)((a4 + 0xB04)));
                                                                    t661 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t670 = (short)(angDiff(t661, t658));
                                                                } else {
                                                                    t664 = (*(short *)((a4 + 0xB04)));
                                                                    t667 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t670 = (-(short)(angDiff(t667, t664)));
                                                                }
                                                                if ((int)t670 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t676 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t676 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t676 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t680 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t681 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t682 = (unsigned short)((t680 - t681) + 0x1000);
                                                                        if ((int)(unsigned short)((t680 - t681) + 0x1000) < 0) {
                                                                            t682 = ((unsigned short)((t680 - t681) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t682 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                u696 = *(float *)((a4 + 0xAF0));
                                                                t699 = 0x1;
                                                                if (u696 > 0.0f) {
                                                                } else {
                                                                    t697 = 0x0;
                                                                    if (0.0f > u696) {
                                                                        t697 = 0xFFFFFFFF;
                                                                    }
                                                                    t699 = t697;
                                                                }
                                                                t707 = 0x1;
                                                                if ((*(float *)0x8C291F38) > 0.0f) {
                                                                } else {
                                                                    t704 = 0x0;
                                                                    if (0.0f > (*(float *)0x8C291F38)) {
                                                                        t704 = 0xFFFFFFFF;
                                                                    }
                                                                    t707 = t704;
                                                                }
                                                                if (t699 == t707) {
                                                                    u711 = *(float *)((a4 + 0xAF0));
                                                                    u713 = (-u711);
                                                                    if (!(0.0f > u711)) {
                                                                        u713 = (*(float *)((a4 + 0xAF0)));
                                                                    }
                                                                    if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                        u719 = (*(float *)0x8C291F38);
                                                                    } else {
                                                                        u719 = (-(*(float *)0x8C291F38));
                                                                    }
                                                                    if (u719 > (u713 + 20.0f)) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                u734 = *(float *)((a4 + 0xAF0));
                                                                                u736 = (-u734);
                                                                                if (!(0.0f > u734)) {
                                                                                    u736 = (*(float *)((a4 + 0xAF0)));
                                                                                }
                                                                                t738 = *(int *)((a4 + 0xB5C));
                                                                                t739 = ((~(((~(t738 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t738 + 0x2) >= 0) {
                                                                                    t739 = ((t738 + 0x2) & 0x1);
                                                                                }
                                                                                if (!(0.0f > (*(float *)((0x8C288874 + (t739 * 0xD78)))))) {
                                                                                    t744 = *(int *)((a4 + 0xB5C));
                                                                                    t745 = ((~(((~(t744 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t744 + 0x2) >= 0) {
                                                                                        t745 = ((t744 + 0x2) & 0x1);
                                                                                    }
                                                                                    u753 = (*(float *)((0x8C288874 + (t745 * 0xD78))));
                                                                                } else {
                                                                                    t748 = *(int *)((a4 + 0xB5C));
                                                                                    t749 = ((~(((~(t748 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t748 + 0x2) >= 0) {
                                                                                        t749 = ((t748 + 0x2) & 0x1);
                                                                                    }
                                                                                    u753 = (-(*(float *)((0x8C288874 + (t749 * 0xD78)))));
                                                                                }
                                                                                if (u736 > (u753 + 20.0f)) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                } else {
                                                                                    t758 = (*(short *)((a4 + 0xB04)));
                                                                                    t761 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t762 = angDiff(t761, t758);
                                                                                    if ((int)(short)t762 >= 0) {
                                                                                        t764 = (*(short *)((a4 + 0xB04)));
                                                                                        t767 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t776 = (short)(angDiff(t767, t764));
                                                                                    } else {
                                                                                        t770 = (*(short *)((a4 + 0xB04)));
                                                                                        t773 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t776 = (-(short)(angDiff(t773, t770)));
                                                                                    }
                                                                                    if ((int)t776 > (int)0x5000) {
                                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                            t782 = (*(int *)(((int)stk + 28)));
                                                                                        } else {
                                                                                            t782 = (-(*(int *)(((int)stk + 28))));
                                                                                        }
                                                                                        if ((int)t782 < (int)0x3000) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                            t786 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t787 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                            t788 = (unsigned short)((t786 - t787) + 0x1000);
                                                                                            if ((int)(unsigned short)((t786 - t787) + 0x1000) < 0) {
                                                                                                t788 = ((unsigned short)((t786 - t787) + 0x1000) + 0x1FFF);
                                                                                            }
                                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t788 >> 13));
                                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t810 = (*(short *)((a4 + 0xB04)));
                                                                                t813 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t814 = angDiff(t813, t810);
                                                                                if ((int)(short)t814 >= 0) {
                                                                                    t816 = (*(short *)((a4 + 0xB04)));
                                                                                    t819 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t828 = (short)(angDiff(t819, t816));
                                                                                } else {
                                                                                    t822 = (*(short *)((a4 + 0xB04)));
                                                                                    t825 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t828 = (-(short)(angDiff(t825, t822)));
                                                                                }
                                                                                if ((int)t828 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t834 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t834 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t834 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t838 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t839 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t840 = (unsigned short)((t838 - t839) + 0x1000);
                                                                                        if ((int)(unsigned short)((t838 - t839) + 0x1000) < 0) {
                                                                                            t840 = ((unsigned short)((t838 - t839) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t840 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                        }
                                                                    } else {
                                                                        t870 = (*(short *)((a4 + 0xB04)));
                                                                        t873 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t874 = angDiff(t873, t870);
                                                                        if ((int)(short)t874 >= 0) {
                                                                            t876 = (*(short *)((a4 + 0xB04)));
                                                                            t879 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t888 = (short)(angDiff(t879, t876));
                                                                        } else {
                                                                            t882 = (*(short *)((a4 + 0xB04)));
                                                                            t885 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t888 = (-(short)(angDiff(t885, t882)));
                                                                        }
                                                                        if ((int)t888 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t894 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t894 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t894 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t898 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t899 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t900 = (unsigned short)((t898 - t899) + 0x1000);
                                                                                if ((int)(unsigned short)((t898 - t899) + 0x1000) < 0) {
                                                                                    t900 = ((unsigned short)((t898 - t899) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t900 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t922 = (*(short *)((a4 + 0xB04)));
                                                                    t925 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t926 = angDiff(t925, t922);
                                                                    if ((int)(short)t926 >= 0) {
                                                                        t928 = (*(short *)((a4 + 0xB04)));
                                                                        t931 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t940 = (short)(angDiff(t931, t928));
                                                                    } else {
                                                                        t934 = (*(short *)((a4 + 0xB04)));
                                                                        t937 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t940 = (-(short)(angDiff(t937, t934)));
                                                                    }
                                                                    if ((int)t940 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t946 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t946 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t946 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t950 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t951 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t952 = (unsigned short)((t950 - t951) + 0x1000);
                                                                            if ((int)(unsigned short)((t950 - t951) + 0x1000) < 0) {
                                                                                t952 = ((unsigned short)((t950 - t951) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t952 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            *(unsigned int *)((a4 + 0xB58)) = 0x0;
                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                        }
                    } else {
                        if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                            *(unsigned int *)((a4 + 0xB58)) = 0x0;
                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                        } else {
                            if ((int)t17 < 0) {
                                if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                    t1043 = *(short *)((a4 + 0xB04));
                                    t1044 = *(short *)((a4 + 0xB0A));
                                    t1045 = (unsigned short)((t1044 - t1043) + 0x1000);
                                    if ((int)(unsigned short)((t1044 - t1043) + 0x1000) < 0) {
                                        t1045 = ((unsigned short)((t1044 - t1043) + 0x1000) + 0x1FFF);
                                    }
                                    *(unsigned int *)((a4 + 0xB58)) = (((int)t1045 >> 13) + 0x29);
                                    if (t16 == 25) {
                                        *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                    }
                                    if ((int)t16 < (int)0x21) {
                                        t1055 = (*(short *)((a4 + 0xB04)));
                                        t1058 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                        t1059 = angDiff(t1058, t1055);
                                        if ((int)(short)t1059 >= 0) {
                                            t1061 = (*(short *)((a4 + 0xB04)));
                                            t1064 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                            t1073 = (short)(angDiff(t1064, t1061));
                                        } else {
                                            t1067 = (*(short *)((a4 + 0xB04)));
                                            t1070 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                            t1073 = (-(short)(angDiff(t1070, t1067)));
                                        }
                                        if ((int)t1073 > (int)0x5000) {
                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                t1079 = (*(int *)(((int)stk + 28)));
                                            } else {
                                                t1079 = (-(*(int *)(((int)stk + 28))));
                                            }
                                            if ((int)t1079 < (int)0x3000) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                t1083 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t1084 = *(short *)(((0xB04 + a4) + 0x0));
                                                t1085 = (unsigned short)((t1083 - t1084) + 0x1000);
                                                if ((int)(unsigned short)((t1083 - t1084) + 0x1000) < 0) {
                                                    t1085 = ((unsigned short)((t1083 - t1084) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1085 >> 13));
                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                }
                                            }
                                        }
                                    } else {
                                        if ((int)t16 > (int)0x28) {
                                            t1103 = (*(short *)((a4 + 0xB04)));
                                            t1106 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                            t1107 = angDiff(t1106, t1103);
                                            if ((int)(short)t1107 >= 0) {
                                                t1109 = (*(short *)((a4 + 0xB04)));
                                                t1112 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t1121 = (short)(angDiff(t1112, t1109));
                                            } else {
                                                t1115 = (*(short *)((a4 + 0xB04)));
                                                t1118 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t1121 = (-(short)(angDiff(t1118, t1115)));
                                            }
                                            if ((int)t1121 > (int)0x5000) {
                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                    t1127 = (*(int *)(((int)stk + 28)));
                                                } else {
                                                    t1127 = (-(*(int *)(((int)stk + 28))));
                                                }
                                                if ((int)t1127 < (int)0x3000) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                    t1131 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t1132 = *(short *)(((0xB04 + a4) + 0x0));
                                                    t1133 = (unsigned short)((t1131 - t1132) + 0x1000);
                                                    if ((int)(unsigned short)((t1131 - t1132) + 0x1000) < 0) {
                                                        t1133 = ((unsigned short)((t1131 - t1132) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1133 >> 13));
                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((int)(*(int *)0x8C287B2C) > 0) {
                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                            } else {
                                                if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                    t1154 = (*(short *)((a4 + 0xB04)));
                                                    t1157 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t1158 = angDiff(t1157, t1154);
                                                    if ((int)(short)t1158 >= 0) {
                                                        t1160 = (*(short *)((a4 + 0xB04)));
                                                        t1163 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1172 = (short)(angDiff(t1163, t1160));
                                                    } else {
                                                        t1166 = (*(short *)((a4 + 0xB04)));
                                                        t1169 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1172 = (-(short)(angDiff(t1169, t1166)));
                                                    }
                                                    if ((int)t1172 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t1178 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t1178 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t1178 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t1182 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1183 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t1184 = (unsigned short)((t1182 - t1183) + 0x1000);
                                                            if ((int)(unsigned short)((t1182 - t1183) + 0x1000) < 0) {
                                                                t1184 = ((unsigned short)((t1182 - t1183) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1184 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    u1198 = *(float *)((a4 + 0xAF0));
                                                    t1201 = 0x1;
                                                    if (u1198 > 0.0f) {
                                                    } else {
                                                        t1199 = 0x0;
                                                        if (0.0f > u1198) {
                                                            t1199 = 0xFFFFFFFF;
                                                        }
                                                        t1201 = t1199;
                                                    }
                                                    t1209 = 0x1;
                                                    if ((*(float *)0x8C291F38) > 0.0f) {
                                                    } else {
                                                        t1206 = 0x0;
                                                        if (0.0f > (*(float *)0x8C291F38)) {
                                                            t1206 = 0xFFFFFFFF;
                                                        }
                                                        t1209 = t1206;
                                                    }
                                                    if (t1201 == t1209) {
                                                        u1213 = *(float *)((a4 + 0xAF0));
                                                        u1215 = (-u1213);
                                                        if (!(0.0f > u1213)) {
                                                            u1215 = (*(float *)((a4 + 0xAF0)));
                                                        }
                                                        if (!(0.0f > (*(float *)0x8C291F38))) {
                                                            u1221 = (*(float *)0x8C291F38);
                                                        } else {
                                                            u1221 = (-(*(float *)0x8C291F38));
                                                        }
                                                        if (u1221 > (u1215 + 20.0f)) {
                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                    u1236 = *(float *)((a4 + 0xAF0));
                                                                    u1238 = (-u1236);
                                                                    if (!(0.0f > u1236)) {
                                                                        u1238 = (*(float *)((a4 + 0xAF0)));
                                                                    }
                                                                    t1240 = *(int *)((a4 + 0xB5C));
                                                                    t1241 = ((~(((~(t1240 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                    if ((int)(t1240 + 0x2) >= 0) {
                                                                        t1241 = ((t1240 + 0x2) & 0x1);
                                                                    }
                                                                    if (!(0.0f > (*(float *)((0x8C288874 + (t1241 * 0xD78)))))) {
                                                                        t1246 = *(int *)((a4 + 0xB5C));
                                                                        t1247 = ((~(((~(t1246 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                        if ((int)(t1246 + 0x2) >= 0) {
                                                                            t1247 = ((t1246 + 0x2) & 0x1);
                                                                        }
                                                                        u1255 = (*(float *)((0x8C288874 + (t1247 * 0xD78))));
                                                                    } else {
                                                                        t1250 = *(int *)((a4 + 0xB5C));
                                                                        t1251 = ((~(((~(t1250 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                        if ((int)(t1250 + 0x2) >= 0) {
                                                                            t1251 = ((t1250 + 0x2) & 0x1);
                                                                        }
                                                                        u1255 = (-(*(float *)((0x8C288874 + (t1251 * 0xD78)))));
                                                                    }
                                                                    if (u1238 > (u1255 + 20.0f)) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                    } else {
                                                                        t1260 = (*(short *)((a4 + 0xB04)));
                                                                        t1263 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1264 = angDiff(t1263, t1260);
                                                                        if ((int)(short)t1264 >= 0) {
                                                                            t1266 = (*(short *)((a4 + 0xB04)));
                                                                            t1269 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t1278 = (short)(angDiff(t1269, t1266));
                                                                        } else {
                                                                            t1272 = (*(short *)((a4 + 0xB04)));
                                                                            t1275 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t1278 = (-(short)(angDiff(t1275, t1272)));
                                                                        }
                                                                        if ((int)t1278 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t1284 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t1284 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t1284 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t1288 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t1289 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t1290 = (unsigned short)((t1288 - t1289) + 0x1000);
                                                                                if ((int)(unsigned short)((t1288 - t1289) + 0x1000) < 0) {
                                                                                    t1290 = ((unsigned short)((t1288 - t1289) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1290 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1312 = (*(short *)((a4 + 0xB04)));
                                                                    t1315 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1316 = angDiff(t1315, t1312);
                                                                    if ((int)(short)t1316 >= 0) {
                                                                        t1318 = (*(short *)((a4 + 0xB04)));
                                                                        t1321 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1330 = (short)(angDiff(t1321, t1318));
                                                                    } else {
                                                                        t1324 = (*(short *)((a4 + 0xB04)));
                                                                        t1327 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1330 = (-(short)(angDiff(t1327, t1324)));
                                                                    }
                                                                    if ((int)t1330 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t1336 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t1336 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t1336 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t1340 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t1341 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t1342 = (unsigned short)((t1340 - t1341) + 0x1000);
                                                                            if ((int)(unsigned short)((t1340 - t1341) + 0x1000) < 0) {
                                                                                t1342 = ((unsigned short)((t1340 - t1341) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1342 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                            }
                                                        } else {
                                                            t1372 = (*(short *)((a4 + 0xB04)));
                                                            t1375 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1376 = angDiff(t1375, t1372);
                                                            if ((int)(short)t1376 >= 0) {
                                                                t1378 = (*(short *)((a4 + 0xB04)));
                                                                t1381 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1390 = (short)(angDiff(t1381, t1378));
                                                            } else {
                                                                t1384 = (*(short *)((a4 + 0xB04)));
                                                                t1387 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1390 = (-(short)(angDiff(t1387, t1384)));
                                                            }
                                                            if ((int)t1390 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t1396 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t1396 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t1396 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t1400 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1401 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t1402 = (unsigned short)((t1400 - t1401) + 0x1000);
                                                                    if ((int)(unsigned short)((t1400 - t1401) + 0x1000) < 0) {
                                                                        t1402 = ((unsigned short)((t1400 - t1401) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1402 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1424 = (*(short *)((a4 + 0xB04)));
                                                        t1427 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1428 = angDiff(t1427, t1424);
                                                        if ((int)(short)t1428 >= 0) {
                                                            t1430 = (*(short *)((a4 + 0xB04)));
                                                            t1433 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1442 = (short)(angDiff(t1433, t1430));
                                                        } else {
                                                            t1436 = (*(short *)((a4 + 0xB04)));
                                                            t1439 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1442 = (-(short)(angDiff(t1439, t1436)));
                                                        }
                                                        if ((int)t1442 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t1448 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t1448 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t1448 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t1452 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1453 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t1454 = (unsigned short)((t1452 - t1453) + 0x1000);
                                                                if ((int)(unsigned short)((t1452 - t1453) + 0x1000) < 0) {
                                                                    t1454 = ((unsigned short)((t1452 - t1453) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1454 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                } else {
                                    if ((int)t16 >= (int)0x16) {
                                        if ((int)t16 <= (int)0x18) {
                                            t1503 = *(short *)((a4 + 0xB04));
                                            t1504 = *(short *)((a4 + 0xB0A));
                                            t1505 = (unsigned short)((t1504 - t1503) + 0x1000);
                                            if ((int)(unsigned short)((t1504 - t1503) + 0x1000) < 0) {
                                                t1505 = ((unsigned short)((t1504 - t1503) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = (((int)t1505 >> 13) + 0x29);
                                            if (t16 == 25) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                            }
                                            if ((int)t16 < (int)0x21) {
                                                t1515 = (*(short *)((a4 + 0xB04)));
                                                t1518 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t1519 = angDiff(t1518, t1515);
                                                if ((int)(short)t1519 >= 0) {
                                                    t1521 = (*(short *)((a4 + 0xB04)));
                                                    t1524 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t1533 = (short)(angDiff(t1524, t1521));
                                                } else {
                                                    t1527 = (*(short *)((a4 + 0xB04)));
                                                    t1530 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t1533 = (-(short)(angDiff(t1530, t1527)));
                                                }
                                                if ((int)t1533 > (int)0x5000) {
                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                        t1539 = (*(int *)(((int)stk + 28)));
                                                    } else {
                                                        t1539 = (-(*(int *)(((int)stk + 28))));
                                                    }
                                                    if ((int)t1539 < (int)0x3000) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                        t1543 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1544 = *(short *)(((0xB04 + a4) + 0x0));
                                                        t1545 = (unsigned short)((t1543 - t1544) + 0x1000);
                                                        if ((int)(unsigned short)((t1543 - t1544) + 0x1000) < 0) {
                                                            t1545 = ((unsigned short)((t1543 - t1544) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1545 >> 13));
                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((int)t16 > (int)0x28) {
                                                    t1563 = (*(short *)((a4 + 0xB04)));
                                                    t1566 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t1567 = angDiff(t1566, t1563);
                                                    if ((int)(short)t1567 >= 0) {
                                                        t1569 = (*(short *)((a4 + 0xB04)));
                                                        t1572 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1581 = (short)(angDiff(t1572, t1569));
                                                    } else {
                                                        t1575 = (*(short *)((a4 + 0xB04)));
                                                        t1578 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t1581 = (-(short)(angDiff(t1578, t1575)));
                                                    }
                                                    if ((int)t1581 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t1587 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t1587 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t1587 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t1591 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1592 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t1593 = (unsigned short)((t1591 - t1592) + 0x1000);
                                                            if ((int)(unsigned short)((t1591 - t1592) + 0x1000) < 0) {
                                                                t1593 = ((unsigned short)((t1591 - t1592) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1593 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(*(int *)0x8C287B2C) > 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                            t1614 = (*(short *)((a4 + 0xB04)));
                                                            t1617 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t1618 = angDiff(t1617, t1614);
                                                            if ((int)(short)t1618 >= 0) {
                                                                t1620 = (*(short *)((a4 + 0xB04)));
                                                                t1623 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1632 = (short)(angDiff(t1623, t1620));
                                                            } else {
                                                                t1626 = (*(short *)((a4 + 0xB04)));
                                                                t1629 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1632 = (-(short)(angDiff(t1629, t1626)));
                                                            }
                                                            if ((int)t1632 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t1638 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t1638 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t1638 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t1642 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1643 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t1644 = (unsigned short)((t1642 - t1643) + 0x1000);
                                                                    if ((int)(unsigned short)((t1642 - t1643) + 0x1000) < 0) {
                                                                        t1644 = ((unsigned short)((t1642 - t1643) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1644 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            u1658 = *(float *)((a4 + 0xAF0));
                                                            t1661 = 0x1;
                                                            if (u1658 > 0.0f) {
                                                            } else {
                                                                t1659 = 0x0;
                                                                if (0.0f > u1658) {
                                                                    t1659 = 0xFFFFFFFF;
                                                                }
                                                                t1661 = t1659;
                                                            }
                                                            t1669 = 0x1;
                                                            if ((*(float *)0x8C291F38) > 0.0f) {
                                                            } else {
                                                                t1666 = 0x0;
                                                                if (0.0f > (*(float *)0x8C291F38)) {
                                                                    t1666 = 0xFFFFFFFF;
                                                                }
                                                                t1669 = t1666;
                                                            }
                                                            if (t1661 == t1669) {
                                                                u1673 = *(float *)((a4 + 0xAF0));
                                                                u1675 = (-u1673);
                                                                if (!(0.0f > u1673)) {
                                                                    u1675 = (*(float *)((a4 + 0xAF0)));
                                                                }
                                                                if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                    u1681 = (*(float *)0x8C291F38);
                                                                } else {
                                                                    u1681 = (-(*(float *)0x8C291F38));
                                                                }
                                                                if (u1681 > (u1675 + 20.0f)) {
                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                            u1696 = *(float *)((a4 + 0xAF0));
                                                                            u1698 = (-u1696);
                                                                            if (!(0.0f > u1696)) {
                                                                                u1698 = (*(float *)((a4 + 0xAF0)));
                                                                            }
                                                                            t1700 = *(int *)((a4 + 0xB5C));
                                                                            t1701 = ((~(((~(t1700 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t1700 + 0x2) >= 0) {
                                                                                t1701 = ((t1700 + 0x2) & 0x1);
                                                                            }
                                                                            if (!(0.0f > (*(float *)((0x8C288874 + (t1701 * 0xD78)))))) {
                                                                                t1706 = *(int *)((a4 + 0xB5C));
                                                                                t1707 = ((~(((~(t1706 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t1706 + 0x2) >= 0) {
                                                                                    t1707 = ((t1706 + 0x2) & 0x1);
                                                                                }
                                                                                u1715 = (*(float *)((0x8C288874 + (t1707 * 0xD78))));
                                                                            } else {
                                                                                t1710 = *(int *)((a4 + 0xB5C));
                                                                                t1711 = ((~(((~(t1710 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t1710 + 0x2) >= 0) {
                                                                                    t1711 = ((t1710 + 0x2) & 0x1);
                                                                                }
                                                                                u1715 = (-(*(float *)((0x8C288874 + (t1711 * 0xD78)))));
                                                                            }
                                                                            if (u1698 > (u1715 + 20.0f)) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                            } else {
                                                                                t1720 = (*(short *)((a4 + 0xB04)));
                                                                                t1723 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t1724 = angDiff(t1723, t1720);
                                                                                if ((int)(short)t1724 >= 0) {
                                                                                    t1726 = (*(short *)((a4 + 0xB04)));
                                                                                    t1729 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t1738 = (short)(angDiff(t1729, t1726));
                                                                                } else {
                                                                                    t1732 = (*(short *)((a4 + 0xB04)));
                                                                                    t1735 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t1738 = (-(short)(angDiff(t1735, t1732)));
                                                                                }
                                                                                if ((int)t1738 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t1744 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t1744 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t1744 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t1748 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t1749 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t1750 = (unsigned short)((t1748 - t1749) + 0x1000);
                                                                                        if ((int)(unsigned short)((t1748 - t1749) + 0x1000) < 0) {
                                                                                            t1750 = ((unsigned short)((t1748 - t1749) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1750 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t1772 = (*(short *)((a4 + 0xB04)));
                                                                            t1775 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t1776 = angDiff(t1775, t1772);
                                                                            if ((int)(short)t1776 >= 0) {
                                                                                t1778 = (*(short *)((a4 + 0xB04)));
                                                                                t1781 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t1790 = (short)(angDiff(t1781, t1778));
                                                                            } else {
                                                                                t1784 = (*(short *)((a4 + 0xB04)));
                                                                                t1787 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t1790 = (-(short)(angDiff(t1787, t1784)));
                                                                            }
                                                                            if ((int)t1790 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t1796 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t1796 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t1796 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t1800 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t1801 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t1802 = (unsigned short)((t1800 - t1801) + 0x1000);
                                                                                    if ((int)(unsigned short)((t1800 - t1801) + 0x1000) < 0) {
                                                                                        t1802 = ((unsigned short)((t1800 - t1801) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1802 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                    }
                                                                } else {
                                                                    t1832 = (*(short *)((a4 + 0xB04)));
                                                                    t1835 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1836 = angDiff(t1835, t1832);
                                                                    if ((int)(short)t1836 >= 0) {
                                                                        t1838 = (*(short *)((a4 + 0xB04)));
                                                                        t1841 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1850 = (short)(angDiff(t1841, t1838));
                                                                    } else {
                                                                        t1844 = (*(short *)((a4 + 0xB04)));
                                                                        t1847 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1850 = (-(short)(angDiff(t1847, t1844)));
                                                                    }
                                                                    if ((int)t1850 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t1856 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t1856 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t1856 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t1860 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t1861 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t1862 = (unsigned short)((t1860 - t1861) + 0x1000);
                                                                            if ((int)(unsigned short)((t1860 - t1861) + 0x1000) < 0) {
                                                                                t1862 = ((unsigned short)((t1860 - t1861) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1862 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t1884 = (*(short *)((a4 + 0xB04)));
                                                                t1887 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t1888 = angDiff(t1887, t1884);
                                                                if ((int)(short)t1888 >= 0) {
                                                                    t1890 = (*(short *)((a4 + 0xB04)));
                                                                    t1893 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1902 = (short)(angDiff(t1893, t1890));
                                                                } else {
                                                                    t1896 = (*(short *)((a4 + 0xB04)));
                                                                    t1899 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t1902 = (-(short)(angDiff(t1899, t1896)));
                                                                }
                                                                if ((int)t1902 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t1908 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t1908 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t1908 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t1912 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t1913 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t1914 = (unsigned short)((t1912 - t1913) + 0x1000);
                                                                        if ((int)(unsigned short)((t1912 - t1913) + 0x1000) < 0) {
                                                                            t1914 = ((unsigned short)((t1912 - t1913) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t1914 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                t2012 = *(int *)((a4 + 0xC58));
                *(unsigned int *)(((int)stk + 68)) = ((t2012 * 0x6C) + 0x8C102424);
                *(float *)((a4 + 0xBDC)) = (((*(float *)(((((t2012 * 0x6C) + 0x8C102424) + 0x28) + 0x0))) + (*(float *)(((((t2012 * 0x6C) + 0x8C102424) + 0x28) + 0x4)))) / (1.0f + 1.0f));
            } else {
                if (!(t10 > (1.0f + 1.0f))) {
                    *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
                    if ((*(int *)0x8C287C60) == 0) {
                        *(unsigned short *)(((0xB06 + a4) + 0x0)) = (angLerp((*(short *)((a4 + 0xB06))), (*(short *)((a4 + 0xB0E))), ((*(float *)0x8C23D204) * 0.0500000007f)));
                    }
                    t2029 = ((int (*)(int, int, int, int, int))(playerPivotTurn))(a4, 0x1, 0x0, 0x0, ((int)stk + 16));
                    if (((int)t16 >= 0) && ((int)t16 <= (int)0x15)) {
                        *(unsigned int *)((a4 + 0xB58)) = 0x0;
                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                        *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                    } else {
                        if (((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) {
                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                t2039 = (*(int *)(((int)stk + 28)));
                            } else {
                                t2039 = (-(*(int *)(((int)stk + 28))));
                            }
                            if ((int)t2039 >= (int)0x1000) {
                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                } else {
                                    if ((int)t17 < 0) {
                                        if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                            t2041 = *(short *)((a4 + 0xB04));
                                            t2042 = *(short *)((a4 + 0xB0A));
                                            t2043 = (unsigned short)((t2042 - t2041) + 0x1000);
                                            if ((int)(unsigned short)((t2042 - t2041) + 0x1000) < 0) {
                                                t2043 = ((unsigned short)((t2042 - t2041) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = (((int)t2043 >> 13) + 0x29);
                                            if (t16 == 25) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                            }
                                            if ((int)t16 < (int)0x21) {
                                                t2053 = (*(short *)((a4 + 0xB04)));
                                                t2056 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t2057 = angDiff(t2056, t2053);
                                                if ((int)(short)t2057 >= 0) {
                                                    t2059 = (*(short *)((a4 + 0xB04)));
                                                    t2062 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t2071 = (short)(angDiff(t2062, t2059));
                                                } else {
                                                    t2065 = (*(short *)((a4 + 0xB04)));
                                                    t2068 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t2071 = (-(short)(angDiff(t2068, t2065)));
                                                }
                                                if ((int)t2071 > (int)0x5000) {
                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                        t2077 = (*(int *)(((int)stk + 28)));
                                                    } else {
                                                        t2077 = (-(*(int *)(((int)stk + 28))));
                                                    }
                                                    if ((int)t2077 < (int)0x3000) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                        t2081 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t2082 = *(short *)(((0xB04 + a4) + 0x0));
                                                        t2083 = (unsigned short)((t2081 - t2082) + 0x1000);
                                                        if ((int)(unsigned short)((t2081 - t2082) + 0x1000) < 0) {
                                                            t2083 = ((unsigned short)((t2081 - t2082) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2083 >> 13));
                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((int)t16 > (int)0x28) {
                                                    t2101 = (*(short *)((a4 + 0xB04)));
                                                    t2104 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t2105 = angDiff(t2104, t2101);
                                                    if ((int)(short)t2105 >= 0) {
                                                        t2107 = (*(short *)((a4 + 0xB04)));
                                                        t2110 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t2119 = (short)(angDiff(t2110, t2107));
                                                    } else {
                                                        t2113 = (*(short *)((a4 + 0xB04)));
                                                        t2116 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t2119 = (-(short)(angDiff(t2116, t2113)));
                                                    }
                                                    if ((int)t2119 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t2125 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t2125 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t2125 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t2129 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t2130 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t2131 = (unsigned short)((t2129 - t2130) + 0x1000);
                                                            if ((int)(unsigned short)((t2129 - t2130) + 0x1000) < 0) {
                                                                t2131 = ((unsigned short)((t2129 - t2130) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2131 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(*(int *)0x8C287B2C) > 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                            t2152 = (*(short *)((a4 + 0xB04)));
                                                            t2155 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t2156 = angDiff(t2155, t2152);
                                                            if ((int)(short)t2156 >= 0) {
                                                                t2158 = (*(short *)((a4 + 0xB04)));
                                                                t2161 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2170 = (short)(angDiff(t2161, t2158));
                                                            } else {
                                                                t2164 = (*(short *)((a4 + 0xB04)));
                                                                t2167 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2170 = (-(short)(angDiff(t2167, t2164)));
                                                            }
                                                            if ((int)t2170 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t2176 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t2176 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t2176 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t2180 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2181 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t2182 = (unsigned short)((t2180 - t2181) + 0x1000);
                                                                    if ((int)(unsigned short)((t2180 - t2181) + 0x1000) < 0) {
                                                                        t2182 = ((unsigned short)((t2180 - t2181) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2182 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            u2196 = *(float *)((a4 + 0xAF0));
                                                            t2199 = 0x1;
                                                            if (u2196 > 0.0f) {
                                                            } else {
                                                                t2197 = 0x0;
                                                                if (0.0f > u2196) {
                                                                    t2197 = 0xFFFFFFFF;
                                                                }
                                                                t2199 = t2197;
                                                            }
                                                            t2207 = 0x1;
                                                            if ((*(float *)0x8C291F38) > 0.0f) {
                                                            } else {
                                                                t2204 = 0x0;
                                                                if (0.0f > (*(float *)0x8C291F38)) {
                                                                    t2204 = 0xFFFFFFFF;
                                                                }
                                                                t2207 = t2204;
                                                            }
                                                            if (t2199 == t2207) {
                                                                u2211 = *(float *)((a4 + 0xAF0));
                                                                u2213 = (-u2211);
                                                                if (!(0.0f > u2211)) {
                                                                    u2213 = (*(float *)((a4 + 0xAF0)));
                                                                }
                                                                if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                    u2219 = (*(float *)0x8C291F38);
                                                                } else {
                                                                    u2219 = (-(*(float *)0x8C291F38));
                                                                }
                                                                if (u2219 > (u2213 + 20.0f)) {
                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                            u2234 = *(float *)((a4 + 0xAF0));
                                                                            u2236 = (-u2234);
                                                                            if (!(0.0f > u2234)) {
                                                                                u2236 = (*(float *)((a4 + 0xAF0)));
                                                                            }
                                                                            t2238 = *(int *)((a4 + 0xB5C));
                                                                            t2239 = ((~(((~(t2238 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t2238 + 0x2) >= 0) {
                                                                                t2239 = ((t2238 + 0x2) & 0x1);
                                                                            }
                                                                            if (!(0.0f > (*(float *)((0x8C288874 + (t2239 * 0xD78)))))) {
                                                                                t2244 = *(int *)((a4 + 0xB5C));
                                                                                t2245 = ((~(((~(t2244 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t2244 + 0x2) >= 0) {
                                                                                    t2245 = ((t2244 + 0x2) & 0x1);
                                                                                }
                                                                                u2253 = (*(float *)((0x8C288874 + (t2245 * 0xD78))));
                                                                            } else {
                                                                                t2248 = *(int *)((a4 + 0xB5C));
                                                                                t2249 = ((~(((~(t2248 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t2248 + 0x2) >= 0) {
                                                                                    t2249 = ((t2248 + 0x2) & 0x1);
                                                                                }
                                                                                u2253 = (-(*(float *)((0x8C288874 + (t2249 * 0xD78)))));
                                                                            }
                                                                            if (u2236 > (u2253 + 20.0f)) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                            } else {
                                                                                t2258 = (*(short *)((a4 + 0xB04)));
                                                                                t2261 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2262 = angDiff(t2261, t2258);
                                                                                if ((int)(short)t2262 >= 0) {
                                                                                    t2264 = (*(short *)((a4 + 0xB04)));
                                                                                    t2267 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t2276 = (short)(angDiff(t2267, t2264));
                                                                                } else {
                                                                                    t2270 = (*(short *)((a4 + 0xB04)));
                                                                                    t2273 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t2276 = (-(short)(angDiff(t2273, t2270)));
                                                                                }
                                                                                if ((int)t2276 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t2282 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t2282 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t2282 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t2286 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t2287 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t2288 = (unsigned short)((t2286 - t2287) + 0x1000);
                                                                                        if ((int)(unsigned short)((t2286 - t2287) + 0x1000) < 0) {
                                                                                            t2288 = ((unsigned short)((t2286 - t2287) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2288 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t2310 = (*(short *)((a4 + 0xB04)));
                                                                            t2313 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2314 = angDiff(t2313, t2310);
                                                                            if ((int)(short)t2314 >= 0) {
                                                                                t2316 = (*(short *)((a4 + 0xB04)));
                                                                                t2319 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2328 = (short)(angDiff(t2319, t2316));
                                                                            } else {
                                                                                t2322 = (*(short *)((a4 + 0xB04)));
                                                                                t2325 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2328 = (-(short)(angDiff(t2325, t2322)));
                                                                            }
                                                                            if ((int)t2328 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t2334 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t2334 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t2334 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t2338 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t2339 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t2340 = (unsigned short)((t2338 - t2339) + 0x1000);
                                                                                    if ((int)(unsigned short)((t2338 - t2339) + 0x1000) < 0) {
                                                                                        t2340 = ((unsigned short)((t2338 - t2339) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2340 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                    }
                                                                } else {
                                                                    t2370 = (*(short *)((a4 + 0xB04)));
                                                                    t2373 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2374 = angDiff(t2373, t2370);
                                                                    if ((int)(short)t2374 >= 0) {
                                                                        t2376 = (*(short *)((a4 + 0xB04)));
                                                                        t2379 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2388 = (short)(angDiff(t2379, t2376));
                                                                    } else {
                                                                        t2382 = (*(short *)((a4 + 0xB04)));
                                                                        t2385 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2388 = (-(short)(angDiff(t2385, t2382)));
                                                                    }
                                                                    if ((int)t2388 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t2394 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t2394 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t2394 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t2398 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2399 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t2400 = (unsigned short)((t2398 - t2399) + 0x1000);
                                                                            if ((int)(unsigned short)((t2398 - t2399) + 0x1000) < 0) {
                                                                                t2400 = ((unsigned short)((t2398 - t2399) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2400 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t2422 = (*(short *)((a4 + 0xB04)));
                                                                t2425 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2426 = angDiff(t2425, t2422);
                                                                if ((int)(short)t2426 >= 0) {
                                                                    t2428 = (*(short *)((a4 + 0xB04)));
                                                                    t2431 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2440 = (short)(angDiff(t2431, t2428));
                                                                } else {
                                                                    t2434 = (*(short *)((a4 + 0xB04)));
                                                                    t2437 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2440 = (-(short)(angDiff(t2437, t2434)));
                                                                }
                                                                if ((int)t2440 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t2446 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t2446 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t2446 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t2450 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2451 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t2452 = (unsigned short)((t2450 - t2451) + 0x1000);
                                                                        if ((int)(unsigned short)((t2450 - t2451) + 0x1000) < 0) {
                                                                            t2452 = ((unsigned short)((t2450 - t2451) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2452 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                        } else {
                                            if ((int)t16 >= (int)0x16) {
                                                if ((int)t16 <= (int)0x18) {
                                                    t2501 = *(short *)((a4 + 0xB04));
                                                    t2502 = *(short *)((a4 + 0xB0A));
                                                    t2503 = (unsigned short)((t2502 - t2501) + 0x1000);
                                                    if ((int)(unsigned short)((t2502 - t2501) + 0x1000) < 0) {
                                                        t2503 = ((unsigned short)((t2502 - t2501) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)((a4 + 0xB58)) = (((int)t2503 >> 13) + 0x29);
                                                    if (t16 == 25) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                    }
                                                    if ((int)t16 < (int)0x21) {
                                                        t2513 = (*(short *)((a4 + 0xB04)));
                                                        t2516 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t2517 = angDiff(t2516, t2513);
                                                        if ((int)(short)t2517 >= 0) {
                                                            t2519 = (*(short *)((a4 + 0xB04)));
                                                            t2522 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t2531 = (short)(angDiff(t2522, t2519));
                                                        } else {
                                                            t2525 = (*(short *)((a4 + 0xB04)));
                                                            t2528 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t2531 = (-(short)(angDiff(t2528, t2525)));
                                                        }
                                                        if ((int)t2531 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t2537 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t2537 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t2537 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t2541 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2542 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t2543 = (unsigned short)((t2541 - t2542) + 0x1000);
                                                                if ((int)(unsigned short)((t2541 - t2542) + 0x1000) < 0) {
                                                                    t2543 = ((unsigned short)((t2541 - t2542) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2543 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)t16 > (int)0x28) {
                                                            t2561 = (*(short *)((a4 + 0xB04)));
                                                            t2564 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t2565 = angDiff(t2564, t2561);
                                                            if ((int)(short)t2565 >= 0) {
                                                                t2567 = (*(short *)((a4 + 0xB04)));
                                                                t2570 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2579 = (short)(angDiff(t2570, t2567));
                                                            } else {
                                                                t2573 = (*(short *)((a4 + 0xB04)));
                                                                t2576 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t2579 = (-(short)(angDiff(t2576, t2573)));
                                                            }
                                                            if ((int)t2579 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t2585 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t2585 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t2585 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t2589 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2590 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t2591 = (unsigned short)((t2589 - t2590) + 0x1000);
                                                                    if ((int)(unsigned short)((t2589 - t2590) + 0x1000) < 0) {
                                                                        t2591 = ((unsigned short)((t2589 - t2590) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2591 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(*(int *)0x8C287B2C) > 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                            } else {
                                                                if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                    t2612 = (*(short *)((a4 + 0xB04)));
                                                                    t2615 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t2616 = angDiff(t2615, t2612);
                                                                    if ((int)(short)t2616 >= 0) {
                                                                        t2618 = (*(short *)((a4 + 0xB04)));
                                                                        t2621 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2630 = (short)(angDiff(t2621, t2618));
                                                                    } else {
                                                                        t2624 = (*(short *)((a4 + 0xB04)));
                                                                        t2627 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2630 = (-(short)(angDiff(t2627, t2624)));
                                                                    }
                                                                    if ((int)t2630 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t2636 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t2636 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t2636 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t2640 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2641 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t2642 = (unsigned short)((t2640 - t2641) + 0x1000);
                                                                            if ((int)(unsigned short)((t2640 - t2641) + 0x1000) < 0) {
                                                                                t2642 = ((unsigned short)((t2640 - t2641) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2642 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    u2656 = *(float *)((a4 + 0xAF0));
                                                                    t2659 = 0x1;
                                                                    if (u2656 > 0.0f) {
                                                                    } else {
                                                                        t2657 = 0x0;
                                                                        if (0.0f > u2656) {
                                                                            t2657 = 0xFFFFFFFF;
                                                                        }
                                                                        t2659 = t2657;
                                                                    }
                                                                    t2667 = 0x1;
                                                                    if ((*(float *)0x8C291F38) > 0.0f) {
                                                                    } else {
                                                                        t2664 = 0x0;
                                                                        if (0.0f > (*(float *)0x8C291F38)) {
                                                                            t2664 = 0xFFFFFFFF;
                                                                        }
                                                                        t2667 = t2664;
                                                                    }
                                                                    if (t2659 == t2667) {
                                                                        u2671 = *(float *)((a4 + 0xAF0));
                                                                        u2673 = (-u2671);
                                                                        if (!(0.0f > u2671)) {
                                                                            u2673 = (*(float *)((a4 + 0xAF0)));
                                                                        }
                                                                        if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                            u2679 = (*(float *)0x8C291F38);
                                                                        } else {
                                                                            u2679 = (-(*(float *)0x8C291F38));
                                                                        }
                                                                        if (u2679 > (u2673 + 20.0f)) {
                                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                    u2694 = *(float *)((a4 + 0xAF0));
                                                                                    u2696 = (-u2694);
                                                                                    if (!(0.0f > u2694)) {
                                                                                        u2696 = (*(float *)((a4 + 0xAF0)));
                                                                                    }
                                                                                    t2698 = *(int *)((a4 + 0xB5C));
                                                                                    t2699 = ((~(((~(t2698 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t2698 + 0x2) >= 0) {
                                                                                        t2699 = ((t2698 + 0x2) & 0x1);
                                                                                    }
                                                                                    if (!(0.0f > (*(float *)((0x8C288874 + (t2699 * 0xD78)))))) {
                                                                                        t2704 = *(int *)((a4 + 0xB5C));
                                                                                        t2705 = ((~(((~(t2704 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                        if ((int)(t2704 + 0x2) >= 0) {
                                                                                            t2705 = ((t2704 + 0x2) & 0x1);
                                                                                        }
                                                                                        u2713 = (*(float *)((0x8C288874 + (t2705 * 0xD78))));
                                                                                    } else {
                                                                                        t2708 = *(int *)((a4 + 0xB5C));
                                                                                        t2709 = ((~(((~(t2708 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                        if ((int)(t2708 + 0x2) >= 0) {
                                                                                            t2709 = ((t2708 + 0x2) & 0x1);
                                                                                        }
                                                                                        u2713 = (-(*(float *)((0x8C288874 + (t2709 * 0xD78)))));
                                                                                    }
                                                                                    if (u2696 > (u2713 + 20.0f)) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                    } else {
                                                                                        t2718 = (*(short *)((a4 + 0xB04)));
                                                                                        t2721 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t2722 = angDiff(t2721, t2718);
                                                                                        if ((int)(short)t2722 >= 0) {
                                                                                            t2724 = (*(short *)((a4 + 0xB04)));
                                                                                            t2727 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t2736 = (short)(angDiff(t2727, t2724));
                                                                                        } else {
                                                                                            t2730 = (*(short *)((a4 + 0xB04)));
                                                                                            t2733 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t2736 = (-(short)(angDiff(t2733, t2730)));
                                                                                        }
                                                                                        if ((int)t2736 > (int)0x5000) {
                                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                                t2742 = (*(int *)(((int)stk + 28)));
                                                                                            } else {
                                                                                                t2742 = (-(*(int *)(((int)stk + 28))));
                                                                                            }
                                                                                            if ((int)t2742 < (int)0x3000) {
                                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                                t2746 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                t2747 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                                t2748 = (unsigned short)((t2746 - t2747) + 0x1000);
                                                                                                if ((int)(unsigned short)((t2746 - t2747) + 0x1000) < 0) {
                                                                                                    t2748 = ((unsigned short)((t2746 - t2747) + 0x1000) + 0x1FFF);
                                                                                                }
                                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2748 >> 13));
                                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t2770 = (*(short *)((a4 + 0xB04)));
                                                                                    t2773 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t2774 = angDiff(t2773, t2770);
                                                                                    if ((int)(short)t2774 >= 0) {
                                                                                        t2776 = (*(short *)((a4 + 0xB04)));
                                                                                        t2779 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t2788 = (short)(angDiff(t2779, t2776));
                                                                                    } else {
                                                                                        t2782 = (*(short *)((a4 + 0xB04)));
                                                                                        t2785 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t2788 = (-(short)(angDiff(t2785, t2782)));
                                                                                    }
                                                                                    if ((int)t2788 > (int)0x5000) {
                                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                            t2794 = (*(int *)(((int)stk + 28)));
                                                                                        } else {
                                                                                            t2794 = (-(*(int *)(((int)stk + 28))));
                                                                                        }
                                                                                        if ((int)t2794 < (int)0x3000) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                            t2798 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t2799 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                            t2800 = (unsigned short)((t2798 - t2799) + 0x1000);
                                                                                            if ((int)(unsigned short)((t2798 - t2799) + 0x1000) < 0) {
                                                                                                t2800 = ((unsigned short)((t2798 - t2799) + 0x1000) + 0x1FFF);
                                                                                            }
                                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2800 >> 13));
                                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                            }
                                                                        } else {
                                                                            t2830 = (*(short *)((a4 + 0xB04)));
                                                                            t2833 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2834 = angDiff(t2833, t2830);
                                                                            if ((int)(short)t2834 >= 0) {
                                                                                t2836 = (*(short *)((a4 + 0xB04)));
                                                                                t2839 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2848 = (short)(angDiff(t2839, t2836));
                                                                            } else {
                                                                                t2842 = (*(short *)((a4 + 0xB04)));
                                                                                t2845 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2848 = (-(short)(angDiff(t2845, t2842)));
                                                                            }
                                                                            if ((int)t2848 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t2854 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t2854 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t2854 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t2858 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t2859 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t2860 = (unsigned short)((t2858 - t2859) + 0x1000);
                                                                                    if ((int)(unsigned short)((t2858 - t2859) + 0x1000) < 0) {
                                                                                        t2860 = ((unsigned short)((t2858 - t2859) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2860 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t2882 = (*(short *)((a4 + 0xB04)));
                                                                        t2885 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t2886 = angDiff(t2885, t2882);
                                                                        if ((int)(short)t2886 >= 0) {
                                                                            t2888 = (*(short *)((a4 + 0xB04)));
                                                                            t2891 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2900 = (short)(angDiff(t2891, t2888));
                                                                        } else {
                                                                            t2894 = (*(short *)((a4 + 0xB04)));
                                                                            t2897 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t2900 = (-(short)(angDiff(t2897, t2894)));
                                                                        }
                                                                        if ((int)t2900 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t2906 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t2906 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t2906 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t2910 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t2911 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t2912 = (unsigned short)((t2910 - t2911) + 0x1000);
                                                                                if ((int)(unsigned short)((t2910 - t2911) + 0x1000) < 0) {
                                                                                    t2912 = ((unsigned short)((t2910 - t2911) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t2912 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                            }
                        } else {
                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                                *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                            } else {
                                if ((int)t17 < 0) {
                                    if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                        t3003 = *(short *)((a4 + 0xB04));
                                        t3004 = *(short *)((a4 + 0xB0A));
                                        t3005 = (unsigned short)((t3004 - t3003) + 0x1000);
                                        if ((int)(unsigned short)((t3004 - t3003) + 0x1000) < 0) {
                                            t3005 = ((unsigned short)((t3004 - t3003) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned int *)((a4 + 0xB58)) = (((int)t3005 >> 13) + 0x29);
                                        if (t16 == 25) {
                                            *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                        }
                                        if ((int)t16 < (int)0x21) {
                                            t3015 = (*(short *)((a4 + 0xB04)));
                                            t3018 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                            t3019 = angDiff(t3018, t3015);
                                            if ((int)(short)t3019 >= 0) {
                                                t3021 = (*(short *)((a4 + 0xB04)));
                                                t3024 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t3033 = (short)(angDiff(t3024, t3021));
                                            } else {
                                                t3027 = (*(short *)((a4 + 0xB04)));
                                                t3030 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t3033 = (-(short)(angDiff(t3030, t3027)));
                                            }
                                            if ((int)t3033 > (int)0x5000) {
                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                    t3039 = (*(int *)(((int)stk + 28)));
                                                } else {
                                                    t3039 = (-(*(int *)(((int)stk + 28))));
                                                }
                                                if ((int)t3039 < (int)0x3000) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                    t3043 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t3044 = *(short *)(((0xB04 + a4) + 0x0));
                                                    t3045 = (unsigned short)((t3043 - t3044) + 0x1000);
                                                    if ((int)(unsigned short)((t3043 - t3044) + 0x1000) < 0) {
                                                        t3045 = ((unsigned short)((t3043 - t3044) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3045 >> 13));
                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((int)t16 > (int)0x28) {
                                                t3063 = (*(short *)((a4 + 0xB04)));
                                                t3066 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t3067 = angDiff(t3066, t3063);
                                                if ((int)(short)t3067 >= 0) {
                                                    t3069 = (*(short *)((a4 + 0xB04)));
                                                    t3072 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t3081 = (short)(angDiff(t3072, t3069));
                                                } else {
                                                    t3075 = (*(short *)((a4 + 0xB04)));
                                                    t3078 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t3081 = (-(short)(angDiff(t3078, t3075)));
                                                }
                                                if ((int)t3081 > (int)0x5000) {
                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                        t3087 = (*(int *)(((int)stk + 28)));
                                                    } else {
                                                        t3087 = (-(*(int *)(((int)stk + 28))));
                                                    }
                                                    if ((int)t3087 < (int)0x3000) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                        t3091 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t3092 = *(short *)(((0xB04 + a4) + 0x0));
                                                        t3093 = (unsigned short)((t3091 - t3092) + 0x1000);
                                                        if ((int)(unsigned short)((t3091 - t3092) + 0x1000) < 0) {
                                                            t3093 = ((unsigned short)((t3091 - t3092) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3093 >> 13));
                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((int)(*(int *)0x8C287B2C) > 0) {
                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                        t3114 = (*(short *)((a4 + 0xB04)));
                                                        t3117 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t3118 = angDiff(t3117, t3114);
                                                        if ((int)(short)t3118 >= 0) {
                                                            t3120 = (*(short *)((a4 + 0xB04)));
                                                            t3123 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3132 = (short)(angDiff(t3123, t3120));
                                                        } else {
                                                            t3126 = (*(short *)((a4 + 0xB04)));
                                                            t3129 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3132 = (-(short)(angDiff(t3129, t3126)));
                                                        }
                                                        if ((int)t3132 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t3138 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t3138 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t3138 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t3142 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3143 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t3144 = (unsigned short)((t3142 - t3143) + 0x1000);
                                                                if ((int)(unsigned short)((t3142 - t3143) + 0x1000) < 0) {
                                                                    t3144 = ((unsigned short)((t3142 - t3143) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3144 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        u3158 = *(float *)((a4 + 0xAF0));
                                                        t3161 = 0x1;
                                                        if (u3158 > 0.0f) {
                                                        } else {
                                                            t3159 = 0x0;
                                                            if (0.0f > u3158) {
                                                                t3159 = 0xFFFFFFFF;
                                                            }
                                                            t3161 = t3159;
                                                        }
                                                        t3169 = 0x1;
                                                        if ((*(float *)0x8C291F38) > 0.0f) {
                                                        } else {
                                                            t3166 = 0x0;
                                                            if (0.0f > (*(float *)0x8C291F38)) {
                                                                t3166 = 0xFFFFFFFF;
                                                            }
                                                            t3169 = t3166;
                                                        }
                                                        if (t3161 == t3169) {
                                                            u3173 = *(float *)((a4 + 0xAF0));
                                                            u3175 = (-u3173);
                                                            if (!(0.0f > u3173)) {
                                                                u3175 = (*(float *)((a4 + 0xAF0)));
                                                            }
                                                            if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                u3181 = (*(float *)0x8C291F38);
                                                            } else {
                                                                u3181 = (-(*(float *)0x8C291F38));
                                                            }
                                                            if (u3181 > (u3175 + 20.0f)) {
                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                        u3196 = *(float *)((a4 + 0xAF0));
                                                                        u3198 = (-u3196);
                                                                        if (!(0.0f > u3196)) {
                                                                            u3198 = (*(float *)((a4 + 0xAF0)));
                                                                        }
                                                                        t3200 = *(int *)((a4 + 0xB5C));
                                                                        t3201 = ((~(((~(t3200 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                        if ((int)(t3200 + 0x2) >= 0) {
                                                                            t3201 = ((t3200 + 0x2) & 0x1);
                                                                        }
                                                                        if (!(0.0f > (*(float *)((0x8C288874 + (t3201 * 0xD78)))))) {
                                                                            t3206 = *(int *)((a4 + 0xB5C));
                                                                            t3207 = ((~(((~(t3206 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t3206 + 0x2) >= 0) {
                                                                                t3207 = ((t3206 + 0x2) & 0x1);
                                                                            }
                                                                            u3215 = (*(float *)((0x8C288874 + (t3207 * 0xD78))));
                                                                        } else {
                                                                            t3210 = *(int *)((a4 + 0xB5C));
                                                                            t3211 = ((~(((~(t3210 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t3210 + 0x2) >= 0) {
                                                                                t3211 = ((t3210 + 0x2) & 0x1);
                                                                            }
                                                                            u3215 = (-(*(float *)((0x8C288874 + (t3211 * 0xD78)))));
                                                                        }
                                                                        if (u3198 > (u3215 + 20.0f)) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                        } else {
                                                                            t3220 = (*(short *)((a4 + 0xB04)));
                                                                            t3223 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3224 = angDiff(t3223, t3220);
                                                                            if ((int)(short)t3224 >= 0) {
                                                                                t3226 = (*(short *)((a4 + 0xB04)));
                                                                                t3229 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t3238 = (short)(angDiff(t3229, t3226));
                                                                            } else {
                                                                                t3232 = (*(short *)((a4 + 0xB04)));
                                                                                t3235 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t3238 = (-(short)(angDiff(t3235, t3232)));
                                                                            }
                                                                            if ((int)t3238 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t3244 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t3244 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t3244 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t3248 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t3249 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t3250 = (unsigned short)((t3248 - t3249) + 0x1000);
                                                                                    if ((int)(unsigned short)((t3248 - t3249) + 0x1000) < 0) {
                                                                                        t3250 = ((unsigned short)((t3248 - t3249) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3250 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t3272 = (*(short *)((a4 + 0xB04)));
                                                                        t3275 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3276 = angDiff(t3275, t3272);
                                                                        if ((int)(short)t3276 >= 0) {
                                                                            t3278 = (*(short *)((a4 + 0xB04)));
                                                                            t3281 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3290 = (short)(angDiff(t3281, t3278));
                                                                        } else {
                                                                            t3284 = (*(short *)((a4 + 0xB04)));
                                                                            t3287 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3290 = (-(short)(angDiff(t3287, t3284)));
                                                                        }
                                                                        if ((int)t3290 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t3296 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t3296 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t3296 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t3300 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t3301 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t3302 = (unsigned short)((t3300 - t3301) + 0x1000);
                                                                                if ((int)(unsigned short)((t3300 - t3301) + 0x1000) < 0) {
                                                                                    t3302 = ((unsigned short)((t3300 - t3301) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3302 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                }
                                                            } else {
                                                                t3332 = (*(short *)((a4 + 0xB04)));
                                                                t3335 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3336 = angDiff(t3335, t3332);
                                                                if ((int)(short)t3336 >= 0) {
                                                                    t3338 = (*(short *)((a4 + 0xB04)));
                                                                    t3341 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3350 = (short)(angDiff(t3341, t3338));
                                                                } else {
                                                                    t3344 = (*(short *)((a4 + 0xB04)));
                                                                    t3347 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3350 = (-(short)(angDiff(t3347, t3344)));
                                                                }
                                                                if ((int)t3350 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t3356 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t3356 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t3356 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t3360 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3361 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t3362 = (unsigned short)((t3360 - t3361) + 0x1000);
                                                                        if ((int)(unsigned short)((t3360 - t3361) + 0x1000) < 0) {
                                                                            t3362 = ((unsigned short)((t3360 - t3361) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3362 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            t3384 = (*(short *)((a4 + 0xB04)));
                                                            t3387 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3388 = angDiff(t3387, t3384);
                                                            if ((int)(short)t3388 >= 0) {
                                                                t3390 = (*(short *)((a4 + 0xB04)));
                                                                t3393 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3402 = (short)(angDiff(t3393, t3390));
                                                            } else {
                                                                t3396 = (*(short *)((a4 + 0xB04)));
                                                                t3399 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3402 = (-(short)(angDiff(t3399, t3396)));
                                                            }
                                                            if ((int)t3402 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t3408 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t3408 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t3408 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t3412 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3413 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t3414 = (unsigned short)((t3412 - t3413) + 0x1000);
                                                                    if ((int)(unsigned short)((t3412 - t3413) + 0x1000) < 0) {
                                                                        t3414 = ((unsigned short)((t3412 - t3413) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3414 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                    } else {
                                        if ((int)t16 >= (int)0x16) {
                                            if ((int)t16 <= (int)0x18) {
                                                t3463 = *(short *)((a4 + 0xB04));
                                                t3464 = *(short *)((a4 + 0xB0A));
                                                t3465 = (unsigned short)((t3464 - t3463) + 0x1000);
                                                if ((int)(unsigned short)((t3464 - t3463) + 0x1000) < 0) {
                                                    t3465 = ((unsigned short)((t3464 - t3463) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)((a4 + 0xB58)) = (((int)t3465 >> 13) + 0x29);
                                                if (t16 == 25) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                }
                                                if ((int)t16 < (int)0x21) {
                                                    t3475 = (*(short *)((a4 + 0xB04)));
                                                    t3478 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t3479 = angDiff(t3478, t3475);
                                                    if ((int)(short)t3479 >= 0) {
                                                        t3481 = (*(short *)((a4 + 0xB04)));
                                                        t3484 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t3493 = (short)(angDiff(t3484, t3481));
                                                    } else {
                                                        t3487 = (*(short *)((a4 + 0xB04)));
                                                        t3490 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t3493 = (-(short)(angDiff(t3490, t3487)));
                                                    }
                                                    if ((int)t3493 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t3499 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t3499 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t3499 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t3503 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3504 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t3505 = (unsigned short)((t3503 - t3504) + 0x1000);
                                                            if ((int)(unsigned short)((t3503 - t3504) + 0x1000) < 0) {
                                                                t3505 = ((unsigned short)((t3503 - t3504) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3505 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)t16 > (int)0x28) {
                                                        t3523 = (*(short *)((a4 + 0xB04)));
                                                        t3526 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t3527 = angDiff(t3526, t3523);
                                                        if ((int)(short)t3527 >= 0) {
                                                            t3529 = (*(short *)((a4 + 0xB04)));
                                                            t3532 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3541 = (short)(angDiff(t3532, t3529));
                                                        } else {
                                                            t3535 = (*(short *)((a4 + 0xB04)));
                                                            t3538 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t3541 = (-(short)(angDiff(t3538, t3535)));
                                                        }
                                                        if ((int)t3541 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t3547 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t3547 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t3547 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t3551 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3552 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t3553 = (unsigned short)((t3551 - t3552) + 0x1000);
                                                                if ((int)(unsigned short)((t3551 - t3552) + 0x1000) < 0) {
                                                                    t3553 = ((unsigned short)((t3551 - t3552) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3553 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(*(int *)0x8C287B2C) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                        } else {
                                                            if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                t3574 = (*(short *)((a4 + 0xB04)));
                                                                t3577 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t3578 = angDiff(t3577, t3574);
                                                                if ((int)(short)t3578 >= 0) {
                                                                    t3580 = (*(short *)((a4 + 0xB04)));
                                                                    t3583 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3592 = (short)(angDiff(t3583, t3580));
                                                                } else {
                                                                    t3586 = (*(short *)((a4 + 0xB04)));
                                                                    t3589 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3592 = (-(short)(angDiff(t3589, t3586)));
                                                                }
                                                                if ((int)t3592 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t3598 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t3598 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t3598 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t3602 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3603 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t3604 = (unsigned short)((t3602 - t3603) + 0x1000);
                                                                        if ((int)(unsigned short)((t3602 - t3603) + 0x1000) < 0) {
                                                                            t3604 = ((unsigned short)((t3602 - t3603) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3604 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                u3618 = *(float *)((a4 + 0xAF0));
                                                                t3621 = 0x1;
                                                                if (u3618 > 0.0f) {
                                                                } else {
                                                                    t3619 = 0x0;
                                                                    if (0.0f > u3618) {
                                                                        t3619 = 0xFFFFFFFF;
                                                                    }
                                                                    t3621 = t3619;
                                                                }
                                                                t3629 = 0x1;
                                                                if ((*(float *)0x8C291F38) > 0.0f) {
                                                                } else {
                                                                    t3626 = 0x0;
                                                                    if (0.0f > (*(float *)0x8C291F38)) {
                                                                        t3626 = 0xFFFFFFFF;
                                                                    }
                                                                    t3629 = t3626;
                                                                }
                                                                if (t3621 == t3629) {
                                                                    u3633 = *(float *)((a4 + 0xAF0));
                                                                    u3635 = (-u3633);
                                                                    if (!(0.0f > u3633)) {
                                                                        u3635 = (*(float *)((a4 + 0xAF0)));
                                                                    }
                                                                    if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                        u3641 = (*(float *)0x8C291F38);
                                                                    } else {
                                                                        u3641 = (-(*(float *)0x8C291F38));
                                                                    }
                                                                    if (u3641 > (u3635 + 20.0f)) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                u3656 = *(float *)((a4 + 0xAF0));
                                                                                u3658 = (-u3656);
                                                                                if (!(0.0f > u3656)) {
                                                                                    u3658 = (*(float *)((a4 + 0xAF0)));
                                                                                }
                                                                                t3660 = *(int *)((a4 + 0xB5C));
                                                                                t3661 = ((~(((~(t3660 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t3660 + 0x2) >= 0) {
                                                                                    t3661 = ((t3660 + 0x2) & 0x1);
                                                                                }
                                                                                if (!(0.0f > (*(float *)((0x8C288874 + (t3661 * 0xD78)))))) {
                                                                                    t3666 = *(int *)((a4 + 0xB5C));
                                                                                    t3667 = ((~(((~(t3666 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t3666 + 0x2) >= 0) {
                                                                                        t3667 = ((t3666 + 0x2) & 0x1);
                                                                                    }
                                                                                    u3675 = (*(float *)((0x8C288874 + (t3667 * 0xD78))));
                                                                                } else {
                                                                                    t3670 = *(int *)((a4 + 0xB5C));
                                                                                    t3671 = ((~(((~(t3670 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t3670 + 0x2) >= 0) {
                                                                                        t3671 = ((t3670 + 0x2) & 0x1);
                                                                                    }
                                                                                    u3675 = (-(*(float *)((0x8C288874 + (t3671 * 0xD78)))));
                                                                                }
                                                                                if (u3658 > (u3675 + 20.0f)) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                } else {
                                                                                    t3680 = (*(short *)((a4 + 0xB04)));
                                                                                    t3683 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t3684 = angDiff(t3683, t3680);
                                                                                    if ((int)(short)t3684 >= 0) {
                                                                                        t3686 = (*(short *)((a4 + 0xB04)));
                                                                                        t3689 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t3698 = (short)(angDiff(t3689, t3686));
                                                                                    } else {
                                                                                        t3692 = (*(short *)((a4 + 0xB04)));
                                                                                        t3695 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t3698 = (-(short)(angDiff(t3695, t3692)));
                                                                                    }
                                                                                    if ((int)t3698 > (int)0x5000) {
                                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                            t3704 = (*(int *)(((int)stk + 28)));
                                                                                        } else {
                                                                                            t3704 = (-(*(int *)(((int)stk + 28))));
                                                                                        }
                                                                                        if ((int)t3704 < (int)0x3000) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                            t3708 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t3709 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                            t3710 = (unsigned short)((t3708 - t3709) + 0x1000);
                                                                                            if ((int)(unsigned short)((t3708 - t3709) + 0x1000) < 0) {
                                                                                                t3710 = ((unsigned short)((t3708 - t3709) + 0x1000) + 0x1FFF);
                                                                                            }
                                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3710 >> 13));
                                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t3732 = (*(short *)((a4 + 0xB04)));
                                                                                t3735 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t3736 = angDiff(t3735, t3732);
                                                                                if ((int)(short)t3736 >= 0) {
                                                                                    t3738 = (*(short *)((a4 + 0xB04)));
                                                                                    t3741 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t3750 = (short)(angDiff(t3741, t3738));
                                                                                } else {
                                                                                    t3744 = (*(short *)((a4 + 0xB04)));
                                                                                    t3747 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t3750 = (-(short)(angDiff(t3747, t3744)));
                                                                                }
                                                                                if ((int)t3750 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t3756 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t3756 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t3756 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t3760 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t3761 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t3762 = (unsigned short)((t3760 - t3761) + 0x1000);
                                                                                        if ((int)(unsigned short)((t3760 - t3761) + 0x1000) < 0) {
                                                                                            t3762 = ((unsigned short)((t3760 - t3761) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3762 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                        }
                                                                    } else {
                                                                        t3792 = (*(short *)((a4 + 0xB04)));
                                                                        t3795 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3796 = angDiff(t3795, t3792);
                                                                        if ((int)(short)t3796 >= 0) {
                                                                            t3798 = (*(short *)((a4 + 0xB04)));
                                                                            t3801 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3810 = (short)(angDiff(t3801, t3798));
                                                                        } else {
                                                                            t3804 = (*(short *)((a4 + 0xB04)));
                                                                            t3807 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3810 = (-(short)(angDiff(t3807, t3804)));
                                                                        }
                                                                        if ((int)t3810 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t3816 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t3816 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t3816 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t3820 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t3821 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t3822 = (unsigned short)((t3820 - t3821) + 0x1000);
                                                                                if ((int)(unsigned short)((t3820 - t3821) + 0x1000) < 0) {
                                                                                    t3822 = ((unsigned short)((t3820 - t3821) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3822 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t3844 = (*(short *)((a4 + 0xB04)));
                                                                    t3847 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t3848 = angDiff(t3847, t3844);
                                                                    if ((int)(short)t3848 >= 0) {
                                                                        t3850 = (*(short *)((a4 + 0xB04)));
                                                                        t3853 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3862 = (short)(angDiff(t3853, t3850));
                                                                    } else {
                                                                        t3856 = (*(short *)((a4 + 0xB04)));
                                                                        t3859 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t3862 = (-(short)(angDiff(t3859, t3856)));
                                                                    }
                                                                    if ((int)t3862 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t3868 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t3868 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t3868 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t3872 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t3873 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t3874 = (unsigned short)((t3872 - t3873) + 0x1000);
                                                                            if ((int)(unsigned short)((t3872 - t3873) + 0x1000) < 0) {
                                                                                t3874 = ((unsigned short)((t3872 - t3873) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t3874 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    t3972 = *(int *)((a4 + 0xC58));
                    *(unsigned int *)(((int)stk + 68)) = ((t3972 * 0x6C) + 0x8C102424);
                    *(float *)((a4 + 0xBDC)) = (((*(float *)(((((t3972 * 0x6C) + 0x8C102424) + 0x28) + 0x0))) + (*(float *)(((((t3972 * 0x6C) + 0x8C102424) + 0x28) + 0x4)))) / (1.0f + 1.0f));
                } else {
                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                        t3978 = (*(int *)(((int)stk + 28)));
                    } else {
                        t3978 = (-(*(int *)(((int)stk + 28))));
                    }
                    if ((int)t3978 < (int)0x2000) {
                        *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
                        if ((*(int *)0x8C287C60) == 0) {
                            *(unsigned short *)(((0xB06 + a4) + 0x0)) = (angLerp((*(short *)((a4 + 0xB06))), (*(short *)((a4 + 0xB0E))), ((*(float *)0x8C23D204) * 0.0500000007f)));
                        }
                        t3993 = ((int (*)(int, int, int, int, int))(playerPivotTurn))(a4, 0x1, 0x0, 0x0, ((int)stk + 16));
                        t3998 = nlArcTan2(((*(float *)((a4 + 0xB6C))) - (*(float *)((a4 + 0xAE8)))), ((*(float *)((a4 + 0xB74))) - (*(float *)((a4 + 0xAF0)))));
                        t3999 = *(short *)(((0xB06 + a4) + 0x0));
                        if (((int)t16 >= (int)0x3) && ((int)t16 <= (int)0xA)) {
                            if ((int)t16 < (int)0x3) {
                            } else {
                                if ((int)t16 > (int)0xA) {
                                } else {
                                    if (t17 != -99) {
                                    } else {
                                        if ((int)t17 >= 0) {
                                        } else {
                                            *(unsigned int *)((a4 + 0xB58)) = 0x3;
                                            t4001 = (unsigned short)((t3998 - t3999) + 0x1000);
                                            if ((int)(unsigned short)((t3998 - t3999) + 0x1000) < 0) {
                                                t4001 = ((unsigned short)((t3998 - t3999) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + ((int)t4001 >> 13));
                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                            *(float *)((a4 + 0xBDC)) = 1.0f;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                        }
                                    }
                                }
                            }
                        } else {
                            if ((int)t17 >= 0) {
                            } else {
                                *(unsigned int *)((a4 + 0xB58)) = 0x3;
                                t4029 = (unsigned short)((t3998 - t3999) + 0x1000);
                                if ((int)(unsigned short)((t3998 - t3999) + 0x1000) < 0) {
                                    t4029 = ((unsigned short)((t3998 - t3999) + 0x1000) + 0x1FFF);
                                }
                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + ((int)t4029 >> 13));
                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                *(unsigned int *)(((int)stk + 44)) = 0x5;
                                *(float *)((a4 + 0xBDC)) = 1.0f;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                            }
                        }
                    } else {
                        *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
                        if ((*(int *)0x8C287C60) == 0) {
                            *(unsigned short *)(((0xB06 + a4) + 0x0)) = (angLerp((*(short *)((a4 + 0xB06))), (*(short *)((a4 + 0xB0E))), ((*(float *)0x8C23D204) * 0.0500000007f)));
                        }
                        t4057 = ((int (*)(int, int, int, int, int))(playerPivotTurn))(a4, 0x1, 0x0, 0x0, ((int)stk + 16));
                        if (((int)t16 >= 0) && ((int)t16 <= (int)0x15)) {
                            *(unsigned int *)((a4 + 0xB58)) = 0x0;
                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                        } else {
                            if (((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) {
                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                    t4067 = (*(int *)(((int)stk + 28)));
                                } else {
                                    t4067 = (-(*(int *)(((int)stk + 28))));
                                }
                                if ((int)t4067 >= (int)0x1000) {
                                    if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                                        *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                        *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                    } else {
                                        if ((int)t17 < 0) {
                                            if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                                t4069 = *(short *)((a4 + 0xB04));
                                                t4070 = *(short *)((a4 + 0xB0A));
                                                t4071 = (unsigned short)((t4070 - t4069) + 0x1000);
                                                if ((int)(unsigned short)((t4070 - t4069) + 0x1000) < 0) {
                                                    t4071 = ((unsigned short)((t4070 - t4069) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)((a4 + 0xB58)) = (((int)t4071 >> 13) + 0x29);
                                                if (t16 == 25) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                }
                                                if ((int)t16 < (int)0x21) {
                                                    t4081 = (*(short *)((a4 + 0xB04)));
                                                    t4084 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t4085 = angDiff(t4084, t4081);
                                                    if ((int)(short)t4085 >= 0) {
                                                        t4087 = (*(short *)((a4 + 0xB04)));
                                                        t4090 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t4099 = (short)(angDiff(t4090, t4087));
                                                    } else {
                                                        t4093 = (*(short *)((a4 + 0xB04)));
                                                        t4096 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t4099 = (-(short)(angDiff(t4096, t4093)));
                                                    }
                                                    if ((int)t4099 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t4105 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t4105 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t4105 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t4109 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t4110 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t4111 = (unsigned short)((t4109 - t4110) + 0x1000);
                                                            if ((int)(unsigned short)((t4109 - t4110) + 0x1000) < 0) {
                                                                t4111 = ((unsigned short)((t4109 - t4110) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4111 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)t16 > (int)0x28) {
                                                        t4129 = (*(short *)((a4 + 0xB04)));
                                                        t4132 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t4133 = angDiff(t4132, t4129);
                                                        if ((int)(short)t4133 >= 0) {
                                                            t4135 = (*(short *)((a4 + 0xB04)));
                                                            t4138 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t4147 = (short)(angDiff(t4138, t4135));
                                                        } else {
                                                            t4141 = (*(short *)((a4 + 0xB04)));
                                                            t4144 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t4147 = (-(short)(angDiff(t4144, t4141)));
                                                        }
                                                        if ((int)t4147 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t4153 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t4153 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t4153 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t4157 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t4158 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t4159 = (unsigned short)((t4157 - t4158) + 0x1000);
                                                                if ((int)(unsigned short)((t4157 - t4158) + 0x1000) < 0) {
                                                                    t4159 = ((unsigned short)((t4157 - t4158) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4159 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)(*(int *)0x8C287B2C) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                        } else {
                                                            if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                t4180 = (*(short *)((a4 + 0xB04)));
                                                                t4183 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t4184 = angDiff(t4183, t4180);
                                                                if ((int)(short)t4184 >= 0) {
                                                                    t4186 = (*(short *)((a4 + 0xB04)));
                                                                    t4189 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4198 = (short)(angDiff(t4189, t4186));
                                                                } else {
                                                                    t4192 = (*(short *)((a4 + 0xB04)));
                                                                    t4195 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4198 = (-(short)(angDiff(t4195, t4192)));
                                                                }
                                                                if ((int)t4198 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t4204 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t4204 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t4204 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t4208 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4209 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t4210 = (unsigned short)((t4208 - t4209) + 0x1000);
                                                                        if ((int)(unsigned short)((t4208 - t4209) + 0x1000) < 0) {
                                                                            t4210 = ((unsigned short)((t4208 - t4209) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4210 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                u4224 = *(float *)((a4 + 0xAF0));
                                                                t4227 = 0x1;
                                                                if (u4224 > 0.0f) {
                                                                } else {
                                                                    t4225 = 0x0;
                                                                    if (0.0f > u4224) {
                                                                        t4225 = 0xFFFFFFFF;
                                                                    }
                                                                    t4227 = t4225;
                                                                }
                                                                t4235 = 0x1;
                                                                if ((*(float *)0x8C291F38) > 0.0f) {
                                                                } else {
                                                                    t4232 = 0x0;
                                                                    if (0.0f > (*(float *)0x8C291F38)) {
                                                                        t4232 = 0xFFFFFFFF;
                                                                    }
                                                                    t4235 = t4232;
                                                                }
                                                                if (t4227 == t4235) {
                                                                    u4239 = *(float *)((a4 + 0xAF0));
                                                                    u4241 = (-u4239);
                                                                    if (!(0.0f > u4239)) {
                                                                        u4241 = (*(float *)((a4 + 0xAF0)));
                                                                    }
                                                                    if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                        u4247 = (*(float *)0x8C291F38);
                                                                    } else {
                                                                        u4247 = (-(*(float *)0x8C291F38));
                                                                    }
                                                                    if (u4247 > (u4241 + 20.0f)) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                u4262 = *(float *)((a4 + 0xAF0));
                                                                                u4264 = (-u4262);
                                                                                if (!(0.0f > u4262)) {
                                                                                    u4264 = (*(float *)((a4 + 0xAF0)));
                                                                                }
                                                                                t4266 = *(int *)((a4 + 0xB5C));
                                                                                t4267 = ((~(((~(t4266 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t4266 + 0x2) >= 0) {
                                                                                    t4267 = ((t4266 + 0x2) & 0x1);
                                                                                }
                                                                                if (!(0.0f > (*(float *)((0x8C288874 + (t4267 * 0xD78)))))) {
                                                                                    t4272 = *(int *)((a4 + 0xB5C));
                                                                                    t4273 = ((~(((~(t4272 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t4272 + 0x2) >= 0) {
                                                                                        t4273 = ((t4272 + 0x2) & 0x1);
                                                                                    }
                                                                                    u4281 = (*(float *)((0x8C288874 + (t4273 * 0xD78))));
                                                                                } else {
                                                                                    t4276 = *(int *)((a4 + 0xB5C));
                                                                                    t4277 = ((~(((~(t4276 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t4276 + 0x2) >= 0) {
                                                                                        t4277 = ((t4276 + 0x2) & 0x1);
                                                                                    }
                                                                                    u4281 = (-(*(float *)((0x8C288874 + (t4277 * 0xD78)))));
                                                                                }
                                                                                if (u4264 > (u4281 + 20.0f)) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                } else {
                                                                                    t4286 = (*(short *)((a4 + 0xB04)));
                                                                                    t4289 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4290 = angDiff(t4289, t4286);
                                                                                    if ((int)(short)t4290 >= 0) {
                                                                                        t4292 = (*(short *)((a4 + 0xB04)));
                                                                                        t4295 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t4304 = (short)(angDiff(t4295, t4292));
                                                                                    } else {
                                                                                        t4298 = (*(short *)((a4 + 0xB04)));
                                                                                        t4301 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t4304 = (-(short)(angDiff(t4301, t4298)));
                                                                                    }
                                                                                    if ((int)t4304 > (int)0x5000) {
                                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                            t4310 = (*(int *)(((int)stk + 28)));
                                                                                        } else {
                                                                                            t4310 = (-(*(int *)(((int)stk + 28))));
                                                                                        }
                                                                                        if ((int)t4310 < (int)0x3000) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                            t4314 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t4315 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                            t4316 = (unsigned short)((t4314 - t4315) + 0x1000);
                                                                                            if ((int)(unsigned short)((t4314 - t4315) + 0x1000) < 0) {
                                                                                                t4316 = ((unsigned short)((t4314 - t4315) + 0x1000) + 0x1FFF);
                                                                                            }
                                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4316 >> 13));
                                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                t4338 = (*(short *)((a4 + 0xB04)));
                                                                                t4341 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4342 = angDiff(t4341, t4338);
                                                                                if ((int)(short)t4342 >= 0) {
                                                                                    t4344 = (*(short *)((a4 + 0xB04)));
                                                                                    t4347 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4356 = (short)(angDiff(t4347, t4344));
                                                                                } else {
                                                                                    t4350 = (*(short *)((a4 + 0xB04)));
                                                                                    t4353 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4356 = (-(short)(angDiff(t4353, t4350)));
                                                                                }
                                                                                if ((int)t4356 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t4362 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t4362 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t4362 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t4366 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t4367 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t4368 = (unsigned short)((t4366 - t4367) + 0x1000);
                                                                                        if ((int)(unsigned short)((t4366 - t4367) + 0x1000) < 0) {
                                                                                            t4368 = ((unsigned short)((t4366 - t4367) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4368 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                        }
                                                                    } else {
                                                                        t4398 = (*(short *)((a4 + 0xB04)));
                                                                        t4401 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4402 = angDiff(t4401, t4398);
                                                                        if ((int)(short)t4402 >= 0) {
                                                                            t4404 = (*(short *)((a4 + 0xB04)));
                                                                            t4407 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4416 = (short)(angDiff(t4407, t4404));
                                                                        } else {
                                                                            t4410 = (*(short *)((a4 + 0xB04)));
                                                                            t4413 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4416 = (-(short)(angDiff(t4413, t4410)));
                                                                        }
                                                                        if ((int)t4416 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t4422 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t4422 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t4422 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t4426 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4427 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t4428 = (unsigned short)((t4426 - t4427) + 0x1000);
                                                                                if ((int)(unsigned short)((t4426 - t4427) + 0x1000) < 0) {
                                                                                    t4428 = ((unsigned short)((t4426 - t4427) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4428 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    t4450 = (*(short *)((a4 + 0xB04)));
                                                                    t4453 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4454 = angDiff(t4453, t4450);
                                                                    if ((int)(short)t4454 >= 0) {
                                                                        t4456 = (*(short *)((a4 + 0xB04)));
                                                                        t4459 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4468 = (short)(angDiff(t4459, t4456));
                                                                    } else {
                                                                        t4462 = (*(short *)((a4 + 0xB04)));
                                                                        t4465 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4468 = (-(short)(angDiff(t4465, t4462)));
                                                                    }
                                                                    if ((int)t4468 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t4474 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t4474 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t4474 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t4478 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4479 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t4480 = (unsigned short)((t4478 - t4479) + 0x1000);
                                                                            if ((int)(unsigned short)((t4478 - t4479) + 0x1000) < 0) {
                                                                                t4480 = ((unsigned short)((t4478 - t4479) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4480 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                            } else {
                                                if ((int)t16 >= (int)0x16) {
                                                    if ((int)t16 <= (int)0x18) {
                                                        t4529 = *(short *)((a4 + 0xB04));
                                                        t4530 = *(short *)((a4 + 0xB0A));
                                                        t4531 = (unsigned short)((t4530 - t4529) + 0x1000);
                                                        if ((int)(unsigned short)((t4530 - t4529) + 0x1000) < 0) {
                                                            t4531 = ((unsigned short)((t4530 - t4529) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)((a4 + 0xB58)) = (((int)t4531 >> 13) + 0x29);
                                                        if (t16 == 25) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                        }
                                                        if ((int)t16 < (int)0x21) {
                                                            t4541 = (*(short *)((a4 + 0xB04)));
                                                            t4544 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t4545 = angDiff(t4544, t4541);
                                                            if ((int)(short)t4545 >= 0) {
                                                                t4547 = (*(short *)((a4 + 0xB04)));
                                                                t4550 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t4559 = (short)(angDiff(t4550, t4547));
                                                            } else {
                                                                t4553 = (*(short *)((a4 + 0xB04)));
                                                                t4556 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t4559 = (-(short)(angDiff(t4556, t4553)));
                                                            }
                                                            if ((int)t4559 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t4565 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t4565 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t4565 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t4569 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4570 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t4571 = (unsigned short)((t4569 - t4570) + 0x1000);
                                                                    if ((int)(unsigned short)((t4569 - t4570) + 0x1000) < 0) {
                                                                        t4571 = ((unsigned short)((t4569 - t4570) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4571 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)t16 > (int)0x28) {
                                                                t4589 = (*(short *)((a4 + 0xB04)));
                                                                t4592 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t4593 = angDiff(t4592, t4589);
                                                                if ((int)(short)t4593 >= 0) {
                                                                    t4595 = (*(short *)((a4 + 0xB04)));
                                                                    t4598 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4607 = (short)(angDiff(t4598, t4595));
                                                                } else {
                                                                    t4601 = (*(short *)((a4 + 0xB04)));
                                                                    t4604 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t4607 = (-(short)(angDiff(t4604, t4601)));
                                                                }
                                                                if ((int)t4607 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t4613 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t4613 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t4613 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t4617 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4618 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t4619 = (unsigned short)((t4617 - t4618) + 0x1000);
                                                                        if ((int)(unsigned short)((t4617 - t4618) + 0x1000) < 0) {
                                                                            t4619 = ((unsigned short)((t4617 - t4618) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4619 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if ((int)(*(int *)0x8C287B2C) > 0) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                } else {
                                                                    if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                        t4640 = (*(short *)((a4 + 0xB04)));
                                                                        t4643 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t4644 = angDiff(t4643, t4640);
                                                                        if ((int)(short)t4644 >= 0) {
                                                                            t4646 = (*(short *)((a4 + 0xB04)));
                                                                            t4649 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4658 = (short)(angDiff(t4649, t4646));
                                                                        } else {
                                                                            t4652 = (*(short *)((a4 + 0xB04)));
                                                                            t4655 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4658 = (-(short)(angDiff(t4655, t4652)));
                                                                        }
                                                                        if ((int)t4658 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t4664 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t4664 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t4664 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t4668 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4669 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t4670 = (unsigned short)((t4668 - t4669) + 0x1000);
                                                                                if ((int)(unsigned short)((t4668 - t4669) + 0x1000) < 0) {
                                                                                    t4670 = ((unsigned short)((t4668 - t4669) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4670 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        u4684 = *(float *)((a4 + 0xAF0));
                                                                        t4687 = 0x1;
                                                                        if (u4684 > 0.0f) {
                                                                        } else {
                                                                            t4685 = 0x0;
                                                                            if (0.0f > u4684) {
                                                                                t4685 = 0xFFFFFFFF;
                                                                            }
                                                                            t4687 = t4685;
                                                                        }
                                                                        t4695 = 0x1;
                                                                        if ((*(float *)0x8C291F38) > 0.0f) {
                                                                        } else {
                                                                            t4692 = 0x0;
                                                                            if (0.0f > (*(float *)0x8C291F38)) {
                                                                                t4692 = 0xFFFFFFFF;
                                                                            }
                                                                            t4695 = t4692;
                                                                        }
                                                                        if (t4687 == t4695) {
                                                                            u4699 = *(float *)((a4 + 0xAF0));
                                                                            u4701 = (-u4699);
                                                                            if (!(0.0f > u4699)) {
                                                                                u4701 = (*(float *)((a4 + 0xAF0)));
                                                                            }
                                                                            if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                                u4707 = (*(float *)0x8C291F38);
                                                                            } else {
                                                                                u4707 = (-(*(float *)0x8C291F38));
                                                                            }
                                                                            if (u4707 > (u4701 + 20.0f)) {
                                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                        u4722 = *(float *)((a4 + 0xAF0));
                                                                                        u4724 = (-u4722);
                                                                                        if (!(0.0f > u4722)) {
                                                                                            u4724 = (*(float *)((a4 + 0xAF0)));
                                                                                        }
                                                                                        t4726 = *(int *)((a4 + 0xB5C));
                                                                                        t4727 = ((~(((~(t4726 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                        if ((int)(t4726 + 0x2) >= 0) {
                                                                                            t4727 = ((t4726 + 0x2) & 0x1);
                                                                                        }
                                                                                        if (!(0.0f > (*(float *)((0x8C288874 + (t4727 * 0xD78)))))) {
                                                                                            t4732 = *(int *)((a4 + 0xB5C));
                                                                                            t4733 = ((~(((~(t4732 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                            if ((int)(t4732 + 0x2) >= 0) {
                                                                                                t4733 = ((t4732 + 0x2) & 0x1);
                                                                                            }
                                                                                            u4741 = (*(float *)((0x8C288874 + (t4733 * 0xD78))));
                                                                                        } else {
                                                                                            t4736 = *(int *)((a4 + 0xB5C));
                                                                                            t4737 = ((~(((~(t4736 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                            if ((int)(t4736 + 0x2) >= 0) {
                                                                                                t4737 = ((t4736 + 0x2) & 0x1);
                                                                                            }
                                                                                            u4741 = (-(*(float *)((0x8C288874 + (t4737 * 0xD78)))));
                                                                                        }
                                                                                        if (u4724 > (u4741 + 20.0f)) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                        } else {
                                                                                            t4746 = (*(short *)((a4 + 0xB04)));
                                                                                            t4749 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t4750 = angDiff(t4749, t4746);
                                                                                            if ((int)(short)t4750 >= 0) {
                                                                                                t4752 = (*(short *)((a4 + 0xB04)));
                                                                                                t4755 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                t4764 = (short)(angDiff(t4755, t4752));
                                                                                            } else {
                                                                                                t4758 = (*(short *)((a4 + 0xB04)));
                                                                                                t4761 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                t4764 = (-(short)(angDiff(t4761, t4758)));
                                                                                            }
                                                                                            if ((int)t4764 > (int)0x5000) {
                                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                                    t4770 = (*(int *)(((int)stk + 28)));
                                                                                                } else {
                                                                                                    t4770 = (-(*(int *)(((int)stk + 28))));
                                                                                                }
                                                                                                if ((int)t4770 < (int)0x3000) {
                                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                                    t4774 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                    t4775 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                                    t4776 = (unsigned short)((t4774 - t4775) + 0x1000);
                                                                                                    if ((int)(unsigned short)((t4774 - t4775) + 0x1000) < 0) {
                                                                                                        t4776 = ((unsigned short)((t4774 - t4775) + 0x1000) + 0x1FFF);
                                                                                                    }
                                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4776 >> 13));
                                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        t4798 = (*(short *)((a4 + 0xB04)));
                                                                                        t4801 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t4802 = angDiff(t4801, t4798);
                                                                                        if ((int)(short)t4802 >= 0) {
                                                                                            t4804 = (*(short *)((a4 + 0xB04)));
                                                                                            t4807 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t4816 = (short)(angDiff(t4807, t4804));
                                                                                        } else {
                                                                                            t4810 = (*(short *)((a4 + 0xB04)));
                                                                                            t4813 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t4816 = (-(short)(angDiff(t4813, t4810)));
                                                                                        }
                                                                                        if ((int)t4816 > (int)0x5000) {
                                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                                t4822 = (*(int *)(((int)stk + 28)));
                                                                                            } else {
                                                                                                t4822 = (-(*(int *)(((int)stk + 28))));
                                                                                            }
                                                                                            if ((int)t4822 < (int)0x3000) {
                                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                                t4826 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                t4827 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                                t4828 = (unsigned short)((t4826 - t4827) + 0x1000);
                                                                                                if ((int)(unsigned short)((t4826 - t4827) + 0x1000) < 0) {
                                                                                                    t4828 = ((unsigned short)((t4826 - t4827) + 0x1000) + 0x1FFF);
                                                                                                }
                                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4828 >> 13));
                                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                }
                                                                            } else {
                                                                                t4858 = (*(short *)((a4 + 0xB04)));
                                                                                t4861 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4862 = angDiff(t4861, t4858);
                                                                                if ((int)(short)t4862 >= 0) {
                                                                                    t4864 = (*(short *)((a4 + 0xB04)));
                                                                                    t4867 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4876 = (short)(angDiff(t4867, t4864));
                                                                                } else {
                                                                                    t4870 = (*(short *)((a4 + 0xB04)));
                                                                                    t4873 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4876 = (-(short)(angDiff(t4873, t4870)));
                                                                                }
                                                                                if ((int)t4876 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t4882 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t4882 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t4882 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t4886 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t4887 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t4888 = (unsigned short)((t4886 - t4887) + 0x1000);
                                                                                        if ((int)(unsigned short)((t4886 - t4887) + 0x1000) < 0) {
                                                                                            t4888 = ((unsigned short)((t4886 - t4887) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4888 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t4910 = (*(short *)((a4 + 0xB04)));
                                                                            t4913 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t4914 = angDiff(t4913, t4910);
                                                                            if ((int)(short)t4914 >= 0) {
                                                                                t4916 = (*(short *)((a4 + 0xB04)));
                                                                                t4919 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4928 = (short)(angDiff(t4919, t4916));
                                                                            } else {
                                                                                t4922 = (*(short *)((a4 + 0xB04)));
                                                                                t4925 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t4928 = (-(short)(angDiff(t4925, t4922)));
                                                                            }
                                                                            if ((int)t4928 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t4934 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t4934 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t4934 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t4938 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t4939 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t4940 = (unsigned short)((t4938 - t4939) + 0x1000);
                                                                                    if ((int)(unsigned short)((t4938 - t4939) + 0x1000) < 0) {
                                                                                        t4940 = ((unsigned short)((t4938 - t4939) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t4940 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                }
                            } else {
                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 == -99))) {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x0;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                } else {
                                    if ((int)t17 < 0) {
                                        if ((((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) || ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || (((int)t16 >= (int)0x31) && ((int)t16 <= (int)0x38)))) {
                                            t5031 = *(short *)((a4 + 0xB04));
                                            t5032 = *(short *)((a4 + 0xB0A));
                                            t5033 = (unsigned short)((t5032 - t5031) + 0x1000);
                                            if ((int)(unsigned short)((t5032 - t5031) + 0x1000) < 0) {
                                                t5033 = ((unsigned short)((t5032 - t5031) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = (((int)t5033 >> 13) + 0x29);
                                            if (t16 == 25) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                            }
                                            if ((int)t16 < (int)0x21) {
                                                t5043 = (*(short *)((a4 + 0xB04)));
                                                t5046 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                t5047 = angDiff(t5046, t5043);
                                                if ((int)(short)t5047 >= 0) {
                                                    t5049 = (*(short *)((a4 + 0xB04)));
                                                    t5052 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t5061 = (short)(angDiff(t5052, t5049));
                                                } else {
                                                    t5055 = (*(short *)((a4 + 0xB04)));
                                                    t5058 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t5061 = (-(short)(angDiff(t5058, t5055)));
                                                }
                                                if ((int)t5061 > (int)0x5000) {
                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                        t5067 = (*(int *)(((int)stk + 28)));
                                                    } else {
                                                        t5067 = (-(*(int *)(((int)stk + 28))));
                                                    }
                                                    if ((int)t5067 < (int)0x3000) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                        t5071 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t5072 = *(short *)(((0xB04 + a4) + 0x0));
                                                        t5073 = (unsigned short)((t5071 - t5072) + 0x1000);
                                                        if ((int)(unsigned short)((t5071 - t5072) + 0x1000) < 0) {
                                                            t5073 = ((unsigned short)((t5071 - t5072) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5073 >> 13));
                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((int)t16 > (int)0x28) {
                                                    t5091 = (*(short *)((a4 + 0xB04)));
                                                    t5094 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                    t5095 = angDiff(t5094, t5091);
                                                    if ((int)(short)t5095 >= 0) {
                                                        t5097 = (*(short *)((a4 + 0xB04)));
                                                        t5100 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t5109 = (short)(angDiff(t5100, t5097));
                                                    } else {
                                                        t5103 = (*(short *)((a4 + 0xB04)));
                                                        t5106 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t5109 = (-(short)(angDiff(t5106, t5103)));
                                                    }
                                                    if ((int)t5109 > (int)0x5000) {
                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                            t5115 = (*(int *)(((int)stk + 28)));
                                                        } else {
                                                            t5115 = (-(*(int *)(((int)stk + 28))));
                                                        }
                                                        if ((int)t5115 < (int)0x3000) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                            t5119 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t5120 = *(short *)(((0xB04 + a4) + 0x0));
                                                            t5121 = (unsigned short)((t5119 - t5120) + 0x1000);
                                                            if ((int)(unsigned short)((t5119 - t5120) + 0x1000) < 0) {
                                                                t5121 = ((unsigned short)((t5119 - t5120) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5121 >> 13));
                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if ((int)(*(int *)0x8C287B2C) > 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                            t5142 = (*(short *)((a4 + 0xB04)));
                                                            t5145 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t5146 = angDiff(t5145, t5142);
                                                            if ((int)(short)t5146 >= 0) {
                                                                t5148 = (*(short *)((a4 + 0xB04)));
                                                                t5151 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5160 = (short)(angDiff(t5151, t5148));
                                                            } else {
                                                                t5154 = (*(short *)((a4 + 0xB04)));
                                                                t5157 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5160 = (-(short)(angDiff(t5157, t5154)));
                                                            }
                                                            if ((int)t5160 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t5166 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t5166 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t5166 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t5170 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5171 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t5172 = (unsigned short)((t5170 - t5171) + 0x1000);
                                                                    if ((int)(unsigned short)((t5170 - t5171) + 0x1000) < 0) {
                                                                        t5172 = ((unsigned short)((t5170 - t5171) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5172 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            u5186 = *(float *)((a4 + 0xAF0));
                                                            t5189 = 0x1;
                                                            if (u5186 > 0.0f) {
                                                            } else {
                                                                t5187 = 0x0;
                                                                if (0.0f > u5186) {
                                                                    t5187 = 0xFFFFFFFF;
                                                                }
                                                                t5189 = t5187;
                                                            }
                                                            t5197 = 0x1;
                                                            if ((*(float *)0x8C291F38) > 0.0f) {
                                                            } else {
                                                                t5194 = 0x0;
                                                                if (0.0f > (*(float *)0x8C291F38)) {
                                                                    t5194 = 0xFFFFFFFF;
                                                                }
                                                                t5197 = t5194;
                                                            }
                                                            if (t5189 == t5197) {
                                                                u5201 = *(float *)((a4 + 0xAF0));
                                                                u5203 = (-u5201);
                                                                if (!(0.0f > u5201)) {
                                                                    u5203 = (*(float *)((a4 + 0xAF0)));
                                                                }
                                                                if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                    u5209 = (*(float *)0x8C291F38);
                                                                } else {
                                                                    u5209 = (-(*(float *)0x8C291F38));
                                                                }
                                                                if (u5209 > (u5203 + 20.0f)) {
                                                                    if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                        if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                            u5224 = *(float *)((a4 + 0xAF0));
                                                                            u5226 = (-u5224);
                                                                            if (!(0.0f > u5224)) {
                                                                                u5226 = (*(float *)((a4 + 0xAF0)));
                                                                            }
                                                                            t5228 = *(int *)((a4 + 0xB5C));
                                                                            t5229 = ((~(((~(t5228 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                            if ((int)(t5228 + 0x2) >= 0) {
                                                                                t5229 = ((t5228 + 0x2) & 0x1);
                                                                            }
                                                                            if (!(0.0f > (*(float *)((0x8C288874 + (t5229 * 0xD78)))))) {
                                                                                t5234 = *(int *)((a4 + 0xB5C));
                                                                                t5235 = ((~(((~(t5234 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t5234 + 0x2) >= 0) {
                                                                                    t5235 = ((t5234 + 0x2) & 0x1);
                                                                                }
                                                                                u5243 = (*(float *)((0x8C288874 + (t5235 * 0xD78))));
                                                                            } else {
                                                                                t5238 = *(int *)((a4 + 0xB5C));
                                                                                t5239 = ((~(((~(t5238 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                if ((int)(t5238 + 0x2) >= 0) {
                                                                                    t5239 = ((t5238 + 0x2) & 0x1);
                                                                                }
                                                                                u5243 = (-(*(float *)((0x8C288874 + (t5239 * 0xD78)))));
                                                                            }
                                                                            if (u5226 > (u5243 + 20.0f)) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                            } else {
                                                                                t5248 = (*(short *)((a4 + 0xB04)));
                                                                                t5251 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5252 = angDiff(t5251, t5248);
                                                                                if ((int)(short)t5252 >= 0) {
                                                                                    t5254 = (*(short *)((a4 + 0xB04)));
                                                                                    t5257 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t5266 = (short)(angDiff(t5257, t5254));
                                                                                } else {
                                                                                    t5260 = (*(short *)((a4 + 0xB04)));
                                                                                    t5263 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t5266 = (-(short)(angDiff(t5263, t5260)));
                                                                                }
                                                                                if ((int)t5266 > (int)0x5000) {
                                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                        t5272 = (*(int *)(((int)stk + 28)));
                                                                                    } else {
                                                                                        t5272 = (-(*(int *)(((int)stk + 28))));
                                                                                    }
                                                                                    if ((int)t5272 < (int)0x3000) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                        t5276 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t5277 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                        t5278 = (unsigned short)((t5276 - t5277) + 0x1000);
                                                                                        if ((int)(unsigned short)((t5276 - t5277) + 0x1000) < 0) {
                                                                                            t5278 = ((unsigned short)((t5276 - t5277) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5278 >> 13));
                                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            t5300 = (*(short *)((a4 + 0xB04)));
                                                                            t5303 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5304 = angDiff(t5303, t5300);
                                                                            if ((int)(short)t5304 >= 0) {
                                                                                t5306 = (*(short *)((a4 + 0xB04)));
                                                                                t5309 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5318 = (short)(angDiff(t5309, t5306));
                                                                            } else {
                                                                                t5312 = (*(short *)((a4 + 0xB04)));
                                                                                t5315 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5318 = (-(short)(angDiff(t5315, t5312)));
                                                                            }
                                                                            if ((int)t5318 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t5324 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t5324 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t5324 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t5328 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t5329 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t5330 = (unsigned short)((t5328 - t5329) + 0x1000);
                                                                                    if ((int)(unsigned short)((t5328 - t5329) + 0x1000) < 0) {
                                                                                        t5330 = ((unsigned short)((t5328 - t5329) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5330 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                    }
                                                                } else {
                                                                    t5360 = (*(short *)((a4 + 0xB04)));
                                                                    t5363 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5364 = angDiff(t5363, t5360);
                                                                    if ((int)(short)t5364 >= 0) {
                                                                        t5366 = (*(short *)((a4 + 0xB04)));
                                                                        t5369 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5378 = (short)(angDiff(t5369, t5366));
                                                                    } else {
                                                                        t5372 = (*(short *)((a4 + 0xB04)));
                                                                        t5375 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5378 = (-(short)(angDiff(t5375, t5372)));
                                                                    }
                                                                    if ((int)t5378 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t5384 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t5384 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t5384 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t5388 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5389 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t5390 = (unsigned short)((t5388 - t5389) + 0x1000);
                                                                            if ((int)(unsigned short)((t5388 - t5389) + 0x1000) < 0) {
                                                                                t5390 = ((unsigned short)((t5388 - t5389) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5390 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                t5412 = (*(short *)((a4 + 0xB04)));
                                                                t5415 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5416 = angDiff(t5415, t5412);
                                                                if ((int)(short)t5416 >= 0) {
                                                                    t5418 = (*(short *)((a4 + 0xB04)));
                                                                    t5421 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5430 = (short)(angDiff(t5421, t5418));
                                                                } else {
                                                                    t5424 = (*(short *)((a4 + 0xB04)));
                                                                    t5427 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5430 = (-(short)(angDiff(t5427, t5424)));
                                                                }
                                                                if ((int)t5430 > (int)0x5000) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                        t5436 = (*(int *)(((int)stk + 28)));
                                                                    } else {
                                                                        t5436 = (-(*(int *)(((int)stk + 28))));
                                                                    }
                                                                    if ((int)t5436 < (int)0x3000) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                        t5440 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5441 = *(short *)(((0xB04 + a4) + 0x0));
                                                                        t5442 = (unsigned short)((t5440 - t5441) + 0x1000);
                                                                        if ((int)(unsigned short)((t5440 - t5441) + 0x1000) < 0) {
                                                                            t5442 = ((unsigned short)((t5440 - t5441) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5442 >> 13));
                                                                        if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                        } else {
                                            if ((int)t16 >= (int)0x16) {
                                                if ((int)t16 <= (int)0x18) {
                                                    t5491 = *(short *)((a4 + 0xB04));
                                                    t5492 = *(short *)((a4 + 0xB0A));
                                                    t5493 = (unsigned short)((t5492 - t5491) + 0x1000);
                                                    if ((int)(unsigned short)((t5492 - t5491) + 0x1000) < 0) {
                                                        t5493 = ((unsigned short)((t5492 - t5491) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)((a4 + 0xB58)) = (((int)t5493 >> 13) + 0x29);
                                                    if (t16 == 25) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x29;
                                                    }
                                                    if ((int)t16 < (int)0x21) {
                                                        t5503 = (*(short *)((a4 + 0xB04)));
                                                        t5506 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                        t5507 = angDiff(t5506, t5503);
                                                        if ((int)(short)t5507 >= 0) {
                                                            t5509 = (*(short *)((a4 + 0xB04)));
                                                            t5512 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t5521 = (short)(angDiff(t5512, t5509));
                                                        } else {
                                                            t5515 = (*(short *)((a4 + 0xB04)));
                                                            t5518 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t5521 = (-(short)(angDiff(t5518, t5515)));
                                                        }
                                                        if ((int)t5521 > (int)0x5000) {
                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                t5527 = (*(int *)(((int)stk + 28)));
                                                            } else {
                                                                t5527 = (-(*(int *)(((int)stk + 28))));
                                                            }
                                                            if ((int)t5527 < (int)0x3000) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                t5531 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5532 = *(short *)(((0xB04 + a4) + 0x0));
                                                                t5533 = (unsigned short)((t5531 - t5532) + 0x1000);
                                                                if ((int)(unsigned short)((t5531 - t5532) + 0x1000) < 0) {
                                                                    t5533 = ((unsigned short)((t5531 - t5532) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5533 >> 13));
                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if ((int)t16 > (int)0x28) {
                                                            t5551 = (*(short *)((a4 + 0xB04)));
                                                            t5554 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                            t5555 = angDiff(t5554, t5551);
                                                            if ((int)(short)t5555 >= 0) {
                                                                t5557 = (*(short *)((a4 + 0xB04)));
                                                                t5560 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5569 = (short)(angDiff(t5560, t5557));
                                                            } else {
                                                                t5563 = (*(short *)((a4 + 0xB04)));
                                                                t5566 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                t5569 = (-(short)(angDiff(t5566, t5563)));
                                                            }
                                                            if ((int)t5569 > (int)0x5000) {
                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                    t5575 = (*(int *)(((int)stk + 28)));
                                                                } else {
                                                                    t5575 = (-(*(int *)(((int)stk + 28))));
                                                                }
                                                                if ((int)t5575 < (int)0x3000) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                    t5579 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5580 = *(short *)(((0xB04 + a4) + 0x0));
                                                                    t5581 = (unsigned short)((t5579 - t5580) + 0x1000);
                                                                    if ((int)(unsigned short)((t5579 - t5580) + 0x1000) < 0) {
                                                                        t5581 = ((unsigned short)((t5579 - t5580) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5581 >> 13));
                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if ((int)(*(int *)0x8C287B2C) > 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                            } else {
                                                                if (((*(int *)((a4 + 0xB60))) & 1) == 0) {
                                                                    t5602 = (*(short *)((a4 + 0xB04)));
                                                                    t5605 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                    t5606 = angDiff(t5605, t5602);
                                                                    if ((int)(short)t5606 >= 0) {
                                                                        t5608 = (*(short *)((a4 + 0xB04)));
                                                                        t5611 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5620 = (short)(angDiff(t5611, t5608));
                                                                    } else {
                                                                        t5614 = (*(short *)((a4 + 0xB04)));
                                                                        t5617 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5620 = (-(short)(angDiff(t5617, t5614)));
                                                                    }
                                                                    if ((int)t5620 > (int)0x5000) {
                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                            t5626 = (*(int *)(((int)stk + 28)));
                                                                        } else {
                                                                            t5626 = (-(*(int *)(((int)stk + 28))));
                                                                        }
                                                                        if ((int)t5626 < (int)0x3000) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                            t5630 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5631 = *(short *)(((0xB04 + a4) + 0x0));
                                                                            t5632 = (unsigned short)((t5630 - t5631) + 0x1000);
                                                                            if ((int)(unsigned short)((t5630 - t5631) + 0x1000) < 0) {
                                                                                t5632 = ((unsigned short)((t5630 - t5631) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5632 >> 13));
                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    u5646 = *(float *)((a4 + 0xAF0));
                                                                    t5649 = 0x1;
                                                                    if (u5646 > 0.0f) {
                                                                    } else {
                                                                        t5647 = 0x0;
                                                                        if (0.0f > u5646) {
                                                                            t5647 = 0xFFFFFFFF;
                                                                        }
                                                                        t5649 = t5647;
                                                                    }
                                                                    t5657 = 0x1;
                                                                    if ((*(float *)0x8C291F38) > 0.0f) {
                                                                    } else {
                                                                        t5654 = 0x0;
                                                                        if (0.0f > (*(float *)0x8C291F38)) {
                                                                            t5654 = 0xFFFFFFFF;
                                                                        }
                                                                        t5657 = t5654;
                                                                    }
                                                                    if (t5649 == t5657) {
                                                                        u5661 = *(float *)((a4 + 0xAF0));
                                                                        u5663 = (-u5661);
                                                                        if (!(0.0f > u5661)) {
                                                                            u5663 = (*(float *)((a4 + 0xAF0)));
                                                                        }
                                                                        if (!(0.0f > (*(float *)0x8C291F38))) {
                                                                            u5669 = (*(float *)0x8C291F38);
                                                                        } else {
                                                                            u5669 = (-(*(float *)0x8C291F38));
                                                                        }
                                                                        if (u5669 > (u5663 + 20.0f)) {
                                                                            if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) != 2) {
                                                                                if ((*(int *)(((*(int *)(((int)stk + 60))) + 0x10))) == 4) {
                                                                                    u5684 = *(float *)((a4 + 0xAF0));
                                                                                    u5686 = (-u5684);
                                                                                    if (!(0.0f > u5684)) {
                                                                                        u5686 = (*(float *)((a4 + 0xAF0)));
                                                                                    }
                                                                                    t5688 = *(int *)((a4 + 0xB5C));
                                                                                    t5689 = ((~(((~(t5688 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                    if ((int)(t5688 + 0x2) >= 0) {
                                                                                        t5689 = ((t5688 + 0x2) & 0x1);
                                                                                    }
                                                                                    if (!(0.0f > (*(float *)((0x8C288874 + (t5689 * 0xD78)))))) {
                                                                                        t5694 = *(int *)((a4 + 0xB5C));
                                                                                        t5695 = ((~(((~(t5694 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                        if ((int)(t5694 + 0x2) >= 0) {
                                                                                            t5695 = ((t5694 + 0x2) & 0x1);
                                                                                        }
                                                                                        u5703 = (*(float *)((0x8C288874 + (t5695 * 0xD78))));
                                                                                    } else {
                                                                                        t5698 = *(int *)((a4 + 0xB5C));
                                                                                        t5699 = ((~(((~(t5698 + 0x2)) + 0x1) & 0x1)) + 0x1);
                                                                                        if ((int)(t5698 + 0x2) >= 0) {
                                                                                            t5699 = ((t5698 + 0x2) & 0x1);
                                                                                        }
                                                                                        u5703 = (-(*(float *)((0x8C288874 + (t5699 * 0xD78)))));
                                                                                    }
                                                                                    if (u5686 > (u5703 + 20.0f)) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                                    } else {
                                                                                        t5708 = (*(short *)((a4 + 0xB04)));
                                                                                        t5711 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t5712 = angDiff(t5711, t5708);
                                                                                        if ((int)(short)t5712 >= 0) {
                                                                                            t5714 = (*(short *)((a4 + 0xB04)));
                                                                                            t5717 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t5726 = (short)(angDiff(t5717, t5714));
                                                                                        } else {
                                                                                            t5720 = (*(short *)((a4 + 0xB04)));
                                                                                            t5723 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t5726 = (-(short)(angDiff(t5723, t5720)));
                                                                                        }
                                                                                        if ((int)t5726 > (int)0x5000) {
                                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                                t5732 = (*(int *)(((int)stk + 28)));
                                                                                            } else {
                                                                                                t5732 = (-(*(int *)(((int)stk + 28))));
                                                                                            }
                                                                                            if ((int)t5732 < (int)0x3000) {
                                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                                t5736 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                                t5737 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                                t5738 = (unsigned short)((t5736 - t5737) + 0x1000);
                                                                                                if ((int)(unsigned short)((t5736 - t5737) + 0x1000) < 0) {
                                                                                                    t5738 = ((unsigned short)((t5736 - t5737) + 0x1000) + 0x1FFF);
                                                                                                }
                                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5738 >> 13));
                                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    t5760 = (*(short *)((a4 + 0xB04)));
                                                                                    t5763 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t5764 = angDiff(t5763, t5760);
                                                                                    if ((int)(short)t5764 >= 0) {
                                                                                        t5766 = (*(short *)((a4 + 0xB04)));
                                                                                        t5769 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t5778 = (short)(angDiff(t5769, t5766));
                                                                                    } else {
                                                                                        t5772 = (*(short *)((a4 + 0xB04)));
                                                                                        t5775 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                        t5778 = (-(short)(angDiff(t5775, t5772)));
                                                                                    }
                                                                                    if ((int)t5778 > (int)0x5000) {
                                                                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                            t5784 = (*(int *)(((int)stk + 28)));
                                                                                        } else {
                                                                                            t5784 = (-(*(int *)(((int)stk + 28))));
                                                                                        }
                                                                                        if ((int)t5784 < (int)0x3000) {
                                                                                            *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                            t5788 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                            t5789 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                            t5790 = (unsigned short)((t5788 - t5789) + 0x1000);
                                                                                            if ((int)(unsigned short)((t5788 - t5789) + 0x1000) < 0) {
                                                                                                t5790 = ((unsigned short)((t5788 - t5789) + 0x1000) + 0x1FFF);
                                                                                            }
                                                                                            *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5790 >> 13));
                                                                                            if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                                *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = ((*(int *)((a4 + 0xB58))) + 0x10);
                                                                            }
                                                                        } else {
                                                                            t5820 = (*(short *)((a4 + 0xB04)));
                                                                            t5823 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5824 = angDiff(t5823, t5820);
                                                                            if ((int)(short)t5824 >= 0) {
                                                                                t5826 = (*(short *)((a4 + 0xB04)));
                                                                                t5829 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5838 = (short)(angDiff(t5829, t5826));
                                                                            } else {
                                                                                t5832 = (*(short *)((a4 + 0xB04)));
                                                                                t5835 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5838 = (-(short)(angDiff(t5835, t5832)));
                                                                            }
                                                                            if ((int)t5838 > (int)0x5000) {
                                                                                if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                    t5844 = (*(int *)(((int)stk + 28)));
                                                                                } else {
                                                                                    t5844 = (-(*(int *)(((int)stk + 28))));
                                                                                }
                                                                                if ((int)t5844 < (int)0x3000) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                    t5848 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                    t5849 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                    t5850 = (unsigned short)((t5848 - t5849) + 0x1000);
                                                                                    if ((int)(unsigned short)((t5848 - t5849) + 0x1000) < 0) {
                                                                                        t5850 = ((unsigned short)((t5848 - t5849) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5850 >> 13));
                                                                                    if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                        *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        t5872 = (*(short *)((a4 + 0xB04)));
                                                                        t5875 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                        t5876 = angDiff(t5875, t5872);
                                                                        if ((int)(short)t5876 >= 0) {
                                                                            t5878 = (*(short *)((a4 + 0xB04)));
                                                                            t5881 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5890 = (short)(angDiff(t5881, t5878));
                                                                        } else {
                                                                            t5884 = (*(short *)((a4 + 0xB04)));
                                                                            t5887 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                            t5890 = (-(short)(angDiff(t5887, t5884)));
                                                                        }
                                                                        if ((int)t5890 > (int)0x5000) {
                                                                            if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                                                                t5896 = (*(int *)(((int)stk + 28)));
                                                                            } else {
                                                                                t5896 = (-(*(int *)(((int)stk + 28))));
                                                                            }
                                                                            if ((int)t5896 < (int)0x3000) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = 0xB;
                                                                                t5900 = nlArcTan2((*(float *)(((int)stk + 84))), (*(float *)(((int)stk + 92))));
                                                                                t5901 = *(short *)(((0xB04 + a4) + 0x0));
                                                                                t5902 = (unsigned short)((t5900 - t5901) + 0x1000);
                                                                                if ((int)(unsigned short)((t5900 - t5901) + 0x1000) < 0) {
                                                                                    t5902 = ((unsigned short)((t5900 - t5901) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned int *)(((0xB58 + a4) + 0x0)) = ((*(int *)(((0xB58 + a4) + 0x0))) + ((int)t5902 >> 13));
                                                                                if ((((int)t16 >= (int)0x19) && ((int)t16 <= (int)0x20)) || ((t16 == 22) || (t16 == 23))) {
                                                                                    *(unsigned int *)(((int)stk + 64)) = 0x2;
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        t6000 = *(int *)((a4 + 0xC58));
                        *(unsigned int *)(((int)stk + 68)) = ((t6000 * 0x6C) + 0x8C102424);
                        *(float *)((a4 + 0xBDC)) = (((*(float *)(((((t6000 * 0x6C) + 0x8C102424) + 0x28) + 0x0))) + (*(float *)(((((t6000 * 0x6C) + 0x8C102424) + 0x28) + 0x4)))) / (1.0f + 1.0f));
                    }
                }
            }
        } else {
            if ((int)(*(int *)((a4 + 0xBD4))) >= 0) {
            } else {
                t6032 = *(short *)(((int)stk + 72));
                if (((int)(unsigned short)t6032 < (int)0x7000) && (((t16 != 22) && (t16 != 23)) || (t17 != -99))) {
                    if (t16 != 53) {
                        t6198 = 0x0;
                        if (((*(int *)0x8C287D5C) == 3) && (t6034 = *(int *)0x8C2FBEA8, t6034 == 3)) {
                        } else {
                            t6189 = 0x0;
                            if ((int)(unsigned short)t6032 <= (int)0x3000) {
                            } else {
                                t6180 = 0x0;
                                if ((int)(unsigned short)t6032 >= (int)0x5000) {
                                } else {
                                    if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                        t6042 = (*(int *)(((int)stk + 28)));
                                    } else {
                                        t6042 = (-(*(int *)(((int)stk + 28))));
                                    }
                                    t6171 = 0x0;
                                    if ((int)t6042 >= (int)0x1000) {
                                    } else {
                                        if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                            t6049 = (*(short *)(((int)stk + 32)));
                                        } else {
                                            t6049 = (-(*(short *)(((int)stk + 32))));
                                        }
                                        t6162 = 0x0;
                                        if ((int)t6049 > (int)0x2000) {
                                            if (((*(int *)((a4 + 0xB60))) & 1) != 0) {
                                                if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                                                    u6062 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                                                } else {
                                                    u6062 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                                                }
                                                if (10.0f > u6062) {
                                                    t6070 = 0x1;
                                                    if (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) > 0.0f) {
                                                    } else {
                                                        t6068 = 0x0;
                                                        if (0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))))) {
                                                            t6068 = 0xFFFFFFFF;
                                                        }
                                                        t6070 = t6068;
                                                    }
                                                    u6074 = *(float *)((a4 + 0xB00));
                                                    t6080 = 0x1;
                                                    if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                    } else {
                                                        t6077 = 0x0;
                                                        if ((int)(*(int *)(((int)stk + 40))) < 0) {
                                                            t6077 = 0xFFFFFFFF;
                                                        }
                                                        t6080 = t6077;
                                                    }
                                                    if (((float)t6070 * u6074) != (float)t6080) {
                                                        t6094 = 0x0;
                                                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                            if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                                t6086 = 0xFFFFC000;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                                t6086 = 0x4000;
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t6086 + t22);
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                            *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                            t6094 = 0x1;
                                                        }
                                                        t6107 = t6094;
                                                    } else {
                                                        if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                            t6099 = 0xFFFFC000;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                            t6099 = 0x4000;
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t6099 + t22);
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                        *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                        t6107 = 0x1;
                                                    }
                                                    t6129 = t6107;
                                                } else {
                                                    t6122 = 0x0;
                                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                        if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                            t6114 = 0xFFFFC000;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                            t6114 = 0x4000;
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t6114 + t22);
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                        *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                        t6122 = 0x1;
                                                    }
                                                    t6129 = t6122;
                                                }
                                                t6153 = t6129;
                                            } else {
                                                t6146 = 0x0;
                                                if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                    if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                        t6138 = 0xFFFFC000;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                        t6138 = 0x4000;
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t6138 + t22);
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                    *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                    *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                    t6146 = 0x1;
                                                }
                                                t6153 = t6146;
                                            }
                                            t6162 = t6153;
                                        }
                                        t6171 = t6162;
                                    }
                                    t6180 = t6171;
                                }
                                t6189 = t6180;
                            }
                            t6198 = t6189;
                        }
                        t6775 = t6198;
                    } else {
                        if (t17 != -99) {
                            t6367 = 0x0;
                            if (((*(int *)0x8C287D5C) == 3) && (t6203 = *(int *)0x8C2FBEA8, t6203 == 3)) {
                            } else {
                                t6358 = 0x0;
                                if ((int)(unsigned short)t6032 <= (int)0x3000) {
                                } else {
                                    t6349 = 0x0;
                                    if ((int)(unsigned short)t6032 >= (int)0x5000) {
                                    } else {
                                        if ((int)(*(int *)(((int)stk + 28))) >= 0) {
                                            t6211 = (*(int *)(((int)stk + 28)));
                                        } else {
                                            t6211 = (-(*(int *)(((int)stk + 28))));
                                        }
                                        t6340 = 0x0;
                                        if ((int)t6211 >= (int)0x1000) {
                                        } else {
                                            if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                t6218 = (*(short *)(((int)stk + 32)));
                                            } else {
                                                t6218 = (-(*(short *)(((int)stk + 32))));
                                            }
                                            t6331 = 0x0;
                                            if ((int)t6218 > (int)0x2000) {
                                                if (((*(int *)((a4 + 0xB60))) & 1) != 0) {
                                                    if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                                                        u6231 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                                                    } else {
                                                        u6231 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                                                    }
                                                    if (10.0f > u6231) {
                                                        t6239 = 0x1;
                                                        if (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) > 0.0f) {
                                                        } else {
                                                            t6237 = 0x0;
                                                            if (0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))))) {
                                                                t6237 = 0xFFFFFFFF;
                                                            }
                                                            t6239 = t6237;
                                                        }
                                                        u6243 = *(float *)((a4 + 0xB00));
                                                        t6249 = 0x1;
                                                        if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                        } else {
                                                            t6246 = 0x0;
                                                            if ((int)(*(int *)(((int)stk + 40))) < 0) {
                                                                t6246 = 0xFFFFFFFF;
                                                            }
                                                            t6249 = t6246;
                                                        }
                                                        if (((float)t6239 * u6243) != (float)t6249) {
                                                            t6263 = 0x0;
                                                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                                if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                                    t6255 = 0xFFFFC000;
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                                    t6255 = 0x4000;
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t6255 + t22);
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                                *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                                *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                                t6263 = 0x1;
                                                            }
                                                            t6276 = t6263;
                                                        } else {
                                                            if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                                t6268 = 0xFFFFC000;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                                t6268 = 0x4000;
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t6268 + t22);
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                            *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                            t6276 = 0x1;
                                                        }
                                                        t6298 = t6276;
                                                    } else {
                                                        t6291 = 0x0;
                                                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                            if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                                t6283 = 0xFFFFC000;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                                t6283 = 0x4000;
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t6283 + t22);
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                            *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                            t6291 = 0x1;
                                                        }
                                                        t6298 = t6291;
                                                    }
                                                    t6322 = t6298;
                                                } else {
                                                    t6315 = 0x0;
                                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) != 0) {
                                                        if ((int)(*(int *)(((int)stk + 40))) > 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x13;
                                                            t6307 = 0xFFFFC000;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x14;
                                                            t6307 = 0x4000;
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t6307 + t22);
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                        *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450)));
                                                        t6315 = 0x1;
                                                    }
                                                    t6322 = t6315;
                                                }
                                                t6331 = t6322;
                                            }
                                            t6340 = t6331;
                                        }
                                        t6349 = t6340;
                                    }
                                    t6358 = t6349;
                                }
                                t6367 = t6358;
                            }
                            t6765 = t6367;
                        } else {
                            if (t16 != 21) {
                                if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                                    t6376 = (*(short *)(((int)stk + 36)));
                                } else {
                                    t6376 = (-(*(short *)(((int)stk + 36))));
                                }
                                if ((int)t6376 < (int)0x2000) {
                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) == 0) {
                                        u6384 = *(float *)((a4 + 0xAF0));
                                        u6386 = (-u6384);
                                        if (!(0.0f > u6384)) {
                                            u6386 = (*(float *)((a4 + 0xAF0)));
                                        }
                                        if (u6386 > 118.849998f) {
                                            *(unsigned int *)((a4 + 0xB58)) = 0x15;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)(((int)stk + 44)) = 0xA;
                                        } else {
                                            if (((t16 != 22) && ((t16 != 23) && (t16 != 53))) || (t17 == -99)) {
                                                if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                                                    t6393 = (*(short *)(((int)stk + 36)));
                                                } else {
                                                    t6393 = (-(*(short *)(((int)stk + 36))));
                                                }
                                                if ((int)t6393 < (int)0x2000) {
                                                    if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                        t6398 = *(short *)(((int)stk + 32));
                                                        t6399 = (-t6398);
                                                        if ((int)t6398 >= 0) {
                                                            t6399 = t6398;
                                                        }
                                                        if ((int)t6399 < (int)0x2000) {
                                                            u6402 = *(float *)((a4 + 0xCFC));
                                                            u6404 = (-u6402);
                                                            if (!(0.0f > u6402)) {
                                                                u6404 = (*(float *)((a4 + 0xCFC)));
                                                            }
                                                            if (u6404 > 0.75f) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                            } else {
                                                                if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                                    if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                    }
                                                                } else {
                                                                    if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                                if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                }
                                                            } else {
                                                                if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                    *(unsigned int *)(((int)stk + 44)) = 0x5;
                                                } else {
                                                    if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                        t6458 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t6458 >= 0) {
                                                            t6464 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t6464 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t6464 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                    }
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x25;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                                }
                                            } else {
                                                if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                    t6485 = *(short *)(((int)stk + 32));
                                                    t6486 = (-t6485);
                                                    if ((int)t6485 >= 0) {
                                                        t6486 = t6485;
                                                    }
                                                    if ((int)t6486 < (int)0x2000) {
                                                        u6489 = *(float *)((a4 + 0xCFC));
                                                        u6491 = (-u6489);
                                                        if (!(0.0f > u6489)) {
                                                            u6491 = (*(float *)((a4 + 0xCFC)));
                                                        }
                                                        if (u6491 > 0.75f) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                        } else {
                                                            if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                                if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                }
                                                            } else {
                                                                if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                            if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            }
                                                        } else {
                                                            if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                                *(unsigned int *)(((int)stk + 44)) = 0x5;
                                            }
                                        }
                                    } else {
                                        *(unsigned int *)((a4 + 0xB58)) = 0x15;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)(((int)stk + 44)) = 0xA;
                                    }
                                } else {
                                    if (((t16 != 22) && ((t16 != 23) && (t16 != 53))) || (t17 == -99)) {
                                        if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                                            t6576 = (*(short *)(((int)stk + 36)));
                                        } else {
                                            t6576 = (-(*(short *)(((int)stk + 36))));
                                        }
                                        if ((int)t6576 < (int)0x2000) {
                                            if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                t6581 = *(short *)(((int)stk + 32));
                                                t6582 = (-t6581);
                                                if ((int)t6581 >= 0) {
                                                    t6582 = t6581;
                                                }
                                                if ((int)t6582 < (int)0x2000) {
                                                    u6585 = *(float *)((a4 + 0xCFC));
                                                    u6587 = (-u6585);
                                                    if (!(0.0f > u6585)) {
                                                        u6587 = (*(float *)((a4 + 0xCFC)));
                                                    }
                                                    if (u6587 > 0.75f) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                            if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            }
                                                        } else {
                                                            if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                        if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        }
                                                    } else {
                                                        if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                        } else {
                                            if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                t6641 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                if ((int)(short)t6641 >= 0) {
                                                    t6647 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                } else {
                                                    t6647 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                }
                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t6647 / 4800.0f) + 5.0f);
                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                            } else {
                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = 0x25;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                        }
                                    } else {
                                        if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                            t6668 = *(short *)(((int)stk + 32));
                                            t6669 = (-t6668);
                                            if ((int)t6668 >= 0) {
                                                t6669 = t6668;
                                            }
                                            if ((int)t6669 < (int)0x2000) {
                                                u6672 = *(float *)((a4 + 0xCFC));
                                                u6674 = (-u6672);
                                                if (!(0.0f > u6672)) {
                                                    u6674 = (*(float *)((a4 + 0xCFC)));
                                                }
                                                if (u6674 > 0.75f) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                        if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        }
                                                    } else {
                                                        if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                    if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    }
                                                } else {
                                                    if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    }
                                                }
                                            }
                                        }
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                        *(unsigned int *)(((int)stk + 44)) = 0x5;
                                    }
                                }
                            } else {
                                *(unsigned int *)((a4 + 0xB58)) = 0x15;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)(((int)stk + 44)) = 0xA;
                            }
                            t6754 = *(short *)((a4 + 0xB04));
                            t6755 = (unsigned short)((t22 - t6754) + 0x1000);
                            if ((int)(unsigned short)((t22 - t6754) + 0x1000) < 0) {
                                t6755 = ((unsigned short)((t22 - t6754) + 0x1000) + 0x1FFF);
                            }
                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t6755 >> 13) << 8) << 2) << 2) << 1));
                            *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C)));
                            *(float *)(((int)stk + 76)) = 100.0f;
                            t6765 = 0x2;
                        }
                        t6775 = t6765;
                    }
                    t7174 = t6775;
                } else {
                    if (t16 != 21) {
                        if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                            t6785 = (*(short *)(((int)stk + 36)));
                        } else {
                            t6785 = (-(*(short *)(((int)stk + 36))));
                        }
                        if ((int)t6785 < (int)0x2000) {
                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 48)))))) & 2) == 0) {
                                u6793 = *(float *)((a4 + 0xAF0));
                                u6795 = (-u6793);
                                if (!(0.0f > u6793)) {
                                    u6795 = (*(float *)((a4 + 0xAF0)));
                                }
                                if (u6795 > 118.849998f) {
                                    *(unsigned int *)((a4 + 0xB58)) = 0x15;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                    *(unsigned int *)(((int)stk + 44)) = 0xA;
                                } else {
                                    if (((t16 != 22) && ((t16 != 23) && (t16 != 53))) || (t17 == -99)) {
                                        if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                                            t6802 = (*(short *)(((int)stk + 36)));
                                        } else {
                                            t6802 = (-(*(short *)(((int)stk + 36))));
                                        }
                                        if ((int)t6802 < (int)0x2000) {
                                            if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                t6807 = *(short *)(((int)stk + 32));
                                                t6808 = (-t6807);
                                                if ((int)t6807 >= 0) {
                                                    t6808 = t6807;
                                                }
                                                if ((int)t6808 < (int)0x2000) {
                                                    u6811 = *(float *)((a4 + 0xCFC));
                                                    u6813 = (-u6811);
                                                    if (!(0.0f > u6811)) {
                                                        u6813 = (*(float *)((a4 + 0xCFC)));
                                                    }
                                                    if (u6813 > 0.75f) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                    } else {
                                                        if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                            if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            }
                                                        } else {
                                                            if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                        if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        }
                                                    } else {
                                                        if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                            *(unsigned int *)(((int)stk + 44)) = 0x5;
                                        } else {
                                            if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                                t6867 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                if ((int)(short)t6867 >= 0) {
                                                    t6873 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                } else {
                                                    t6873 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                }
                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t6873 / 4800.0f) + 5.0f);
                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                            } else {
                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                            }
                                            *(unsigned int *)((a4 + 0xB58)) = 0x25;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                            *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                        }
                                    } else {
                                        if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                            t6894 = *(short *)(((int)stk + 32));
                                            t6895 = (-t6894);
                                            if ((int)t6894 >= 0) {
                                                t6895 = t6894;
                                            }
                                            if ((int)t6895 < (int)0x2000) {
                                                u6898 = *(float *)((a4 + 0xCFC));
                                                u6900 = (-u6898);
                                                if (!(0.0f > u6898)) {
                                                    u6900 = (*(float *)((a4 + 0xCFC)));
                                                }
                                                if (u6900 > 0.75f) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                                } else {
                                                    if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                        if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        }
                                                    } else {
                                                        if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                    if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    }
                                                } else {
                                                    if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    }
                                                }
                                            }
                                        }
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                        *(unsigned int *)(((int)stk + 44)) = 0x5;
                                    }
                                }
                            } else {
                                *(unsigned int *)((a4 + 0xB58)) = 0x15;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)(((int)stk + 44)) = 0xA;
                            }
                        } else {
                            if (((t16 != 22) && ((t16 != 23) && (t16 != 53))) || (t17 == -99)) {
                                if ((int)(*(short *)(((int)stk + 36))) >= 0) {
                                    t6985 = (*(short *)(((int)stk + 36)));
                                } else {
                                    t6985 = (-(*(short *)(((int)stk + 36))));
                                }
                                if ((int)t6985 < (int)0x2000) {
                                    if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                        t6990 = *(short *)(((int)stk + 32));
                                        t6991 = (-t6990);
                                        if ((int)t6990 >= 0) {
                                            t6991 = t6990;
                                        }
                                        if ((int)t6991 < (int)0x2000) {
                                            u6994 = *(float *)((a4 + 0xCFC));
                                            u6996 = (-u6994);
                                            if (!(0.0f > u6994)) {
                                                u6996 = (*(float *)((a4 + 0xCFC)));
                                            }
                                            if (u6996 > 0.75f) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                            } else {
                                                if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                    if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    }
                                                } else {
                                                    if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                    }
                                                }
                                            }
                                        } else {
                                            if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                }
                                            } else {
                                                if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                }
                                            }
                                        }
                                    }
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                    *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                    *(unsigned int *)(((int)stk + 44)) = 0x5;
                                } else {
                                    if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                        t7050 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                        if ((int)(short)t7050 >= 0) {
                                            t7056 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                        } else {
                                            t7056 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                        }
                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7056 / 4800.0f) + 5.0f);
                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                    } else {
                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                    }
                                    *(unsigned int *)((a4 + 0xB58)) = 0x25;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                    *(unsigned int *)(((int)stk + 44)) = 0xFFFFFFFF;
                                }
                            } else {
                                if ((t16 != 22) && ((t16 != 23) && (t16 != 53))) {
                                    t7077 = *(short *)(((int)stk + 32));
                                    t7078 = (-t7077);
                                    if ((int)t7077 >= 0) {
                                        t7078 = t7077;
                                    }
                                    if ((int)t7078 < (int)0x2000) {
                                        u7081 = *(float *)((a4 + 0xCFC));
                                        u7083 = (-u7081);
                                        if (!(0.0f > u7081)) {
                                            u7083 = (*(float *)((a4 + 0xCFC)));
                                        }
                                        if (u7083 > 0.75f) {
                                            *(unsigned int *)((a4 + 0xB58)) = 0x35;
                                        } else {
                                            if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                                if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                }
                                            } else {
                                                if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                                }
                                            }
                                        }
                                    } else {
                                        if (((*(int *)((a4 + 0xB60))) & 0x1) == 0) {
                                            if ((int)(*(int *)(((int)stk + 28))) <= 0) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                            } else {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                            }
                                        } else {
                                            if (0.0f > (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) * (*(float *)((a4 + 0xB00))))) {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x16;
                                            } else {
                                                *(unsigned int *)((a4 + 0xB58)) = 0x17;
                                            }
                                        }
                                    }
                                }
                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                *(unsigned int *)(((int)stk + 44)) = 0x5;
                            }
                        }
                    } else {
                        *(unsigned int *)((a4 + 0xB58)) = 0x15;
                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                        *(unsigned int *)(((int)stk + 44)) = 0xA;
                    }
                    t7163 = *(short *)((a4 + 0xB04));
                    t7164 = (unsigned short)((t22 - t7163) + 0x1000);
                    if ((int)(unsigned short)((t22 - t7163) + 0x1000) < 0) {
                        t7164 = ((unsigned short)((t22 - t7163) + 0x1000) + 0x1FFF);
                    }
                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7164 >> 13) << 8) << 2) << 2) << 1));
                    *(float *)((a4 + 0xBDC)) = (*(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C)));
                    *(float *)(((int)stk + 76)) = 100.0f;
                    t7174 = 0x2;
                }
                u7181 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450));
                u7182 = *(float *)((((*(int *)((a4 + 0xB58))) << 2) + 0x8C295484));
                if (t7174 != 0) {
                    if (!(0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))))) {
                        u7191 = ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))));
                    } else {
                        u7191 = ((-(*(float *)((a4 + 0xAE8)))) + (*(float *)((a4 + 0xB9C))));
                    }
                    u8965 = ((t10 / (u7182 * u7181)) + 60.0f);
                    if (!(u7191 > 10.0f)) {
                    } else {
                        if (!(((t10 / (u7182 * u7181)) + 60.0f) > (*(float *)(((int)stk + 76))))) {
                            u8953 = ((t10 / (u7182 * u7181)) + 60.0f);
                        } else {
                            u7196 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C));
                            *(float *)(((int)stk + 24)) = u7196;
                            *(unsigned int *)(((int)stk + 28)) = (short)t22;
                            t7198 = nlCos((((short)t22 - (*(short *)((a4 + 0xB04)))) + 0x1000));
                            t7199 = nlPow(t7198, (1.0f + 1.0f));
                            *(float *)(((int)stk + 20)) = t7199;
                            u7201 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450));
                            *(float *)(((int)stk + 16)) = u7201;
                            t7204 = nlSin((((*(int *)(((int)stk + 28))) - (*(short *)((a4 + 0xB04)))) + 0x1000));
                            u7206 = (u7201 * (nlPow(t7204, (1.0f + 1.0f))));
                            u7206 = u7206 + t7199 * u7196;
                            *(float *)((a4 + 0xBDC)) = u7206;
                            t7207 = *(short *)((a4 + 0xB04));
                            t7208 = (unsigned short)((t22 - t7207) + 0x1000);
                            if ((int)(unsigned short)((t22 - t7207) + 0x1000) < 0) {
                                t7208 = ((unsigned short)((t22 - t7207) + 0x1000) + 0x1FFF);
                            }
                            *(unsigned int *)(((int)stk + 28)) = (((int)t7208 >> 13) + 0x21);
                            *(unsigned int *)(((int)stk + 44)) = ((((int)t7208 >> 13) + 0x21) - 8);
                            if ((t16 == ((((int)t7208 >> 13) + 0x21) - 8)) && (t17 != -99)) {
                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                                t7214 = *(short *)((a4 + 0xB04));
                                t7215 = (unsigned short)((t22 - t7214) + 0x1000);
                                if ((int)(unsigned short)((t22 - t7214) + 0x1000) < 0) {
                                    t7215 = ((unsigned short)((t22 - t7214) + 0x1000) + 0x1FFF);
                                }
                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7215 >> 13) << 8) << 2) << 2) << 1));
                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                t8940 = 0x5;
                            } else {
                                if ((int)(*(short *)(((int)stk + 56))) >= 0) {
                                    t7222 = (*(short *)(((int)stk + 56)));
                                } else {
                                    t7222 = (-(*(short *)(((int)stk + 56))));
                                }
                                if (((int)t7222 < (int)0x2800) && ((((int)t16 < (int)0x19) || ((int)t16 > (int)0x20)) && ((((int)t16 < (int)0x31) || ((int)t16 > (int)0x38)) && ((t16 != 22) && (t16 != 23))))) {
                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                        if ((int)(*(short *)(((int)stk + 52))) >= 0) {
                                            t7240 = (*(short *)(((int)stk + 52)));
                                        } else {
                                            t7240 = (-(*(short *)(((int)stk + 52))));
                                        }
                                        if ((int)t7240 > (int)0x3000) {
                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                                            t7243 = *(short *)((a4 + 0xB04));
                                            t7244 = (unsigned short)((t22 - t7243) + 0x1000);
                                            if ((int)(unsigned short)((t22 - t7243) + 0x1000) < 0) {
                                                t7244 = ((unsigned short)((t22 - t7243) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7244 >> 13) << 8) << 2) << 2) << 1));
                                            *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            t8083 = 0x5;
                                        } else {
                                            t7247 = *(int *)(((int)stk + 28));
                                            *(unsigned int *)(((int)stk + 36)) = (t7247 + 0x10);
                                            if ((t16 == (t7247 + 0x10)) && (t17 != -99)) {
                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                                t7251 = *(short *)((a4 + 0xB04));
                                                t7252 = (unsigned short)((t22 - t7251) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t7251) + 0x1000) < 0) {
                                                    t7252 = ((unsigned short)((t22 - t7251) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7252 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t8077 = 0x5;
                                            } else {
                                                if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                    t7259 = (*(short *)(((int)stk + 32)));
                                                } else {
                                                    t7259 = (-(*(short *)(((int)stk + 32))));
                                                }
                                                if ((int)(unsigned short)t7259 > (int)0x6000) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xCF4 + a4)); }
                                                    t7261 = vecLength(*(Stk3 *)(((int)stk + 16)));
                                                    if (t7261 > 0.75f) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                                        t7263 = *(short *)((a4 + 0xB04));
                                                        t7264 = (unsigned short)((t22 - t7263) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t7263) + 0x1000) < 0) {
                                                            t7264 = ((unsigned short)((t22 - t7263) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7264 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t7667 = 0x5;
                                                    } else {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                                t7272 = (*(short *)(((int)stk + 32)));
                                                            } else {
                                                                t7272 = (-(*(short *)(((int)stk + 32))));
                                                            }
                                                            if ((int)(unsigned short)t7272 <= (int)0x6000) {
                                                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    }
                                                                    t7280 = *(short *)((a4 + 0xB04));
                                                                    t7281 = (unsigned short)((t22 - t7280) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t7280) + 0x1000) < 0) {
                                                                        t7281 = ((unsigned short)((t22 - t7280) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7281 >> 13) << 8) << 2) << 2) << 1));
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                                    t7457 = 0xFFFFFFFF;
                                                                } else {
                                                                    if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                        t7286 = *(int *)(((int)stk + 28));
                                                                        t7287 = ((~(((~(t7286 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t7286 - 33) >= 0) {
                                                                            t7287 = ((t7286 - 33) & 0x7);
                                                                        }
                                                                        if (t16 == (t7287 + 0x31)) {
                                                                            if (t17 == -99) {
                                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                            } else {
                                                                                t7290 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                                if ((int)(short)t7290 >= 0) {
                                                                                    t7296 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                                } else {
                                                                                    t7296 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                                }
                                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7296 / 4800.0f) + 5.0f);
                                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                            }
                                                                        } else {
                                                                            t7305 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                            if ((int)(short)t7305 >= 0) {
                                                                                t7311 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                            } else {
                                                                                t7311 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                            }
                                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7311 / 4800.0f) + 5.0f);
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                        }
                                                                    } else {
                                                                        if (t17 == -99) {
                                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                        } else {
                                                                            t7320 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                            if ((int)(short)t7320 >= 0) {
                                                                                t7326 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                            } else {
                                                                                t7326 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                            }
                                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7326 / 4800.0f) + 5.0f);
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                        }
                                                                    }
                                                                    if ((int)t16 < (int)0x21) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t7342 = *(short *)((a4 + 0xB04));
                                                                        t7343 = (unsigned short)((t22 - t7342) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t7342) + 0x1000) < 0) {
                                                                            t7343 = ((unsigned short)((t22 - t7342) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7343 >> 13) << 8) << 2) << 2) << 1));
                                                                    } else {
                                                                        if ((int)t16 > (int)0x28) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t7348 = *(short *)((a4 + 0xB04));
                                                                            t7349 = (unsigned short)((t22 - t7348) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t7348) + 0x1000) < 0) {
                                                                                t7349 = ((unsigned short)((t22 - t7348) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7349 >> 13) << 8) << 2) << 2) << 1));
                                                                        } else {
                                                                            t7352 = *(int *)(((int)stk + 28));
                                                                            t7353 = (t7352 - t16);
                                                                            if ((int)(t16 - t7352) >= 0) {
                                                                                t7353 = (t16 - t7352);
                                                                            }
                                                                            if (t7353 != 1) {
                                                                                if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                                    t7359 = (t16 - (*(int *)(((int)stk + 28))));
                                                                                } else {
                                                                                    t7359 = ((*(int *)(((int)stk + 28))) - t16);
                                                                                }
                                                                                if (t7359 == 7) {
                                                                                    t7362 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7362 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7365 = angDiff(t22, (((((t7362 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                                    if ((int)(short)t7365 >= 0) {
                                                                                        t7366 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                        if ((int)(t16 - 33) >= 0) {
                                                                                            t7366 = ((t16 - 33) & 0x7);
                                                                                        }
                                                                                        t7375 = (short)(angDiff(t22, (((((t7366 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                                    } else {
                                                                                        t7370 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                        if ((int)(t16 - 33) >= 0) {
                                                                                            t7370 = ((t16 - 33) & 0x7);
                                                                                        }
                                                                                        t7375 = (-(short)(angDiff(t22, (((((t7370 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                                    }
                                                                                    if ((int)t7375 < (int)0x1800) {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                        t7376 = *(short *)((a4 + 0xB04));
                                                                                        *(unsigned short *)(((int)stk + 28)) = t7376;
                                                                                        t7377 = t7376;
                                                                                        t7378 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                        if ((int)(t16 - 33) >= 0) {
                                                                                            t7378 = ((t16 - 33) & 0x7);
                                                                                        }
                                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7378 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7377);
                                                                                    } else {
                                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                        t7383 = *(short *)((a4 + 0xB04));
                                                                                        t7384 = (unsigned short)((t22 - t7383) + 0x1000);
                                                                                        if ((int)(unsigned short)((t22 - t7383) + 0x1000) < 0) {
                                                                                            t7384 = ((unsigned short)((t22 - t7383) + 0x1000) + 0x1FFF);
                                                                                        }
                                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7384 >> 13) << 8) << 2) << 2) << 1));
                                                                                    }
                                                                                } else {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                    t7393 = *(short *)((a4 + 0xB04));
                                                                                    t7394 = (unsigned short)((t22 - t7393) + 0x1000);
                                                                                    if ((int)(unsigned short)((t22 - t7393) + 0x1000) < 0) {
                                                                                        t7394 = ((unsigned short)((t22 - t7393) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7394 >> 13) << 8) << 2) << 2) << 1));
                                                                                }
                                                                            } else {
                                                                                t7404 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7404 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7407 = angDiff(t22, (((((t7404 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                                if ((int)(short)t7407 >= 0) {
                                                                                    t7408 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7408 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7417 = (short)(angDiff(t22, (((((t7408 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                                } else {
                                                                                    t7412 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7412 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7417 = (-(short)(angDiff(t22, (((((t7412 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                                }
                                                                                if ((int)t7417 < (int)0x1800) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                    t7418 = *(short *)((a4 + 0xB04));
                                                                                    *(unsigned short *)(((int)stk + 28)) = t7418;
                                                                                    t7419 = t7418;
                                                                                    t7420 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7420 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7420 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7419);
                                                                                } else {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                    t7425 = *(short *)((a4 + 0xB04));
                                                                                    t7426 = (unsigned short)((t22 - t7425) + 0x1000);
                                                                                    if ((int)(unsigned short)((t22 - t7425) + 0x1000) < 0) {
                                                                                        t7426 = ((unsigned short)((t22 - t7425) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7426 >> 13) << 8) << 2) << 2) << 1));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                                    t7457 = 0x5;
                                                                }
                                                                t7468 = t7457;
                                                            } else {
                                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                }
                                                                t7462 = *(short *)((a4 + 0xB04));
                                                                t7463 = (unsigned short)((t22 - t7462) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t7462) + 0x1000) < 0) {
                                                                    t7463 = ((unsigned short)((t22 - t7462) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7463 >> 13) << 8) << 2) << 2) << 1));
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                                t7468 = 0xFFFFFFFF;
                                                            }
                                                            t7661 = t7468;
                                                        } else {
                                                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                }
                                                                t7478 = *(short *)((a4 + 0xB04));
                                                                t7479 = (unsigned short)((t22 - t7478) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t7478) + 0x1000) < 0) {
                                                                    t7479 = ((unsigned short)((t22 - t7478) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7479 >> 13) << 8) << 2) << 2) << 1));
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                                t7655 = 0xFFFFFFFF;
                                                            } else {
                                                                if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                    t7484 = *(int *)(((int)stk + 28));
                                                                    t7485 = ((~(((~(t7484 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t7484 - 33) >= 0) {
                                                                        t7485 = ((t7484 - 33) & 0x7);
                                                                    }
                                                                    if (t16 == (t7485 + 0x31)) {
                                                                        if (t17 == -99) {
                                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                        } else {
                                                                            t7488 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                            if ((int)(short)t7488 >= 0) {
                                                                                t7494 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                            } else {
                                                                                t7494 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                            }
                                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7494 / 4800.0f) + 5.0f);
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                        }
                                                                    } else {
                                                                        t7503 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t7503 >= 0) {
                                                                            t7509 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t7509 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7509 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                } else {
                                                                    if (t17 == -99) {
                                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                    } else {
                                                                        t7518 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t7518 >= 0) {
                                                                            t7524 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t7524 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7524 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                }
                                                                if ((int)t16 < (int)0x21) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t7540 = *(short *)((a4 + 0xB04));
                                                                    t7541 = (unsigned short)((t22 - t7540) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t7540) + 0x1000) < 0) {
                                                                        t7541 = ((unsigned short)((t22 - t7540) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7541 >> 13) << 8) << 2) << 2) << 1));
                                                                } else {
                                                                    if ((int)t16 > (int)0x28) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t7546 = *(short *)((a4 + 0xB04));
                                                                        t7547 = (unsigned short)((t22 - t7546) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t7546) + 0x1000) < 0) {
                                                                            t7547 = ((unsigned short)((t22 - t7546) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7547 >> 13) << 8) << 2) << 2) << 1));
                                                                    } else {
                                                                        t7550 = *(int *)(((int)stk + 28));
                                                                        t7551 = (t7550 - t16);
                                                                        if ((int)(t16 - t7550) >= 0) {
                                                                            t7551 = (t16 - t7550);
                                                                        }
                                                                        if (t7551 != 1) {
                                                                            if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                                t7557 = (t16 - (*(int *)(((int)stk + 28))));
                                                                            } else {
                                                                                t7557 = ((*(int *)(((int)stk + 28))) - t16);
                                                                            }
                                                                            if (t7557 == 7) {
                                                                                t7560 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7560 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7563 = angDiff(t22, (((((t7560 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                                if ((int)(short)t7563 >= 0) {
                                                                                    t7564 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7564 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7573 = (short)(angDiff(t22, (((((t7564 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                                } else {
                                                                                    t7568 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7568 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7573 = (-(short)(angDiff(t22, (((((t7568 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                                }
                                                                                if ((int)t7573 < (int)0x1800) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                    t7574 = *(short *)((a4 + 0xB04));
                                                                                    *(unsigned short *)(((int)stk + 28)) = t7574;
                                                                                    t7575 = t7574;
                                                                                    t7576 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7576 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7576 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7575);
                                                                                } else {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                    t7581 = *(short *)((a4 + 0xB04));
                                                                                    t7582 = (unsigned short)((t22 - t7581) + 0x1000);
                                                                                    if ((int)(unsigned short)((t22 - t7581) + 0x1000) < 0) {
                                                                                        t7582 = ((unsigned short)((t22 - t7581) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7582 >> 13) << 8) << 2) << 2) << 1));
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t7591 = *(short *)((a4 + 0xB04));
                                                                                t7592 = (unsigned short)((t22 - t7591) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t7591) + 0x1000) < 0) {
                                                                                    t7592 = ((unsigned short)((t22 - t7591) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7592 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        } else {
                                                                            t7602 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t7602 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t7605 = angDiff(t22, (((((t7602 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                            if ((int)(short)t7605 >= 0) {
                                                                                t7606 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7606 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7615 = (short)(angDiff(t22, (((((t7606 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                            } else {
                                                                                t7610 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7610 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7615 = (-(short)(angDiff(t22, (((((t7610 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                            }
                                                                            if ((int)t7615 < (int)0x1800) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                t7616 = *(short *)((a4 + 0xB04));
                                                                                *(unsigned short *)(((int)stk + 28)) = t7616;
                                                                                t7617 = t7616;
                                                                                t7618 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7618 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7618 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7617);
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t7623 = *(short *)((a4 + 0xB04));
                                                                                t7624 = (unsigned short)((t22 - t7623) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t7623) + 0x1000) < 0) {
                                                                                    t7624 = ((unsigned short)((t22 - t7623) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7624 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                                t7655 = 0x5;
                                                            }
                                                            t7661 = t7655;
                                                        }
                                                        t7667 = t7661;
                                                    }
                                                    t8071 = t7667;
                                                } else {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                            t7676 = (*(short *)(((int)stk + 32)));
                                                        } else {
                                                            t7676 = (-(*(short *)(((int)stk + 32))));
                                                        }
                                                        if ((int)(unsigned short)t7676 <= (int)0x6000) {
                                                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                }
                                                                t7684 = *(short *)((a4 + 0xB04));
                                                                t7685 = (unsigned short)((t22 - t7684) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t7684) + 0x1000) < 0) {
                                                                    t7685 = ((unsigned short)((t22 - t7684) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7685 >> 13) << 8) << 2) << 2) << 1));
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                                t7861 = 0xFFFFFFFF;
                                                            } else {
                                                                if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                    t7690 = *(int *)(((int)stk + 28));
                                                                    t7691 = ((~(((~(t7690 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t7690 - 33) >= 0) {
                                                                        t7691 = ((t7690 - 33) & 0x7);
                                                                    }
                                                                    if (t16 == (t7691 + 0x31)) {
                                                                        if (t17 == -99) {
                                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                        } else {
                                                                            t7694 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                            if ((int)(short)t7694 >= 0) {
                                                                                t7700 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                            } else {
                                                                                t7700 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                            }
                                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7700 / 4800.0f) + 5.0f);
                                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                        }
                                                                    } else {
                                                                        t7709 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t7709 >= 0) {
                                                                            t7715 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t7715 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7715 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                } else {
                                                                    if (t17 == -99) {
                                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                    } else {
                                                                        t7724 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t7724 >= 0) {
                                                                            t7730 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t7730 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7730 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                }
                                                                if ((int)t16 < (int)0x21) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t7746 = *(short *)((a4 + 0xB04));
                                                                    t7747 = (unsigned short)((t22 - t7746) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t7746) + 0x1000) < 0) {
                                                                        t7747 = ((unsigned short)((t22 - t7746) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7747 >> 13) << 8) << 2) << 2) << 1));
                                                                } else {
                                                                    if ((int)t16 > (int)0x28) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t7752 = *(short *)((a4 + 0xB04));
                                                                        t7753 = (unsigned short)((t22 - t7752) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t7752) + 0x1000) < 0) {
                                                                            t7753 = ((unsigned short)((t22 - t7752) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7753 >> 13) << 8) << 2) << 2) << 1));
                                                                    } else {
                                                                        t7756 = *(int *)(((int)stk + 28));
                                                                        t7757 = (t7756 - t16);
                                                                        if ((int)(t16 - t7756) >= 0) {
                                                                            t7757 = (t16 - t7756);
                                                                        }
                                                                        if (t7757 != 1) {
                                                                            if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                                t7763 = (t16 - (*(int *)(((int)stk + 28))));
                                                                            } else {
                                                                                t7763 = ((*(int *)(((int)stk + 28))) - t16);
                                                                            }
                                                                            if (t7763 == 7) {
                                                                                t7766 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7766 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7769 = angDiff(t22, (((((t7766 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                                if ((int)(short)t7769 >= 0) {
                                                                                    t7770 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7770 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7779 = (short)(angDiff(t22, (((((t7770 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                                } else {
                                                                                    t7774 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7774 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    t7779 = (-(short)(angDiff(t22, (((((t7774 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                                }
                                                                                if ((int)t7779 < (int)0x1800) {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                    t7780 = *(short *)((a4 + 0xB04));
                                                                                    *(unsigned short *)(((int)stk + 28)) = t7780;
                                                                                    t7781 = t7780;
                                                                                    t7782 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                    if ((int)(t16 - 33) >= 0) {
                                                                                        t7782 = ((t16 - 33) & 0x7);
                                                                                    }
                                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7782 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7781);
                                                                                } else {
                                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                    t7787 = *(short *)((a4 + 0xB04));
                                                                                    t7788 = (unsigned short)((t22 - t7787) + 0x1000);
                                                                                    if ((int)(unsigned short)((t22 - t7787) + 0x1000) < 0) {
                                                                                        t7788 = ((unsigned short)((t22 - t7787) + 0x1000) + 0x1FFF);
                                                                                    }
                                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7788 >> 13) << 8) << 2) << 2) << 1));
                                                                                }
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t7797 = *(short *)((a4 + 0xB04));
                                                                                t7798 = (unsigned short)((t22 - t7797) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t7797) + 0x1000) < 0) {
                                                                                    t7798 = ((unsigned short)((t22 - t7797) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7798 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        } else {
                                                                            t7808 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t7808 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t7811 = angDiff(t22, (((((t7808 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                            if ((int)(short)t7811 >= 0) {
                                                                                t7812 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7812 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7821 = (short)(angDiff(t22, (((((t7812 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                            } else {
                                                                                t7816 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7816 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7821 = (-(short)(angDiff(t22, (((((t7816 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                            }
                                                                            if ((int)t7821 < (int)0x1800) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                t7822 = *(short *)((a4 + 0xB04));
                                                                                *(unsigned short *)(((int)stk + 28)) = t7822;
                                                                                t7823 = t7822;
                                                                                t7824 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7824 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7824 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7823);
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t7829 = *(short *)((a4 + 0xB04));
                                                                                t7830 = (unsigned short)((t22 - t7829) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t7829) + 0x1000) < 0) {
                                                                                    t7830 = ((unsigned short)((t22 - t7829) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7830 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                                t7861 = 0x5;
                                                            }
                                                            t7872 = t7861;
                                                        } else {
                                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                            }
                                                            t7866 = *(short *)((a4 + 0xB04));
                                                            t7867 = (unsigned short)((t22 - t7866) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t7866) + 0x1000) < 0) {
                                                                t7867 = ((unsigned short)((t22 - t7866) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7867 >> 13) << 8) << 2) << 2) << 1));
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                            t7872 = 0xFFFFFFFF;
                                                        }
                                                        t8065 = t7872;
                                                    } else {
                                                        if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                            }
                                                            t7882 = *(short *)((a4 + 0xB04));
                                                            t7883 = (unsigned short)((t22 - t7882) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t7882) + 0x1000) < 0) {
                                                                t7883 = ((unsigned short)((t22 - t7882) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7883 >> 13) << 8) << 2) << 2) << 1));
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                            t8059 = 0xFFFFFFFF;
                                                        } else {
                                                            if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                t7888 = *(int *)(((int)stk + 28));
                                                                t7889 = ((~(((~(t7888 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t7888 - 33) >= 0) {
                                                                    t7889 = ((t7888 - 33) & 0x7);
                                                                }
                                                                if (t16 == (t7889 + 0x31)) {
                                                                    if (t17 == -99) {
                                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                    } else {
                                                                        t7892 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t7892 >= 0) {
                                                                            t7898 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t7898 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7898 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                } else {
                                                                    t7907 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t7907 >= 0) {
                                                                        t7913 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t7913 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7913 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t7922 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t7922 >= 0) {
                                                                        t7928 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t7928 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t7928 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            }
                                                            if ((int)t16 < (int)0x21) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t7944 = *(short *)((a4 + 0xB04));
                                                                t7945 = (unsigned short)((t22 - t7944) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t7944) + 0x1000) < 0) {
                                                                    t7945 = ((unsigned short)((t22 - t7944) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7945 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                if ((int)t16 > (int)0x28) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t7950 = *(short *)((a4 + 0xB04));
                                                                    t7951 = (unsigned short)((t22 - t7950) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t7950) + 0x1000) < 0) {
                                                                        t7951 = ((unsigned short)((t22 - t7950) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7951 >> 13) << 8) << 2) << 2) << 1));
                                                                } else {
                                                                    t7954 = *(int *)(((int)stk + 28));
                                                                    t7955 = (t7954 - t16);
                                                                    if ((int)(t16 - t7954) >= 0) {
                                                                        t7955 = (t16 - t7954);
                                                                    }
                                                                    if (t7955 != 1) {
                                                                        if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                            t7961 = (t16 - (*(int *)(((int)stk + 28))));
                                                                        } else {
                                                                            t7961 = ((*(int *)(((int)stk + 28))) - t16);
                                                                        }
                                                                        if (t7961 == 7) {
                                                                            t7964 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t7964 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t7967 = angDiff(t22, (((((t7964 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                            if ((int)(short)t7967 >= 0) {
                                                                                t7968 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7968 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7977 = (short)(angDiff(t22, (((((t7968 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                            } else {
                                                                                t7972 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7972 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t7977 = (-(short)(angDiff(t22, (((((t7972 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                            }
                                                                            if ((int)t7977 < (int)0x1800) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                t7978 = *(short *)((a4 + 0xB04));
                                                                                *(unsigned short *)(((int)stk + 28)) = t7978;
                                                                                t7979 = t7978;
                                                                                t7980 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t7980 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t7980 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t7979);
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t7985 = *(short *)((a4 + 0xB04));
                                                                                t7986 = (unsigned short)((t22 - t7985) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t7985) + 0x1000) < 0) {
                                                                                    t7986 = ((unsigned short)((t22 - t7985) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7986 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t7995 = *(short *)((a4 + 0xB04));
                                                                            t7996 = (unsigned short)((t22 - t7995) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t7995) + 0x1000) < 0) {
                                                                                t7996 = ((unsigned short)((t22 - t7995) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t7996 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        t8006 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8006 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8009 = angDiff(t22, (((((t8006 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t8009 >= 0) {
                                                                            t8010 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8010 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8019 = (short)(angDiff(t22, (((((t8010 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t8014 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8014 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8019 = (-(short)(angDiff(t22, (((((t8014 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t8019 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t8020 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t8020;
                                                                            t8021 = t8020;
                                                                            t8022 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8022 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8022 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8021);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t8027 = *(short *)((a4 + 0xB04));
                                                                            t8028 = (unsigned short)((t22 - t8027) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t8027) + 0x1000) < 0) {
                                                                                t8028 = ((unsigned short)((t22 - t8027) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8028 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            t8059 = 0x5;
                                                        }
                                                        t8065 = t8059;
                                                    }
                                                    t8071 = t8065;
                                                }
                                                t8077 = t8071;
                                            }
                                            t8083 = t8077;
                                        }
                                        t8094 = t8083;
                                    } else {
                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                                        t8088 = *(short *)((a4 + 0xB04));
                                        t8089 = (unsigned short)((t22 - t8088) + 0x1000);
                                        if ((int)(unsigned short)((t22 - t8088) + 0x1000) < 0) {
                                            t8089 = ((unsigned short)((t22 - t8088) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8089 >> 13) << 8) << 2) << 2) << 1));
                                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        t8094 = 0x5;
                                    }
                                    t8934 = t8094;
                                } else {
                                    t8098 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 36)) = (t8098 + 0x10);
                                    if ((t16 == (t8098 + 0x10)) && (t17 != -99)) {
                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                        t8102 = *(short *)((a4 + 0xB04));
                                        t8103 = (unsigned short)((t22 - t8102) + 0x1000);
                                        if ((int)(unsigned short)((t22 - t8102) + 0x1000) < 0) {
                                            t8103 = ((unsigned short)((t22 - t8102) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8103 >> 13) << 8) << 2) << 2) << 1));
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        t8928 = 0x5;
                                    } else {
                                        if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                            t8110 = (*(short *)(((int)stk + 32)));
                                        } else {
                                            t8110 = (-(*(short *)(((int)stk + 32))));
                                        }
                                        if ((int)(unsigned short)t8110 > (int)0x6000) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xCF4 + a4)); }
                                            t8112 = vecLength(*(Stk3 *)(((int)stk + 16)));
                                            if (t8112 > 0.75f) {
                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                                t8114 = *(short *)((a4 + 0xB04));
                                                t8115 = (unsigned short)((t22 - t8114) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t8114) + 0x1000) < 0) {
                                                    t8115 = ((unsigned short)((t22 - t8114) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8115 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t8518 = 0x5;
                                            } else {
                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                    if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                        t8123 = (*(short *)(((int)stk + 32)));
                                                    } else {
                                                        t8123 = (-(*(short *)(((int)stk + 32))));
                                                    }
                                                    if ((int)(unsigned short)t8123 <= (int)0x6000) {
                                                        if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                            }
                                                            t8131 = *(short *)((a4 + 0xB04));
                                                            t8132 = (unsigned short)((t22 - t8131) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t8131) + 0x1000) < 0) {
                                                                t8132 = ((unsigned short)((t22 - t8131) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8132 >> 13) << 8) << 2) << 2) << 1));
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                            t8308 = 0xFFFFFFFF;
                                                        } else {
                                                            if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                t8137 = *(int *)(((int)stk + 28));
                                                                t8138 = ((~(((~(t8137 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t8137 - 33) >= 0) {
                                                                    t8138 = ((t8137 - 33) & 0x7);
                                                                }
                                                                if (t16 == (t8138 + 0x31)) {
                                                                    if (t17 == -99) {
                                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                    } else {
                                                                        t8141 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t8141 >= 0) {
                                                                            t8147 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t8147 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8147 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                } else {
                                                                    t8156 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t8156 >= 0) {
                                                                        t8162 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t8162 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8162 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t8171 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t8171 >= 0) {
                                                                        t8177 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t8177 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8177 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            }
                                                            if ((int)t16 < (int)0x21) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t8193 = *(short *)((a4 + 0xB04));
                                                                t8194 = (unsigned short)((t22 - t8193) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t8193) + 0x1000) < 0) {
                                                                    t8194 = ((unsigned short)((t22 - t8193) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8194 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                if ((int)t16 > (int)0x28) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t8199 = *(short *)((a4 + 0xB04));
                                                                    t8200 = (unsigned short)((t22 - t8199) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t8199) + 0x1000) < 0) {
                                                                        t8200 = ((unsigned short)((t22 - t8199) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8200 >> 13) << 8) << 2) << 2) << 1));
                                                                } else {
                                                                    t8203 = *(int *)(((int)stk + 28));
                                                                    t8204 = (t8203 - t16);
                                                                    if ((int)(t16 - t8203) >= 0) {
                                                                        t8204 = (t16 - t8203);
                                                                    }
                                                                    if (t8204 != 1) {
                                                                        if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                            t8210 = (t16 - (*(int *)(((int)stk + 28))));
                                                                        } else {
                                                                            t8210 = ((*(int *)(((int)stk + 28))) - t16);
                                                                        }
                                                                        if (t8210 == 7) {
                                                                            t8213 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8213 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8216 = angDiff(t22, (((((t8213 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                            if ((int)(short)t8216 >= 0) {
                                                                                t8217 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t8217 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t8226 = (short)(angDiff(t22, (((((t8217 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                            } else {
                                                                                t8221 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t8221 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t8226 = (-(short)(angDiff(t22, (((((t8221 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                            }
                                                                            if ((int)t8226 < (int)0x1800) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                t8227 = *(short *)((a4 + 0xB04));
                                                                                *(unsigned short *)(((int)stk + 28)) = t8227;
                                                                                t8228 = t8227;
                                                                                t8229 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t8229 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8229 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8228);
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t8234 = *(short *)((a4 + 0xB04));
                                                                                t8235 = (unsigned short)((t22 - t8234) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t8234) + 0x1000) < 0) {
                                                                                    t8235 = ((unsigned short)((t22 - t8234) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8235 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t8244 = *(short *)((a4 + 0xB04));
                                                                            t8245 = (unsigned short)((t22 - t8244) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t8244) + 0x1000) < 0) {
                                                                                t8245 = ((unsigned short)((t22 - t8244) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8245 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        t8255 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8255 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8258 = angDiff(t22, (((((t8255 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t8258 >= 0) {
                                                                            t8259 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8259 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8268 = (short)(angDiff(t22, (((((t8259 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t8263 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8263 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8268 = (-(short)(angDiff(t22, (((((t8263 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t8268 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t8269 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t8269;
                                                                            t8270 = t8269;
                                                                            t8271 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8271 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8271 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8270);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t8276 = *(short *)((a4 + 0xB04));
                                                                            t8277 = (unsigned short)((t22 - t8276) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t8276) + 0x1000) < 0) {
                                                                                t8277 = ((unsigned short)((t22 - t8276) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8277 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            t8308 = 0x5;
                                                        }
                                                        t8319 = t8308;
                                                    } else {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t8313 = *(short *)((a4 + 0xB04));
                                                        t8314 = (unsigned short)((t22 - t8313) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t8313) + 0x1000) < 0) {
                                                            t8314 = ((unsigned short)((t22 - t8313) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8314 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t8319 = 0xFFFFFFFF;
                                                    }
                                                    t8512 = t8319;
                                                } else {
                                                    if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t8329 = *(short *)((a4 + 0xB04));
                                                        t8330 = (unsigned short)((t22 - t8329) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t8329) + 0x1000) < 0) {
                                                            t8330 = ((unsigned short)((t22 - t8329) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8330 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t8506 = 0xFFFFFFFF;
                                                    } else {
                                                        if (t16 != (*(int *)(((int)stk + 44)))) {
                                                            t8335 = *(int *)(((int)stk + 28));
                                                            t8336 = ((~(((~(t8335 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t8335 - 33) >= 0) {
                                                                t8336 = ((t8335 - 33) & 0x7);
                                                            }
                                                            if (t16 == (t8336 + 0x31)) {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t8339 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t8339 >= 0) {
                                                                        t8345 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t8345 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8345 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                t8354 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t8354 >= 0) {
                                                                    t8360 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t8360 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8360 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t8369 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t8369 >= 0) {
                                                                    t8375 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t8375 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8375 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        }
                                                        if ((int)t16 < (int)0x21) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t8391 = *(short *)((a4 + 0xB04));
                                                            t8392 = (unsigned short)((t22 - t8391) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t8391) + 0x1000) < 0) {
                                                                t8392 = ((unsigned short)((t22 - t8391) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8392 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            if ((int)t16 > (int)0x28) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t8397 = *(short *)((a4 + 0xB04));
                                                                t8398 = (unsigned short)((t22 - t8397) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t8397) + 0x1000) < 0) {
                                                                    t8398 = ((unsigned short)((t22 - t8397) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8398 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                t8401 = *(int *)(((int)stk + 28));
                                                                t8402 = (t8401 - t16);
                                                                if ((int)(t16 - t8401) >= 0) {
                                                                    t8402 = (t16 - t8401);
                                                                }
                                                                if (t8402 != 1) {
                                                                    if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                        t8408 = (t16 - (*(int *)(((int)stk + 28))));
                                                                    } else {
                                                                        t8408 = ((*(int *)(((int)stk + 28))) - t16);
                                                                    }
                                                                    if (t8408 == 7) {
                                                                        t8411 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8411 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8414 = angDiff(t22, (((((t8411 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t8414 >= 0) {
                                                                            t8415 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8415 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8424 = (short)(angDiff(t22, (((((t8415 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t8419 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8419 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8424 = (-(short)(angDiff(t22, (((((t8419 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t8424 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t8425 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t8425;
                                                                            t8426 = t8425;
                                                                            t8427 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8427 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8427 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8426);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t8432 = *(short *)((a4 + 0xB04));
                                                                            t8433 = (unsigned short)((t22 - t8432) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t8432) + 0x1000) < 0) {
                                                                                t8433 = ((unsigned short)((t22 - t8432) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8433 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t8442 = *(short *)((a4 + 0xB04));
                                                                        t8443 = (unsigned short)((t22 - t8442) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t8442) + 0x1000) < 0) {
                                                                            t8443 = ((unsigned short)((t22 - t8442) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8443 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    t8453 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8453 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t8456 = angDiff(t22, (((((t8453 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t8456 >= 0) {
                                                                        t8457 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8457 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8466 = (short)(angDiff(t22, (((((t8457 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t8461 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8461 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8466 = (-(short)(angDiff(t22, (((((t8461 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t8466 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t8467 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t8467;
                                                                        t8468 = t8467;
                                                                        t8469 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8469 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8469 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8468);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t8474 = *(short *)((a4 + 0xB04));
                                                                        t8475 = (unsigned short)((t22 - t8474) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t8474) + 0x1000) < 0) {
                                                                            t8475 = ((unsigned short)((t22 - t8474) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8475 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        t8506 = 0x5;
                                                    }
                                                    t8512 = t8506;
                                                }
                                                t8518 = t8512;
                                            }
                                            t8922 = t8518;
                                        } else {
                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                    t8527 = (*(short *)(((int)stk + 32)));
                                                } else {
                                                    t8527 = (-(*(short *)(((int)stk + 32))));
                                                }
                                                if ((int)(unsigned short)t8527 <= (int)0x6000) {
                                                    if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t8535 = *(short *)((a4 + 0xB04));
                                                        t8536 = (unsigned short)((t22 - t8535) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t8535) + 0x1000) < 0) {
                                                            t8536 = ((unsigned short)((t22 - t8535) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8536 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t8712 = 0xFFFFFFFF;
                                                    } else {
                                                        if (t16 != (*(int *)(((int)stk + 44)))) {
                                                            t8541 = *(int *)(((int)stk + 28));
                                                            t8542 = ((~(((~(t8541 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t8541 - 33) >= 0) {
                                                                t8542 = ((t8541 - 33) & 0x7);
                                                            }
                                                            if (t16 == (t8542 + 0x31)) {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t8545 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t8545 >= 0) {
                                                                        t8551 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t8551 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8551 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                t8560 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t8560 >= 0) {
                                                                    t8566 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t8566 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8566 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t8575 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t8575 >= 0) {
                                                                    t8581 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t8581 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8581 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        }
                                                        if ((int)t16 < (int)0x21) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t8597 = *(short *)((a4 + 0xB04));
                                                            t8598 = (unsigned short)((t22 - t8597) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t8597) + 0x1000) < 0) {
                                                                t8598 = ((unsigned short)((t22 - t8597) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8598 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            if ((int)t16 > (int)0x28) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t8603 = *(short *)((a4 + 0xB04));
                                                                t8604 = (unsigned short)((t22 - t8603) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t8603) + 0x1000) < 0) {
                                                                    t8604 = ((unsigned short)((t22 - t8603) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8604 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                t8607 = *(int *)(((int)stk + 28));
                                                                t8608 = (t8607 - t16);
                                                                if ((int)(t16 - t8607) >= 0) {
                                                                    t8608 = (t16 - t8607);
                                                                }
                                                                if (t8608 != 1) {
                                                                    if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                        t8614 = (t16 - (*(int *)(((int)stk + 28))));
                                                                    } else {
                                                                        t8614 = ((*(int *)(((int)stk + 28))) - t16);
                                                                    }
                                                                    if (t8614 == 7) {
                                                                        t8617 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8617 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8620 = angDiff(t22, (((((t8617 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t8620 >= 0) {
                                                                            t8621 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8621 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8630 = (short)(angDiff(t22, (((((t8621 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t8625 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8625 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t8630 = (-(short)(angDiff(t22, (((((t8625 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t8630 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t8631 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t8631;
                                                                            t8632 = t8631;
                                                                            t8633 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t8633 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8633 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8632);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t8638 = *(short *)((a4 + 0xB04));
                                                                            t8639 = (unsigned short)((t22 - t8638) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t8638) + 0x1000) < 0) {
                                                                                t8639 = ((unsigned short)((t22 - t8638) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8639 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t8648 = *(short *)((a4 + 0xB04));
                                                                        t8649 = (unsigned short)((t22 - t8648) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t8648) + 0x1000) < 0) {
                                                                            t8649 = ((unsigned short)((t22 - t8648) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8649 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    t8659 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8659 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t8662 = angDiff(t22, (((((t8659 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t8662 >= 0) {
                                                                        t8663 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8663 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8672 = (short)(angDiff(t22, (((((t8663 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t8667 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8667 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8672 = (-(short)(angDiff(t22, (((((t8667 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t8672 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t8673 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t8673;
                                                                        t8674 = t8673;
                                                                        t8675 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8675 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8675 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8674);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t8680 = *(short *)((a4 + 0xB04));
                                                                        t8681 = (unsigned short)((t22 - t8680) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t8680) + 0x1000) < 0) {
                                                                            t8681 = ((unsigned short)((t22 - t8680) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8681 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        t8712 = 0x5;
                                                    }
                                                    t8723 = t8712;
                                                } else {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                    }
                                                    t8717 = *(short *)((a4 + 0xB04));
                                                    t8718 = (unsigned short)((t22 - t8717) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t8717) + 0x1000) < 0) {
                                                        t8718 = ((unsigned short)((t22 - t8717) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8718 >> 13) << 8) << 2) << 2) << 1));
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    t8723 = 0xFFFFFFFF;
                                                }
                                                t8916 = t8723;
                                            } else {
                                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                    }
                                                    t8733 = *(short *)((a4 + 0xB04));
                                                    t8734 = (unsigned short)((t22 - t8733) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t8733) + 0x1000) < 0) {
                                                        t8734 = ((unsigned short)((t22 - t8733) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8734 >> 13) << 8) << 2) << 2) << 1));
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    t8910 = 0xFFFFFFFF;
                                                } else {
                                                    if (t16 != (*(int *)(((int)stk + 44)))) {
                                                        t8739 = *(int *)(((int)stk + 28));
                                                        t8740 = ((~(((~(t8739 - 33)) + 0x1) & 0x7)) + 0x1);
                                                        if ((int)(t8739 - 33) >= 0) {
                                                            t8740 = ((t8739 - 33) & 0x7);
                                                        }
                                                        if (t16 == (t8740 + 0x31)) {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t8743 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t8743 >= 0) {
                                                                    t8749 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t8749 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8749 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            t8758 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t8758 >= 0) {
                                                                t8764 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t8764 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8764 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    } else {
                                                        if (t17 == -99) {
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                        } else {
                                                            t8773 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t8773 >= 0) {
                                                                t8779 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t8779 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t8779 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    }
                                                    if ((int)t16 < (int)0x21) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                        t8795 = *(short *)((a4 + 0xB04));
                                                        t8796 = (unsigned short)((t22 - t8795) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t8795) + 0x1000) < 0) {
                                                            t8796 = ((unsigned short)((t22 - t8795) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8796 >> 13) << 8) << 2) << 2) << 1));
                                                    } else {
                                                        if ((int)t16 > (int)0x28) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t8801 = *(short *)((a4 + 0xB04));
                                                            t8802 = (unsigned short)((t22 - t8801) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t8801) + 0x1000) < 0) {
                                                                t8802 = ((unsigned short)((t22 - t8801) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8802 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            t8805 = *(int *)(((int)stk + 28));
                                                            t8806 = (t8805 - t16);
                                                            if ((int)(t16 - t8805) >= 0) {
                                                                t8806 = (t16 - t8805);
                                                            }
                                                            if (t8806 != 1) {
                                                                if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                    t8812 = (t16 - (*(int *)(((int)stk + 28))));
                                                                } else {
                                                                    t8812 = ((*(int *)(((int)stk + 28))) - t16);
                                                                }
                                                                if (t8812 == 7) {
                                                                    t8815 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8815 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t8818 = angDiff(t22, (((((t8815 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t8818 >= 0) {
                                                                        t8819 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8819 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8828 = (short)(angDiff(t22, (((((t8819 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t8823 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8823 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t8828 = (-(short)(angDiff(t22, (((((t8823 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t8828 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t8829 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t8829;
                                                                        t8830 = t8829;
                                                                        t8831 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t8831 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8831 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8830);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t8836 = *(short *)((a4 + 0xB04));
                                                                        t8837 = (unsigned short)((t22 - t8836) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t8836) + 0x1000) < 0) {
                                                                            t8837 = ((unsigned short)((t22 - t8836) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8837 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t8846 = *(short *)((a4 + 0xB04));
                                                                    t8847 = (unsigned short)((t22 - t8846) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t8846) + 0x1000) < 0) {
                                                                        t8847 = ((unsigned short)((t22 - t8846) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8847 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            } else {
                                                                t8857 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t8857 = ((t16 - 33) & 0x7);
                                                                }
                                                                t8860 = angDiff(t22, (((((t8857 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                if ((int)(short)t8860 >= 0) {
                                                                    t8861 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8861 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t8870 = (short)(angDiff(t22, (((((t8861 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                } else {
                                                                    t8865 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8865 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t8870 = (-(short)(angDiff(t22, (((((t8865 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                }
                                                                if ((int)t8870 < (int)0x1800) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    t8871 = *(short *)((a4 + 0xB04));
                                                                    *(unsigned short *)(((int)stk + 28)) = t8871;
                                                                    t8872 = t8871;
                                                                    t8873 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t8873 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t8873 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t8872);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t8878 = *(short *)((a4 + 0xB04));
                                                                    t8879 = (unsigned short)((t22 - t8878) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t8878) + 0x1000) < 0) {
                                                                        t8879 = ((unsigned short)((t22 - t8878) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8879 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                    t8910 = 0x5;
                                                }
                                                t8916 = t8910;
                                            }
                                            t8922 = t8916;
                                        }
                                        t8928 = t8922;
                                    }
                                    t8934 = t8928;
                                }
                                t8940 = t8934;
                            }
                            *(unsigned int *)(((int)stk + 44)) = t8940;
                        }
                        u8965 = u8953;
                    }
                    u10726 = u8965;
                } else {
                    u8969 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C10244C));
                    *(float *)(((int)stk + 24)) = u8969;
                    *(unsigned int *)(((int)stk + 28)) = (short)t22;
                    t8971 = nlCos((((short)t22 - (*(short *)((a4 + 0xB04)))) + 0x1000));
                    t8972 = nlPow(t8971, (1.0f + 1.0f));
                    *(float *)(((int)stk + 20)) = t8972;
                    u8974 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450));
                    *(float *)(((int)stk + 16)) = u8974;
                    t8977 = nlSin((((*(int *)(((int)stk + 28))) - (*(short *)((a4 + 0xB04)))) + 0x1000));
                    u8979 = (u8974 * (nlPow(t8977, (1.0f + 1.0f))));
                    u8979 = u8979 + t8972 * u8969;
                    *(float *)((a4 + 0xBDC)) = u8979;
                    t8980 = *(short *)((a4 + 0xB04));
                    t8981 = (unsigned short)((t22 - t8980) + 0x1000);
                    if ((int)(unsigned short)((t22 - t8980) + 0x1000) < 0) {
                        t8981 = ((unsigned short)((t22 - t8980) + 0x1000) + 0x1FFF);
                    }
                    *(unsigned int *)(((int)stk + 28)) = (((int)t8981 >> 13) + 0x21);
                    *(unsigned int *)(((int)stk + 44)) = ((((int)t8981 >> 13) + 0x21) - 8);
                    if ((t16 == ((((int)t8981 >> 13) + 0x21) - 8)) && (t17 != -99)) {
                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                        t8987 = *(short *)((a4 + 0xB04));
                        t8988 = (unsigned short)((t22 - t8987) + 0x1000);
                        if ((int)(unsigned short)((t22 - t8987) + 0x1000) < 0) {
                            t8988 = ((unsigned short)((t22 - t8987) + 0x1000) + 0x1FFF);
                        }
                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t8988 >> 13) << 8) << 2) << 2) << 1));
                        *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                        t10713 = 0x5;
                    } else {
                        if ((int)(*(short *)(((int)stk + 56))) >= 0) {
                            t8995 = (*(short *)(((int)stk + 56)));
                        } else {
                            t8995 = (-(*(short *)(((int)stk + 56))));
                        }
                        if (((int)t8995 < (int)0x2800) && ((((int)t16 < (int)0x19) || ((int)t16 > (int)0x20)) && ((((int)t16 < (int)0x31) || ((int)t16 > (int)0x38)) && ((t16 != 22) && (t16 != 23))))) {
                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                if ((int)(*(short *)(((int)stk + 52))) >= 0) {
                                    t9013 = (*(short *)(((int)stk + 52)));
                                } else {
                                    t9013 = (-(*(short *)(((int)stk + 52))));
                                }
                                if ((int)t9013 > (int)0x3000) {
                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                                    t9016 = *(short *)((a4 + 0xB04));
                                    t9017 = (unsigned short)((t22 - t9016) + 0x1000);
                                    if ((int)(unsigned short)((t22 - t9016) + 0x1000) < 0) {
                                        t9017 = ((unsigned short)((t22 - t9016) + 0x1000) + 0x1FFF);
                                    }
                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9017 >> 13) << 8) << 2) << 2) << 1));
                                    *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                    t9856 = 0x5;
                                } else {
                                    t9020 = *(int *)(((int)stk + 28));
                                    *(unsigned int *)(((int)stk + 36)) = (t9020 + 0x10);
                                    if ((t16 == (t9020 + 0x10)) && (t17 != -99)) {
                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                        t9024 = *(short *)((a4 + 0xB04));
                                        t9025 = (unsigned short)((t22 - t9024) + 0x1000);
                                        if ((int)(unsigned short)((t22 - t9024) + 0x1000) < 0) {
                                            t9025 = ((unsigned short)((t22 - t9024) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9025 >> 13) << 8) << 2) << 2) << 1));
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        t9850 = 0x5;
                                    } else {
                                        if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                            t9032 = (*(short *)(((int)stk + 32)));
                                        } else {
                                            t9032 = (-(*(short *)(((int)stk + 32))));
                                        }
                                        if ((int)(unsigned short)t9032 > (int)0x6000) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xCF4 + a4)); }
                                            t9034 = vecLength(*(Stk3 *)(((int)stk + 16)));
                                            if (t9034 > 0.75f) {
                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                                t9036 = *(short *)((a4 + 0xB04));
                                                t9037 = (unsigned short)((t22 - t9036) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t9036) + 0x1000) < 0) {
                                                    t9037 = ((unsigned short)((t22 - t9036) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9037 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t9440 = 0x5;
                                            } else {
                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                    if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                        t9045 = (*(short *)(((int)stk + 32)));
                                                    } else {
                                                        t9045 = (-(*(short *)(((int)stk + 32))));
                                                    }
                                                    if ((int)(unsigned short)t9045 <= (int)0x6000) {
                                                        if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                            }
                                                            t9053 = *(short *)((a4 + 0xB04));
                                                            t9054 = (unsigned short)((t22 - t9053) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t9053) + 0x1000) < 0) {
                                                                t9054 = ((unsigned short)((t22 - t9053) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9054 >> 13) << 8) << 2) << 2) << 1));
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                            t9230 = 0xFFFFFFFF;
                                                        } else {
                                                            if (t16 != (*(int *)(((int)stk + 44)))) {
                                                                t9059 = *(int *)(((int)stk + 28));
                                                                t9060 = ((~(((~(t9059 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t9059 - 33) >= 0) {
                                                                    t9060 = ((t9059 - 33) & 0x7);
                                                                }
                                                                if (t16 == (t9060 + 0x31)) {
                                                                    if (t17 == -99) {
                                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                    } else {
                                                                        t9063 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                        if ((int)(short)t9063 >= 0) {
                                                                            t9069 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                        } else {
                                                                            t9069 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                        }
                                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9069 / 4800.0f) + 5.0f);
                                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                    }
                                                                } else {
                                                                    t9078 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t9078 >= 0) {
                                                                        t9084 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t9084 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9084 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t9093 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t9093 >= 0) {
                                                                        t9099 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t9099 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9099 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            }
                                                            if ((int)t16 < (int)0x21) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t9115 = *(short *)((a4 + 0xB04));
                                                                t9116 = (unsigned short)((t22 - t9115) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t9115) + 0x1000) < 0) {
                                                                    t9116 = ((unsigned short)((t22 - t9115) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9116 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                if ((int)t16 > (int)0x28) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t9121 = *(short *)((a4 + 0xB04));
                                                                    t9122 = (unsigned short)((t22 - t9121) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t9121) + 0x1000) < 0) {
                                                                        t9122 = ((unsigned short)((t22 - t9121) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9122 >> 13) << 8) << 2) << 2) << 1));
                                                                } else {
                                                                    t9125 = *(int *)(((int)stk + 28));
                                                                    t9126 = (t9125 - t16);
                                                                    if ((int)(t16 - t9125) >= 0) {
                                                                        t9126 = (t16 - t9125);
                                                                    }
                                                                    if (t9126 != 1) {
                                                                        if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                            t9132 = (t16 - (*(int *)(((int)stk + 28))));
                                                                        } else {
                                                                            t9132 = ((*(int *)(((int)stk + 28))) - t16);
                                                                        }
                                                                        if (t9132 == 7) {
                                                                            t9135 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9135 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9138 = angDiff(t22, (((((t9135 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                            if ((int)(short)t9138 >= 0) {
                                                                                t9139 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t9139 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t9148 = (short)(angDiff(t22, (((((t9139 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                            } else {
                                                                                t9143 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t9143 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                t9148 = (-(short)(angDiff(t22, (((((t9143 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                            }
                                                                            if ((int)t9148 < (int)0x1800) {
                                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                                t9149 = *(short *)((a4 + 0xB04));
                                                                                *(unsigned short *)(((int)stk + 28)) = t9149;
                                                                                t9150 = t9149;
                                                                                t9151 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                                if ((int)(t16 - 33) >= 0) {
                                                                                    t9151 = ((t16 - 33) & 0x7);
                                                                                }
                                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9151 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9150);
                                                                            } else {
                                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                                t9156 = *(short *)((a4 + 0xB04));
                                                                                t9157 = (unsigned short)((t22 - t9156) + 0x1000);
                                                                                if ((int)(unsigned short)((t22 - t9156) + 0x1000) < 0) {
                                                                                    t9157 = ((unsigned short)((t22 - t9156) + 0x1000) + 0x1FFF);
                                                                                }
                                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9157 >> 13) << 8) << 2) << 2) << 1));
                                                                            }
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t9166 = *(short *)((a4 + 0xB04));
                                                                            t9167 = (unsigned short)((t22 - t9166) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t9166) + 0x1000) < 0) {
                                                                                t9167 = ((unsigned short)((t22 - t9166) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9167 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        t9177 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9177 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9180 = angDiff(t22, (((((t9177 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t9180 >= 0) {
                                                                            t9181 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9181 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9190 = (short)(angDiff(t22, (((((t9181 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t9185 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9185 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9190 = (-(short)(angDiff(t22, (((((t9185 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t9190 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t9191 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t9191;
                                                                            t9192 = t9191;
                                                                            t9193 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9193 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9193 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9192);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t9198 = *(short *)((a4 + 0xB04));
                                                                            t9199 = (unsigned short)((t22 - t9198) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t9198) + 0x1000) < 0) {
                                                                                t9199 = ((unsigned short)((t22 - t9198) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9199 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                            t9230 = 0x5;
                                                        }
                                                        t9241 = t9230;
                                                    } else {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t9235 = *(short *)((a4 + 0xB04));
                                                        t9236 = (unsigned short)((t22 - t9235) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t9235) + 0x1000) < 0) {
                                                            t9236 = ((unsigned short)((t22 - t9235) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9236 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t9241 = 0xFFFFFFFF;
                                                    }
                                                    t9434 = t9241;
                                                } else {
                                                    if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t9251 = *(short *)((a4 + 0xB04));
                                                        t9252 = (unsigned short)((t22 - t9251) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t9251) + 0x1000) < 0) {
                                                            t9252 = ((unsigned short)((t22 - t9251) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9252 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t9428 = 0xFFFFFFFF;
                                                    } else {
                                                        if (t16 != (*(int *)(((int)stk + 44)))) {
                                                            t9257 = *(int *)(((int)stk + 28));
                                                            t9258 = ((~(((~(t9257 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t9257 - 33) >= 0) {
                                                                t9258 = ((t9257 - 33) & 0x7);
                                                            }
                                                            if (t16 == (t9258 + 0x31)) {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t9261 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t9261 >= 0) {
                                                                        t9267 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t9267 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9267 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                t9276 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9276 >= 0) {
                                                                    t9282 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9282 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9282 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t9291 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9291 >= 0) {
                                                                    t9297 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9297 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9297 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        }
                                                        if ((int)t16 < (int)0x21) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t9313 = *(short *)((a4 + 0xB04));
                                                            t9314 = (unsigned short)((t22 - t9313) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t9313) + 0x1000) < 0) {
                                                                t9314 = ((unsigned short)((t22 - t9313) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9314 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            if ((int)t16 > (int)0x28) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t9319 = *(short *)((a4 + 0xB04));
                                                                t9320 = (unsigned short)((t22 - t9319) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t9319) + 0x1000) < 0) {
                                                                    t9320 = ((unsigned short)((t22 - t9319) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9320 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                t9323 = *(int *)(((int)stk + 28));
                                                                t9324 = (t9323 - t16);
                                                                if ((int)(t16 - t9323) >= 0) {
                                                                    t9324 = (t16 - t9323);
                                                                }
                                                                if (t9324 != 1) {
                                                                    if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                        t9330 = (t16 - (*(int *)(((int)stk + 28))));
                                                                    } else {
                                                                        t9330 = ((*(int *)(((int)stk + 28))) - t16);
                                                                    }
                                                                    if (t9330 == 7) {
                                                                        t9333 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9333 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9336 = angDiff(t22, (((((t9333 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t9336 >= 0) {
                                                                            t9337 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9337 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9346 = (short)(angDiff(t22, (((((t9337 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t9341 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9341 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9346 = (-(short)(angDiff(t22, (((((t9341 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t9346 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t9347 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t9347;
                                                                            t9348 = t9347;
                                                                            t9349 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9349 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9349 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9348);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t9354 = *(short *)((a4 + 0xB04));
                                                                            t9355 = (unsigned short)((t22 - t9354) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t9354) + 0x1000) < 0) {
                                                                                t9355 = ((unsigned short)((t22 - t9354) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9355 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t9364 = *(short *)((a4 + 0xB04));
                                                                        t9365 = (unsigned short)((t22 - t9364) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t9364) + 0x1000) < 0) {
                                                                            t9365 = ((unsigned short)((t22 - t9364) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9365 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    t9375 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9375 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9378 = angDiff(t22, (((((t9375 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t9378 >= 0) {
                                                                        t9379 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9379 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9388 = (short)(angDiff(t22, (((((t9379 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t9383 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9383 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9388 = (-(short)(angDiff(t22, (((((t9383 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t9388 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t9389 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t9389;
                                                                        t9390 = t9389;
                                                                        t9391 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9391 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9391 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9390);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t9396 = *(short *)((a4 + 0xB04));
                                                                        t9397 = (unsigned short)((t22 - t9396) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t9396) + 0x1000) < 0) {
                                                                            t9397 = ((unsigned short)((t22 - t9396) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9397 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        t9428 = 0x5;
                                                    }
                                                    t9434 = t9428;
                                                }
                                                t9440 = t9434;
                                            }
                                            t9844 = t9440;
                                        } else {
                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                    t9449 = (*(short *)(((int)stk + 32)));
                                                } else {
                                                    t9449 = (-(*(short *)(((int)stk + 32))));
                                                }
                                                if ((int)(unsigned short)t9449 <= (int)0x6000) {
                                                    if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                        }
                                                        t9457 = *(short *)((a4 + 0xB04));
                                                        t9458 = (unsigned short)((t22 - t9457) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t9457) + 0x1000) < 0) {
                                                            t9458 = ((unsigned short)((t22 - t9457) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9458 >> 13) << 8) << 2) << 2) << 1));
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                        t9634 = 0xFFFFFFFF;
                                                    } else {
                                                        if (t16 != (*(int *)(((int)stk + 44)))) {
                                                            t9463 = *(int *)(((int)stk + 28));
                                                            t9464 = ((~(((~(t9463 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t9463 - 33) >= 0) {
                                                                t9464 = ((t9463 - 33) & 0x7);
                                                            }
                                                            if (t16 == (t9464 + 0x31)) {
                                                                if (t17 == -99) {
                                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                                } else {
                                                                    t9467 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                    if ((int)(short)t9467 >= 0) {
                                                                        t9473 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                    } else {
                                                                        t9473 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                    }
                                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9473 / 4800.0f) + 5.0f);
                                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                                }
                                                            } else {
                                                                t9482 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9482 >= 0) {
                                                                    t9488 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9488 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9488 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t9497 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9497 >= 0) {
                                                                    t9503 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9503 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9503 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        }
                                                        if ((int)t16 < (int)0x21) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t9519 = *(short *)((a4 + 0xB04));
                                                            t9520 = (unsigned short)((t22 - t9519) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t9519) + 0x1000) < 0) {
                                                                t9520 = ((unsigned short)((t22 - t9519) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9520 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            if ((int)t16 > (int)0x28) {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t9525 = *(short *)((a4 + 0xB04));
                                                                t9526 = (unsigned short)((t22 - t9525) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t9525) + 0x1000) < 0) {
                                                                    t9526 = ((unsigned short)((t22 - t9525) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9526 >> 13) << 8) << 2) << 2) << 1));
                                                            } else {
                                                                t9529 = *(int *)(((int)stk + 28));
                                                                t9530 = (t9529 - t16);
                                                                if ((int)(t16 - t9529) >= 0) {
                                                                    t9530 = (t16 - t9529);
                                                                }
                                                                if (t9530 != 1) {
                                                                    if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                        t9536 = (t16 - (*(int *)(((int)stk + 28))));
                                                                    } else {
                                                                        t9536 = ((*(int *)(((int)stk + 28))) - t16);
                                                                    }
                                                                    if (t9536 == 7) {
                                                                        t9539 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9539 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9542 = angDiff(t22, (((((t9539 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                        if ((int)(short)t9542 >= 0) {
                                                                            t9543 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9543 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9552 = (short)(angDiff(t22, (((((t9543 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                        } else {
                                                                            t9547 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9547 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            t9552 = (-(short)(angDiff(t22, (((((t9547 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                        }
                                                                        if ((int)t9552 < (int)0x1800) {
                                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                            t9553 = *(short *)((a4 + 0xB04));
                                                                            *(unsigned short *)(((int)stk + 28)) = t9553;
                                                                            t9554 = t9553;
                                                                            t9555 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                            if ((int)(t16 - 33) >= 0) {
                                                                                t9555 = ((t16 - 33) & 0x7);
                                                                            }
                                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9555 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9554);
                                                                        } else {
                                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                            t9560 = *(short *)((a4 + 0xB04));
                                                                            t9561 = (unsigned short)((t22 - t9560) + 0x1000);
                                                                            if ((int)(unsigned short)((t22 - t9560) + 0x1000) < 0) {
                                                                                t9561 = ((unsigned short)((t22 - t9560) + 0x1000) + 0x1FFF);
                                                                            }
                                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9561 >> 13) << 8) << 2) << 2) << 1));
                                                                        }
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t9570 = *(short *)((a4 + 0xB04));
                                                                        t9571 = (unsigned short)((t22 - t9570) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t9570) + 0x1000) < 0) {
                                                                            t9571 = ((unsigned short)((t22 - t9570) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9571 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    t9581 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9581 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9584 = angDiff(t22, (((((t9581 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t9584 >= 0) {
                                                                        t9585 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9585 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9594 = (short)(angDiff(t22, (((((t9585 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t9589 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9589 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9594 = (-(short)(angDiff(t22, (((((t9589 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t9594 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t9595 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t9595;
                                                                        t9596 = t9595;
                                                                        t9597 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9597 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9597 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9596);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t9602 = *(short *)((a4 + 0xB04));
                                                                        t9603 = (unsigned short)((t22 - t9602) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t9602) + 0x1000) < 0) {
                                                                            t9603 = ((unsigned short)((t22 - t9602) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9603 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                        t9634 = 0x5;
                                                    }
                                                    t9645 = t9634;
                                                } else {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                    }
                                                    t9639 = *(short *)((a4 + 0xB04));
                                                    t9640 = (unsigned short)((t22 - t9639) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t9639) + 0x1000) < 0) {
                                                        t9640 = ((unsigned short)((t22 - t9639) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9640 >> 13) << 8) << 2) << 2) << 1));
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    t9645 = 0xFFFFFFFF;
                                                }
                                                t9838 = t9645;
                                            } else {
                                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                    }
                                                    t9655 = *(short *)((a4 + 0xB04));
                                                    t9656 = (unsigned short)((t22 - t9655) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t9655) + 0x1000) < 0) {
                                                        t9656 = ((unsigned short)((t22 - t9655) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9656 >> 13) << 8) << 2) << 2) << 1));
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    t9832 = 0xFFFFFFFF;
                                                } else {
                                                    if (t16 != (*(int *)(((int)stk + 44)))) {
                                                        t9661 = *(int *)(((int)stk + 28));
                                                        t9662 = ((~(((~(t9661 - 33)) + 0x1) & 0x7)) + 0x1);
                                                        if ((int)(t9661 - 33) >= 0) {
                                                            t9662 = ((t9661 - 33) & 0x7);
                                                        }
                                                        if (t16 == (t9662 + 0x31)) {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t9665 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9665 >= 0) {
                                                                    t9671 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9671 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9671 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            t9680 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t9680 >= 0) {
                                                                t9686 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t9686 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9686 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    } else {
                                                        if (t17 == -99) {
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                        } else {
                                                            t9695 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t9695 >= 0) {
                                                                t9701 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t9701 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9701 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    }
                                                    if ((int)t16 < (int)0x21) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                        t9717 = *(short *)((a4 + 0xB04));
                                                        t9718 = (unsigned short)((t22 - t9717) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t9717) + 0x1000) < 0) {
                                                            t9718 = ((unsigned short)((t22 - t9717) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9718 >> 13) << 8) << 2) << 2) << 1));
                                                    } else {
                                                        if ((int)t16 > (int)0x28) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t9723 = *(short *)((a4 + 0xB04));
                                                            t9724 = (unsigned short)((t22 - t9723) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t9723) + 0x1000) < 0) {
                                                                t9724 = ((unsigned short)((t22 - t9723) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9724 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            t9727 = *(int *)(((int)stk + 28));
                                                            t9728 = (t9727 - t16);
                                                            if ((int)(t16 - t9727) >= 0) {
                                                                t9728 = (t16 - t9727);
                                                            }
                                                            if (t9728 != 1) {
                                                                if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                    t9734 = (t16 - (*(int *)(((int)stk + 28))));
                                                                } else {
                                                                    t9734 = ((*(int *)(((int)stk + 28))) - t16);
                                                                }
                                                                if (t9734 == 7) {
                                                                    t9737 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9737 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9740 = angDiff(t22, (((((t9737 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t9740 >= 0) {
                                                                        t9741 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9741 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9750 = (short)(angDiff(t22, (((((t9741 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t9745 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9745 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9750 = (-(short)(angDiff(t22, (((((t9745 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t9750 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t9751 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t9751;
                                                                        t9752 = t9751;
                                                                        t9753 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9753 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9753 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9752);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t9758 = *(short *)((a4 + 0xB04));
                                                                        t9759 = (unsigned short)((t22 - t9758) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t9758) + 0x1000) < 0) {
                                                                            t9759 = ((unsigned short)((t22 - t9758) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9759 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t9768 = *(short *)((a4 + 0xB04));
                                                                    t9769 = (unsigned short)((t22 - t9768) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t9768) + 0x1000) < 0) {
                                                                        t9769 = ((unsigned short)((t22 - t9768) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9769 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            } else {
                                                                t9779 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t9779 = ((t16 - 33) & 0x7);
                                                                }
                                                                t9782 = angDiff(t22, (((((t9779 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                if ((int)(short)t9782 >= 0) {
                                                                    t9783 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9783 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9792 = (short)(angDiff(t22, (((((t9783 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                } else {
                                                                    t9787 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9787 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9792 = (-(short)(angDiff(t22, (((((t9787 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                }
                                                                if ((int)t9792 < (int)0x1800) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    t9793 = *(short *)((a4 + 0xB04));
                                                                    *(unsigned short *)(((int)stk + 28)) = t9793;
                                                                    t9794 = t9793;
                                                                    t9795 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9795 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t9795 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t9794);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t9800 = *(short *)((a4 + 0xB04));
                                                                    t9801 = (unsigned short)((t22 - t9800) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t9800) + 0x1000) < 0) {
                                                                        t9801 = ((unsigned short)((t22 - t9800) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9801 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                    t9832 = 0x5;
                                                }
                                                t9838 = t9832;
                                            }
                                            t9844 = t9838;
                                        }
                                        t9850 = t9844;
                                    }
                                    t9856 = t9850;
                                }
                                t9867 = t9856;
                            } else {
                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 44)));
                                t9861 = *(short *)((a4 + 0xB04));
                                t9862 = (unsigned short)((t22 - t9861) + 0x1000);
                                if ((int)(unsigned short)((t22 - t9861) + 0x1000) < 0) {
                                    t9862 = ((unsigned short)((t22 - t9861) + 0x1000) + 0x1FFF);
                                }
                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9862 >> 13) << 8) << 2) << 2) << 1));
                                *(unsigned int *)((a4 + 0xBCC)) = 0x5;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                t9867 = 0x5;
                            }
                            t10707 = t9867;
                        } else {
                            t9871 = *(int *)(((int)stk + 28));
                            *(unsigned int *)(((int)stk + 36)) = (t9871 + 0x10);
                            if ((t16 == (t9871 + 0x10)) && (t17 != -99)) {
                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                t9875 = *(short *)((a4 + 0xB04));
                                t9876 = (unsigned short)((t22 - t9875) + 0x1000);
                                if ((int)(unsigned short)((t22 - t9875) + 0x1000) < 0) {
                                    t9876 = ((unsigned short)((t22 - t9875) + 0x1000) + 0x1FFF);
                                }
                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9876 >> 13) << 8) << 2) << 2) << 1));
                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                t10701 = 0x5;
                            } else {
                                if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                    t9883 = (*(short *)(((int)stk + 32)));
                                } else {
                                    t9883 = (-(*(short *)(((int)stk + 32))));
                                }
                                if ((int)(unsigned short)t9883 > (int)0x6000) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xCF4 + a4)); }
                                    t9885 = vecLength(*(Stk3 *)(((int)stk + 16)));
                                    if (t9885 > 0.75f) {
                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 36)));
                                        t9887 = *(short *)((a4 + 0xB04));
                                        t9888 = (unsigned short)((t22 - t9887) + 0x1000);
                                        if ((int)(unsigned short)((t22 - t9887) + 0x1000) < 0) {
                                            t9888 = ((unsigned short)((t22 - t9887) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9888 >> 13) << 8) << 2) << 2) << 1));
                                        *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                        *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                        t10291 = 0x5;
                                    } else {
                                        if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                            if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                                t9896 = (*(short *)(((int)stk + 32)));
                                            } else {
                                                t9896 = (-(*(short *)(((int)stk + 32))));
                                            }
                                            if ((int)(unsigned short)t9896 <= (int)0x6000) {
                                                if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                    } else {
                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                    }
                                                    t9904 = *(short *)((a4 + 0xB04));
                                                    t9905 = (unsigned short)((t22 - t9904) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t9904) + 0x1000) < 0) {
                                                        t9905 = ((unsigned short)((t22 - t9904) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9905 >> 13) << 8) << 2) << 2) << 1));
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                    t10081 = 0xFFFFFFFF;
                                                } else {
                                                    if (t16 != (*(int *)(((int)stk + 44)))) {
                                                        t9910 = *(int *)(((int)stk + 28));
                                                        t9911 = ((~(((~(t9910 - 33)) + 0x1) & 0x7)) + 0x1);
                                                        if ((int)(t9910 - 33) >= 0) {
                                                            t9911 = ((t9910 - 33) & 0x7);
                                                        }
                                                        if (t16 == (t9911 + 0x31)) {
                                                            if (t17 == -99) {
                                                                *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                            } else {
                                                                t9914 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                                if ((int)(short)t9914 >= 0) {
                                                                    t9920 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                                } else {
                                                                    t9920 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                                }
                                                                *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9920 / 4800.0f) + 5.0f);
                                                                *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                            }
                                                        } else {
                                                            t9929 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t9929 >= 0) {
                                                                t9935 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t9935 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9935 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    } else {
                                                        if (t17 == -99) {
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                        } else {
                                                            t9944 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t9944 >= 0) {
                                                                t9950 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t9950 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t9950 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    }
                                                    if ((int)t16 < (int)0x21) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                        t9966 = *(short *)((a4 + 0xB04));
                                                        t9967 = (unsigned short)((t22 - t9966) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t9966) + 0x1000) < 0) {
                                                            t9967 = ((unsigned short)((t22 - t9966) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9967 >> 13) << 8) << 2) << 2) << 1));
                                                    } else {
                                                        if ((int)t16 > (int)0x28) {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t9972 = *(short *)((a4 + 0xB04));
                                                            t9973 = (unsigned short)((t22 - t9972) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t9972) + 0x1000) < 0) {
                                                                t9973 = ((unsigned short)((t22 - t9972) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t9973 >> 13) << 8) << 2) << 2) << 1));
                                                        } else {
                                                            t9976 = *(int *)(((int)stk + 28));
                                                            t9977 = (t9976 - t16);
                                                            if ((int)(t16 - t9976) >= 0) {
                                                                t9977 = (t16 - t9976);
                                                            }
                                                            if (t9977 != 1) {
                                                                if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                    t9983 = (t16 - (*(int *)(((int)stk + 28))));
                                                                } else {
                                                                    t9983 = ((*(int *)(((int)stk + 28))) - t16);
                                                                }
                                                                if (t9983 == 7) {
                                                                    t9986 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t9986 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t9989 = angDiff(t22, (((((t9986 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                    if ((int)(short)t9989 >= 0) {
                                                                        t9990 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9990 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9999 = (short)(angDiff(t22, (((((t9990 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                    } else {
                                                                        t9994 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t9994 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        t9999 = (-(short)(angDiff(t22, (((((t9994 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                    }
                                                                    if ((int)t9999 < (int)0x1800) {
                                                                        *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                        t10000 = *(short *)((a4 + 0xB04));
                                                                        *(unsigned short *)(((int)stk + 28)) = t10000;
                                                                        t10001 = t10000;
                                                                        t10002 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                        if ((int)(t16 - 33) >= 0) {
                                                                            t10002 = ((t16 - 33) & 0x7);
                                                                        }
                                                                        *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10002 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10001);
                                                                    } else {
                                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                        t10007 = *(short *)((a4 + 0xB04));
                                                                        t10008 = (unsigned short)((t22 - t10007) + 0x1000);
                                                                        if ((int)(unsigned short)((t22 - t10007) + 0x1000) < 0) {
                                                                            t10008 = ((unsigned short)((t22 - t10007) + 0x1000) + 0x1FFF);
                                                                        }
                                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10008 >> 13) << 8) << 2) << 2) << 1));
                                                                    }
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t10017 = *(short *)((a4 + 0xB04));
                                                                    t10018 = (unsigned short)((t22 - t10017) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t10017) + 0x1000) < 0) {
                                                                        t10018 = ((unsigned short)((t22 - t10017) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10018 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            } else {
                                                                t10028 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10028 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10031 = angDiff(t22, (((((t10028 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                if ((int)(short)t10031 >= 0) {
                                                                    t10032 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10032 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10041 = (short)(angDiff(t22, (((((t10032 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                } else {
                                                                    t10036 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10036 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10041 = (-(short)(angDiff(t22, (((((t10036 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                }
                                                                if ((int)t10041 < (int)0x1800) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    t10042 = *(short *)((a4 + 0xB04));
                                                                    *(unsigned short *)(((int)stk + 28)) = t10042;
                                                                    t10043 = t10042;
                                                                    t10044 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10044 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10044 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10043);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t10049 = *(short *)((a4 + 0xB04));
                                                                    t10050 = (unsigned short)((t22 - t10049) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t10049) + 0x1000) < 0) {
                                                                        t10050 = ((unsigned short)((t22 - t10049) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10050 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            }
                                                        }
                                                    }
                                                    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                    t10081 = 0x5;
                                                }
                                                t10092 = t10081;
                                            } else {
                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                }
                                                t10086 = *(short *)((a4 + 0xB04));
                                                t10087 = (unsigned short)((t22 - t10086) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t10086) + 0x1000) < 0) {
                                                    t10087 = ((unsigned short)((t22 - t10086) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10087 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t10092 = 0xFFFFFFFF;
                                            }
                                            t10285 = t10092;
                                        } else {
                                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                }
                                                t10102 = *(short *)((a4 + 0xB04));
                                                t10103 = (unsigned short)((t22 - t10102) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t10102) + 0x1000) < 0) {
                                                    t10103 = ((unsigned short)((t22 - t10102) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10103 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t10279 = 0xFFFFFFFF;
                                            } else {
                                                if (t16 != (*(int *)(((int)stk + 44)))) {
                                                    t10108 = *(int *)(((int)stk + 28));
                                                    t10109 = ((~(((~(t10108 - 33)) + 0x1) & 0x7)) + 0x1);
                                                    if ((int)(t10108 - 33) >= 0) {
                                                        t10109 = ((t10108 - 33) & 0x7);
                                                    }
                                                    if (t16 == (t10109 + 0x31)) {
                                                        if (t17 == -99) {
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                        } else {
                                                            t10112 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t10112 >= 0) {
                                                                t10118 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t10118 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10118 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    } else {
                                                        t10127 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t10127 >= 0) {
                                                            t10133 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t10133 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10133 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    }
                                                } else {
                                                    if (t17 == -99) {
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                    } else {
                                                        t10142 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t10142 >= 0) {
                                                            t10148 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t10148 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10148 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    }
                                                }
                                                if ((int)t16 < (int)0x21) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                    t10164 = *(short *)((a4 + 0xB04));
                                                    t10165 = (unsigned short)((t22 - t10164) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t10164) + 0x1000) < 0) {
                                                        t10165 = ((unsigned short)((t22 - t10164) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10165 >> 13) << 8) << 2) << 2) << 1));
                                                } else {
                                                    if ((int)t16 > (int)0x28) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                        t10170 = *(short *)((a4 + 0xB04));
                                                        t10171 = (unsigned short)((t22 - t10170) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t10170) + 0x1000) < 0) {
                                                            t10171 = ((unsigned short)((t22 - t10170) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10171 >> 13) << 8) << 2) << 2) << 1));
                                                    } else {
                                                        t10174 = *(int *)(((int)stk + 28));
                                                        t10175 = (t10174 - t16);
                                                        if ((int)(t16 - t10174) >= 0) {
                                                            t10175 = (t16 - t10174);
                                                        }
                                                        if (t10175 != 1) {
                                                            if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                t10181 = (t16 - (*(int *)(((int)stk + 28))));
                                                            } else {
                                                                t10181 = ((*(int *)(((int)stk + 28))) - t16);
                                                            }
                                                            if (t10181 == 7) {
                                                                t10184 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10184 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10187 = angDiff(t22, (((((t10184 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                if ((int)(short)t10187 >= 0) {
                                                                    t10188 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10188 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10197 = (short)(angDiff(t22, (((((t10188 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                } else {
                                                                    t10192 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10192 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10197 = (-(short)(angDiff(t22, (((((t10192 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                }
                                                                if ((int)t10197 < (int)0x1800) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    t10198 = *(short *)((a4 + 0xB04));
                                                                    *(unsigned short *)(((int)stk + 28)) = t10198;
                                                                    t10199 = t10198;
                                                                    t10200 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10200 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10200 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10199);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t10205 = *(short *)((a4 + 0xB04));
                                                                    t10206 = (unsigned short)((t22 - t10205) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t10205) + 0x1000) < 0) {
                                                                        t10206 = ((unsigned short)((t22 - t10205) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10206 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t10215 = *(short *)((a4 + 0xB04));
                                                                t10216 = (unsigned short)((t22 - t10215) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t10215) + 0x1000) < 0) {
                                                                    t10216 = ((unsigned short)((t22 - t10215) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10216 >> 13) << 8) << 2) << 2) << 1));
                                                            }
                                                        } else {
                                                            t10226 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10226 = ((t16 - 33) & 0x7);
                                                            }
                                                            t10229 = angDiff(t22, (((((t10226 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                            if ((int)(short)t10229 >= 0) {
                                                                t10230 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10230 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10239 = (short)(angDiff(t22, (((((t10230 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                            } else {
                                                                t10234 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10234 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10239 = (-(short)(angDiff(t22, (((((t10234 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                            }
                                                            if ((int)t10239 < (int)0x1800) {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                t10240 = *(short *)((a4 + 0xB04));
                                                                *(unsigned short *)(((int)stk + 28)) = t10240;
                                                                t10241 = t10240;
                                                                t10242 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10242 = ((t16 - 33) & 0x7);
                                                                }
                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10242 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10241);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t10247 = *(short *)((a4 + 0xB04));
                                                                t10248 = (unsigned short)((t22 - t10247) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t10247) + 0x1000) < 0) {
                                                                    t10248 = ((unsigned short)((t22 - t10247) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10248 >> 13) << 8) << 2) << 2) << 1));
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                t10279 = 0x5;
                                            }
                                            t10285 = t10279;
                                        }
                                        t10291 = t10285;
                                    }
                                    t10695 = t10291;
                                } else {
                                    if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                        if ((int)(*(short *)(((int)stk + 32))) >= 0) {
                                            t10300 = (*(short *)(((int)stk + 32)));
                                        } else {
                                            t10300 = (-(*(short *)(((int)stk + 32))));
                                        }
                                        if ((int)(unsigned short)t10300 <= (int)0x6000) {
                                            if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                                if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                                } else {
                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                }
                                                t10308 = *(short *)((a4 + 0xB04));
                                                t10309 = (unsigned short)((t22 - t10308) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t10308) + 0x1000) < 0) {
                                                    t10309 = ((unsigned short)((t22 - t10308) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10309 >> 13) << 8) << 2) << 2) << 1));
                                                *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                                t10485 = 0xFFFFFFFF;
                                            } else {
                                                if (t16 != (*(int *)(((int)stk + 44)))) {
                                                    t10314 = *(int *)(((int)stk + 28));
                                                    t10315 = ((~(((~(t10314 - 33)) + 0x1) & 0x7)) + 0x1);
                                                    if ((int)(t10314 - 33) >= 0) {
                                                        t10315 = ((t10314 - 33) & 0x7);
                                                    }
                                                    if (t16 == (t10315 + 0x31)) {
                                                        if (t17 == -99) {
                                                            *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                        } else {
                                                            t10318 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                            if ((int)(short)t10318 >= 0) {
                                                                t10324 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                            } else {
                                                                t10324 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                            }
                                                            *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10324 / 4800.0f) + 5.0f);
                                                            *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                        }
                                                    } else {
                                                        t10333 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t10333 >= 0) {
                                                            t10339 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t10339 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10339 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    }
                                                } else {
                                                    if (t17 == -99) {
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                    } else {
                                                        t10348 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t10348 >= 0) {
                                                            t10354 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t10354 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10354 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    }
                                                }
                                                if ((int)t16 < (int)0x21) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                    t10370 = *(short *)((a4 + 0xB04));
                                                    t10371 = (unsigned short)((t22 - t10370) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t10370) + 0x1000) < 0) {
                                                        t10371 = ((unsigned short)((t22 - t10370) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10371 >> 13) << 8) << 2) << 2) << 1));
                                                } else {
                                                    if ((int)t16 > (int)0x28) {
                                                        *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                        t10376 = *(short *)((a4 + 0xB04));
                                                        t10377 = (unsigned short)((t22 - t10376) + 0x1000);
                                                        if ((int)(unsigned short)((t22 - t10376) + 0x1000) < 0) {
                                                            t10377 = ((unsigned short)((t22 - t10376) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10377 >> 13) << 8) << 2) << 2) << 1));
                                                    } else {
                                                        t10380 = *(int *)(((int)stk + 28));
                                                        t10381 = (t10380 - t16);
                                                        if ((int)(t16 - t10380) >= 0) {
                                                            t10381 = (t16 - t10380);
                                                        }
                                                        if (t10381 != 1) {
                                                            if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                                t10387 = (t16 - (*(int *)(((int)stk + 28))));
                                                            } else {
                                                                t10387 = ((*(int *)(((int)stk + 28))) - t16);
                                                            }
                                                            if (t10387 == 7) {
                                                                t10390 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10390 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10393 = angDiff(t22, (((((t10390 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                                if ((int)(short)t10393 >= 0) {
                                                                    t10394 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10394 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10403 = (short)(angDiff(t22, (((((t10394 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                                } else {
                                                                    t10398 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10398 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    t10403 = (-(short)(angDiff(t22, (((((t10398 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                                }
                                                                if ((int)t10403 < (int)0x1800) {
                                                                    *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                    t10404 = *(short *)((a4 + 0xB04));
                                                                    *(unsigned short *)(((int)stk + 28)) = t10404;
                                                                    t10405 = t10404;
                                                                    t10406 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                    if ((int)(t16 - 33) >= 0) {
                                                                        t10406 = ((t16 - 33) & 0x7);
                                                                    }
                                                                    *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10406 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10405);
                                                                } else {
                                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                    t10411 = *(short *)((a4 + 0xB04));
                                                                    t10412 = (unsigned short)((t22 - t10411) + 0x1000);
                                                                    if ((int)(unsigned short)((t22 - t10411) + 0x1000) < 0) {
                                                                        t10412 = ((unsigned short)((t22 - t10411) + 0x1000) + 0x1FFF);
                                                                    }
                                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10412 >> 13) << 8) << 2) << 2) << 1));
                                                                }
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t10421 = *(short *)((a4 + 0xB04));
                                                                t10422 = (unsigned short)((t22 - t10421) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t10421) + 0x1000) < 0) {
                                                                    t10422 = ((unsigned short)((t22 - t10421) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10422 >> 13) << 8) << 2) << 2) << 1));
                                                            }
                                                        } else {
                                                            t10432 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10432 = ((t16 - 33) & 0x7);
                                                            }
                                                            t10435 = angDiff(t22, (((((t10432 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                            if ((int)(short)t10435 >= 0) {
                                                                t10436 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10436 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10445 = (short)(angDiff(t22, (((((t10436 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                            } else {
                                                                t10440 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10440 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10445 = (-(short)(angDiff(t22, (((((t10440 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                            }
                                                            if ((int)t10445 < (int)0x1800) {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                t10446 = *(short *)((a4 + 0xB04));
                                                                *(unsigned short *)(((int)stk + 28)) = t10446;
                                                                t10447 = t10446;
                                                                t10448 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10448 = ((t16 - 33) & 0x7);
                                                                }
                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10448 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10447);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t10453 = *(short *)((a4 + 0xB04));
                                                                t10454 = (unsigned short)((t22 - t10453) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t10453) + 0x1000) < 0) {
                                                                    t10454 = ((unsigned short)((t22 - t10453) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10454 >> 13) << 8) << 2) << 2) << 1));
                                                            }
                                                        }
                                                    }
                                                }
                                                *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                                t10485 = 0x5;
                                            }
                                            t10496 = t10485;
                                        } else {
                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                            } else {
                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                            }
                                            t10490 = *(short *)((a4 + 0xB04));
                                            t10491 = (unsigned short)((t22 - t10490) + 0x1000);
                                            if ((int)(unsigned short)((t22 - t10490) + 0x1000) < 0) {
                                                t10491 = ((unsigned short)((t22 - t10490) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10491 >> 13) << 8) << 2) << 2) << 1));
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            t10496 = 0xFFFFFFFF;
                                        }
                                        t10689 = t10496;
                                    } else {
                                        if (((int)t16 >= (int)0x29) && (((int)t16 <= (int)0x30) && (t17 != -99))) {
                                            if (((int)t16 >= (int)0x21) && ((int)t16 <= (int)0x28)) {
                                                *(unsigned int *)((a4 + 0xB58)) = (t16 + 0x8);
                                            } else {
                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                            }
                                            t10506 = *(short *)((a4 + 0xB04));
                                            t10507 = (unsigned short)((t22 - t10506) + 0x1000);
                                            if ((int)(unsigned short)((t22 - t10506) + 0x1000) < 0) {
                                                t10507 = ((unsigned short)((t22 - t10506) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10507 >> 13) << 8) << 2) << 2) << 1));
                                            *(unsigned int *)((a4 + 0xBCC)) = 0xA;
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x0;
                                            t10683 = 0xFFFFFFFF;
                                        } else {
                                            if (t16 != (*(int *)(((int)stk + 44)))) {
                                                t10512 = *(int *)(((int)stk + 28));
                                                t10513 = ((~(((~(t10512 - 33)) + 0x1) & 0x7)) + 0x1);
                                                if ((int)(t10512 - 33) >= 0) {
                                                    t10513 = ((t10512 - 33) & 0x7);
                                                }
                                                if (t16 == (t10513 + 0x31)) {
                                                    if (t17 == -99) {
                                                        *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                    } else {
                                                        t10516 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                        if ((int)(short)t10516 >= 0) {
                                                            t10522 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                        } else {
                                                            t10522 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                        }
                                                        *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10522 / 4800.0f) + 5.0f);
                                                        *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                    }
                                                } else {
                                                    t10531 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                    if ((int)(short)t10531 >= 0) {
                                                        t10537 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                    } else {
                                                        t10537 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                    }
                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10537 / 4800.0f) + 5.0f);
                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                }
                                            } else {
                                                if (t17 == -99) {
                                                    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
                                                } else {
                                                    t10546 = angDiff((*(short *)((a4 + 0xB0C))), t22);
                                                    if ((int)(short)t10546 >= 0) {
                                                        t10552 = (short)(angDiff((*(short *)((a4 + 0xB0C))), t22));
                                                    } else {
                                                        t10552 = (-(short)(angDiff((*(short *)((a4 + 0xB0C))), t22)));
                                                    }
                                                    *(unsigned int *)((a4 + 0xBCC)) = (int)(((float)t10552 / 4800.0f) + 5.0f);
                                                    *(unsigned int *)(((int)stk + 64)) = 0x1;
                                                }
                                            }
                                            if ((int)t16 < (int)0x21) {
                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                t10568 = *(short *)((a4 + 0xB04));
                                                t10569 = (unsigned short)((t22 - t10568) + 0x1000);
                                                if ((int)(unsigned short)((t22 - t10568) + 0x1000) < 0) {
                                                    t10569 = ((unsigned short)((t22 - t10568) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10569 >> 13) << 8) << 2) << 2) << 1));
                                            } else {
                                                if ((int)t16 > (int)0x28) {
                                                    *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                    t10574 = *(short *)((a4 + 0xB04));
                                                    t10575 = (unsigned short)((t22 - t10574) + 0x1000);
                                                    if ((int)(unsigned short)((t22 - t10574) + 0x1000) < 0) {
                                                        t10575 = ((unsigned short)((t22 - t10574) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10575 >> 13) << 8) << 2) << 2) << 1));
                                                } else {
                                                    t10578 = *(int *)(((int)stk + 28));
                                                    t10579 = (t10578 - t16);
                                                    if ((int)(t16 - t10578) >= 0) {
                                                        t10579 = (t16 - t10578);
                                                    }
                                                    if (t10579 != 1) {
                                                        if ((int)(t16 - (*(int *)(((int)stk + 28)))) >= 0) {
                                                            t10585 = (t16 - (*(int *)(((int)stk + 28))));
                                                        } else {
                                                            t10585 = ((*(int *)(((int)stk + 28))) - t16);
                                                        }
                                                        if (t10585 == 7) {
                                                            t10588 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10588 = ((t16 - 33) & 0x7);
                                                            }
                                                            t10591 = angDiff(t22, (((((t10588 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                            if ((int)(short)t10591 >= 0) {
                                                                t10592 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10592 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10601 = (short)(angDiff(t22, (((((t10592 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                            } else {
                                                                t10596 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10596 = ((t16 - 33) & 0x7);
                                                                }
                                                                t10601 = (-(short)(angDiff(t22, (((((t10596 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                            }
                                                            if ((int)t10601 < (int)0x1800) {
                                                                *(unsigned int *)((a4 + 0xB58)) = t16;
                                                                t10602 = *(short *)((a4 + 0xB04));
                                                                *(unsigned short *)(((int)stk + 28)) = t10602;
                                                                t10603 = t10602;
                                                                t10604 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                                if ((int)(t16 - 33) >= 0) {
                                                                    t10604 = ((t16 - 33) & 0x7);
                                                                }
                                                                *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10604 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10603);
                                                            } else {
                                                                *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                                t10609 = *(short *)((a4 + 0xB04));
                                                                t10610 = (unsigned short)((t22 - t10609) + 0x1000);
                                                                if ((int)(unsigned short)((t22 - t10609) + 0x1000) < 0) {
                                                                    t10610 = ((unsigned short)((t22 - t10609) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10610 >> 13) << 8) << 2) << 2) << 1));
                                                            }
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t10619 = *(short *)((a4 + 0xB04));
                                                            t10620 = (unsigned short)((t22 - t10619) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t10619) + 0x1000) < 0) {
                                                                t10620 = ((unsigned short)((t22 - t10619) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10620 >> 13) << 8) << 2) << 2) << 1));
                                                        }
                                                    } else {
                                                        t10630 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                        if ((int)(t16 - 33) >= 0) {
                                                            t10630 = ((t16 - 33) & 0x7);
                                                        }
                                                        t10633 = angDiff(t22, (((((t10630 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))));
                                                        if ((int)(short)t10633 >= 0) {
                                                            t10634 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10634 = ((t16 - 33) & 0x7);
                                                            }
                                                            t10643 = (short)(angDiff(t22, (((((t10634 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04))))));
                                                        } else {
                                                            t10638 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10638 = ((t16 - 33) & 0x7);
                                                            }
                                                            t10643 = (-(short)(angDiff(t22, (((((t10638 << 8) << 2) << 2) << 1) - (*(short *)((a4 + 0xB04)))))));
                                                        }
                                                        if ((int)t10643 < (int)0x1800) {
                                                            *(unsigned int *)((a4 + 0xB58)) = t16;
                                                            t10644 = *(short *)((a4 + 0xB04));
                                                            *(unsigned short *)(((int)stk + 28)) = t10644;
                                                            t10645 = t10644;
                                                            t10646 = ((~(((~(t16 - 33)) + 0x1) & 0x7)) + 0x1);
                                                            if ((int)(t16 - 33) >= 0) {
                                                                t10646 = ((t16 - 33) & 0x7);
                                                            }
                                                            *(unsigned short *)(((0xB0E + a4) + 0x0)) = ((angDiff(t22, (((((t10646 << 8) << 2) << 2) << 1) - (*(short *)(((int)stk + 28)))))) + t10645);
                                                        } else {
                                                            *(unsigned int *)((a4 + 0xB58)) = (*(int *)(((int)stk + 28)));
                                                            t10651 = *(short *)((a4 + 0xB04));
                                                            t10652 = (unsigned short)((t22 - t10651) + 0x1000);
                                                            if ((int)(unsigned short)((t22 - t10651) + 0x1000) < 0) {
                                                                t10652 = ((unsigned short)((t22 - t10651) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned short *)((a4 + 0xB0E)) = (t22 - ((((((int)t10652 >> 13) << 8) << 2) << 2) << 1));
                                                        }
                                                    }
                                                }
                                            }
                                            *(unsigned int *)((a4 + 0xBD8)) = 0x1;
                                            t10683 = 0x5;
                                        }
                                        t10689 = t10683;
                                    }
                                    t10695 = t10689;
                                }
                                t10701 = t10695;
                            }
                            t10707 = t10701;
                        }
                        t10713 = t10707;
                    }
                    *(unsigned int *)(((int)stk + 44)) = t10713;
                }
                u10739 = u10726;
            }
            if ((*(int *)0x8C287C60) == 0) {
                *(unsigned short *)(((0xB06 + a4) + 0x0)) = (angLerp((*(short *)((a4 + 0xB06))), (*(short *)((a4 + 0xB0E))), ((*(float *)0x8C23D204) * 0.100000001f)));
            } else {
                u10755 = u10739;
            }
            t10757 = ((int (*)(int, int, int, int, int, float))(playerPivotTurn))(a4, 0x1, 0x0, 0x0, ((int)stk + 16), u10755);
        }
        if (((*(int *)((a4 + 0xB58))) == t16) && (t10769 = *(int *)((a4 + 0xCF0)), t10769 == 0)) {
        } else {
            if ((*(short *)((a4 + 0xD4A))) != (*(short *)((a4 + 0xD46)))) {
                *(unsigned int *)(((int)stk + 44)) = 0x0;
            }
            *(unsigned int *)((a4 + 0xBD4)) = (int)((float)(*(int *)(((int)stk + 44))) / (*(float *)0x8C23D204));
            if ((int)(*(int *)((a4 + 0xBD0))) > 0) {
                *(unsigned int *)((a4 + 0xBCC)) = ((*(int *)((a4 + 0xBCC))) + (*(int *)(((0xBD0 + a4) + 0x0))));
                *(unsigned int *)((a4 + 0xBD4)) = ((*(int *)((a4 + 0xBD4))) + (*(int *)(((0xBD0 + a4) + 0x0))));
            }
            *(unsigned int *)((a4 + 0xCF0)) = 0x0;
        }
        *(float *)((a4 + 0xC94)) = 1.0f;
        if (((*(int *)(((int)stk + 64))) == 1) && (t10794 = *(int *)((a4 + 0xB58)), t16 != t10794)) {
            *(float *)((a4 + 0xC94)) = ((*(float *)((a4 + 0xC))) / (float)(*(int *)((a4 + 0x30))));
        }
        t10802 = *(int *)(((int)stk + 64));
        t10804 = t10802;
        if (t10802 == 2) {
            *(float *)((a4 + 0xC94)) = ((*(float *)((a4 + 0xC))) / 40.0f);
            t10804 = 0xC94;
        }
        t10808 = t10804;
    }
    return t10808;
}

int matchStart(void)
{
    int t23;
    int t31;
    int t36;
    int t59;
    int t66;
    int t71;
    int t85;
    int stk[14];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F3;
    float F4;
    float F5;
    float F14;
    float F15;
    int T_;
    L_8C018714:;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)0x8C1389F8 = 0x0;
    matchSetupPlayers();
    camInit();
    camMoveBegin(1.0f, 1.0f);
    *(unsigned int *)0x8C287B44 = 0x7;
    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
    *(unsigned int *)0x8C287B48 = 0xFFFFFFFF;
    *(unsigned int *)0x8C287B4C = 0xF0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C287B54) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C287B60) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)0x8C287B6C = 0x0;
    *(float *)0x8C287B70 = 16.0f;
    *(unsigned int *)0x8C287B50 = 0x78;
    *(unsigned int *)0x8C287B74 = 0x0;
    *(unsigned int *)0x8C287B78 = 0x1;
    *(float *)0x8C287B7C = 0.0f;
    *(unsigned int *)0x8C287B80 = 0x0;
    *(unsigned int *)0x8C287AF8 = (serveGetReceiver());
    *(unsigned int *)0x8C287AFC = 0xFFFFFFFF;
    *(unsigned int *)0x8C287AF0 = 0x0;
    *(unsigned int *)0x8C287AF4 = 0x0;
    playerCalcMotionSpeeds();
    R10 = (0xFFFFFFFF);
    R11 = (0x8C287D84);
    R12 = (0x8C287ACC);
    R13 = (0xD78);
    R14 = (0x0);
    R4 = (0x8C287C34);
    R5 = (0x8C287C3C);
    R8 = (0x8C287ACC);
    R9 = (0x8C287D5C);
    F15 = (0.0f);
    goto L_8C018826;
    L_8C018826:;
    if (((unsigned int)R4 < (unsigned int)R5)) goto L_8C018820;
    goto L_8C01882A;
    L_8C01882A:;
    *(unsigned int *)0x8C287C1C = R10;
    *(unsigned int *)0x8C287C20 = R14;
    *(unsigned int *)0x8C287C24 = R14;
    if (((*(int *)((R9 + 0x0))) != 3)) goto L_8C018842;
    goto L_8C01883C;
    L_8C01883C:;
    miniSetupObjects(R4, R5, R6, R7, F4, F5);
    goto L_8C018842;
    L_8C018842:;
    *(unsigned int *)(((int)stk + 12)) = R11;
    goto L_8C018974;
    L_8C018974:;
    if (((int)R14 >= (int)(*(int *)((R8 + 0x10))))) goto L_8C01897E;
    goto L_8C01897A;
    L_8C01897A:;
    goto L_8C018848;
    L_8C018848:;
    *(unsigned int *)(((0xB64 + ((R14 * R13) + R11)) + 0x0)) = (*(int *)((((R14 * 0x38) + 0x8C343264) + 0x4)));
    t23 = *(int *)(((R12 + 0x14) + (R14 << 2)));
    R0 = (t23);
    R4 = (0x38);
    R7 = (((R14 * 0x38) + 0x8C343264));
    if ((t23 == 0)) goto L_8C018888;
    goto L_8C01887C;
    L_8C01887C:;
    if ((R0 == 2)) goto L_8C018888;
    goto L_8C018880;
    L_8C018880:;
    if ((R0 == 1)) goto L_8C01888C;
    goto L_8C018884;
    L_8C018884:;
    goto L_8C018972;
    L_8C018972:;
    R14 = ((R14 + 0x1));
    goto L_8C018974;
    L_8C01888C:;
    t31 = *(int *)0x8C421F60;
    R4 = (t31);
    if ((t31 != 0)) goto L_8C01889C;
    goto L_8C018894;
    L_8C018894:;
    if (((*(int *)0x8C287D5C) != 1)) goto L_8C0188AC;
    goto L_8C01889C;
    L_8C01889C:;
    t36 = *(int *)((R7 + 0x0));
    *(unsigned int *)((((R14 * R13) + R11) + 0xC58)) = t36;
    R6 = (t36);
    goto L_8C01895E;
    L_8C01895E:;
    *(unsigned int *)(((int)stk + 4)) = ((R14 * R13) + R11);
    playerSetup((*(int *)(((int)stk + 4))), R14, R6, (*(int *)((((R14 * R13) + R11) + 0xB64))));
    goto L_8C018972;
    L_8C0188AC:;
    if (((*(int *)((R9 + 0x0))) == 2)) goto L_8C0188C0;
    goto L_8C0188B2;
    L_8C0188B2:;
    if (((*(int *)((R9 + 0x0))) == 3)) goto L_8C0188C0;
    goto L_8C0188B8;
    L_8C0188B8:;
    R5 = (0x8C287C54);
    if (((*(int *)0x8C287C54) == 0)) goto L_8C0188CC;
    goto L_8C0188C0;
    L_8C0188C0:;
    R6 = ((*(int *)((((R14 * R13) + R11) + 0xC58))));
    goto L_8C01895E;
    L_8C0188CC:;
    if ((R4 == 0)) goto L_8C018920;
    goto L_8C0188D0;
    L_8C0188D0:;
    R6 = ((int)((nlRandom()) * 8.0f));
    if ((R14 != 1)) goto L_8C01895E;
    goto L_8C0188E4;
    L_8C0188E4:;
    if ((R6 == (*(int *)(((*(int *)(((int)stk + 12))) + 0xC58))))) goto L_8C0188D0;
    goto L_8C0188EE;
    L_8C0188EE:;
    goto L_8C01895E;
    L_8C018920:;
    if (((*(int *)((R8 + 0x10))) != 2)) goto L_8C018936;
    goto L_8C018926;
    L_8C018926:;
    t59 = *(int *)0x8C343248;
    R4 = (0x8C343248);
    R5 = (t59);
    if ((t59 == -1)) goto L_8C018946;
    goto L_8C018930;
    L_8C018930:;
    *(unsigned int *)((R4 + 0x0)) = R10;
    R6 = (R5);
    goto L_8C01895E;
    L_8C018946:;
    R6 = ((arcadePickRival(R4, R5)));
    goto L_8C01895E;
    L_8C018936:;
    t66 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 4)) = ((t66 << 2) + 0x8C34324C);
    R2 = (((t66 << 2) + 0x8C34324C));
    R4 = (0x8C34324C);
    if (((*(int *)((((t66 << 2) + 0x8C34324C) + 0x0))) != -1)) goto L_8C018950;
    goto L_8C018946;
    L_8C018950:;
    *(unsigned int *)(((int)stk + 4)) = R2;
    t71 = *(int *)((R2 + 0x0));
    *(unsigned int *)((R2 + 0x0)) = R10;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    R6 = (t71);
    goto L_8C01895E;
    L_8C018888:;
    R6 = ((*(int *)((R7 + 0x0))));
    goto L_8C01895E;
    L_8C01897E:;
    scoreReset();
    colliObjClear();
    *(float *)0x8C287C3C = F15;
    *(float *)0x8C287C40 = 0.0399999991f;
    *(float *)0x8C287C44 = 0.5f;
    ballInit(0x8C291F24);
    if (((*(int *)((R9 + 0x0))) != 3)) goto L_8C0189C0;
    goto L_8C0189A8;
    L_8C0189A8:;
    miniRoundStart(R4, R5, R6, R7);
    if (((*(int *)((R9 + 0x0))) != 3)) goto L_8C0189C0;
    goto L_8C0189B4;
    L_8C0189B4:;
    t85 = (miniOnEvent(0x2, 0x0, R6, R7, F4, F5)) == 0;
    if (t85) goto L_8C0189C6;
    goto L_8C0189C0;
    L_8C0189C0:;
    cpuInit();
    goto L_8C0189C6;
    L_8C0189C6:;
    return ballBoyInit();
    L_8C018820:;
    *(unsigned int *)((R4 + 0x0)) = 0x1;
    R4 = ((R4 + 0x4));
    goto L_8C018826;
}
