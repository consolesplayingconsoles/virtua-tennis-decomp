/* Straight-line functions with calls and guards (batch gen_io): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int angDiff(int, int);
int angLerp(int, int, float);
int dbgMenuGetValue(int, int);
int eepromGetDiff(void);
int effHitFlashSpawn(float);
int exprPlayB(int, int, int);
int miniOnEvent(int, int);
int miniPlayerInput(int);
int motionAdvance(int);
int motionChange(int, int, int, int, int, float);
int motionIsEnd(int);
int nlArcTan2(float, float);
float nlRandom(void);
float nlSin(int);
int nlsndSeqRequest(int);
int padVibRequest(int, int, int, int, int, int);
int playerChooseSwing(int, int, int, int, int, int, int, int, int, int, int, int);
int playerCpuInput(int);
int playerExec(int);
int playerMoveToTarget(int, int, int, int, int, int, int, int, int, int, int, int);
int playerPivotTurn(int, int, int, int, int);
int playerReadPad(int);
int playerSetReceiveFlag(int, int);
int playerSolveArmReach(int, int);
int racketHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
float rndRangef(float);
int seShotHit(int, int, int, int, int, int, int, int, int, int, int, int);
int seShotHit2(int, int);
int serveGetReceiver(void);
int shotAim(int, float);
int sndPlayerDiveLand(int);
float vecDist(Stk3, Stk3);
extern float vecDistXZ();
float vecDistXZf(float, float, float, float);
float vecLength(Stk3);
float vecLengthXZ(Stk3);
extern int vecLineCrossXZ();
Stk3 vecMake(float, float, float);
int playerControl(int a4);

int playerControl(int a4)
{
    int t1;
    int t11;
    int t12;
    int t13;
    int t22;
    int t23;
    int t24;
    int t33;
    int t53;
    int t60;
    int t61;
    int t62;
    int t84;
    int t86;
    float u88;
    int t98;
    int t107;
    int t104;
    int t110;
    int t119;
    int t116;
    float t123;
    int t126;
    int t129;
    int t132;
    int t138;
    int t163;
    int t181;
    int t219;
    int t222;
    int t226;
    int t228;
    int t231;
    int t237;
    int t238;
    int t245;
    int t252;
    int t257;
    int t259;
    int t260;
    float t268;
    float t271;
    int t316;
    int t332;
    float t334;
    int t352;
    int t361;
    int t358;
    int t382;
    int t388;
    int t389;
    int t392;
    int t393;
    int t394;
    int t400;
    int t401;
    int t404;
    int t406;
    int t412;
    int t413;
    int t416;
    int t438;
    int t447;
    int t444;
    int t476;
    int t474;
    float u481;
    float t484;
    float t487;
    int t499;
    int t496;
    int t516;
    int t518;
    int t526;
    int t528;
    int t564;
    float t566;
    int t567;
    int t568;
    int t574;
    int t575;
    int t578;
    int t579;
    int t580;
    int t586;
    int t587;
    int t590;
    int t592;
    int t598;
    int t599;
    int t602;
    int t607;
    int t617;
    int t614;
    int t623;
    int t625;
    int t712;
    int t709;
    int t724;
    int t721;
    int t749;
    float t775;
    float t778;
    float t816;
    float t838;
    int t839;
    int t854;
    int t901;
    int t904;
    int t907;
    int t917;
    int t920;
    int t923;
    int t933;
    int t954;
    int t957;
    int t960;
    int t970;
    int t973;
    int t976;
    float t990;
    float t1012;
    int t1013;
    int t1028;
    int t1055;
    float t1069;
    float t1091;
    int t1092;
    int t1107;
    float t1147;
    float t1169;
    int t1170;
    int t1185;
    int t1250;
    int t1253;
    int t1256;
    int t1266;
    int t1269;
    int t1272;
    float t1286;
    float t1308;
    int t1309;
    int t1324;
    int t1351;
    float t1365;
    float t1387;
    int t1388;
    int t1403;
    float t1443;
    float t1465;
    int t1466;
    int t1481;
    int t1546;
    int t1549;
    int t1552;
    int t1562;
    int t1565;
    int t1568;
    float t1582;
    float t1604;
    int t1605;
    int t1620;
    int t1647;
    float t1661;
    float t1683;
    int t1684;
    int t1699;
    float t1739;
    float t1761;
    int t1762;
    int t1777;
    float t1878;
    float t1900;
    int t1901;
    int t1916;
    int t1962;
    int t1965;
    int t1968;
    int t1978;
    int t1981;
    int t1984;
    int t1993;
    int t2014;
    int t2017;
    int t2020;
    int t2030;
    int t2033;
    int t2036;
    float t2049;
    float t2071;
    int t2072;
    int t2087;
    int t2113;
    float t2126;
    float t2148;
    int t2149;
    int t2164;
    float t2202;
    float t2224;
    int t2225;
    int t2240;
    int t2302;
    int t2305;
    int t2308;
    int t2318;
    int t2321;
    int t2324;
    float t2337;
    float t2359;
    int t2360;
    int t2375;
    int t2401;
    float t2414;
    float t2436;
    int t2437;
    int t2452;
    float t2490;
    float t2512;
    int t2513;
    int t2528;
    int t2590;
    int t2593;
    int t2596;
    int t2606;
    int t2609;
    int t2612;
    float t2625;
    float t2647;
    int t2648;
    int t2663;
    int t2689;
    float t2702;
    float t2724;
    int t2725;
    int t2740;
    float t2778;
    float t2800;
    int t2801;
    int t2816;
    int t2913;
    float u2937;
    float u2939;
    int t2943;
    int t2957;
    int t3001;
    int t2997;
    int t3018;
    int t3027;
    int t3059;
    int t3068;
    int t3065;
    int t3092;
    int t3112;
    int t3097;
    int t3106;
    int t3103;
    int t3408;
    float u3141;
    float u3142;
    float u3145;
    int t3148;
    int t3146;
    int t3156;
    float u3161;
    int t3163;
    float u3169;
    float u3171;
    int t3173;
    int t3184;
    int t3211;
    float u3216;
    int t3231;
    int t3240;
    int t3237;
    int t3282;
    int t3284;
    int t3290;
    float u3297;
    int t3298;
    int t3301;
    int t3304;
    float u3306;
    float u3313;
    float u3318;
    int t3323;
    int t3321;
    int t3336;
    int t3333;
    int t3359;
    float u3360;
    float u3361;
    float u3362;
    float u3368;
    int t3371;
    int t3369;
    int t3378;
    float u3383;
    int t3418;
    int t3422;
    int t3424;
    int t3448;
    int t3449;
    float t3450;
    int t3471;
    int t3474;
    int t3484;
    int t3495;
    int t3498;
    int t3505;
    int t3548;
    int t3575;
    int t3584;
    int t3593;
    int t3607;
    int t3610;
    int t3618;
    int t3627;
    int t3677;
    int t3680;
    int t3701;
    float u3704;
    int t3714;
    int t3724;
    int t3727;
    int t3730;
    int t3733;
    int t3744;
    int t3754;
    int t3757;
    int t3766;
    int t3789;
    int t3800;
    int t3815;
    int t3817;
    int t3819;
    int t3821;
    int t3823;
    float t3826;
    int t3828;
    int t3829;
    int t3830;
    int t3832;
    int t3840;
    int t3847;
    int t3854;
    int t3865;
    int t3880;
    int t3882;
    int t3884;
    int t3886;
    int t3888;
    float t3891;
    int t3893;
    int t3894;
    int t3895;
    int t3897;
    int t3905;
    int t3911;
    int t3914;
    int t3927;
    int t3938;
    int t3954;
    int t3956;
    int t3958;
    int t3960;
    int t3962;
    float t3965;
    int t3967;
    int t3968;
    int t3969;
    int t3971;
    int t3979;
    int t3990;
    int t4005;
    int t4016;
    int t4032;
    int t4034;
    int t4036;
    int t4038;
    int t4040;
    float t4043;
    int t4045;
    int t4046;
    int t4047;
    int t4049;
    int t4057;
    int t4064;
    int t4076;
    int t4087;
    int t4103;
    int t4105;
    int t4107;
    int t4109;
    int t4111;
    float t4114;
    int t4116;
    int t4117;
    int t4118;
    int t4120;
    int t4128;
    int t4160;
    int t4163;
    int t4170;
    float t4186;
    int t4195;
    int t4206;
    int t4221;
    int t4223;
    int t4225;
    int t4227;
    int t4229;
    float t4232;
    int t4234;
    int t4235;
    int t4236;
    int t4238;
    int t4246;
    int t4253;
    int t4268;
    int t4279;
    int t4294;
    int t4296;
    int t4298;
    int t4300;
    int t4302;
    float t4305;
    int t4307;
    int t4308;
    int t4309;
    int t4311;
    int t4319;
    int t4326;
    int t4338;
    int t4349;
    int t4364;
    int t4366;
    int t4368;
    int t4370;
    int t4372;
    float t4375;
    int t4377;
    int t4378;
    int t4379;
    int t4381;
    int t4389;
    int t4428;
    int t4443;
    int t4454;
    int t4469;
    int t4471;
    int t4473;
    int t4475;
    int t4477;
    float t4480;
    int t4482;
    int t4483;
    int t4484;
    int t4486;
    int t4494;
    int t4501;
    int t4513;
    int t4524;
    int t4539;
    int t4541;
    int t4543;
    int t4545;
    int t4547;
    float t4550;
    int t4552;
    int t4553;
    int t4554;
    int t4556;
    int t4564;
    int t4599;
    int t4614;
    int t4625;
    int t4641;
    int t4643;
    int t4645;
    int t4647;
    int t4649;
    float t4652;
    int t4654;
    int t4655;
    int t4656;
    int t4658;
    int t4666;
    int t4673;
    int t4685;
    int t4696;
    int t4712;
    int t4714;
    int t4716;
    int t4718;
    int t4720;
    float t4723;
    int t4725;
    int t4726;
    int t4727;
    int t4729;
    int t4737;
    int t4775;
    int t4790;
    int t4801;
    int t4817;
    int t4819;
    int t4821;
    int t4823;
    int t4825;
    float t4828;
    int t4830;
    int t4831;
    int t4832;
    int t4834;
    int t4842;
    int t4849;
    int t4861;
    int t4872;
    int t4888;
    int t4890;
    int t4892;
    int t4894;
    int t4896;
    float t4899;
    int t4901;
    int t4902;
    int t4903;
    int t4905;
    int t4913;
    int t4990;
    int t5002;
    int t5053;
    int t5071;
    int t5072;
    int t5093;
    int t5103;
    int t5128;
    int t5152;
    int t5153;
    int t5155;
    int t5157;
    int t5159;
    int t5161;
    int t5163;
    float u5165;
    float u5167;
    float u5173;
    int t5176;
    int t5174;
    int t5184;
    float u5187;
    int t5192;
    int t5190;
    int t5205;
    int t5202;
    int t5228;
    float u5229;
    float u5230;
    float u5231;
    float u5237;
    int t5240;
    int t5238;
    int t5250;
    int t5252;
    int t5259;
    int t5262;
    int t5265;
    int t5275;
    int t5278;
    int t5315;
    int t5327;
    int t5344;
    int t5353;
    int t5347;
    int t5350;
    int t5361;
    int t5388;
    int t5391;
    int t5394;
    int t5403;
    int t5406;
    int t5408;
    int t5411;
    int t5414;
    int t5524;
    int t5527;
    int t5530;
    int t5556;
    int t5578;
    int t5603;
    int t5606;
    float u5608;
    float u5668;
    int t5622;
    int t5632;
    float u5634;
    float u5627;
    float u5628;
    int t5629;
    int t5646;
    int t5643;
    int t5650;
    int t5716;
    int t5753;
    float u5759;
    int t5762;
    float u5764;
    float u5765;
    float u5766;
    int t5772;
    int t5774;
    int t5787;
    int t5788;
    int t5790;
    int t5801;
    int t5803;
    int t5818;
    int t5822;
    int t5836;
    int t5837;
    int t5838;
    int t5849;
    int t5853;
    int t5872;
    int t5874;
    int t5875;
    int t5877;
    int t5880;
    int t5883;
    float u5887;
    float u5888;
    int t5891;
    float u5892;
    float u5893;
    float u5894;
    int t5900;
    int t5913;
    int t5909;
    int t5911;
    int t5929;
    int t5933;
    int t5935;
    int t5950;
    int t5972;
    int t5976;
    int t6014;
    int t6021;
    int t6028;
    int t6031;
    float u6040;
    int t6043;
    float u6050;
    float u6052;
    float u6053;
    int t6056;
    int t6062;
    int t6064;
    int t6066;
    int t6070;
    int t6076;
    int t6078;
    int t6080;
    int t6084;
    int t6105;
    int t6108;
    int t6116;
    int t6119;
    int t6147;
    int t6144;
    int t6159;
    int t6156;
    int t6164;
    int t6167;
    int t6171;
    int t6180;
    int t6183;
    int t6186;
    int t6200;
    int t6203;
    int t6222;
    int t6225;
    int t6235;
    int t6237;
    int t6240;
    float u6241;
    int t6244;
    int t6247;
    float u6251;
    float u6253;
    int t6256;
    float u6257;
    float u6258;
    float u6259;
    int t6265;
    int t6278;
    int t6274;
    int t6276;
    int t6294;
    int t6298;
    int t6300;
    int t6315;
    int t6340;
    int t6344;
    int t6433;
    int t6436;
    int t6440;
    int t6449;
    int t6452;
    int t6455;
    int t6469;
    int t6472;
    int t6491;
    int t6494;
    int t6504;
    int t6506;
    int t6509;
    float u6510;
    int t6513;
    int t6516;
    float u6520;
    float u6522;
    int t6525;
    float u6526;
    float u6527;
    float u6528;
    int t6534;
    int t6547;
    int t6543;
    int t6545;
    int t6563;
    int t6567;
    int t6569;
    int t6584;
    int t6609;
    int t6613;
    int t6700;
    int t6703;
    int t6707;
    int t6716;
    int t6719;
    int t6722;
    int t6736;
    int t6739;
    int t6758;
    int t6761;
    int t6771;
    int t6773;
    int t6776;
    float u6777;
    int t6780;
    int t6783;
    float u6787;
    float u6789;
    int t6792;
    float u6793;
    float u6794;
    float u6795;
    int t6801;
    int t6814;
    int t6810;
    int t6812;
    int t6830;
    int t6834;
    int t6836;
    int t6851;
    int t6876;
    int t6880;
    int t6948;
    int t6950;
    int t6953;
    int t6955;
    int t6958;
    int t6970;
    float u6973;
    float u6975;
    float u6976;
    int t6979;
    int t6985;
    int t6987;
    int t6989;
    int t6993;
    int t6999;
    int t7001;
    int t7003;
    int t7007;
    int t7028;
    int t7031;
    int t7039;
    int t7042;
    int t7139;
    int t7154;
    int t7157;
    int t7160;
    int t7175;
    int t7182;
    int t7189;
    int t7197;
    int t7220;
    int t7217;
    int t7232;
    int t7229;
    int t7258;
    int t7282;
    int t7286;
    int t7317;
    int t7328;
    int t7342;
    int t7343;
    int t7344;
    int t7346;
    int t7349;
    int t7351;
    int t7353;
    int t7355;
    int t7372;
    int t7380;
    int t7436;
    int t7440;
    int t7491;
    int t7501;
    int t7502;
    int t7548;
    float t7549;
    int t7553;
    float u7554;
    float t7555;
    int t7580;
    float u7583;
    int t7604;
    int t7605;
    float t7610;
    int t7613;
    int t7616;
    int t7628;
    float u7631;
    int t7652;
    int t7661;
    int t7689;
    int t7697;
    int t7709;
    float u7711;
    int t7734;
    int t7735;
    int t7746;
    int t7749;
    int t7763;
    float u7766;
    int t7772;
    int t7783;
    int t7796;
    int t7799;
    int t7807;
    int t7826;
    int t7823;
    int t7829;
    int t7836;
    int t7837;
    int t7852;
    float u7857;
    int t7921;
    float t7946;
    int t7990;
    int t7998;
    int t8021;
    int t35;
    int t45;
    int t143;
    float u161;
    float u179;
    int t264;
    int t265;
    int t283;
    int t304;
    int t305;
    int t306;
    float u307;
    float u350;
    int t419;
    float u436;
    float u514;
    float u550;
    float u560;
    int t605;
    float u737;
    float u747;
    int t779;
    int t780;
    int t828;
    float u829;
    int t830;
    float u831;
    float u889;
    float u899;
    float u915;
    float u931;
    float u942;
    float u952;
    float u968;
    float u984;
    int t1002;
    float u1003;
    int t1004;
    float u1005;
    int t1081;
    float u1082;
    int t1083;
    float u1084;
    int t1159;
    float u1160;
    int t1161;
    float u1162;
    float u1238;
    float u1248;
    float u1264;
    float u1280;
    int t1298;
    float u1299;
    int t1300;
    float u1301;
    int t1377;
    float u1378;
    int t1379;
    float u1380;
    int t1455;
    float u1456;
    int t1457;
    float u1458;
    float u1534;
    float u1544;
    float u1560;
    float u1576;
    int t1594;
    float u1595;
    int t1596;
    float u1597;
    int t1673;
    float u1674;
    int t1675;
    float u1676;
    int t1751;
    float u1752;
    int t1753;
    float u1754;
    int t1890;
    float u1891;
    int t1892;
    float u1893;
    float u1950;
    float u1960;
    float u1976;
    float u1991;
    float u2002;
    float u2012;
    float u2028;
    float u2043;
    int t2061;
    float u2062;
    int t2063;
    float u2064;
    int t2138;
    float u2139;
    int t2140;
    float u2141;
    int t2214;
    float u2215;
    int t2216;
    float u2217;
    float u2290;
    float u2300;
    float u2316;
    float u2331;
    int t2349;
    float u2350;
    int t2351;
    float u2352;
    int t2426;
    float u2427;
    int t2428;
    float u2429;
    int t2502;
    float u2503;
    int t2504;
    float u2505;
    float u2578;
    float u2588;
    float u2604;
    float u2619;
    int t2637;
    float u2638;
    int t2639;
    float u2640;
    int t2714;
    float u2715;
    int t2716;
    float u2717;
    int t2790;
    float u2791;
    int t2792;
    float u2793;
    float u2905;
    float u2921;
    float u3016;
    float u3051;
    float u3089;
    int t3136;
    int t3137;
    float u3138;
    float u3208;
    float u3225;
    int t3397;
    int t3286;
    int t3385;
    float u3343;
    float u3365;
    int t3439;
    int t3440;
    int t3488;
    int t3489;
    int t3539;
    int t3540;
    int t3541;
    int t3542;
    int t3543;
    int t3544;
    float u3600;
    float u3635;
    int t3683;
    int t3684;
    int t3685;
    int t3686;
    int t3687;
    int t3688;
    int t3689;
    int t3690;
    int t3691;
    int t3692;
    int t3746;
    int t3747;
    int t3992;
    int t3993;
    int t3994;
    int t3995;
    int t3996;
    int t3997;
    float u3998;
    int t4182;
    int t4187;
    float u4188;
    int t4255;
    int t4256;
    int t4257;
    int t4258;
    int t4259;
    int t4260;
    float u4261;
    int t4430;
    int t4431;
    int t4432;
    int t4433;
    int t4434;
    int t4435;
    float u4436;
    int t4601;
    int t4602;
    int t4603;
    int t4604;
    int t4605;
    int t4606;
    float u4607;
    int t4777;
    int t4778;
    int t4779;
    int t4780;
    int t4781;
    int t4782;
    float u4783;
    int t5013;
    int t5014;
    int t5112;
    int t5113;
    int t5115;
    int t5116;
    int t5117;
    float u5120;
    int t5148;
    int t5149;
    int t5150;
    int t5151;
    int t5156;
    float u5170;
    float u5212;
    float u5234;
    float u5273;
    float u5290;
    float u5300;
    float u5342;
    float u5401;
    float u5422;
    float u5460;
    float u5470;
    float u5489;
    int t5522;
    int t5523;
    float u5538;
    int t5568;
    float u5712;
    float u5703;
    float u5694;
    float u5685;
    float u5612;
    float u5614;
    int t5616;
    float u5617;
    float u5677;
    float u5659;
    int t5720;
    int t5721;
    float u5763;
    int t5971;
    int t6035;
    int t6036;
    float u6051;
    float u6098;
    float u6194;
    float u6419;
    float u6429;
    float u6463;
    float u6688;
    float u6698;
    float u6730;
    float u6974;
    float u7021;
    float u7168;
    float u7193;
    float u7245;
    float u7255;
    int t7288;
    int t7289;
    int t7290;
    int t7291;
    int t7345;
    int t7359;
    int t7439;
    int t7535;
    int t7536;
    float u7618;
    float u7650;
    int t7691;
    int t7692;
    int t7770;
    int t7771;
    int t7889;
    int t7890;
    int t7891;
    int t7892;
    int t7893;
    int t7894;
    int t7913;
    int t7914;
    int t7951;
    int t7952;
    int t7953;
    int t7978;
    int t7979;
    int t7980;
    int stk[254];

    *(unsigned int *)(((0x39C + ((int)stk + 68)) + 0x0)) = a4;
    *(unsigned int *)(((int)stk + 904)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 900)) = 0x8C291F24;
    *(unsigned short *)(((int)stk + 716)) = 0x0;
    *(unsigned short *)(((int)stk + 714)) = 0x0;
    *(unsigned short *)(((int)stk + 712)) = 0x0;
    *(unsigned int *)(((int)stk + 700)) = 0x0;
    *(unsigned int *)(((int)stk + 636)) = 0x0;
    *(unsigned int *)(((int)stk + 632)) = 0x0;
    *(unsigned int *)(((int)stk + 124)) = 0x0;
    *(unsigned int *)(((int)stk + 72)) = 0x0;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        t1 = *(int *)(((int)stk + 992));
        *(unsigned char *)(((t1 + 0xD48) + 0x0)) = (*(signed char *)(((t1 + 0xD44) + 0x0)));
        *(unsigned char *)(((t1 + 0xD48) + 0x1)) = (*(signed char *)(((t1 + 0xD44) + 0x1)));
        *(unsigned char *)(((t1 + 0xD48) + 0x2)) = (*(signed char *)(((t1 + 0xD44) + 0x2)));
        *(unsigned char *)(((t1 + 0xD48) + 0x3)) = (*(signed char *)(((t1 + 0xD44) + 0x3)));
        if (((*(int *)0x8C295DDC) & 16) != 0) {
            t11 = *(int *)(((int)stk + 992));
            t12 = *(int *)0x8C295DD8;
            t13 = *(int *)((t11 + 0xB5C));
            *(unsigned char *)(((t11 + 0xD44) + 0x0)) = (*(signed char *)((((((t12 << 2) << 1) + 0x8C297A3C) + (t13 << 2)) + 0x0)));
            *(unsigned char *)(((t11 + 0xD44) + 0x1)) = (*(signed char *)((((((t12 << 2) << 1) + 0x8C297A3C) + (t13 << 2)) + 0x1)));
            *(unsigned char *)(((t11 + 0xD44) + 0x2)) = (*(signed char *)((((((t12 << 2) << 1) + 0x8C297A3C) + (t13 << 2)) + 0x2)));
            *(unsigned char *)(((t11 + 0xD44) + 0x3)) = (*(signed char *)((((((t12 << 2) << 1) + 0x8C297A3C) + (t13 << 2)) + 0x3)));
        } else {
            if (((*(int *)0x8C287B3C) & 1) != 0) {
                t22 = *(int *)(((int)stk + 992));
                t23 = *(int *)(((0xB5C + t22) + 0x0));
                t24 = *(int *)0x8C287C1C;
                *(unsigned char *)(((t22 + 0xD44) + 0x0)) = (*(signed char *)(((((t23 * 0x960) + 0x8C2920C8) + (t24 << 2)) + 0x0)));
                *(unsigned char *)(((t22 + 0xD44) + 0x1)) = (*(signed char *)(((((t23 * 0x960) + 0x8C2920C8) + (t24 << 2)) + 0x1)));
                *(unsigned char *)(((t22 + 0xD44) + 0x2)) = (*(signed char *)(((((t23 * 0x960) + 0x8C2920C8) + (t24 << 2)) + 0x2)));
                *(unsigned char *)(((t22 + 0xD44) + 0x3)) = (*(signed char *)(((((t23 * 0x960) + 0x8C2920C8) + (t24 << 2)) + 0x3)));
            } else {
                if ((*(int *)((((*(int *)(((*(int *)(((int)stk + 992))) + 0xB5C))) << 2) + 0x8C287AE0))) == 0) {
                    t33 = dbgMenuGetValue((*(int *)0x8C287C4C), 0x0);
                    if (t33 != 0) {
                        if (((*(int *)0x8C287D5C) == 3) && (t35 = *(int *)0x8C2FBEB0, (t35 & 1) != 0)) {
                            miniPlayerInput((*(int *)(((int)stk + 992))));
                        } else {
                            playerCpuInput((*(int *)(((int)stk + 992))));
                        }
                    } else {
                        playerReadPad((*(int *)(((int)stk + 992))));
                    }
                } else {
                    if (((*(int *)0x8C287D5C) == 3) && (t45 = *(int *)0x8C2FBEB0, (t45 & 1) != 0)) {
                        miniPlayerInput((*(int *)(((int)stk + 992))));
                    } else {
                        playerCpuInput((*(int *)(((int)stk + 992))));
                    }
                }
                if ((*(int *)0x8C287C60) != 0) {
                    t53 = *(int *)(((int)stk + 992));
                    *(unsigned short *)(((0xD44 + t53) + 0x0)) = 0x0;
                    *(unsigned short *)(((0xD46 + t53) + 0x0)) = 0x0;
                }
                t60 = *(int *)(((*(int *)(((int)stk + 992))) + 0xB5C));
                t61 = *(int *)0x8C287C1C;
                t62 = *(int *)(((int)stk + 992));
                *(unsigned char *)(((((t60 * 0x960) + 0x8C2920C8) + (t61 << 2)) + 0x0)) = (*(signed char *)(((t62 + 0xD44) + 0x0)));
                *(unsigned char *)(((((t60 * 0x960) + 0x8C2920C8) + (t61 << 2)) + 0x1)) = (*(signed char *)(((t62 + 0xD44) + 0x1)));
                *(unsigned char *)(((((t60 * 0x960) + 0x8C2920C8) + (t61 << 2)) + 0x2)) = (*(signed char *)(((t62 + 0xD44) + 0x2)));
                *(unsigned char *)(((((t60 * 0x960) + 0x8C2920C8) + (t61 << 2)) + 0x3)) = (*(signed char *)(((t62 + 0xD44) + 0x3)));
            }
        }
        playerSetReceiveFlag((*(int *)(((int)stk + 992))), (*(int *)(((int)stk + 900))));
        *(float *)(((int)stk + 736)) = ((float)(((((((*(short *)((0xD46 + (*(int *)(((int)stk + 992)))))) & 64) == 0)) ? 1 : 0) ^ 0x1) - ((((((*(short *)((0xD46 + (*(int *)(((int)stk + 992)))))) & 128) == 0)) ? 1 : 0) ^ 0x1)) * (*(float *)((0xB00 + (*(int *)(((int)stk + 992)))))));
        t84 = *(short *)((0xD46 + (*(int *)(((int)stk + 992)))));
        t86 = *(short *)((0xD46 + (*(int *)(((int)stk + 992)))));
        u88 = *(float *)((0xB00 + (*(int *)(((int)stk + 992)))));
        *(float *)(((int)stk + 732)) = ((float)((((((t84 & 16) == 0)) ? 1 : 0) ^ 0x1) - (((((t86 & 32) == 0)) ? 1 : 0) ^ 0x1)) * u88);
        if (((*(float *)(((int)stk + 736))) == 0.0f) && (((float)((((((t84 & 16) == 0)) ? 1 : 0) ^ 0x1) - (((((t86 & 32) == 0)) ? 1 : 0) ^ 0x1)) * u88) == 0.0f)) {
            t98 = *(int *)(((int)stk + 992));
            t107 = 0x1;
            if ((*(float *)((t98 + 0xB78))) > 0.0f) {
            } else {
                t104 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78)))) {
                    t104 = 0xFFFFFFFF;
                }
                t107 = t104;
            }
            *(float *)((t98 + 0xB78)) = ((float)t107 * 0.100000001f);
            t110 = *(int *)(((int)stk + 992));
            t119 = 0x1;
            if ((*(float *)((t110 + 0xB80))) > 0.0f) {
            } else {
                t116 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB80)))) {
                    t116 = 0xFFFFFFFF;
                }
                t119 = t116;
            }
            *(float *)((t110 + 0xB80)) = ((float)t119 * 0.100000001f);
        } else {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB78)); }
            t123 = vecLength(*(Stk3 *)(((int)stk + 56)));
            if (!(5.0f > t123)) {
                t126 = nlArcTan2((*(float *)(((int)stk + 736))), (*(float *)(((int)stk + 732))));
                t129 = angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0A))), t126);
                if ((int)(short)t129 >= 0) {
                    t132 = nlArcTan2((*(float *)(((int)stk + 736))), (*(float *)(((int)stk + 732))));
                    t143 = (short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0A))), t132));
                } else {
                    t138 = nlArcTan2((*(float *)(((int)stk + 736))), (*(float *)(((int)stk + 732))));
                    t143 = (-(short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0A))), t138)));
                }
                if ((int)t143 > (int)0x6000) {
                    *(float *)(((int)stk + 736)) = (((*(float *)(((int)stk + 736))) * 10.0f) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))));
                    *(float *)(((int)stk + 732)) = (((*(float *)(((int)stk + 732))) * 10.0f) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xB80))));
                } else {
                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))))) {
                        u161 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78)));
                    } else {
                        u161 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))));
                    }
                    if (u161 > 0.100000001f) {
                        t163 = *(int *)(((int)stk + 992));
                        *(float *)((t163 + 0xB78)) = ((*(float *)((t163 + 0xB78))) * 0.899999976f);
                    }
                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB80))))) {
                        u179 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB80)));
                    } else {
                        u179 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB80))));
                    }
                    if (u179 > 0.100000001f) {
                        t181 = *(int *)(((int)stk + 992));
                        *(float *)((t181 + 0xB80)) = ((*(float *)((t181 + 0xB80))) * 0.899999976f);
                    }
                }
            } else {
                *(float *)(((int)stk + 736)) = (((*(float *)(((int)stk + 736))) * 10.0f) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))));
                *(float *)(((int)stk + 732)) = (((*(float *)(((int)stk + 732))) * 10.0f) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xB80))));
            }
        }
        t219 = *(int *)(((int)stk + 992));
        *(float *)((t219 + 0xB78)) = ((*(float *)((t219 + 0xB78))) + (*(float *)(((0x29C + ((int)stk + 68)) + 0x0))));
        t222 = *(int *)(((int)stk + 992));
        *(float *)((t222 + 0xB84)) = ((*(float *)((t222 + 0xAE8))) + (*(float *)((t222 + 0xB78))));
        t226 = *(int *)(((int)stk + 992));
        *(float *)((t226 + 0xB80)) = ((*(float *)((t226 + 0xB80))) + (*(float *)(((0x298 + ((int)stk + 68)) + 0x0))));
        t228 = *(int *)(((int)stk + 992));
        *(float *)((t228 + 0xB8C)) = ((*(float *)((t228 + 0xAF0))) + (*(float *)((t228 + 0xB80))));
        t231 = *(int *)(((int)stk + 992));
        *(unsigned int *)((t231 + 0xC40)) = ((*(int *)((t231 + 0xC40))) - 1);
        if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) == 0) {
            t237 = *(int *)(((int)stk + 992));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t237 + 0xB6C)) = *(struct mv3 *)((t237 + 0xB84)); }
            t238 = *(int *)(((int)stk + 992));
            *(unsigned int *)((t238 + 0xB60)) = ((*(int *)((t238 + 0xB60))) & 0xFFFFDFFF);
            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCEC)) = 0xFFFFFFFF;
            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC68)) = 0x0;
        } else {
            if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xCEC))) < (int)0x5A) {
                t245 = *(int *)(((int)stk + 992));
                *(unsigned int *)((t245 + 0xCEC)) = ((*(int *)((t245 + 0xCEC))) + 0x1);
            }
            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x100) != 0) {
                t252 = *(int *)(((int)stk + 992));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((t252 + 0xB84)) = *(struct mv3 *)((t252 + 0xAE8)); }
            }
            t257 = *(int *)(((int)stk + 992));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t257 + 0xB6C)) = *(struct mv3 *)((t257 + 0xB84)); }
            *(unsigned int *)(((int)stk + 84)) = 0x1;
            *(unsigned int *)(((int)stk + 80)) = 0x1;
            t259 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
            t260 = ((~(((~(t259 + 0x2)) + 0x1) & 0x3)) + 0x1);
            if ((int)(t259 + 0x2) >= 0) {
                t260 = ((t259 + 0x2) & 0x3);
            }
            *(unsigned int *)(((int)stk + 76)) = ((t260 * 0xD78) + 0x8C287D84);
            if (((*(int *)(((*(int *)(((int)stk + 904))) + 0x10))) == 4) && (t264 = *(int *)(((int)stk + 900)), t265 = *(int *)((0x54 + t264)), (t265 & 4) == 0)) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                t268 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 76))) + 0xAE8)); }
                t271 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
                if (t268 > t271) {
                    *(unsigned int *)(((int)stk + 80)) = 0x0;
                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                }
            }
            if (((*(int *)0x8C287D5C) == 3) && (t283 = *(int *)0x8C2FBEB0, (t283 & 0x100) != 0)) {
                if ((*(int *)(((((*(int *)(((0xB5C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + ((*(int *)(((int)stk + 904))) + 0x14)) + 0x0))) == 0) {
                    *(unsigned int *)(((int)stk + 80)) = 0x0;
                    *(unsigned int *)(((int)stk + 84)) = 0x0;
                }
            }
            if ((*(int *)(((((*(int *)(((0xB5C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + ((*(int *)(((int)stk + 904))) + 0x14)) + 0x0))) == 0) {
                *(unsigned int *)(((int)stk + 84)) = 0x0;
            }
            if (((*(int *)(((((*(int *)(((0xB5C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + ((*(int *)(((int)stk + 904))) + 0x14)) + 0x0))) != 0) && ((t304 = *(int *)(((int)stk + 900)), t305 = *(int *)((0x54 + t304)), (t305 & 4) != 0) && (t306 = *(int *)(((int)stk + 900)), u307 = *(float *)((t306 + 0x40)), u307 != 0.0f))) {
                *(unsigned int *)(((int)stk + 84)) = 0x0;
            }
            *(Stk3 *)(((int)stk + 56)) = vecMake(1.0f, 0.0f, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
            *(int *)((int)stk + 16) = (0x384 + ((int)stk + 20));
            *(int *)((int)stk + 16) = (0x384 + ((int)stk + 20));
            t316 = ((int (*)(Stk4, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
            if ((*(int *)(((int)stk + 84))) == 0) {
            } else {
                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x2000) != 0) {
                } else {
                    if (!(20.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA0))))) {
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                        *(int *)((int)stk + 16) = (0x39C + ((int)stk + 20));
                        *(int *)((int)stk + 16) = (0x39C + ((int)stk + 20));
                        t332 = ((int (*)(Stk4, Stk3, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                        t334 = vecLength(*(Stk3 *)(((int)stk + 4)));
                        if (!(t334 > 0.5f)) {
                            if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))) - (*(float *)(((int)stk + 920)))))) {
                                    u350 = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))) - (*(float *)(((int)stk + 920))));
                                } else {
                                    u350 = ((-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C)))) + (*(float *)(((int)stk + 920))));
                                }
                                if (8.0f > u350) {
                                    t352 = *(int *)(((int)stk + 992));
                                    t361 = 0x1;
                                    if (((*(float *)((t352 + 0xAE8))) - (*(float *)(((int)stk + 920)))) > 0.0f) {
                                    } else {
                                        t358 = 0x0;
                                        if (0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))) - (*(float *)(((int)stk + 920))))) {
                                            t358 = 0xFFFFFFFF;
                                        }
                                        t361 = t358;
                                    }
                                    *(float *)((t352 + 0xB6C)) = ((*(float *)(((int)stk + 920))) + (float)((t361 << 2) << 1));
                                }
                            }
                        } else {
                            t382 = *(int *)(((int)stk + 992));
                            t388 = (nlArcTan2(((*(float *)(((int)stk + 944))) - (*(float *)((t382 + 0xAE8)))), ((*(float *)(((int)stk + 952))) - (*(float *)((t382 + 0xAF0))))));
                            *(int *)((int)stk + 64) = t388;
                            t389 = *(int *)(((int)stk + 992));
                            t392 = nlArcTan2((*(float *)((t389 + 0xB78))), (*(float *)((t389 + 0xB80))));
                            t393 = angDiff(t392, t388);
                            if ((int)(short)t393 >= 0) {
                                t394 = *(int *)(((int)stk + 992));
                                t400 = (nlArcTan2(((*(float *)(((int)stk + 944))) - (*(float *)((t394 + 0xAE8)))), ((*(float *)(((int)stk + 952))) - (*(float *)((t394 + 0xAF0))))));
                                *(int *)((int)stk + 64) = t400;
                                t401 = *(int *)(((int)stk + 992));
                                t404 = nlArcTan2((*(float *)((t401 + 0xB78))), (*(float *)((t401 + 0xB80))));
                                t419 = (short)(angDiff(t404, t400));
                            } else {
                                t406 = *(int *)(((int)stk + 992));
                                t412 = (nlArcTan2(((*(float *)(((int)stk + 944))) - (*(float *)((t406 + 0xAE8)))), ((*(float *)(((int)stk + 952))) - (*(float *)((t406 + 0xAF0))))));
                                *(int *)((int)stk + 64) = t412;
                                t413 = *(int *)(((int)stk + 992));
                                t416 = nlArcTan2((*(float *)((t413 + 0xB78))), (*(float *)((t413 + 0xB80))));
                                t419 = (-(short)(angDiff(t416, t412)));
                            }
                            if ((int)t419 >= (int)0x1000) {
                                if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))) - (*(float *)(((int)stk + 920)))))) {
                                        u436 = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))) - (*(float *)(((int)stk + 920))));
                                    } else {
                                        u436 = ((-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C)))) + (*(float *)(((int)stk + 920))));
                                    }
                                    if (8.0f > u436) {
                                        t438 = *(int *)(((int)stk + 992));
                                        t447 = 0x1;
                                        if (((*(float *)((t438 + 0xAE8))) - (*(float *)(((int)stk + 920)))) > 0.0f) {
                                        } else {
                                            t444 = 0x0;
                                            if (0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))) - (*(float *)(((int)stk + 920))))) {
                                                t444 = 0xFFFFFFFF;
                                            }
                                            t447 = t444;
                                        }
                                        *(float *)((t438 + 0xB6C)) = ((*(float *)(((int)stk + 920))) + (float)((t447 << 2) << 1));
                                    }
                                }
                            } else {
                                t476 = 0x1;
                                if (((*(float *)(((int)stk + 944))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8)))) > 0.0f) {
                                } else {
                                    t474 = 0x0;
                                    if (0.0f > ((*(float *)(((int)stk + 944))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))))) {
                                        t474 = 0xFFFFFFFF;
                                    }
                                    t476 = t474;
                                }
                                u481 = *(float *)(((int)stk + 944));
                                *(float *)(((int)stk + 944)) = (u481 - (float)((t476 << 2) << 1));
                                *(float *)(((*(int *)(((int)stk + 992))) + 0xB6C)) = (u481 - (float)((t476 << 2) << 1));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0x36C + ((int)stk + 68))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                                t484 = vecDist(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((0xB84 + (*(int *)(((int)stk + 992))))); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                                t487 = vecDist(*(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
                                if (t484 > t487) {
                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB74)) = (*(float *)(((int)stk + 952)));
                                    t499 = 0x1;
                                    if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))) > 0.0f) {
                                    } else {
                                        t496 = 0x0;
                                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)))) {
                                            t496 = 0xFFFFFFFF;
                                        }
                                        t499 = t496;
                                    }
                                    if ((float)t499 != (*(float *)(((*(int *)(((int)stk + 992))) + 0xB00)))) {
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))))) {
                                            u514 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)));
                                        } else {
                                            u514 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))));
                                        }
                                        if (25.0f > u514) {
                                            t516 = *(int *)(((int)stk + 992));
                                            *(float *)((t516 + 0xB74)) = (-((*(float *)((t516 + 0xB00))) * 25.0f));
                                            t518 = *(int *)(((int)stk + 992));
                                            *(float *)((t518 + 0xB6C)) = (*(float *)((t518 + 0xB84)));
                                        }
                                    } else {
                                        t526 = *(int *)(((int)stk + 992));
                                        *(float *)((t526 + 0xB74)) = (-((*(float *)((t526 + 0xB00))) * 25.0f));
                                        t528 = *(int *)(((int)stk + 992));
                                        *(float *)((t528 + 0xB6C)) = (*(float *)((t528 + 0xB84)));
                                    }
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))))) {
                                    u550 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)));
                                } else {
                                    u550 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))));
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))))) {
                                    u560 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C)));
                                } else {
                                    u560 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))));
                                }
                                if (!(u550 > u560)) {
                                } else {
                                    if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                        t564 = *(int *)(((int)stk + 992));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t564 + 0xB6C)) = *(struct mv3 *)((t564 + 0xB84)); }
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB78)); }
                                        t566 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                        if (!(t566 > 0.5f)) {
                                            t567 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t567 + 0xB6C)) = *(struct mv3 *)((t567 + 0xB84)); }
                                        } else {
                                            t568 = *(int *)(((int)stk + 992));
                                            t574 = (nlArcTan2(((*(float *)((t568 + 0xBB4))) - (*(float *)((t568 + 0xAE8)))), ((*(float *)((t568 + 0xBBC))) - (*(float *)((t568 + 0xAF0))))));
                                            *(int *)((int)stk + 64) = t574;
                                            t575 = *(int *)(((int)stk + 992));
                                            t578 = nlArcTan2((*(float *)((t575 + 0xB78))), (*(float *)((t575 + 0xB80))));
                                            t579 = angDiff(t578, t574);
                                            if ((int)(short)t579 >= 0) {
                                                t580 = *(int *)(((int)stk + 992));
                                                t586 = (nlArcTan2(((*(float *)((t580 + 0xBB4))) - (*(float *)((t580 + 0xAE8)))), ((*(float *)((t580 + 0xBBC))) - (*(float *)((t580 + 0xAF0))))));
                                                *(int *)((int)stk + 64) = t586;
                                                t587 = *(int *)(((int)stk + 992));
                                                t590 = nlArcTan2((*(float *)((t587 + 0xB78))), (*(float *)((t587 + 0xB80))));
                                                t605 = (short)(angDiff(t590, t586));
                                            } else {
                                                t592 = *(int *)(((int)stk + 992));
                                                t598 = (nlArcTan2(((*(float *)((t592 + 0xBB4))) - (*(float *)((t592 + 0xAE8)))), ((*(float *)((t592 + 0xBBC))) - (*(float *)((t592 + 0xAF0))))));
                                                *(int *)((int)stk + 64) = t598;
                                                t599 = *(int *)(((int)stk + 992));
                                                t602 = nlArcTan2((*(float *)((t599 + 0xB78))), (*(float *)((t599 + 0xB80))));
                                                t605 = (-(short)(angDiff(t602, t598)));
                                            }
                                            if ((int)t605 < (int)0x2000) {
                                                t607 = *(int *)(((int)stk + 992));
                                                t617 = 0x1;
                                                if (((*(float *)((t607 + 0xBB4))) - (*(float *)((0xAE8 + t607)))) > 0.0f) {
                                                } else {
                                                    t614 = 0x0;
                                                    if (0.0f > ((*(float *)((0xBB4 + (*(int *)(((int)stk + 992)))))) - (*(float *)(((0xAE8 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))))) {
                                                        t614 = 0xFFFFFFFF;
                                                    }
                                                    t617 = t614;
                                                }
                                                *(float *)((t607 + 0xB6C)) = ((*(float *)((t607 + 0xBB4))) - (float)((t617 << 2) << 1));
                                                t623 = *(int *)(((int)stk + 992));
                                                *(float *)((t623 + 0xB74)) = (*(float *)((t623 + 0xBBC)));
                                            } else {
                                                t625 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t625 + 0xB6C)) = *(struct mv3 *)((t625 + 0xB84)); }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            t712 = 0x1;
            if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))) > 0.0f) {
            } else {
                t709 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)))) {
                    t709 = 0xFFFFFFFF;
                }
                t712 = t709;
            }
            t724 = 0x1;
            if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x14))) > 0.0f) {
            } else {
                t721 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x14)))) {
                    t721 = 0xFFFFFFFF;
                }
                t724 = t721;
            }
            if (t712 == t724) {
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                    u737 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                } else {
                    u737 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                }
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x14))))) {
                    u747 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x14)));
                } else {
                    u747 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x14))));
                }
                if (u747 > u737) {
                    t749 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t749 + 0xB60)) = ((*(int *)((t749 + 0xB60))) | 0x2000);
                }
            }
            if ((*(int *)(((*(int *)(((int)stk + 904))) + 0x10))) != 2) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xBA8 + (*(int *)(((int)stk + 992))))); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                t775 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((0xBA8 + (*(int *)(((int)stk + 76))))); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 76))) + 0xAE8)); }
                t778 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
                if (!(t778 > t775) && (t779 = *(int *)(((int)stk + 76)), t780 = *(int *)((0xB60 + t779)), (t780 & 4) != 0)) {
                } else {
                    if ((*(int *)(((int)stk + 80))) == 0) {
                    } else {
                        if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 4) == 0) {
                        } else {
                            if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xCBC))) != 0) {
                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                    t816 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                    if (10.0f > t816) {
                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t828 = *(int *)(((int)stk + 900)), u829 = *(float *)((t828 + 0x38)), !(0.0f > u829)) || (t830 = *(int *)(((int)stk + 900)), u831 = *(float *)((t830 + 0x10)), !(22.0f > u831)))) {
                                            if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t838 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (10.0f > t838) {
                                                    t839 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t839 + 0xB6C)) = *(struct mv3 *)((t839 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            }
                                        } else {
                                            t854 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t854 + 0xB6C)) = *(struct mv3 *)((t854 + 0xBA8)); }
                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                        }
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                    u889 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                } else {
                                    u889 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                    u899 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                } else {
                                    u899 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                }
                                if (u889 > u899) {
                                    t901 = *(int *)(((int)stk + 992));
                                    if (!(0.0f > ((*(float *)((t901 + 0xAE8))) - (*(float *)((t901 + 0xBA8)))))) {
                                        t904 = *(int *)(((int)stk + 992));
                                        u915 = ((*(float *)((t904 + 0xAE8))) - (*(float *)((t904 + 0xBA8))));
                                    } else {
                                        t907 = *(int *)(((int)stk + 992));
                                        u915 = ((-(*(float *)((t907 + 0xAE8)))) + (*(float *)((t907 + 0xBA8))));
                                    }
                                    if (10.0f > u915) {
                                        t917 = *(int *)(((int)stk + 992));
                                        if (!(0.0f > ((*(float *)((t917 + 0xAF0))) - (*(float *)((t917 + 0xBB0)))))) {
                                            t920 = *(int *)(((int)stk + 992));
                                            u931 = ((*(float *)((t920 + 0xAF0))) - (*(float *)((t920 + 0xBB0))));
                                        } else {
                                            t923 = *(int *)(((int)stk + 992));
                                            u931 = ((-(*(float *)((t923 + 0xAF0)))) + (*(float *)((t923 + 0xBB0))));
                                        }
                                        if (20.0f > u931) {
                                            t933 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t933 + 0xB6C)) = *(struct mv3 *)((t933 + 0xBA8)); }
                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                        } else {
                                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                                u942 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                            } else {
                                                u942 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                            }
                                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                                u952 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                            } else {
                                                u952 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                            }
                                            if (u952 > u942) {
                                                t954 = *(int *)(((int)stk + 992));
                                                if (!(0.0f > ((*(float *)((t954 + 0xAE8))) - (*(float *)((t954 + 0xBA8)))))) {
                                                    t957 = *(int *)(((int)stk + 992));
                                                    u968 = ((*(float *)((t957 + 0xAE8))) - (*(float *)((t957 + 0xBA8))));
                                                } else {
                                                    t960 = *(int *)(((int)stk + 992));
                                                    u968 = ((-(*(float *)((t960 + 0xAE8)))) + (*(float *)((t960 + 0xBA8))));
                                                }
                                                if (10.0f > u968) {
                                                    t970 = *(int *)(((int)stk + 992));
                                                    if (!(0.0f > ((*(float *)((t970 + 0xAF0))) - (*(float *)((t970 + 0xBB0)))))) {
                                                        t973 = *(int *)(((int)stk + 992));
                                                        u984 = ((*(float *)((t973 + 0xAF0))) - (*(float *)((t973 + 0xBB0))));
                                                    } else {
                                                        t976 = *(int *)(((int)stk + 992));
                                                        u984 = ((-(*(float *)((t976 + 0xAF0)))) + (*(float *)((t976 + 0xBB0))));
                                                    }
                                                    if (!(30.0f > u984)) {
                                                        if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t990 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (10.0f > t990) {
                                                                if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1002 = *(int *)(((int)stk + 900)), u1003 = *(float *)((t1002 + 0x38)), !(0.0f > u1003)) || (t1004 = *(int *)(((int)stk + 900)), u1005 = *(float *)((t1004 + 0x10)), !(22.0f > u1005)))) {
                                                                    if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                        t1012 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                        if (10.0f > t1012) {
                                                                            t1013 = *(int *)(((int)stk + 992));
                                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1013 + 0xB6C)) = *(struct mv3 *)((t1013 + 0xBA8)); }
                                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                        }
                                                                    }
                                                                } else {
                                                                    t1028 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1028 + 0xB6C)) = *(struct mv3 *)((t1028 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        t1055 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1055 + 0xB6C)) = *(struct mv3 *)((t1055 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                } else {
                                                    if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t1069 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (10.0f > t1069) {
                                                            if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1081 = *(int *)(((int)stk + 900)), u1082 = *(float *)((t1081 + 0x38)), !(0.0f > u1082)) || (t1083 = *(int *)(((int)stk + 900)), u1084 = *(float *)((t1083 + 0x10)), !(22.0f > u1084)))) {
                                                                if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                    t1091 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                    if (10.0f > t1091) {
                                                                        t1092 = *(int *)(((int)stk + 992));
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1092 + 0xB6C)) = *(struct mv3 *)((t1092 + 0xBA8)); }
                                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                    }
                                                                }
                                                            } else {
                                                                t1107 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1107 + 0xB6C)) = *(struct mv3 *)((t1107 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t1147 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (10.0f > t1147) {
                                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1159 = *(int *)(((int)stk + 900)), u1160 = *(float *)((t1159 + 0x38)), !(0.0f > u1160)) || (t1161 = *(int *)(((int)stk + 900)), u1162 = *(float *)((t1161 + 0x10)), !(22.0f > u1162)))) {
                                                            if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                t1169 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                if (10.0f > t1169) {
                                                                    t1170 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1170 + 0xB6C)) = *(struct mv3 *)((t1170 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        } else {
                                                            t1185 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1185 + 0xB6C)) = *(struct mv3 *)((t1185 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                            u1238 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                        } else {
                                            u1238 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                        }
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                            u1248 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                        } else {
                                            u1248 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                        }
                                        if (u1248 > u1238) {
                                            t1250 = *(int *)(((int)stk + 992));
                                            if (!(0.0f > ((*(float *)((t1250 + 0xAE8))) - (*(float *)((t1250 + 0xBA8)))))) {
                                                t1253 = *(int *)(((int)stk + 992));
                                                u1264 = ((*(float *)((t1253 + 0xAE8))) - (*(float *)((t1253 + 0xBA8))));
                                            } else {
                                                t1256 = *(int *)(((int)stk + 992));
                                                u1264 = ((-(*(float *)((t1256 + 0xAE8)))) + (*(float *)((t1256 + 0xBA8))));
                                            }
                                            if (10.0f > u1264) {
                                                t1266 = *(int *)(((int)stk + 992));
                                                if (!(0.0f > ((*(float *)((t1266 + 0xAF0))) - (*(float *)((t1266 + 0xBB0)))))) {
                                                    t1269 = *(int *)(((int)stk + 992));
                                                    u1280 = ((*(float *)((t1269 + 0xAF0))) - (*(float *)((t1269 + 0xBB0))));
                                                } else {
                                                    t1272 = *(int *)(((int)stk + 992));
                                                    u1280 = ((-(*(float *)((t1272 + 0xAF0)))) + (*(float *)((t1272 + 0xBB0))));
                                                }
                                                if (!(30.0f > u1280)) {
                                                    if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t1286 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (10.0f > t1286) {
                                                            if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1298 = *(int *)(((int)stk + 900)), u1299 = *(float *)((t1298 + 0x38)), !(0.0f > u1299)) || (t1300 = *(int *)(((int)stk + 900)), u1301 = *(float *)((t1300 + 0x10)), !(22.0f > u1301)))) {
                                                                if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                    t1308 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                    if (10.0f > t1308) {
                                                                        t1309 = *(int *)(((int)stk + 992));
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1309 + 0xB6C)) = *(struct mv3 *)((t1309 + 0xBA8)); }
                                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                    }
                                                                }
                                                            } else {
                                                                t1324 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1324 + 0xB6C)) = *(struct mv3 *)((t1324 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t1351 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1351 + 0xB6C)) = *(struct mv3 *)((t1351 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            } else {
                                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t1365 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (10.0f > t1365) {
                                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1377 = *(int *)(((int)stk + 900)), u1378 = *(float *)((t1377 + 0x38)), !(0.0f > u1378)) || (t1379 = *(int *)(((int)stk + 900)), u1380 = *(float *)((t1379 + 0x10)), !(22.0f > u1380)))) {
                                                            if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                t1387 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                if (10.0f > t1387) {
                                                                    t1388 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1388 + 0xB6C)) = *(struct mv3 *)((t1388 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        } else {
                                                            t1403 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1403 + 0xB6C)) = *(struct mv3 *)((t1403 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t1443 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (10.0f > t1443) {
                                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1455 = *(int *)(((int)stk + 900)), u1456 = *(float *)((t1455 + 0x38)), !(0.0f > u1456)) || (t1457 = *(int *)(((int)stk + 900)), u1458 = *(float *)((t1457 + 0x10)), !(22.0f > u1458)))) {
                                                        if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t1465 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (10.0f > t1465) {
                                                                t1466 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1466 + 0xB6C)) = *(struct mv3 *)((t1466 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        t1481 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1481 + 0xB6C)) = *(struct mv3 *)((t1481 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                        u1534 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                    } else {
                                        u1534 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                    }
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                        u1544 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                    } else {
                                        u1544 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                    }
                                    if (u1544 > u1534) {
                                        t1546 = *(int *)(((int)stk + 992));
                                        if (!(0.0f > ((*(float *)((t1546 + 0xAE8))) - (*(float *)((t1546 + 0xBA8)))))) {
                                            t1549 = *(int *)(((int)stk + 992));
                                            u1560 = ((*(float *)((t1549 + 0xAE8))) - (*(float *)((t1549 + 0xBA8))));
                                        } else {
                                            t1552 = *(int *)(((int)stk + 992));
                                            u1560 = ((-(*(float *)((t1552 + 0xAE8)))) + (*(float *)((t1552 + 0xBA8))));
                                        }
                                        if (10.0f > u1560) {
                                            t1562 = *(int *)(((int)stk + 992));
                                            if (!(0.0f > ((*(float *)((t1562 + 0xAF0))) - (*(float *)((t1562 + 0xBB0)))))) {
                                                t1565 = *(int *)(((int)stk + 992));
                                                u1576 = ((*(float *)((t1565 + 0xAF0))) - (*(float *)((t1565 + 0xBB0))));
                                            } else {
                                                t1568 = *(int *)(((int)stk + 992));
                                                u1576 = ((-(*(float *)((t1568 + 0xAF0)))) + (*(float *)((t1568 + 0xBB0))));
                                            }
                                            if (!(30.0f > u1576)) {
                                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t1582 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (10.0f > t1582) {
                                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1594 = *(int *)(((int)stk + 900)), u1595 = *(float *)((t1594 + 0x38)), !(0.0f > u1595)) || (t1596 = *(int *)(((int)stk + 900)), u1597 = *(float *)((t1596 + 0x10)), !(22.0f > u1597)))) {
                                                            if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                t1604 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                if (10.0f > t1604) {
                                                                    t1605 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1605 + 0xB6C)) = *(struct mv3 *)((t1605 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        } else {
                                                            t1620 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1620 + 0xB6C)) = *(struct mv3 *)((t1620 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t1647 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1647 + 0xB6C)) = *(struct mv3 *)((t1647 + 0xBA8)); }
                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                            }
                                        } else {
                                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t1661 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (10.0f > t1661) {
                                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1673 = *(int *)(((int)stk + 900)), u1674 = *(float *)((t1673 + 0x38)), !(0.0f > u1674)) || (t1675 = *(int *)(((int)stk + 900)), u1676 = *(float *)((t1675 + 0x10)), !(22.0f > u1676)))) {
                                                        if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t1683 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (10.0f > t1683) {
                                                                t1684 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1684 + 0xB6C)) = *(struct mv3 *)((t1684 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        t1699 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1699 + 0xB6C)) = *(struct mv3 *)((t1699 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) == 1) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                            t1739 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                            if (10.0f > t1739) {
                                                if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1751 = *(int *)(((int)stk + 900)), u1752 = *(float *)((t1751 + 0x38)), !(0.0f > u1752)) || (t1753 = *(int *)(((int)stk + 900)), u1754 = *(float *)((t1753 + 0x10)), !(22.0f > u1754)))) {
                                                    if ((*(float *)(((int)stk + 732))) == 0.0f) {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t1761 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (10.0f > t1761) {
                                                            t1762 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t1762 + 0xB6C)) = *(struct mv3 *)((t1762 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    t1777 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t1777 + 0xB6C)) = *(struct mv3 *)((t1777 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if ((*(int *)(((int)stk + 80))) == 0) {
                } else {
                    if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 4) == 0) {
                    } else {
                        if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xCBC))) != 0) {
                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                t1878 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                if (!(10.0f > t1878)) {
                                } else {
                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t1890 = *(int *)(((int)stk + 900)), u1891 = *(float *)((t1890 + 0x38)), !(0.0f > u1891)) || (t1892 = *(int *)(((int)stk + 900)), u1893 = *(float *)((t1892 + 0x10)), !(22.0f > u1893)))) {
                                        if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                            t1900 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                            if (!(10.0f > t1900)) {
                                            } else {
                                                t1901 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t1901 + 0xB6C)) = *(struct mv3 *)((t1901 + 0xBA8)); }
                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                            }
                                        }
                                    } else {
                                        t1916 = *(int *)(((int)stk + 992));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1916 + 0xB6C)) = *(struct mv3 *)((t1916 + 0xBA8)); }
                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                    }
                                }
                            }
                        } else {
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                u1950 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                            } else {
                                u1950 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                            }
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                u1960 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                            } else {
                                u1960 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                            }
                            if (u1950 > u1960) {
                                t1962 = *(int *)(((int)stk + 992));
                                if (!(0.0f > ((*(float *)((t1962 + 0xAE8))) - (*(float *)((t1962 + 0xBA8)))))) {
                                    t1965 = *(int *)(((int)stk + 992));
                                    u1976 = ((*(float *)((t1965 + 0xAE8))) - (*(float *)((t1965 + 0xBA8))));
                                } else {
                                    t1968 = *(int *)(((int)stk + 992));
                                    u1976 = ((-(*(float *)((t1968 + 0xAE8)))) + (*(float *)((t1968 + 0xBA8))));
                                }
                                if (10.0f > u1976) {
                                    t1978 = *(int *)(((int)stk + 992));
                                    if (!(0.0f > ((*(float *)((t1978 + 0xAF0))) - (*(float *)((t1978 + 0xBB0)))))) {
                                        t1981 = *(int *)(((int)stk + 992));
                                        u1991 = ((*(float *)((t1981 + 0xAF0))) - (*(float *)((t1981 + 0xBB0))));
                                    } else {
                                        t1984 = *(int *)(((int)stk + 992));
                                        u1991 = ((-(*(float *)((t1984 + 0xAF0)))) + (*(float *)((t1984 + 0xBB0))));
                                    }
                                    if (20.0f > u1991) {
                                        t1993 = *(int *)(((int)stk + 992));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1993 + 0xB6C)) = *(struct mv3 *)((t1993 + 0xBA8)); }
                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                    } else {
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                            u2002 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                        } else {
                                            u2002 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                        }
                                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                            u2012 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                        } else {
                                            u2012 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                        }
                                        if (u2012 > u2002) {
                                            t2014 = *(int *)(((int)stk + 992));
                                            if (!(0.0f > ((*(float *)((t2014 + 0xAE8))) - (*(float *)((t2014 + 0xBA8)))))) {
                                                t2017 = *(int *)(((int)stk + 992));
                                                u2028 = ((*(float *)((t2017 + 0xAE8))) - (*(float *)((t2017 + 0xBA8))));
                                            } else {
                                                t2020 = *(int *)(((int)stk + 992));
                                                u2028 = ((-(*(float *)((t2020 + 0xAE8)))) + (*(float *)((t2020 + 0xBA8))));
                                            }
                                            if (10.0f > u2028) {
                                                t2030 = *(int *)(((int)stk + 992));
                                                if (!(0.0f > ((*(float *)((t2030 + 0xAF0))) - (*(float *)((t2030 + 0xBB0)))))) {
                                                    t2033 = *(int *)(((int)stk + 992));
                                                    u2043 = ((*(float *)((t2033 + 0xAF0))) - (*(float *)((t2033 + 0xBB0))));
                                                } else {
                                                    t2036 = *(int *)(((int)stk + 992));
                                                    u2043 = ((-(*(float *)((t2036 + 0xAF0)))) + (*(float *)((t2036 + 0xBB0))));
                                                }
                                                if (!(30.0f > u2043)) {
                                                    if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                                    } else {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t2049 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (!(10.0f > t2049)) {
                                                        } else {
                                                            if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2061 = *(int *)(((int)stk + 900)), u2062 = *(float *)((t2061 + 0x38)), !(0.0f > u2062)) || (t2063 = *(int *)(((int)stk + 900)), u2064 = *(float *)((t2063 + 0x10)), !(22.0f > u2064)))) {
                                                                if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                                } else {
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                    t2071 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                    if (!(10.0f > t2071)) {
                                                                    } else {
                                                                        t2072 = *(int *)(((int)stk + 992));
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2072 + 0xB6C)) = *(struct mv3 *)((t2072 + 0xBA8)); }
                                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                    }
                                                                }
                                                            } else {
                                                                t2087 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2087 + 0xB6C)) = *(struct mv3 *)((t2087 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    t2113 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2113 + 0xB6C)) = *(struct mv3 *)((t2113 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            } else {
                                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                                } else {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t2126 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (!(10.0f > t2126)) {
                                                    } else {
                                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2138 = *(int *)(((int)stk + 900)), u2139 = *(float *)((t2138 + 0x38)), !(0.0f > u2139)) || (t2140 = *(int *)(((int)stk + 900)), u2141 = *(float *)((t2140 + 0x10)), !(22.0f > u2141)))) {
                                                            if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                            } else {
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                t2148 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                if (!(10.0f > t2148)) {
                                                                } else {
                                                                    t2149 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2149 + 0xB6C)) = *(struct mv3 *)((t2149 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        } else {
                                                            t2164 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2164 + 0xB6C)) = *(struct mv3 *)((t2164 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                            } else {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t2202 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (!(10.0f > t2202)) {
                                                } else {
                                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2214 = *(int *)(((int)stk + 900)), u2215 = *(float *)((t2214 + 0x38)), !(0.0f > u2215)) || (t2216 = *(int *)(((int)stk + 900)), u2217 = *(float *)((t2216 + 0x10)), !(22.0f > u2217)))) {
                                                        if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                        } else {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t2224 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (!(10.0f > t2224)) {
                                                            } else {
                                                                t2225 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2225 + 0xB6C)) = *(struct mv3 *)((t2225 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        t2240 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2240 + 0xB6C)) = *(struct mv3 *)((t2240 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                        u2290 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                    } else {
                                        u2290 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                    }
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                        u2300 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                    } else {
                                        u2300 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                    }
                                    if (u2300 > u2290) {
                                        t2302 = *(int *)(((int)stk + 992));
                                        if (!(0.0f > ((*(float *)((t2302 + 0xAE8))) - (*(float *)((t2302 + 0xBA8)))))) {
                                            t2305 = *(int *)(((int)stk + 992));
                                            u2316 = ((*(float *)((t2305 + 0xAE8))) - (*(float *)((t2305 + 0xBA8))));
                                        } else {
                                            t2308 = *(int *)(((int)stk + 992));
                                            u2316 = ((-(*(float *)((t2308 + 0xAE8)))) + (*(float *)((t2308 + 0xBA8))));
                                        }
                                        if (10.0f > u2316) {
                                            t2318 = *(int *)(((int)stk + 992));
                                            if (!(0.0f > ((*(float *)((t2318 + 0xAF0))) - (*(float *)((t2318 + 0xBB0)))))) {
                                                t2321 = *(int *)(((int)stk + 992));
                                                u2331 = ((*(float *)((t2321 + 0xAF0))) - (*(float *)((t2321 + 0xBB0))));
                                            } else {
                                                t2324 = *(int *)(((int)stk + 992));
                                                u2331 = ((-(*(float *)((t2324 + 0xAF0)))) + (*(float *)((t2324 + 0xBB0))));
                                            }
                                            if (!(30.0f > u2331)) {
                                                if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                                } else {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t2337 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (!(10.0f > t2337)) {
                                                    } else {
                                                        if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2349 = *(int *)(((int)stk + 900)), u2350 = *(float *)((t2349 + 0x38)), !(0.0f > u2350)) || (t2351 = *(int *)(((int)stk + 900)), u2352 = *(float *)((t2351 + 0x10)), !(22.0f > u2352)))) {
                                                            if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                            } else {
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                                t2359 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                                if (!(10.0f > t2359)) {
                                                                } else {
                                                                    t2360 = *(int *)(((int)stk + 992));
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2360 + 0xB6C)) = *(struct mv3 *)((t2360 + 0xBA8)); }
                                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                                }
                                                            }
                                                        } else {
                                                            t2375 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2375 + 0xB6C)) = *(struct mv3 *)((t2375 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                }
                                            } else {
                                                t2401 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2401 + 0xB6C)) = *(struct mv3 *)((t2401 + 0xBA8)); }
                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                            }
                                        } else {
                                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                            } else {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t2414 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (!(10.0f > t2414)) {
                                                } else {
                                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2426 = *(int *)(((int)stk + 900)), u2427 = *(float *)((t2426 + 0x38)), !(0.0f > u2427)) || (t2428 = *(int *)(((int)stk + 900)), u2429 = *(float *)((t2428 + 0x10)), !(22.0f > u2429)))) {
                                                        if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                        } else {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t2436 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (!(10.0f > t2436)) {
                                                            } else {
                                                                t2437 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2437 + 0xB6C)) = *(struct mv3 *)((t2437 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        t2452 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2452 + 0xB6C)) = *(struct mv3 *)((t2452 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                            t2490 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                            if (!(10.0f > t2490)) {
                                            } else {
                                                if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2502 = *(int *)(((int)stk + 900)), u2503 = *(float *)((t2502 + 0x38)), !(0.0f > u2503)) || (t2504 = *(int *)(((int)stk + 900)), u2505 = *(float *)((t2504 + 0x10)), !(22.0f > u2505)))) {
                                                    if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                    } else {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t2512 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (!(10.0f > t2512)) {
                                                        } else {
                                                            t2513 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2513 + 0xB6C)) = *(struct mv3 *)((t2513 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    t2528 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2528 + 0xB6C)) = *(struct mv3 *)((t2528 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                    u2578 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                } else {
                                    u2578 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))))) {
                                    u2588 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0)));
                                } else {
                                    u2588 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBB0))));
                                }
                                if (u2588 > u2578) {
                                    t2590 = *(int *)(((int)stk + 992));
                                    if (!(0.0f > ((*(float *)((t2590 + 0xAE8))) - (*(float *)((t2590 + 0xBA8)))))) {
                                        t2593 = *(int *)(((int)stk + 992));
                                        u2604 = ((*(float *)((t2593 + 0xAE8))) - (*(float *)((t2593 + 0xBA8))));
                                    } else {
                                        t2596 = *(int *)(((int)stk + 992));
                                        u2604 = ((-(*(float *)((t2596 + 0xAE8)))) + (*(float *)((t2596 + 0xBA8))));
                                    }
                                    if (10.0f > u2604) {
                                        t2606 = *(int *)(((int)stk + 992));
                                        if (!(0.0f > ((*(float *)((t2606 + 0xAF0))) - (*(float *)((t2606 + 0xBB0)))))) {
                                            t2609 = *(int *)(((int)stk + 992));
                                            u2619 = ((*(float *)((t2609 + 0xAF0))) - (*(float *)((t2609 + 0xBB0))));
                                        } else {
                                            t2612 = *(int *)(((int)stk + 992));
                                            u2619 = ((-(*(float *)((t2612 + 0xAF0)))) + (*(float *)((t2612 + 0xBB0))));
                                        }
                                        if (!(30.0f > u2619)) {
                                            if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                            } else {
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                t2625 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                if (!(10.0f > t2625)) {
                                                } else {
                                                    if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2637 = *(int *)(((int)stk + 900)), u2638 = *(float *)((t2637 + 0x38)), !(0.0f > u2638)) || (t2639 = *(int *)(((int)stk + 900)), u2640 = *(float *)((t2639 + 0x10)), !(22.0f > u2640)))) {
                                                        if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                        } else {
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                            t2647 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                            if (!(10.0f > t2647)) {
                                                            } else {
                                                                t2648 = *(int *)(((int)stk + 992));
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2648 + 0xB6C)) = *(struct mv3 *)((t2648 + 0xBA8)); }
                                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                            }
                                                        }
                                                    } else {
                                                        t2663 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2663 + 0xB6C)) = *(struct mv3 *)((t2663 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            }
                                        } else {
                                            t2689 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2689 + 0xB6C)) = *(struct mv3 *)((t2689 + 0xBA8)); }
                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                        }
                                    } else {
                                        if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                        } else {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                            t2702 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                            if (!(10.0f > t2702)) {
                                            } else {
                                                if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2714 = *(int *)(((int)stk + 900)), u2715 = *(float *)((t2714 + 0x38)), !(0.0f > u2715)) || (t2716 = *(int *)(((int)stk + 900)), u2717 = *(float *)((t2716 + 0x10)), !(22.0f > u2717)))) {
                                                    if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                    } else {
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                        t2724 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                        if (!(10.0f > t2724)) {
                                                        } else {
                                                            t2725 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2725 + 0xB6C)) = *(struct mv3 *)((t2725 + 0xBA8)); }
                                                            *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                        }
                                                    }
                                                } else {
                                                    t2740 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t2740 + 0xB6C)) = *(struct mv3 *)((t2740 + 0xBA8)); }
                                                    *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if ((*(int *)((0xCBC + (*(int *)(((int)stk + 992)))))) != 1) {
                                    } else {
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                        t2778 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                        if (!(10.0f > t2778)) {
                                        } else {
                                            if (((*(int *)((0x4C + (*(int *)(((int)stk + 900)))))) != 1) && ((t2790 = *(int *)(((int)stk + 900)), u2791 = *(float *)((t2790 + 0x38)), !(0.0f > u2791)) || (t2792 = *(int *)(((int)stk + 900)), u2793 = *(float *)((t2792 + 0x10)), !(22.0f > u2793)))) {
                                                if ((*(float *)(((int)stk + 732))) != 0.0f) {
                                                } else {
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)); }
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((0xAE8 + (*(int *)(((int)stk + 992))))); }
                                                    t2800 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                                    if (!(10.0f > t2800)) {
                                                    } else {
                                                        t2801 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t2801 + 0xB6C)) = *(struct mv3 *)((t2801 + 0xBA8)); }
                                                        *(unsigned int *)(((int)stk + 700)) = 0x1;
                                                    }
                                                }
                                            } else {
                                                t2816 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t2816 + 0xB6C)) = *(struct mv3 *)((t2816 + 0xBA8)); }
                                                *(unsigned int *)(((int)stk + 700)) = 0x1;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (!(0.0f > ((*(float *)(((int)stk + 920))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8)))))) {
                u2905 = ((*(float *)(((int)stk + 920))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))));
            } else {
                u2905 = ((-(*(float *)(((int)stk + 920)))) + (*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))));
            }
            *(float *)(((int)stk + 740)) = u2905;
            if (10.0f > u2905) {
                *(float *)(((int)stk + 740)) = 10.0f;
            }
            if ((*(int *)0x8C287C60) == 0) {
                t2913 = *(int *)(((int)stk + 992));
                if (!(0.0f > (*(float *)(((0xAF0 + t2913) + 0x0))))) {
                    u2921 = (*(float *)(((0xAF0 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0)));
                } else {
                    u2921 = (-(*(float *)(((0xAF0 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                }
                *(float *)((t2913 + 0xC90)) = ((*(float *)((t2913 + 0xC90))) + ((((-(u2921 / 118.849998f)) + (1.0f + 1.0f)) * 0.219999999f) / (*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0)))));
            }
            if ((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 992)))))) << 2)))) == 1) {
                u2937 = *(float *)((0xC90 + (*(int *)(((int)stk + 992)))));
                u2939 = *(float *)((0x8C102BC0 + (((eepromGetDiff()) << 2) << 1)));
                if (u2937 > (u2939 * 1.25f)) {
                    *(float *)(((0xC90 + (*(int *)(((int)stk + 992)))) + 0x0)) = ((*(float *)((0x8C102BC0 + (((eepromGetDiff()) << 2) << 1)))) * 1.5f);
                    t2943 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t2943 + 0xB60)) = ((*(int *)((t2943 + 0xB60))) | 0x10000);
                }
            } else {
                if ((*(float *)((0xC90 + (*(int *)(((int)stk + 992)))))) > 1.25f) {
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 1.5f;
                    t2957 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t2957 + 0xB60)) = ((*(int *)((t2957 + 0xB60))) | 0x10000);
                }
            }
        }
        if ((*(int *)(((int)stk + 700))) == 0) {
            t3001 = 0x1;
            if ((*(float *)((0xB74 + (*(int *)(((int)stk + 992)))))) > 0.0f) {
            } else {
                t2997 = 0x0;
                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)))) {
                    t2997 = 0xFFFFFFFF;
                }
                t3001 = t2997;
            }
            if ((float)t3001 != (*(float *)(((*(int *)(((int)stk + 992))) + 0xB00)))) {
                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))))) {
                    u3016 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)));
                } else {
                    u3016 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))));
                }
                if (25.0f > u3016) {
                    t3018 = *(int *)(((int)stk + 992));
                    *(float *)((t3018 + 0xB74)) = (-((*(float *)((t3018 + 0xB00))) * 25.0f));
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD50)) = 0x5;
                }
            } else {
                t3027 = *(int *)(((int)stk + 992));
                *(float *)((t3027 + 0xB74)) = (-((*(float *)((t3027 + 0xB00))) * 25.0f));
                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD50)) = 0x5;
            }
        }
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))))) {
            u3051 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C)));
        } else {
            u3051 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB6C))));
        }
        if (u3051 > (float)((*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8))) - 10)) {
            t3059 = *(int *)(((int)stk + 992));
            t3068 = 0x1;
            if ((*(float *)((t3059 + 0xB6C))) > 0.0f) {
            } else {
                t3065 = 0x0;
                if (0.0f > (*(float *)((0xB6C + (*(int *)(((int)stk + 992))))))) {
                    t3065 = 0xFFFFFFFF;
                }
                t3068 = t3065;
            }
            *(float *)((t3059 + 0xB6C)) = (float)(t3068 * ((*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11B8))) - 10));
        }
        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))))) {
            u3089 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB74)));
        } else {
            u3089 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB74))));
        }
        t3092 = *(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11BC));
        t3112 = (t3092 - 10);
        if (u3089 > (float)(t3092 - 10)) {
            t3097 = *(int *)(((int)stk + 992));
            t3106 = 0x1;
            if ((*(float *)((t3097 + 0xB74))) > 0.0f) {
            } else {
                t3103 = 0x0;
                if (0.0f > (*(float *)((0xB74 + (*(int *)(((int)stk + 992))))))) {
                    t3103 = 0xFFFFFFFF;
                }
                t3106 = t3103;
            }
            *(float *)((t3097 + 0xB74)) = (float)(t3106 * ((*(int *)(((((*(int *)0x8C1891E8) << 2) << 1) + 0x8C1D11BC))) - 10));
            t3112 = t3097;
        }
        t3408 = t3112;
        if ((*(int *)0x8C287C60) != 0) {
        } else {
            *(unsigned int *)(((int)stk + 724)) = (((((((*(short *)((0xD46 + (*(int *)(((int)stk + 992)))))) & 64) == 0)) ? 1 : 0) ^ 0x1) - ((((((*(short *)((0xD46 + (*(int *)(((int)stk + 992)))))) & 128) == 0)) ? 1 : 0) ^ 0x1));
            *(float *)(((int)stk + 748)) = ((*(float *)(((((*(int *)(((0xC6C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + (0x8C102444 + ((*(int *)((0xC58 + (*(int *)(((int)stk + 992)))))) * 0x6C))) + 0x0))) * (*(float *)0x8C23D204));
            if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) != 0) {
                t3136 = 0xB9C;
                t3137 = (*(int *)(((int)stk + 992)));
                u3138 = (*(float *)0x8C287B40);
            } else {
                t3136 = 0xAE8;
                t3137 = (*(int *)(((int)stk + 992)));
                u3138 = (*(float *)0x8C287B40);
            }
            *(float *)(((int)stk + 740)) = ((*(float *)((t3137 + t3136))) / u3138);
            u3141 = *(float *)(((int)stk + 740));
            u3142 = u3141;
            if (0.0f > u3141) {
                u3142 = (-u3141);
            }
            if (u3142 > 0.949999988f) {
                u3145 = *(float *)(((int)stk + 740));
                t3148 = 0x1;
                if (u3145 > 0.0f) {
                } else {
                    t3146 = 0x0;
                    if (0.0f > u3145) {
                        t3146 = 0xFFFFFFFF;
                    }
                    t3148 = t3146;
                }
                *(float *)(((int)stk + 740)) = ((float)t3148 * 0.949999988f);
            }
            if ((*(int *)(((int)stk + 724))) == 0) {
                t3156 = *(int *)(((int)stk + 992));
                u3161 = (*(float *)((t3156 + 0xB90)));
                u3161 = u3161 + (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))) * ((*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0))) - (*(float *)(((0xB90 + t3156) + 0x0))));
                *(float *)((t3156 + 0xB90)) = u3161;
            } else {
                t3163 = *(int *)(((int)stk + 992));
                u3169 = (*(float *)((t3163 + 0xB90)));
                u3169 = u3169 + (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))) * (((((float)(*(int *)(((0x290 + ((int)stk + 68)) + 0x0))) * (*(float *)(((0xB00 + t3163) + 0x0))))) * 0.949999988f) - (*(float *)(((0xB90 + t3163) + 0x0))));
                *(float *)((t3163 + 0xB90)) = u3169;
                u3171 = 0.300000012f;
                u3171 = u3171 + 3.29999995f * (*(float *)(((int)stk + 748)));
                *(float *)(((int)stk + 728)) = u3171;
                t3173 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                if (((*(int *)((((((t3173 << 1) + t3173) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) {
                    *(float *)(((int)stk + 728)) = ((*(float *)(((int)stk + 728))) * 1.25f);
                }
                t3184 = *(int *)(((0x39C + ((int)stk + 68)) + 0x0));
                if (((((((*(int *)((0xC6C + (*(int *)(((int)stk + 992)))))) + (*(int *)(((0xD4C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0)))) & 1) == 0)) ? 1 : 0) == (((0.0f > (((*(float *)(((0xB90 + t3184) + 0x0))) - (*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0)))) * (*(float *)(((0xB00 + t3184) + 0x0)))))) ? 1 : 0)) {
                    *(float *)(((int)stk + 728)) = ((*(float *)(((int)stk + 728))) * 0.800000012f);
                }
                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x100) == 0) {
                } else {
                    if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB90))) - (*(float *)(((int)stk + 740)))))) {
                        u3208 = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB90))) - (*(float *)(((int)stk + 740))));
                    } else {
                        u3208 = ((-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB90)))) + (*(float *)(((int)stk + 740))));
                    }
                    if ((*(float *)(((int)stk + 728))) > u3208) {
                        t3211 = *(int *)(((int)stk + 992));
                        u3216 = (*(float *)(((int)stk + 740)));
                        u3216 = u3216 + (*(float *)(((int)stk + 728))) * ((float)(*(int *)(((int)stk + 724))) * (*(float *)((t3211 + 0xB00))));
                        *(float *)((t3211 + 0xB90)) = u3216;
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB90))))) {
                            u3225 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB90)));
                        } else {
                            u3225 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB90))));
                        }
                        if (u3225 > 0.949999988f) {
                            t3231 = *(int *)(((int)stk + 992));
                            t3240 = 0x1;
                            if ((*(float *)((t3231 + 0xB90))) > 0.0f) {
                            } else {
                                t3237 = 0x0;
                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB90)))) {
                                    t3237 = 0xFFFFFFFF;
                                }
                                t3240 = t3237;
                            }
                            *(float *)((t3231 + 0xB90)) = ((float)t3240 * 0.949999988f);
                        }
                    }
                }
            }
            t3282 = *(short *)((0xD46 + (*(int *)(((int)stk + 992)))));
            t3284 = *(short *)((0xD46 + (*(int *)(((int)stk + 992)))));
            *(unsigned int *)(((int)stk + 724)) = ((((((t3282 & 16) == 0)) ? 1 : 0) ^ 0x1) - (((((t3284 & 32) == 0)) ? 1 : 0) ^ 0x1));
            if (((((((t3282 & 16) == 0)) ? 1 : 0) ^ 0x1) - (((((t3284 & 32) == 0)) ? 1 : 0) ^ 0x1)) == 1) {
                *(float *)(((int)stk + 68)) = 0.800000012f;
                if (((*(int *)0x8C287D5C) == 3) && (t3286 = *(int *)0x8C2FBEA8, t3286 == 6)) {
                    *(float *)(((int)stk + 68)) = 1.20000005f;
                }
                t3290 = *(int *)(((int)stk + 992));
                u3297 = (*(float *)((t3290 + 0xB98)));
                u3297 = u3297 + 1.60000002f * (((((*(float *)(((0xB00 + t3290) + 0x0))) * (*(float *)(((int)stk + 68)))) - (*(float *)(((0xB98 + t3290) + 0x0))))) * (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))));
                *(float *)((t3290 + 0xB98)) = u3297;
                t3397 = 0x3FCCCCCD;
            } else {
                if (((((((t3282 & 16) == 0)) ? 1 : 0) ^ 0x1) - (((((t3284 & 32) == 0)) ? 1 : 0) ^ 0x1)) == -1) {
                    t3298 = *(int *)(((int)stk + 992));
                    *(int *)((int)stk + 64) = (0xB98 + t3298);
                    t3301 = *(int *)(((0xC5C + (*(int *)(((0x3A0 + ((int)stk + 64)) + 0x0)))) + 0x0));
                    t3304 = *(int *)(((0xC5C + (*(int *)(((0x3A0 + ((int)stk + 64)) + 0x0)))) + 0x0));
                    u3306 = ((float)(-((((((*(int *)(((0x8C105FE0 + ((((t3304 << 1) + t3304) << 2) << 1)) + 0x0))) & 0x2000) == 0)) ? 1 : 0) - 1)) * 0.200000003f);
                    u3306 = u3306 + 0.400000006f * (float)(-((((((*(int *)(((0x8C105FE0 + ((((t3301 << 1) + t3301) << 2) << 1)) + 0x0))) & 0x10000) == 0)) ? 1 : 0) - 1));
                    u3313 = (*(float *)(((0xB98 + t3298) + 0x0)));
                    u3313 = u3313 + 1.20000005f * ((((-((*(float *)(((*(int *)(((0x3A0 + ((int)stk + 64)) + 0x0))) + 0xB00))) * (u3306 + 0.5f))) - (*(float *)(((*(int *)(((0x3A0 + ((int)stk + 64)) + 0x0))) + 0xB98))))) * (*(float *)(((int)stk + 748))));
                    *(float *)(((0xB98 + t3298) + 0x0)) = u3313;
                    t3385 = (0x3A0 + ((int)stk + 64));
                } else {
                    u3318 = (*(float *)(((0xAF0 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0)));
                    u3318 = u3318 + 178.274994f * (*(float *)((0xB00 + (*(int *)(((int)stk + 992))))));
                    *(float *)(((int)stk + 740)) = u3318;
                    t3323 = 0x1;
                    if (u3318 > 0.0f) {
                    } else {
                        t3321 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 740)))) {
                            t3321 = 0xFFFFFFFF;
                        }
                        t3323 = t3321;
                    }
                    t3336 = 0x1;
                    if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))) > 0.0f) {
                    } else {
                        t3333 = 0x0;
                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)))) {
                            t3333 = 0xFFFFFFFF;
                        }
                        t3336 = t3333;
                    }
                    if (t3323 != t3336) {
                        if (!(0.0f > (*(float *)(((int)stk + 740))))) {
                            u3343 = (*(float *)(((int)stk + 740)));
                        } else {
                            u3343 = (-(*(float *)(((int)stk + 740))));
                        }
                        if (29.7124996f > u3343) {
                            *(float *)(((int)stk + 740)) = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) * 29.7124996f);
                        }
                    } else {
                        *(float *)(((int)stk + 740)) = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) * 29.7124996f);
                    }
                    t3359 = *(int *)(((int)stk + 992));
                    u3360 = *(float *)((t3359 + 0xB00));
                    u3361 = *(float *)(((int)stk + 740));
                    u3362 = *(float *)((t3359 + 0xB00));
                    *(float *)(((int)stk + 740)) = (((u3361 / ((u3360 * 118.849998f) / (1.0f + 1.0f))) + (-1.0f)) / u3362);
                    if (!(0.0f > (((u3361 / ((u3360 * 118.849998f) / (1.0f + 1.0f))) + (-1.0f)) / u3362))) {
                        u3365 = (*(float *)(((int)stk + 740)));
                    } else {
                        u3365 = (-(*(float *)(((int)stk + 740))));
                    }
                    if (u3365 > 0.800000012f) {
                        u3368 = *(float *)(((int)stk + 740));
                        t3371 = 0x1;
                        if (u3368 > 0.0f) {
                        } else {
                            t3369 = 0x0;
                            if (0.0f > u3368) {
                                t3369 = 0xFFFFFFFF;
                            }
                            t3371 = t3369;
                        }
                        *(float *)(((int)stk + 740)) = ((float)t3371 * 0.800000012f);
                    }
                    t3378 = *(int *)(((int)stk + 992));
                    u3383 = (*(float *)((t3378 + 0xB98)));
                    u3383 = u3383 + 1.60000002f * (((*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0))) - (*(float *)(((0xB98 + t3378) + 0x0)))) * (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))));
                    *(float *)((t3378 + 0xB98)) = u3383;
                    t3385 = 0x3FCCCCCD;
                }
                t3397 = t3385;
            }
            t3408 = t3397;
        }
        *(unsigned int *)(((int)stk + 724)) = 0x0;
        t3418 = t3408;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 724))) >= (int)0x4) {
                break;
            }
            t3418 = (*(int *)(((int)stk + 992)));
            t3422 = *(int *)(((int)stk + 724));
            t3418 = (t3418 + 0xBE0);
            t3418 = (t3418 + (((t3422 << 1) + t3422) << 2));
            t3424 = *(int *)(((int)stk + 724));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t3418) = *(struct mv3 *)((((*(int *)(((int)stk + 992))) + 0xC10) + (((t3424 << 1) + t3424) << 2))); }
            t3418 = 0x290;
            t3418 = (t3418 + ((int)stk + 68));
            *(unsigned int *)((t3418 + 0x0)) = ((*(int *)(((int)stk + 724))) + 0x1);
        }
        if ((*(int *)0x8C287C60) == 0) {
            motionAdvance((*(int *)(((int)stk + 992))));
        }
        if (((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xCB0))) <= 0) && (t3439 = *(int *)(((int)stk + 992)), t3440 = *(int *)((0xC98 + t3439)), t3440 == 12)) {
        } else {
            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x100) != 0) {
                if ((*(int *)0x8C287C60) == 0) {
                    t3448 = *(int *)(((int)stk + 992));
                    t3449 = *(int *)((t3448 + 0xD70));
                    *(unsigned int *)((t3448 + 0xD70)) = (t3449 - 1);
                    if ((t3449 - 1) == 0) {
                        t3450 = nlRandom();
                        exprPlayB((*(int *)(((int)stk + 992))), (*(int *)(((*(int *)(((int)stk + 992))) + 0xD74))), (int)(t3450 * 3.0f));
                    }
                }
                t3471 = *(int *)(((int)stk + 992));
                t3474 = *(int *)((t3471 + 0xC74));
                if (!((float)(*(int *)((((((*(int *)(((0xC6C + t3471) + 0x0))) * 0x6C) + (((*(int *)((t3471 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3474 << 2) << 1) + t3474) << 2)) + 0x8))) > (*(float *)((t3471 + 0xC))))) {
                    *(float *)(((int)stk + 644)) = 1.0f;
                } else {
                    if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x4000) != 0) {
                        *(float *)(((int)stk + 644)) = (*(float *)(((*(int *)(((int)stk + 992))) + 0xC70)));
                    } else {
                        t3484 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                        if (((*(int *)((((((t3484 << 1) + t3484) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                            t3488 = 0xC54;
                            t3489 = (*(int *)(((int)stk + 992)));
                        } else {
                            t3488 = 0xC50;
                            t3489 = (*(int *)(((int)stk + 992)));
                        }
                        *(float *)(((int)stk + 744)) = ((float)(*(int *)((t3489 + t3488))) * (*(float *)0x8C23D204));
                        if (1.0f > (*(float *)(((int)stk + 744)))) {
                            *(float *)(((int)stk + 744)) = 1.0f;
                        }
                        t3495 = *(int *)(((int)stk + 992));
                        t3498 = *(int *)((t3495 + 0xC74));
                        *(float *)(((int)stk + 644)) = (((*(float *)((t3495 + 0xC70))) + (((float)(*(int *)((((((*(int *)(((0xC6C + t3495) + 0x0))) * 0x6C) + (((*(int *)((t3495 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3498 << 2) << 1) + t3498) << 2)) + 0x8))) - (*(float *)((t3495 + 0xC)))) / (*(float *)((t3495 + 0xC70))))) - (*(float *)(((int)stk + 744))));
                        t3505 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                        if (((*(int *)((0x8C105FE0 + ((((t3505 << 1) + t3505) << 2) << 1)))) & 16) == 0) {
                            if ((*(float *)(((int)stk + 644))) > 2.5f) {
                                *(float *)(((int)stk + 644)) = 2.5f;
                            }
                            if (0.75f > (*(float *)(((int)stk + 644)))) {
                                *(float *)(((int)stk + 644)) = 0.75f;
                            }
                        } else {
                            if ((*(float *)(((int)stk + 644))) > (1.0f + 1.0f)) {
                                *(float *)(((int)stk + 644)) = (1.0f + 1.0f);
                            }
                            if (1.0f > (*(float *)(((int)stk + 644)))) {
                                *(float *)(((int)stk + 644)) = 1.0f;
                            }
                        }
                    }
                }
                if (((*(int *)(((*(int *)(((int)stk + 904))) + 0x10))) == 4) && ((t3539 = *(int *)(((int)stk + 992)), t3540 = *(int *)((0xB60 + t3539)), (t3540 & 1) == 0) && (t3541 = *(int *)(((int)stk + 904)), t3542 = *(int *)((t3541 + 0x2C)), t3543 = *(int *)(((int)stk + 992)), t3544 = *(int *)((t3543 + 0xB5C)), t3542 != t3544))) {
                    if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x30))) == (1.0f + 1.0f)) {
                        t3548 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                        if (((*(int *)((0x8C105FE0 + ((((t3548 << 1) + t3548) << 2) << 1)))) & 4) != 0) {
                            *(unsigned int *)(((int)stk + 72)) = 0x1;
                        }
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC7C)) = 0.0f;
                    }
                }
                *(float *)(((*(int *)(((int)stk + 992))) + 0x14)) = ((*(float *)0x8C23D204) * (*(float *)(((int)stk + 644))));
                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x4000) != 0) {
                } else {
                    t3575 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                    if (!(0.0f > ((float)(*(int *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3575 << 2) << 1) + t3575) << 2)) + 0x8))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xC)))))) {
                        t3584 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                        u3600 = ((float)(*(int *)((((((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3584 << 2) << 1) + t3584) << 2)) + 0x8))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))));
                    } else {
                        t3593 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                        u3600 = ((-(float)(*(int *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3593 << 2) << 1) + t3593) << 2)) + 0x8)))) + (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))));
                    }
                    if (u3600 > (12.0f / (*(float *)0x8C23D204))) {
                    } else {
                        if ((*(int *)(((int)stk + 72))) == 1) {
                        } else {
                            t3607 = *(int *)(((int)stk + 992));
                            t3610 = *(int *)((t3607 + 0xC74));
                            if (!(0.0f > ((float)(*(int *)((((((*(int *)(((0xC6C + t3607) + 0x0))) * 0x6C) + (((*(int *)((t3607 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3610 << 2) << 1) + t3610) << 2)) + 0x8))) - (*(float *)((t3607 + 0xC)))))) {
                                t3618 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                                u3635 = ((float)(*(int *)((((((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3618 << 2) << 1) + t3618) << 2)) + 0x8))) - (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))));
                            } else {
                                t3627 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                                u3635 = ((-(float)(*(int *)((((((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3627 << 2) << 1) + t3627) << 2)) + 0x8)))) + (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))));
                            }
                            *(float *)((t3607 + 0xC7C)) = (((-(u3635 * (*(float *)0x8C23D204))) + 12.0f) / 12.0f);
                        }
                        if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xC7C))) > 1.0f) {
                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC7C)) = 1.0f;
                        }
                        *(unsigned int *)(((int)stk + 124)) = 0x1;
                        playerSolveArmReach((*(int *)(((int)stk + 992))), 0x0);
                    }
                }
                t3677 = *(int *)(((int)stk + 992));
                t3680 = *(int *)((t3677 + 0xC74));
                if (((*(float *)((t3677 + 0xC))) > (float)((*(int *)((((((*(int *)(((0xC6C + t3677) + 0x0))) * 0x6C) + (((*(int *)((t3677 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3680 << 2) << 1) + t3680) << 2)) + 0x8))) + 0x5)) && (((t3683 = *(int *)(((int)stk + 992)), t3684 = *(short *)((t3683 + 0xD46)), t3684 != 0) && (t3685 = *(int *)(((int)stk + 992)), t3686 = *(short *)((t3685 + 0xD46)), t3687 = *(short *)((t3685 + 0xD4A)), t3686 != t3687)) || ((t3688 = *(int *)(((int)stk + 992)), t3689 = *(short *)((t3688 + 0xD44)), t3689 != 0) && (t3690 = *(int *)(((int)stk + 992)), t3691 = *(short *)((t3690 + 0xD44)), t3692 = *(short *)((t3690 + 0xD48)), t3691 != t3692)))) {
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xCB4)) = 0.75f;
                }
                if ((*(int *)0x8C287C60) == 0) {
                    t3701 = *(int *)(((int)stk + 992));
                    u3704 = (*(float *)((t3701 + 0xC)));
                    u3704 = u3704 + (*(float *)0x8C23D204) * (*(float *)(((0xCB4 + t3701) + 0x0)));
                    *(float *)((t3701 + 0xC)) = u3704;
                }
                if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xCB4))) > 0.0f) {
                    t3714 = *(int *)(((int)stk + 992));
                    *(float *)((t3714 + 0xCB4)) = ((*(float *)((t3714 + 0xCB4))) - ((*(float *)0x8C23D204) * 0.100000001f));
                }
                t3724 = *(int *)(((int)stk + 992));
                t3727 = *(int *)((t3724 + 0xC74));
                if (!((float)((*(int *)((((((*(int *)(((0xC6C + t3724) + 0x0))) * 0x6C) + (((*(int *)((t3724 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3727 << 2) << 1) + t3727) << 2)) + 0xC))) - 1) > (*(float *)((t3724 + 0xC))))) {
                    t3730 = *(int *)(((int)stk + 992));
                    t3733 = *(int *)((t3730 + 0xC74));
                    *(float *)((t3730 + 0xC)) = (float)((*(int *)((((((*(int *)(((0xC6C + t3730) + 0x0))) * 0x6C) + (((*(int *)((t3730 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3733 << 2) << 1) + t3733) << 2)) + 0xC))) - 1);
                }
                t3744 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                if ((((*(int *)((((((t3744 << 1) + t3744) << 2) << 1) + 0x8C105FE0))) & 0x40000) == 0) && (t3746 = *(int *)(((int)stk + 992)), t3747 = *(short *)((0xD44 + t3746)), t3747 == 2)) {
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC64)) = 0x1;
                }
                t3754 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                if (((*(int *)((0x8C105FE0 + ((((t3754 << 1) + t3754) << 2) << 1)))) & 1) == 0) {
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                    t3757 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3757 + 0xB60)) = ((*(int *)((t3757 + 0xB60))) & 0xFFFEFFFF);
                }
                if ((*(int *)0x8C287C60) == 0) {
                    t3766 = *(int *)(((int)stk + 992));
                    *(unsigned short *)(((0xB06 + t3766) + 0x0)) = (angLerp((*(short *)((t3766 + 0xB06))), (*(short *)((t3766 + 0xB0E))), ((*(float *)0x8C23D204) * 0.100000001f)));
                    playerPivotTurn((*(int *)(((int)stk + 992))), 0x1, 0x0, 0x0, ((int)stk + 56));
                }
                if ((*(int *)(((int)stk + 72))) != 0) {
                    if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                    } else {
                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                            t3789 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                            *(float *)((0x8C287BA0 + (((((t3789 & 0x1) << 2) << 1) + (t3789 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t3789 & 0x1) << 2) << 1) + (t3789 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                        }
                        t3800 = *(int *)(((int)stk + 992));
                        *(float *)((t3800 + 0xC90)) = ((*(float *)((t3800 + 0xC90))) * 0.25f);
                    }
                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                    }
                    t3815 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3815 + 0xB60)) = ((*(int *)((t3815 + 0xB60))) & 0xFFFEFFFF);
                    t3817 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3817 + 0xB60)) = ((*(int *)((t3817 + 0xB60))) & 0xFFFFFEFF);
                    t3819 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3819 + 0xB60)) = ((*(int *)((t3819 + 0xB60))) & 0xFFFFFBFF);
                    t3821 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3821 + 0xB60)) = ((*(int *)((t3821 + 0xB60))) & 0xFFFFFDFF);
                    t3823 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t3823 + 0xB60)) = ((*(int *)((t3823 + 0xB60))) & 0xFFFFBFFF);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                    t3826 = vecLength(*(Stk3 *)(((int)stk + 56)));
                    if (0.5f > t3826) {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                    } else {
                        t3828 = *(int *)(((int)stk + 992));
                        t3829 = *(short *)((t3828 + 0xB04));
                        t3830 = *(short *)((t3828 + 0xB0C));
                        t3832 = (unsigned short)((t3830 - t3829) + 0x1000);
                        if ((int)(unsigned short)((t3830 - t3829) + 0x1000) < 0) {
                            t3832 = ((unsigned short)((t3830 - t3829) + 0x1000) + 0x1FFF);
                        }
                        *(unsigned int *)((t3828 + 0xB58)) = (((int)t3832 >> 13) + 0x21);
                    }
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                    t3840 = *(int *)(((int)stk + 992));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t3840 + 0xB6C)) = *(struct mv3 *)((t3840 + 0xAE8)); }
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                } else {
                    t3847 = motionIsEnd((*(int *)(((int)stk + 992))));
                    if (t3847 != 0) {
                        if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                        } else {
                            if (((*(int *)0x8C287B3C) & 1) == 0) {
                                t3854 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                *(float *)((0x8C287BA0 + (((((t3854 & 0x1) << 2) << 1) + (t3854 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t3854 & 0x1) << 2) << 1) + (t3854 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                            }
                            t3865 = *(int *)(((int)stk + 992));
                            *(float *)((t3865 + 0xC90)) = ((*(float *)((t3865 + 0xC90))) * 0.25f);
                        }
                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                        }
                        t3880 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t3880 + 0xB60)) = ((*(int *)((t3880 + 0xB60))) & 0xFFFEFFFF);
                        t3882 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t3882 + 0xB60)) = ((*(int *)((t3882 + 0xB60))) & 0xFFFFFEFF);
                        t3884 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t3884 + 0xB60)) = ((*(int *)((t3884 + 0xB60))) & 0xFFFFFBFF);
                        t3886 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t3886 + 0xB60)) = ((*(int *)((t3886 + 0xB60))) & 0xFFFFFDFF);
                        t3888 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t3888 + 0xB60)) = ((*(int *)((t3888 + 0xB60))) & 0xFFFFBFFF);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                        t3891 = vecLength(*(Stk3 *)(((int)stk + 56)));
                        if (0.5f > t3891) {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                        } else {
                            t3893 = *(int *)(((int)stk + 992));
                            t3894 = *(short *)((t3893 + 0xB04));
                            t3895 = *(short *)((t3893 + 0xB0C));
                            t3897 = (unsigned short)((t3895 - t3894) + 0x1000);
                            if ((int)(unsigned short)((t3895 - t3894) + 0x1000) < 0) {
                                t3897 = ((unsigned short)((t3895 - t3894) + 0x1000) + 0x1FFF);
                            }
                            *(unsigned int *)((t3893 + 0xB58)) = (((int)t3897 >> 13) + 0x21);
                        }
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                        t3905 = *(int *)(((int)stk + 992));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t3905 + 0xB6C)) = *(struct mv3 *)((t3905 + 0xAE8)); }
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                    } else {
                        t3911 = *(int *)(((int)stk + 992));
                        t3914 = *(int *)((t3911 + 0xC74));
                        if (!((float)((*(int *)((((((*(int *)(((0xC6C + t3911) + 0x0))) * 0x6C) + (((*(int *)((t3911 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t3914 << 2) << 1) + t3914) << 2)) + 0xC))) - 1) > (*(float *)((t3911 + 0xC))))) {
                            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                            } else {
                                if (((*(int *)0x8C287B3C) & 1) == 0) {
                                    t3927 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                    *(float *)((0x8C287BA0 + (((((t3927 & 0x1) << 2) << 1) + (t3927 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t3927 & 0x1) << 2) << 1) + (t3927 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                }
                                t3938 = *(int *)(((int)stk + 992));
                                *(float *)((t3938 + 0xC90)) = ((*(float *)((t3938 + 0xC90))) * 0.25f);
                            }
                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                            }
                            t3954 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t3954 + 0xB60)) = ((*(int *)((t3954 + 0xB60))) & 0xFFFEFFFF);
                            t3956 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t3956 + 0xB60)) = ((*(int *)((t3956 + 0xB60))) & 0xFFFFFEFF);
                            t3958 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t3958 + 0xB60)) = ((*(int *)((t3958 + 0xB60))) & 0xFFFFFBFF);
                            t3960 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t3960 + 0xB60)) = ((*(int *)((t3960 + 0xB60))) & 0xFFFFFDFF);
                            t3962 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t3962 + 0xB60)) = ((*(int *)((t3962 + 0xB60))) & 0xFFFFBFFF);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                            t3965 = vecLength(*(Stk3 *)(((int)stk + 56)));
                            if (0.5f > t3965) {
                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                            } else {
                                t3967 = *(int *)(((int)stk + 992));
                                t3968 = *(short *)((t3967 + 0xB04));
                                t3969 = *(short *)((t3967 + 0xB0C));
                                t3971 = (unsigned short)((t3969 - t3968) + 0x1000);
                                if ((int)(unsigned short)((t3969 - t3968) + 0x1000) < 0) {
                                    t3971 = ((unsigned short)((t3969 - t3968) + 0x1000) + 0x1FFF);
                                }
                                *(unsigned int *)((t3967 + 0xB58)) = (((int)t3971 >> 13) + 0x21);
                            }
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                            t3979 = *(int *)(((int)stk + 992));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t3979 + 0xB6C)) = *(struct mv3 *)((t3979 + 0xAE8)); }
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                            *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                        } else {
                            if ((*(short *)(((*(int *)(((int)stk + 992))) + 0xD46))) == 0) {
                                t3990 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                if (((((*(int *)((0x8C105FE0 + ((((t3990 << 1) + t3990) << 2) << 1)))) & 4) != 0) && (t3992 = *(int *)0x8C287B3C, (t3992 & 128) != 0)) || ((t3993 = *(int *)(((int)stk + 992)), t3994 = *(int *)((t3993 + 0xB60)), (t3994 & 0x4000) != 0) && ((t3995 = *(int *)(((int)stk + 992)), t3996 = *(int *)((0xB60 + t3995)), (t3996 & 1) != 0) && (t3997 = *(int *)(((int)stk + 992)), u3998 = *(float *)((t3997 + 0xC70)), u3998 == 1.0f)))) {
                                    if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                    } else {
                                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                                            t4005 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                            *(float *)((0x8C287BA0 + (((((t4005 & 0x1) << 2) << 1) + (t4005 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4005 & 0x1) << 2) << 1) + (t4005 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                        }
                                        t4016 = *(int *)(((int)stk + 992));
                                        *(float *)((t4016 + 0xC90)) = ((*(float *)((t4016 + 0xC90))) * 0.25f);
                                    }
                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                    }
                                    t4032 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t4032 + 0xB60)) = ((*(int *)((t4032 + 0xB60))) & 0xFFFEFFFF);
                                    t4034 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t4034 + 0xB60)) = ((*(int *)((t4034 + 0xB60))) & 0xFFFFFEFF);
                                    t4036 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t4036 + 0xB60)) = ((*(int *)((t4036 + 0xB60))) & 0xFFFFFBFF);
                                    t4038 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t4038 + 0xB60)) = ((*(int *)((t4038 + 0xB60))) & 0xFFFFFDFF);
                                    t4040 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t4040 + 0xB60)) = ((*(int *)((t4040 + 0xB60))) & 0xFFFFBFFF);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                    t4043 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                    if (0.5f > t4043) {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                    } else {
                                        t4045 = *(int *)(((int)stk + 992));
                                        t4046 = *(short *)((t4045 + 0xB04));
                                        t4047 = *(short *)((t4045 + 0xB0C));
                                        t4049 = (unsigned short)((t4047 - t4046) + 0x1000);
                                        if ((int)(unsigned short)((t4047 - t4046) + 0x1000) < 0) {
                                            t4049 = ((unsigned short)((t4047 - t4046) + 0x1000) + 0x1FFF);
                                        }
                                        *(unsigned int *)((t4045 + 0xB58)) = (((int)t4049 >> 13) + 0x21);
                                    }
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                    t4057 = *(int *)(((int)stk + 992));
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t4057 + 0xB6C)) = *(struct mv3 *)((t4057 + 0xAE8)); }
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                } else {
                                    t4064 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                    if (((*(int *)((0x8C105FE0 + ((((t4064 << 1) + t4064) << 2) << 1)))) & 4) == 0) {
                                    } else {
                                        if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 3) {
                                        } else {
                                            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                            } else {
                                                if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                    t4076 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                    *(float *)((0x8C287BA0 + (((((t4076 & 0x1) << 2) << 1) + (t4076 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4076 & 0x1) << 2) << 1) + (t4076 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                }
                                                t4087 = *(int *)(((int)stk + 992));
                                                *(float *)((t4087 + 0xC90)) = ((*(float *)((t4087 + 0xC90))) * 0.25f);
                                            }
                                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                            }
                                            t4103 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4103 + 0xB60)) = ((*(int *)((t4103 + 0xB60))) & 0xFFFEFFFF);
                                            t4105 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4105 + 0xB60)) = ((*(int *)((t4105 + 0xB60))) & 0xFFFFFEFF);
                                            t4107 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4107 + 0xB60)) = ((*(int *)((t4107 + 0xB60))) & 0xFFFFFBFF);
                                            t4109 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4109 + 0xB60)) = ((*(int *)((t4109 + 0xB60))) & 0xFFFFFDFF);
                                            t4111 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4111 + 0xB60)) = ((*(int *)((t4111 + 0xB60))) & 0xFFFFBFFF);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                            t4114 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                            if (0.5f > t4114) {
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                            } else {
                                                t4116 = *(int *)(((int)stk + 992));
                                                t4117 = *(short *)((t4116 + 0xB04));
                                                t4118 = *(short *)((t4116 + 0xB0C));
                                                t4120 = (unsigned short)((t4118 - t4117) + 0x1000);
                                                if ((int)(unsigned short)((t4118 - t4117) + 0x1000) < 0) {
                                                    t4120 = ((unsigned short)((t4118 - t4117) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)((t4116 + 0xB58)) = (((int)t4120 >> 13) + 0x21);
                                            }
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                            t4128 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4128 + 0xB6C)) = *(struct mv3 *)((t4128 + 0xAE8)); }
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                        }
                                    }
                                }
                            } else {
                                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) == 0) {
                                    t4160 = *(int *)(((int)stk + 992));
                                    t4163 = *(int *)((t4160 + 0xC74));
                                    if (!((float)((*(int *)((((((*(int *)(((0xC6C + t4160) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t4160) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t4163 << 2) << 1) + t4163) << 2)) + 0x8))) + 0x5) > (*(float *)((t4160 + 0xC))))) {
                                        t4170 = angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB04))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C))));
                                        if ((int)(short)t4170 >= 0) {
                                            t4182 = (short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB04))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C)))));
                                        } else {
                                            t4182 = (-(short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB04))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C))))));
                                        }
                                        if ((int)t4182 < (int)0x3000) {
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xAF4 + (*(int *)(((int)stk + 992))))); }
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xAE8)); }
                                            t4186 = ((float (*)(Stk3, Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)), *(Stk3 *)(((int)stk + 56)));
                                            if ((5.0f > t4186) && (t4187 = *(int *)(((int)stk + 992)), u4188 = *(float *)((t4187 + 0xAF8)), u4188 > 13.0f)) {
                                                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                } else {
                                                    if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                        t4195 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                        *(float *)((0x8C287BA0 + (((((t4195 & 0x1) << 2) << 1) + (t4195 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4195 & 0x1) << 2) << 1) + (t4195 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                    }
                                                    t4206 = *(int *)(((int)stk + 992));
                                                    *(float *)((t4206 + 0xC90)) = ((*(float *)((t4206 + 0xC90))) * 0.25f);
                                                }
                                                if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                }
                                                t4221 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4221 + 0xB60)) = ((*(int *)((t4221 + 0xB60))) & 0xFFFEFFFF);
                                                t4223 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4223 + 0xB60)) = ((*(int *)((t4223 + 0xB60))) & 0xFFFFFEFF);
                                                t4225 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4225 + 0xB60)) = ((*(int *)((t4225 + 0xB60))) & 0xFFFFFBFF);
                                                t4227 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4227 + 0xB60)) = ((*(int *)((t4227 + 0xB60))) & 0xFFFFFDFF);
                                                t4229 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4229 + 0xB60)) = ((*(int *)((t4229 + 0xB60))) & 0xFFFFBFFF);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                t4232 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                if (0.5f > t4232) {
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                } else {
                                                    t4234 = *(int *)(((int)stk + 992));
                                                    t4235 = *(short *)((t4234 + 0xB04));
                                                    t4236 = *(short *)((t4234 + 0xB0C));
                                                    t4238 = (unsigned short)((t4236 - t4235) + 0x1000);
                                                    if ((int)(unsigned short)((t4236 - t4235) + 0x1000) < 0) {
                                                        t4238 = ((unsigned short)((t4236 - t4235) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)((t4234 + 0xB58)) = (((int)t4238 >> 13) + 0x21);
                                                }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                t4246 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4246 + 0xB6C)) = *(struct mv3 *)((t4246 + 0xAE8)); }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                            } else {
                                                t4253 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                                if (((((*(int *)((0x8C105FE0 + ((((t4253 << 1) + t4253) << 2) << 1)))) & 4) != 0) && (t4255 = *(int *)0x8C287B3C, (t4255 & 128) != 0)) || ((t4256 = *(int *)(((int)stk + 992)), t4257 = *(int *)((t4256 + 0xB60)), (t4257 & 0x4000) != 0) && ((t4258 = *(int *)(((int)stk + 992)), t4259 = *(int *)((0xB60 + t4258)), (t4259 & 1) != 0) && (t4260 = *(int *)(((int)stk + 992)), u4261 = *(float *)((t4260 + 0xC70)), u4261 == 1.0f)))) {
                                                    if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                    } else {
                                                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                            t4268 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                            *(float *)((0x8C287BA0 + (((((t4268 & 0x1) << 2) << 1) + (t4268 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4268 & 0x1) << 2) << 1) + (t4268 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                        }
                                                        t4279 = *(int *)(((int)stk + 992));
                                                        *(float *)((t4279 + 0xC90)) = ((*(float *)((t4279 + 0xC90))) * 0.25f);
                                                    }
                                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                    }
                                                    t4294 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4294 + 0xB60)) = ((*(int *)((t4294 + 0xB60))) & 0xFFFEFFFF);
                                                    t4296 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4296 + 0xB60)) = ((*(int *)((t4296 + 0xB60))) & 0xFFFFFEFF);
                                                    t4298 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4298 + 0xB60)) = ((*(int *)((t4298 + 0xB60))) & 0xFFFFFBFF);
                                                    t4300 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4300 + 0xB60)) = ((*(int *)((t4300 + 0xB60))) & 0xFFFFFDFF);
                                                    t4302 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4302 + 0xB60)) = ((*(int *)((t4302 + 0xB60))) & 0xFFFFBFFF);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                    t4305 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                    if (0.5f > t4305) {
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                    } else {
                                                        t4307 = *(int *)(((int)stk + 992));
                                                        t4308 = *(short *)((t4307 + 0xB04));
                                                        t4309 = *(short *)((t4307 + 0xB0C));
                                                        t4311 = (unsigned short)((t4309 - t4308) + 0x1000);
                                                        if ((int)(unsigned short)((t4309 - t4308) + 0x1000) < 0) {
                                                            t4311 = ((unsigned short)((t4309 - t4308) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)((t4307 + 0xB58)) = (((int)t4311 >> 13) + 0x21);
                                                    }
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                    t4319 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t4319 + 0xB6C)) = *(struct mv3 *)((t4319 + 0xAE8)); }
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                                } else {
                                                    t4326 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                                    if (((*(int *)((0x8C105FE0 + ((((t4326 << 1) + t4326) << 2) << 1)))) & 4) == 0) {
                                                    } else {
                                                        if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 3) {
                                                        } else {
                                                            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                            } else {
                                                                if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                                    t4338 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                                    *(float *)((0x8C287BA0 + (((((t4338 & 0x1) << 2) << 1) + (t4338 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4338 & 0x1) << 2) << 1) + (t4338 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                                }
                                                                t4349 = *(int *)(((int)stk + 992));
                                                                *(float *)((t4349 + 0xC90)) = ((*(float *)((t4349 + 0xC90))) * 0.25f);
                                                            }
                                                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                            }
                                                            t4364 = *(int *)(((int)stk + 992));
                                                            *(unsigned int *)((t4364 + 0xB60)) = ((*(int *)((t4364 + 0xB60))) & 0xFFFEFFFF);
                                                            t4366 = *(int *)(((int)stk + 992));
                                                            *(unsigned int *)((t4366 + 0xB60)) = ((*(int *)((t4366 + 0xB60))) & 0xFFFFFEFF);
                                                            t4368 = *(int *)(((int)stk + 992));
                                                            *(unsigned int *)((t4368 + 0xB60)) = ((*(int *)((t4368 + 0xB60))) & 0xFFFFFBFF);
                                                            t4370 = *(int *)(((int)stk + 992));
                                                            *(unsigned int *)((t4370 + 0xB60)) = ((*(int *)((t4370 + 0xB60))) & 0xFFFFFDFF);
                                                            t4372 = *(int *)(((int)stk + 992));
                                                            *(unsigned int *)((t4372 + 0xB60)) = ((*(int *)((t4372 + 0xB60))) & 0xFFFFBFFF);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                            t4375 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                            if (0.5f > t4375) {
                                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                            } else {
                                                                t4377 = *(int *)(((int)stk + 992));
                                                                t4378 = *(short *)((t4377 + 0xB04));
                                                                t4379 = *(short *)((t4377 + 0xB0C));
                                                                t4381 = (unsigned short)((t4379 - t4378) + 0x1000);
                                                                if ((int)(unsigned short)((t4379 - t4378) + 0x1000) < 0) {
                                                                    t4381 = ((unsigned short)((t4379 - t4378) + 0x1000) + 0x1FFF);
                                                                }
                                                                *(unsigned int *)((t4377 + 0xB58)) = (((int)t4381 >> 13) + 0x21);
                                                            }
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                            t4389 = *(int *)(((int)stk + 992));
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4389 + 0xB6C)) = *(struct mv3 *)((t4389 + 0xAE8)); }
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            t4428 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                            if (((((*(int *)((0x8C105FE0 + ((((t4428 << 1) + t4428) << 2) << 1)))) & 4) != 0) && (t4430 = *(int *)0x8C287B3C, (t4430 & 128) != 0)) || ((t4431 = *(int *)(((int)stk + 992)), t4432 = *(int *)((t4431 + 0xB60)), (t4432 & 0x4000) != 0) && ((t4433 = *(int *)(((int)stk + 992)), t4434 = *(int *)((0xB60 + t4433)), (t4434 & 1) != 0) && (t4435 = *(int *)(((int)stk + 992)), u4436 = *(float *)((t4435 + 0xC70)), u4436 == 1.0f)))) {
                                                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                } else {
                                                    if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                        t4443 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                        *(float *)((0x8C287BA0 + (((((t4443 & 0x1) << 2) << 1) + (t4443 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4443 & 0x1) << 2) << 1) + (t4443 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                    }
                                                    t4454 = *(int *)(((int)stk + 992));
                                                    *(float *)((t4454 + 0xC90)) = ((*(float *)((t4454 + 0xC90))) * 0.25f);
                                                }
                                                if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                }
                                                t4469 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4469 + 0xB60)) = ((*(int *)((t4469 + 0xB60))) & 0xFFFEFFFF);
                                                t4471 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4471 + 0xB60)) = ((*(int *)((t4471 + 0xB60))) & 0xFFFFFEFF);
                                                t4473 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4473 + 0xB60)) = ((*(int *)((t4473 + 0xB60))) & 0xFFFFFBFF);
                                                t4475 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4475 + 0xB60)) = ((*(int *)((t4475 + 0xB60))) & 0xFFFFFDFF);
                                                t4477 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4477 + 0xB60)) = ((*(int *)((t4477 + 0xB60))) & 0xFFFFBFFF);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                t4480 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                if (0.5f > t4480) {
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                } else {
                                                    t4482 = *(int *)(((int)stk + 992));
                                                    t4483 = *(short *)((t4482 + 0xB04));
                                                    t4484 = *(short *)((t4482 + 0xB0C));
                                                    t4486 = (unsigned short)((t4484 - t4483) + 0x1000);
                                                    if ((int)(unsigned short)((t4484 - t4483) + 0x1000) < 0) {
                                                        t4486 = ((unsigned short)((t4484 - t4483) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)((t4482 + 0xB58)) = (((int)t4486 >> 13) + 0x21);
                                                }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                t4494 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4494 + 0xB6C)) = *(struct mv3 *)((t4494 + 0xAE8)); }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                            } else {
                                                t4501 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                                if (((*(int *)((0x8C105FE0 + ((((t4501 << 1) + t4501) << 2) << 1)))) & 4) == 0) {
                                                } else {
                                                    if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 3) {
                                                    } else {
                                                        if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                        } else {
                                                            if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                                t4513 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                                *(float *)((0x8C287BA0 + (((((t4513 & 0x1) << 2) << 1) + (t4513 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4513 & 0x1) << 2) << 1) + (t4513 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                            }
                                                            t4524 = *(int *)(((int)stk + 992));
                                                            *(float *)((t4524 + 0xC90)) = ((*(float *)((t4524 + 0xC90))) * 0.25f);
                                                        }
                                                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                        }
                                                        t4539 = *(int *)(((int)stk + 992));
                                                        *(unsigned int *)((t4539 + 0xB60)) = ((*(int *)((t4539 + 0xB60))) & 0xFFFEFFFF);
                                                        t4541 = *(int *)(((int)stk + 992));
                                                        *(unsigned int *)((t4541 + 0xB60)) = ((*(int *)((t4541 + 0xB60))) & 0xFFFFFEFF);
                                                        t4543 = *(int *)(((int)stk + 992));
                                                        *(unsigned int *)((t4543 + 0xB60)) = ((*(int *)((t4543 + 0xB60))) & 0xFFFFFBFF);
                                                        t4545 = *(int *)(((int)stk + 992));
                                                        *(unsigned int *)((t4545 + 0xB60)) = ((*(int *)((t4545 + 0xB60))) & 0xFFFFFDFF);
                                                        t4547 = *(int *)(((int)stk + 992));
                                                        *(unsigned int *)((t4547 + 0xB60)) = ((*(int *)((t4547 + 0xB60))) & 0xFFFFBFFF);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                        t4550 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                        if (0.5f > t4550) {
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                        } else {
                                                            t4552 = *(int *)(((int)stk + 992));
                                                            t4553 = *(short *)((t4552 + 0xB04));
                                                            t4554 = *(short *)((t4552 + 0xB0C));
                                                            t4556 = (unsigned short)((t4554 - t4553) + 0x1000);
                                                            if ((int)(unsigned short)((t4554 - t4553) + 0x1000) < 0) {
                                                                t4556 = ((unsigned short)((t4554 - t4553) + 0x1000) + 0x1FFF);
                                                            }
                                                            *(unsigned int *)((t4552 + 0xB58)) = (((int)t4556 >> 13) + 0x21);
                                                        }
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                        t4564 = *(int *)(((int)stk + 992));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4564 + 0xB6C)) = *(struct mv3 *)((t4564 + 0xAE8)); }
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        t4599 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                        if (((((*(int *)((0x8C105FE0 + ((((t4599 << 1) + t4599) << 2) << 1)))) & 4) != 0) && (t4601 = *(int *)0x8C287B3C, (t4601 & 128) != 0)) || ((t4602 = *(int *)(((int)stk + 992)), t4603 = *(int *)((t4602 + 0xB60)), (t4603 & 0x4000) != 0) && ((t4604 = *(int *)(((int)stk + 992)), t4605 = *(int *)((0xB60 + t4604)), (t4605 & 1) != 0) && (t4606 = *(int *)(((int)stk + 992)), u4607 = *(float *)((t4606 + 0xC70)), u4607 == 1.0f)))) {
                                            if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                            } else {
                                                if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                    t4614 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                    *(float *)((0x8C287BA0 + (((((t4614 & 0x1) << 2) << 1) + (t4614 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4614 & 0x1) << 2) << 1) + (t4614 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                }
                                                t4625 = *(int *)(((int)stk + 992));
                                                *(float *)((t4625 + 0xC90)) = ((*(float *)((t4625 + 0xC90))) * 0.25f);
                                            }
                                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                            }
                                            t4641 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4641 + 0xB60)) = ((*(int *)((t4641 + 0xB60))) & 0xFFFEFFFF);
                                            t4643 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4643 + 0xB60)) = ((*(int *)((t4643 + 0xB60))) & 0xFFFFFEFF);
                                            t4645 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4645 + 0xB60)) = ((*(int *)((t4645 + 0xB60))) & 0xFFFFFBFF);
                                            t4647 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4647 + 0xB60)) = ((*(int *)((t4647 + 0xB60))) & 0xFFFFFDFF);
                                            t4649 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t4649 + 0xB60)) = ((*(int *)((t4649 + 0xB60))) & 0xFFFFBFFF);
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                            t4652 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                            if (0.5f > t4652) {
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                            } else {
                                                t4654 = *(int *)(((int)stk + 992));
                                                t4655 = *(short *)((t4654 + 0xB04));
                                                t4656 = *(short *)((t4654 + 0xB0C));
                                                t4658 = (unsigned short)((t4656 - t4655) + 0x1000);
                                                if ((int)(unsigned short)((t4656 - t4655) + 0x1000) < 0) {
                                                    t4658 = ((unsigned short)((t4656 - t4655) + 0x1000) + 0x1FFF);
                                                }
                                                *(unsigned int *)((t4654 + 0xB58)) = (((int)t4658 >> 13) + 0x21);
                                            }
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                            t4666 = *(int *)(((int)stk + 992));
                                            { struct mv3 { int w[3]; }; *(struct mv3 *)((t4666 + 0xB6C)) = *(struct mv3 *)((t4666 + 0xAE8)); }
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                        } else {
                                            t4673 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                            if (((*(int *)((0x8C105FE0 + ((((t4673 << 1) + t4673) << 2) << 1)))) & 4) == 0) {
                                            } else {
                                                if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 3) {
                                                } else {
                                                    if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                    } else {
                                                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                            t4685 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                            *(float *)((0x8C287BA0 + (((((t4685 & 0x1) << 2) << 1) + (t4685 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4685 & 0x1) << 2) << 1) + (t4685 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                        }
                                                        t4696 = *(int *)(((int)stk + 992));
                                                        *(float *)((t4696 + 0xC90)) = ((*(float *)((t4696 + 0xC90))) * 0.25f);
                                                    }
                                                    if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                    }
                                                    t4712 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4712 + 0xB60)) = ((*(int *)((t4712 + 0xB60))) & 0xFFFEFFFF);
                                                    t4714 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4714 + 0xB60)) = ((*(int *)((t4714 + 0xB60))) & 0xFFFFFEFF);
                                                    t4716 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4716 + 0xB60)) = ((*(int *)((t4716 + 0xB60))) & 0xFFFFFBFF);
                                                    t4718 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4718 + 0xB60)) = ((*(int *)((t4718 + 0xB60))) & 0xFFFFFDFF);
                                                    t4720 = *(int *)(((int)stk + 992));
                                                    *(unsigned int *)((t4720 + 0xB60)) = ((*(int *)((t4720 + 0xB60))) & 0xFFFFBFFF);
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                    t4723 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                    if (0.5f > t4723) {
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                    } else {
                                                        t4725 = *(int *)(((int)stk + 992));
                                                        t4726 = *(short *)((t4725 + 0xB04));
                                                        t4727 = *(short *)((t4725 + 0xB0C));
                                                        t4729 = (unsigned short)((t4727 - t4726) + 0x1000);
                                                        if ((int)(unsigned short)((t4727 - t4726) + 0x1000) < 0) {
                                                            t4729 = ((unsigned short)((t4727 - t4726) + 0x1000) + 0x1FFF);
                                                        }
                                                        *(unsigned int *)((t4725 + 0xB58)) = (((int)t4729 >> 13) + 0x21);
                                                    }
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                    t4737 = *(int *)(((int)stk + 992));
                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)((t4737 + 0xB6C)) = *(struct mv3 *)((t4737 + 0xAE8)); }
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    t4775 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                    if (((((*(int *)((0x8C105FE0 + ((((t4775 << 1) + t4775) << 2) << 1)))) & 4) != 0) && (t4777 = *(int *)0x8C287B3C, (t4777 & 128) != 0)) || ((t4778 = *(int *)(((int)stk + 992)), t4779 = *(int *)((t4778 + 0xB60)), (t4779 & 0x4000) != 0) && ((t4780 = *(int *)(((int)stk + 992)), t4781 = *(int *)((0xB60 + t4780)), (t4781 & 1) != 0) && (t4782 = *(int *)(((int)stk + 992)), u4783 = *(float *)((t4782 + 0xC70)), u4783 == 1.0f)))) {
                                        if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                        } else {
                                            if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                t4790 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                *(float *)((0x8C287BA0 + (((((t4790 & 0x1) << 2) << 1) + (t4790 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4790 & 0x1) << 2) << 1) + (t4790 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                            }
                                            t4801 = *(int *)(((int)stk + 992));
                                            *(float *)((t4801 + 0xC90)) = ((*(float *)((t4801 + 0xC90))) * 0.25f);
                                        }
                                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                        }
                                        t4817 = *(int *)(((int)stk + 992));
                                        *(unsigned int *)((t4817 + 0xB60)) = ((*(int *)((t4817 + 0xB60))) & 0xFFFEFFFF);
                                        t4819 = *(int *)(((int)stk + 992));
                                        *(unsigned int *)((t4819 + 0xB60)) = ((*(int *)((t4819 + 0xB60))) & 0xFFFFFEFF);
                                        t4821 = *(int *)(((int)stk + 992));
                                        *(unsigned int *)((t4821 + 0xB60)) = ((*(int *)((t4821 + 0xB60))) & 0xFFFFFBFF);
                                        t4823 = *(int *)(((int)stk + 992));
                                        *(unsigned int *)((t4823 + 0xB60)) = ((*(int *)((t4823 + 0xB60))) & 0xFFFFFDFF);
                                        t4825 = *(int *)(((int)stk + 992));
                                        *(unsigned int *)((t4825 + 0xB60)) = ((*(int *)((t4825 + 0xB60))) & 0xFFFFBFFF);
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                        t4828 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                        if (0.5f > t4828) {
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                        } else {
                                            t4830 = *(int *)(((int)stk + 992));
                                            t4831 = *(short *)((t4830 + 0xB04));
                                            t4832 = *(short *)((t4830 + 0xB0C));
                                            t4834 = (unsigned short)((t4832 - t4831) + 0x1000);
                                            if ((int)(unsigned short)((t4832 - t4831) + 0x1000) < 0) {
                                                t4834 = ((unsigned short)((t4832 - t4831) + 0x1000) + 0x1FFF);
                                            }
                                            *(unsigned int *)((t4830 + 0xB58)) = (((int)t4834 >> 13) + 0x21);
                                        }
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                        t4842 = *(int *)(((int)stk + 992));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t4842 + 0xB6C)) = *(struct mv3 *)((t4842 + 0xAE8)); }
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                    } else {
                                        t4849 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                        if (((*(int *)((0x8C105FE0 + ((((t4849 << 1) + t4849) << 2) << 1)))) & 4) == 0) {
                                        } else {
                                            if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 3) {
                                            } else {
                                                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x400) != 0) {
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                                } else {
                                                    if (((*(int *)0x8C287B3C) & 1) == 0) {
                                                        t4861 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                                                        *(float *)((0x8C287BA0 + (((((t4861 & 0x1) << 2) << 1) + (t4861 & 0x1)) << 2))) = ((*(float *)((0x8C287BA0 + (((((t4861 & 0x1) << 2) << 1) + (t4861 & 0x1)) << 2)))) + (*(float *)(((0xC90 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))));
                                                    }
                                                    t4872 = *(int *)(((int)stk + 992));
                                                    *(float *)((t4872 + 0xC90)) = ((*(float *)((t4872 + 0xC90))) * 0.25f);
                                                }
                                                if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) == 0) {
                                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFF7F);
                                                }
                                                t4888 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4888 + 0xB60)) = ((*(int *)((t4888 + 0xB60))) & 0xFFFEFFFF);
                                                t4890 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4890 + 0xB60)) = ((*(int *)((t4890 + 0xB60))) & 0xFFFFFEFF);
                                                t4892 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4892 + 0xB60)) = ((*(int *)((t4892 + 0xB60))) & 0xFFFFFBFF);
                                                t4894 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4894 + 0xB60)) = ((*(int *)((t4894 + 0xB60))) & 0xFFFFFDFF);
                                                t4896 = *(int *)(((int)stk + 992));
                                                *(unsigned int *)((t4896 + 0xB60)) = ((*(int *)((t4896 + 0xB60))) & 0xFFFFBFFF);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((0xB78 + (*(int *)(((int)stk + 992))))); }
                                                t4899 = vecLength(*(Stk3 *)(((int)stk + 56)));
                                                if (0.5f > t4899) {
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xB58)) = 0x0;
                                                } else {
                                                    t4901 = *(int *)(((int)stk + 992));
                                                    t4902 = *(short *)((t4901 + 0xB04));
                                                    t4903 = *(short *)((t4901 + 0xB0C));
                                                    t4905 = (unsigned short)((t4903 - t4902) + 0x1000);
                                                    if ((int)(unsigned short)((t4903 - t4902) + 0x1000) < 0) {
                                                        t4905 = ((unsigned short)((t4903 - t4902) + 0x1000) + 0x1FFF);
                                                    }
                                                    *(unsigned int *)((t4901 + 0xB58)) = (((int)t4905 >> 13) + 0x21);
                                                }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBCC)) = 0xF;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD4)) = 0x0;
                                                t4913 = *(int *)(((int)stk + 992));
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t4913 + 0xB6C)) = *(struct mv3 *)((t4913 + 0xAE8)); }
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCC0)) = 0x0;
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCF0)) = 0x1;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xBD0)) = (int)(15.0f / (*(float *)0x8C23D204));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                playerMoveToTarget((*(int *)(((int)stk + 992))), 0x0, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28));
                t4990 = *(int *)(((int)stk + 992));
                if ((((*(float *)((t4990 + 0xB9C))) - (*(float *)((t4990 + 0xAE8)))) * (*(float *)((t4990 + 0xB00)))) > 0.0f) {
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC6C)) = 0x1;
                } else {
                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC6C)) = 0x0;
                }
                if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xD4C))) != 0) {
                    t5002 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t5002 + 0xC6C)) = ((-(*(int *)((t5002 + 0xC6C)))) + 0x1);
                }
                *(float *)(((int)stk + 644)) = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBDC)));
                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB5C))) == 0) && ((t5013 = *(int *)0x8C287D5C, t5013 == 2) || (t5014 = *(int *)0x8C287D5C, t5014 == 3))) {
                    *(float *)(((int)stk + 644)) = ((*(float *)(((int)stk + 644))) * (*(float *)0x8C2FBC78));
                } else {
                    if ((*(int *)0x8C287D5C) == 2) {
                        if ((*(int *)((((*(int *)(((0xB5C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + ((*(int *)(((int)stk + 904))) + 0x14)))) == 1) {
                            *(float *)(((int)stk + 644)) = ((*(float *)(((int)stk + 644))) * (*(float *)((((*(int *)(((*(int *)(((int)stk + 992))) + 0xB5C))) * 0x160) + 0x8C2FC6B4))));
                        }
                    }
                }
                *(unsigned int *)(((int)stk + 724)) = (*(int *)(((*(int *)(((int)stk + 992))) + 0xB58)));
                if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xB58))) == 0) {
                    t5053 = (*(int *)0x8C2873D0);
                    *(int *)((int)stk + 64) = t5053;
                    motionChange((*(int *)(((int)stk + 992))), (*(int *)((((*(int *)(((*(int *)(((int)stk + 992))) + 0xD50))) << 2) + 0x8C102C4C))), (int)((float)(*(int *)(((*(int *)(((int)stk + 992))) + 0xBCC))) / (*(float *)0x8C23D204)), (*(int *)(((*(int *)(((int)stk + 992))) + 0xBD8))), t5053, ((*(float *)0x8C23D204) * (*(float *)(((int)stk + 644)))));
                    if ((*(int *)((0xD50 + (*(int *)(((int)stk + 992)))))) != 7) {
                    } else {
                        if ((*(int *)0x8C287B44) == 7) {
                        } else {
                            t5071 = motionIsEnd((*(int *)(((int)stk + 992))));
                            if (t5071 == 0) {
                            } else {
                                t5072 = *(int *)(((int)stk + 992));
                                *(unsigned int *)((t5072 + 0xD50)) = (*(int *)((((*(int *)((t5072 + 0xC58))) * 0x6C) + 0x8C102464)));
                            }
                        }
                    }
                } else {
                    if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xD4C))) != 0) {
                        t5093 = (*(int *)0x8C2873D0);
                        *(int *)((int)stk + 64) = t5093;
                        t5112 = t5093;
                        t5113 = 0x8C102D70;
                        t5115 = ((*(int *)(((int)stk + 724))) << 2);
                        t5116 = (int)((float)(*(int *)(((*(int *)(((int)stk + 992))) + 0xBCC))) / (*(float *)0x8C23D204));
                        t5117 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xBD8)));
                        u5120 = ((*(float *)0x8C23D204) * (*(float *)(((int)stk + 644))));
                    } else {
                        t5103 = (*(int *)0x8C2873D0);
                        *(int *)((int)stk + 64) = t5103;
                        t5112 = t5103;
                        t5113 = 0x8C102C6C;
                        t5115 = ((*(int *)(((int)stk + 724))) << 2);
                        t5116 = (int)((float)(*(int *)(((*(int *)(((int)stk + 992))) + 0xBCC))) / (*(float *)0x8C23D204));
                        t5117 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xBD8)));
                        u5120 = ((*(float *)0x8C23D204) * (*(float *)(((int)stk + 644))));
                    }
                    motionChange((*(int *)(((int)stk + 992))), (*(int *)((t5115 + t5113))), t5116, t5117, t5112, u5120);
                    if (1.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC94)))) {
                        t5128 = *(int *)(((int)stk + 992));
                        *(float *)((t5128 + 0xC)) = ((float)(*(int *)((t5128 + 0x30))) * (*(float *)((t5128 + 0xC94))));
                    }
                }
                if (((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) != 1) && ((t5148 = *(int *)(((int)stk + 992)), t5149 = *(short *)((0xD44 + t5148)), t5149 != 2) && (t5150 = *(int *)(((int)stk + 992)), t5151 = *(int *)((0xC68 + t5150)), t5151 == 0))) {
                } else {
                    t5152 = *(int *)(((int)stk + 992));
                    t5153 = t5152;
                    t5155 = (((int)stk + 68) + 0x54);
                    for (;;) { t5156 = *(int *)t5153; t5153 = (t5153 + 4); if ((unsigned int)((t5152 + 480)) < (unsigned int)t5153) break; *(unsigned int *)t5155 = t5156; t5155 = (t5155 + 4); }
                    t5157 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t5157 + 0xB60)) = ((*(int *)((t5157 + 0xB60))) | 0x100);
                    t5159 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t5159 + 0xB60)) = ((*(int *)((t5159 + 0xB60))) | 0x400);
                    t5161 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t5161 + 0xB60)) = ((*(int *)((t5161 + 0xB60))) | 0x200);
                    t5163 = *(int *)(((int)stk + 992));
                    *(unsigned short *)((t5163 + 0xB0E)) = (*(short *)((t5163 + 0xB04)));
                    u5165 = *(float *)0x8C287B40;
                    u5167 = *(float *)(((*(int *)(((int)stk + 992))) + 0xAE8));
                    *(float *)(((int)stk + 740)) = (u5167 / u5165);
                    if (!(0.0f > (u5167 / u5165))) {
                        u5170 = (*(float *)(((int)stk + 740)));
                    } else {
                        u5170 = (-(*(float *)(((int)stk + 740))));
                    }
                    if (u5170 > 0.949999988f) {
                        u5173 = *(float *)(((int)stk + 740));
                        t5176 = 0x1;
                        if (u5173 > 0.0f) {
                        } else {
                            t5174 = 0x0;
                            if (0.0f > u5173) {
                                t5174 = 0xFFFFFFFF;
                            }
                            t5176 = t5174;
                        }
                        *(float *)(((int)stk + 740)) = ((float)t5176 * 0.949999988f);
                    }
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB90)) = (*(float *)(((int)stk + 740)));
                    t5184 = *(int *)(((int)stk + 992));
                    u5187 = (*(float *)((t5184 + 0xAF0)));
                    u5187 = u5187 + 178.274994f * (*(float *)((t5184 + 0xB00)));
                    *(float *)(((int)stk + 740)) = u5187;
                    t5192 = 0x1;
                    if (u5187 > 0.0f) {
                    } else {
                        t5190 = 0x0;
                        if (0.0f > (*(float *)(((int)stk + 740)))) {
                            t5190 = 0xFFFFFFFF;
                        }
                        t5192 = t5190;
                    }
                    t5205 = 0x1;
                    if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))) > 0.0f) {
                    } else {
                        t5202 = 0x0;
                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)))) {
                            t5202 = 0xFFFFFFFF;
                        }
                        t5205 = t5202;
                    }
                    if (t5192 != t5205) {
                        if (!(0.0f > (*(float *)(((int)stk + 740))))) {
                            u5212 = (*(float *)(((int)stk + 740)));
                        } else {
                            u5212 = (-(*(float *)(((int)stk + 740))));
                        }
                        if (29.7124996f > u5212) {
                            *(float *)(((int)stk + 740)) = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) * 29.7124996f);
                        }
                    } else {
                        *(float *)(((int)stk + 740)) = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) * 29.7124996f);
                    }
                    t5228 = *(int *)(((int)stk + 992));
                    u5229 = *(float *)((t5228 + 0xB00));
                    u5230 = *(float *)(((int)stk + 740));
                    u5231 = *(float *)((t5228 + 0xB00));
                    *(float *)(((int)stk + 740)) = (((u5230 / ((u5229 * 118.849998f) / (1.0f + 1.0f))) + (-1.0f)) / u5231);
                    if (!(0.0f > (((u5230 / ((u5229 * 118.849998f) / (1.0f + 1.0f))) + (-1.0f)) / u5231))) {
                        u5234 = (*(float *)(((int)stk + 740)));
                    } else {
                        u5234 = (-(*(float *)(((int)stk + 740))));
                    }
                    if (u5234 > 0.800000012f) {
                        u5237 = *(float *)(((int)stk + 740));
                        t5240 = 0x1;
                        if (u5237 > 0.0f) {
                        } else {
                            t5238 = 0x0;
                            if (0.0f > u5237) {
                                t5238 = 0xFFFFFFFF;
                            }
                            t5240 = t5238;
                        }
                        *(float *)(((int)stk + 740)) = ((float)t5240 * 0.800000012f);
                    }
                    *(float *)(((*(int *)(((int)stk + 992))) + 0xB98)) = (*(float *)(((int)stk + 740)));
                    if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC68))) != 0) {
                        t5250 = *(int *)(((int)stk + 992));
                        *(unsigned short *)((t5250 + 0xD44)) = (*(short *)((t5250 + 0xC68)));
                    } else {
                        t5252 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t5252 + 0xB60)) = ((*(int *)((t5252 + 0xB60))) & 0xFFFFEFFF);
                    }
                    t5259 = *(int *)(((int)stk + 992));
                    if (!(0.0f > ((*(float *)((t5259 + 0xB9C))) - (*(float *)((t5259 + 0xAF4)))))) {
                        t5262 = *(int *)(((int)stk + 992));
                        u5273 = ((*(float *)((t5262 + 0xB9C))) - (*(float *)((t5262 + 0xAF4))));
                    } else {
                        t5265 = *(int *)(((int)stk + 992));
                        u5273 = ((-(*(float *)((t5265 + 0xB9C)))) + (*(float *)((t5265 + 0xAF4))));
                    }
                    t5275 = *(int *)(((int)stk + 992));
                    t5278 = nlArcTan2(((*(float *)((t5275 + 0xBA0))) - (*(float *)((t5275 + 0xAF8)))), u5273);
                    if ((int)(short)t5278 > (int)0x2000) {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x5;
                    } else {
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                            u5290 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                        } else {
                            u5290 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                        }
                        if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x60))))) {
                            u5300 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x60)));
                        } else {
                            u5300 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x60))));
                        }
                        if ((u5300 + 5.0f) > u5290) {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x4;
                        } else {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x0;
                        }
                    }
                    t5315 = *(int *)(((int)stk + 992));
                    if ((((*(float *)((t5315 + 0xB9C))) - (*(float *)((t5315 + 0xAE8)))) * (*(float *)((t5315 + 0xB00)))) > 0.0f) {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC6C)) = 0x1;
                    } else {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC6C)) = 0x0;
                    }
                    if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xD4C))) != 0) {
                        t5327 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t5327 + 0xC6C)) = ((-(*(int *)((t5327 + 0xC6C)))) + 0x1);
                    }
                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))))) {
                        u5342 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xB78)));
                    } else {
                        u5342 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xB78))));
                    }
                    if (u5342 > 5.0f) {
                        t5344 = *(int *)(((int)stk + 992));
                        t5353 = 0x1;
                        if (((*(float *)((t5344 + 0xB78))) * (*(float *)((t5344 + 0xB00)))) > 0.0f) {
                        } else {
                            t5347 = *(int *)(((int)stk + 992));
                            t5350 = 0x0;
                            if (0.0f > ((*(float *)((t5347 + 0xB78))) * (*(float *)((t5347 + 0xB00))))) {
                                t5350 = 0xFFFFFFFF;
                            }
                            t5353 = t5350;
                        }
                        if ((float)t5353 == (((float)(((*(int *)((0xC6C + (*(int *)(((int)stk + 992)))))) + (*(int *)(((0xD4C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0)))) & 0x1) + -0.5f) * (1.0f + 1.0f))) {
                            t5361 = *(int *)(((int)stk + 992));
                            *(unsigned int *)((t5361 + 0xB60)) = ((*(int *)((t5361 + 0xB60))) | 0x1000);
                        }
                    }
                    *(float *)(((int)stk + 120)) = 1.0f;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 68) + 0x28)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                    if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 5) {
                    } else {
                        if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) == 0) {
                        } else {
                            playerChooseSwing((*(int *)(((int)stk + 992))), 0x0, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 68) + 0x1C)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)((((int)stk + 68) + 0x28)); }
                            *(float *)(((int)stk + 120)) = 0.0f;
                            if (!((*(float *)(((int)stk + 100))) > 22.0f)) {
                            } else {
                                t5388 = *(int *)(((int)stk + 992));
                                if (!(0.0f > ((*(float *)((t5388 + 0xB9C))) - (*(float *)((t5388 + 0xAF4)))))) {
                                    t5391 = *(int *)(((int)stk + 992));
                                    u5401 = ((*(float *)((t5391 + 0xB9C))) - (*(float *)((t5391 + 0xAF4))));
                                } else {
                                    t5394 = *(int *)(((int)stk + 992));
                                    u5401 = ((-(*(float *)((t5394 + 0xB9C)))) + (*(float *)((t5394 + 0xAF4))));
                                }
                                t5403 = *(int *)(((int)stk + 992));
                                t5406 = nlArcTan2(((*(float *)((t5403 + 0xBA0))) - (*(float *)((t5403 + 0xAF8)))), u5401);
                                if ((int)(short)t5406 > (int)0x2000) {
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x5;
                                    *(float *)(((int)stk + 120)) = 1.0f;
                                } else {
                                    t5408 = *(int *)(((int)stk + 992));
                                    if (!(0.0f > ((*(float *)((t5408 + 0xB9C))) - (*(float *)((t5408 + 0xAE8)))))) {
                                        t5411 = *(int *)(((int)stk + 992));
                                        u5422 = ((*(float *)((t5411 + 0xB9C))) - (*(float *)((t5411 + 0xAE8))));
                                    } else {
                                        t5414 = *(int *)(((int)stk + 992));
                                        u5422 = ((-(*(float *)((t5414 + 0xB9C)))) + (*(float *)((t5414 + 0xAE8))));
                                    }
                                    if (5.0f > u5422) {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x7;
                                        *(float *)(((int)stk + 120)) = 1.0f;
                                    } else {
                                        if (15.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA0)))) {
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0xB;
                                            *(float *)(((int)stk + 120)) = 1.0f;
                                        }
                                    }
                                }
                            }
                            if (!(0.0f > (*(float *)(((int)stk + 104))))) {
                                u5460 = (*(float *)(((int)stk + 104)));
                            } else {
                                u5460 = (-(*(float *)(((int)stk + 104))));
                            }
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))))) {
                                u5470 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C)));
                            } else {
                                u5470 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))));
                            }
                            if (!(u5470 > u5460)) {
                                if (!(0.0f > ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 900))) + 0x64)))))) {
                                    u5489 = ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 900))) + 0x64))));
                                } else {
                                    u5489 = ((-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAE8)))) + (*(float *)(((*(int *)(((int)stk + 900))) + 0x64))));
                                }
                                if (20.0f > u5489) {
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x14;
                                    *(float *)(((int)stk + 120)) = 1.0f;
                                }
                            }
                        }
                    }
                    if (((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 5) && (t5522 = *(int *)(((int)stk + 992)), t5523 = *(int *)((t5522 + 0xC6C)), t5523 != 0)) {
                        t5524 = *(int *)(((int)stk + 992));
                        if (!(0.0f > ((*(float *)((t5524 + 0xAE8))) - (*(float *)((t5524 + 0xBA8)))))) {
                            t5527 = *(int *)(((int)stk + 992));
                            u5538 = ((*(float *)((t5527 + 0xAE8))) - (*(float *)((t5527 + 0xBA8))));
                        } else {
                            t5530 = *(int *)(((int)stk + 992));
                            u5538 = ((-(*(float *)((t5530 + 0xAE8)))) + (*(float *)((t5530 + 0xBA8))));
                        }
                        if (5.0f > u5538) {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC6C)) = 0x0;
                            *(float *)(((int)stk + 120)) = 1.0f;
                        }
                    }
                    t5556 = angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB04))));
                    if ((int)(short)t5556 >= 0) {
                        t5568 = (short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB04)))));
                    } else {
                        t5568 = (-(short)(angDiff((*(short *)(((*(int *)(((int)stk + 992))) + 0xB0C))), (*(short *)(((*(int *)(((int)stk + 992))) + 0xB04))))));
                    }
                    if ((int)(unsigned short)t5568 <= (int)0x6000) {
                        if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 2) != 0) {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x1C;
                        }
                    } else {
                        t5578 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                        if (((*(int *)((0x8C105FE0 + ((((t5578 << 1) + t5578) << 2) << 1)))) & 2) == 0) {
                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 2) != 0) {
                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x1C;
                            }
                        } else {
                            if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 8) != 0) {
                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0xD;
                            } else {
                                if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 5) {
                                    *(unsigned int *)(((0xC5C + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x17;
                                } else {
                                    if (!(0.0f > ((*(float *)((0xAE8 + (*(int *)(((int)stk + 992)))))) - (*(float *)(((0xB9C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0)))))) {
                                        t5603 = *(int *)(((int)stk + 992));
                                        u5614 = ((*(float *)((t5603 + 0xAE8))) - (*(float *)((t5603 + 0xB9C))));
                                    } else {
                                        t5606 = *(int *)(((int)stk + 992));
                                        u5608 = *(float *)((t5606 + 0xB9C));
                                        u5612 = u5608;
                                        u5614 = ((-(*(float *)((t5606 + 0xAE8)))) + u5608);
                                    }
                                    if ((3.0f > u5614) && (t5616 = *(int *)(((int)stk + 992)), u5617 = *(float *)((t5616 + 0xBA0)), 10.0f > u5617)) {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0x1B;
                                        u5677 = u5617;
                                    } else {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0xD;
                                        u5668 = u5612;
                                        if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) != 0) {
                                            t5622 = *(int *)(((int)stk + 992));
                                            t5632 = 0x1;
                                            u5634 = u5612;
                                            if (((*(float *)((t5622 + 0xB9C))) - (*(float *)((t5622 + 0xAE8)))) > 0.0f) {
                                            } else {
                                                u5627 = *(float *)(((0xAE8 + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0));
                                                u5628 = *(float *)((0xB9C + (*(int *)(((int)stk + 992)))));
                                                t5629 = 0x0;
                                                if (0.0f > (u5628 - u5627)) {
                                                    t5629 = 0xFFFFFFFF;
                                                }
                                                t5632 = t5629;
                                                u5634 = (u5628 - u5627);
                                            }
                                            t5646 = 0x1;
                                            if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x34))) > 0.0f) {
                                            } else {
                                                t5643 = 0x0;
                                                if (0.0f > (*(float *)((0x34 + (*(int *)(((int)stk + 900))))))) {
                                                    t5643 = 0xFFFFFFFF;
                                                }
                                                t5646 = t5643;
                                            }
                                            if (t5632 == t5646) {
                                                t5650 = *(int *)(((int)stk + 900));
                                                *(unsigned short *)(((0xB0E + (*(int *)(((int)stk + 992)))) + 0x0)) = ((nlArcTan2((*(float *)((t5650 + 0x34))), (*(float *)((t5650 + 0x3C))))) + 0x8000);
                                            } else {
                                                u5659 = u5634;
                                            }
                                            u5668 = u5659;
                                        }
                                        u5677 = u5668;
                                    }
                                    u5685 = u5677;
                                }
                                u5694 = u5685;
                            }
                            *(float *)(((int)stk + 120)) = 1.0f;
                            u5703 = u5694;
                        }
                        u5712 = u5703;
                    }
                    t5716 = *(int *)(((int)stk + 992));
                    *(unsigned int *)((t5716 + 0xC64)) = (*(int *)((t5716 + 0xC5C)));
                    if (((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 12) && (t5720 = *(int *)(((int)stk + 992)), t5721 = *(int *)((t5720 + 0xC74)), t5721 == 0)) {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC64)) = 0xA;
                    }
                    if ((*(short *)((0xD44 + (*(int *)(((int)stk + 992)))))) == 2) {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC64)) = 0x1;
                        if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 5) {
                            *(unsigned int *)(((0xC5C + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x7;
                            *(float *)(((int)stk + 120)) = 1.0f;
                        }
                        if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 23) {
                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC5C)) = 0xD;
                            *(float *)(((int)stk + 120)) = 1.0f;
                        }
                    }
                    if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) != 0) {
                        t5753 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t5753 + 0xC60)) = (*(int *)((t5753 + 0xC5C)));
                    }
                    u5759 = *(float *)(((int)stk + 120));
                    if (u5759 == 0.0f) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)((((int)stk + 68) + 0x1C)); }
                    } else {
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC74)) = 0x0;
                        *(unsigned int *)(((int)stk + 724)) = 0x0;
                        t5762 = 0x0;
                        u5764 = u5712;
                        u5765 = 0.0f;
                        u5766 = u5759;
                        for (;;) {
                            if ((int)(*(int *)(((int)stk + 724))) < (int)0x3) {
                                t5762 = (*(int *)(((int)stk + 992)));
                                t5762 = (*(int *)((t5762 + 0xC5C)));
                                t5772 = (t5762 * 0xD8);
                                t5762 = 0x6C;
                                t5774 = *(int *)(((int)stk + 724));
                                t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * t5762);
                                t5762 = (t5762 + (t5772 + 0x8C104194));
                                t5762 = (t5762 + ((((t5774 << 2) << 1) + t5774) << 2));
                                u5766 = (*(float *)((((*(int *)(((0xC58 + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + 0x8C102428)));
                                u5765 = (*(float *)((t5762 + 0x18)));
                                u5765 = (u5765 * u5766);
                                t5762 = (*(int *)(((int)stk + 992)));
                                u5766 = (*(float *)((t5762 + 0xBA0)));
                                u5765 = (u5765 - u5766);
                                u5766 = 0.0f;
                                if (!(u5766 > u5765)) {
                                    t5762 = 0xD8;
                                    t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * t5762);
                                    t5787 = *(int *)(((int)stk + 724));
                                    t5762 = (t5762 + 0x8C104194);
                                    t5788 = (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + t5762);
                                    t5762 = t5787;
                                    t5790 = (t5788 + ((((t5787 << 2) << 1) + t5762) << 2));
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    t5762 = (*(int *)(((0xC58 + t5762) + 0x0)));
                                    t5762 = (t5762 * 0x6C);
                                    u5765 = (*(float *)((t5762 + 0x8C102428)));
                                    u5764 = (*(float *)((t5790 + 0x18)));
                                    u5764 = (u5764 * u5765);
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    u5765 = (*(float *)((t5762 + 0xBA0)));
                                    u5766 = u5764;
                                    u5766 = (u5766 - u5765);
                                } else {
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    t5762 = (*(int *)((t5762 + 0xC5C)));
                                    t5801 = (t5762 * 0xD8);
                                    t5762 = 0x6C;
                                    t5803 = *(int *)(((int)stk + 724));
                                    t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * t5762);
                                    t5762 = (t5762 + (t5801 + 0x8C104194));
                                    t5762 = (t5762 + ((((t5803 << 2) << 1) + t5803) << 2));
                                    u5765 = (*(float *)((((*(int *)(((0xC58 + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + 0x8C102428)));
                                    u5764 = (*(float *)((t5762 + 0x18)));
                                    u5764 = (u5764 * u5765);
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    u5765 = (*(float *)((t5762 + 0xBA0)));
                                    u5764 = (-u5764);
                                    u5766 = u5764;
                                    u5766 = (u5766 + u5765);
                                }
                                t5762 = (*(int *)(((int)stk + 992)));
                                t5762 = (*(int *)((t5762 + 0xC5C)));
                                t5818 = (t5762 * 0xD8);
                                t5762 = 0x6C;
                                t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * t5762);
                                t5762 = (t5762 + (t5818 + 0x8C104194));
                                t5822 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                t5762 = (t5762 + ((((t5822 << 2) << 1) + t5822) << 2));
                                u5765 = (*(float *)((((*(int *)((0xC58 + (*(int *)(((int)stk + 992)))))) * 0x6C) + 0x8C102428)));
                                u5764 = (*(float *)((t5762 + 0x18)));
                                u5764 = (u5764 * u5765);
                                t5762 = (*(int *)(((int)stk + 992)));
                                u5765 = (*(float *)((t5762 + 0xBA0)));
                                u5764 = (u5764 - u5765);
                                u5765 = 0.0f;
                                if (!(u5765 > u5764)) {
                                    t5762 = 0xD8;
                                    t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * t5762);
                                    t5762 = (t5762 + 0x8C104194);
                                    t5836 = (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + t5762);
                                    t5762 = 0xC74;
                                    t5837 = *(int *)((t5762 + (*(int *)(((int)stk + 992)))));
                                    t5762 = t5837;
                                    t5838 = (t5836 + ((((t5837 << 2) << 1) + t5762) << 2));
                                    t5762 = 0x6C;
                                    t5762 = ((*(int *)((0xC58 + (*(int *)(((int)stk + 992)))))) * t5762);
                                    u5764 = (*(float *)((t5762 + 0x8C102428)));
                                    u5763 = (*(float *)((t5838 + 0x18)));
                                    u5763 = (u5763 * u5764);
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    u5764 = (*(float *)((t5762 + 0xBA0)));
                                    u5765 = u5763;
                                    u5765 = (u5765 - u5764);
                                } else {
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    t5762 = (*(int *)((t5762 + 0xC5C)));
                                    t5849 = (t5762 * 0xD8);
                                    t5762 = 0x6C;
                                    t5762 = ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * t5762);
                                    t5762 = (t5762 + (t5849 + 0x8C104194));
                                    t5853 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                    t5762 = (t5762 + ((((t5853 << 2) << 1) + t5853) << 2));
                                    u5764 = (*(float *)((((*(int *)((0xC58 + (*(int *)(((int)stk + 992)))))) * 0x6C) + 0x8C102428)));
                                    u5763 = (*(float *)((t5762 + 0x18)));
                                    u5763 = (u5763 * u5764);
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    u5764 = (*(float *)((t5762 + 0xBA0)));
                                    u5763 = (-u5763);
                                    u5765 = u5763;
                                    u5765 = (u5765 + u5764);
                                }
                                if (u5765 > u5766) {
                                    t5762 = (*(int *)(((int)stk + 992)));
                                    *(unsigned int *)((t5762 + 0xC74)) = (*(int *)(((int)stk + 724)));
                                }
                                t5762 = (*(int *)(((int)stk + 724)));
                                t5762 = (t5762 + 0x1);
                                *(unsigned int *)(((int)stk + 724)) = t5762;
                                continue;
                            }
                            break;
                        }
                        if ((*(float *)(((int)stk + 120))) == 0.0f) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)((((int)stk + 68) + 0x1C)); }
                        } else {
                            t5872 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                            if (((*(int *)((((((t5872 << 1) + t5872) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                t5874 = *(int *)(((int)stk + 992));
                                { struct mv3 { int w[3]; }; *(struct mv3 *)((t5874 + 0xBA8)) = *(struct mv3 *)((t5874 + 0xB9C)); }
                                t5875 = *(int *)(((int)stk + 992));
                                *(unsigned int *)((t5875 + 0xC54)) = (*(int *)((t5875 + 0xC50)));
                            } else {
                                t5877 = *(int *)(((int)stk + 992));
                                t5880 = *(int *)(((0xC74 + t5877) + 0x0));
                                t5883 = *(int *)(((0xC74 + t5877) + 0x0));
                                u5887 = *(float *)((t5877 + 0xB00));
                                u5888 = (*(float *)((0xAF0 + t5877)));
                                u5888 = u5888 + ((*(float *)((0x10 + ((((*(int *)((0xC6C + t5877))) * 0x6C) + (((*(int *)((0xC5C + t5877))) * 0xD8) + 0x8C104194)) + ((((t5880 << 2) << 1) + t5880) << 2))))) + (*(float *)(((0x1C + ((((*(int *)(((0xC6C + t5877) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t5877) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t5883 << 2) << 1) + t5883) << 2))) + 0x0)))) * u5887;
                                *(float *)((t5877 + 0xBA4)) = u5888;
                                t5891 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xD30)));
                                u5892 = u5764;
                                u5893 = u5887;
                                u5894 = u5888;
                                for (;;) {
                                    *(unsigned int *)(((int)stk + 668)) = t5891;
                                    t5891 = 0x8C295480;
                                    if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)((t5891 + 0x0)))) {
                                        u5894 = 0.0f;
                                        t5900 = *(int *)(((int)stk + 668));
                                        t5891 = t5900;
                                        u5893 = (*(float *)(((((t5900 << 1) + t5891) << 2) + 0x8C294678)));
                                        t5913 = 0x1;
                                        if (u5893 > u5894) {
                                        } else {
                                            t5891 = (*(int *)(((int)stk + 668)));
                                            t5909 = t5891;
                                            t5891 = (t5891 << 1);
                                            t5891 = (t5891 + t5909);
                                            t5891 = (t5891 << 2);
                                            u5893 = (*(float *)((t5891 + 0x8C294678)));
                                            t5911 = 0x0;
                                            if (u5894 > u5893) {
                                                t5911 = 0xFFFFFFFF;
                                            }
                                            t5913 = t5911;
                                        }
                                        u5894 = 0.0f;
                                        u5893 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                        if (u5893 > u5894) {
                                            t5891 = 0x1;
                                        } else {
                                            t5891 = 0xBA4;
                                            u5894 = 0.0f;
                                            u5893 = (*(float *)((t5891 + (*(int *)(((int)stk + 992))))));
                                            if (u5894 > u5893) {
                                                t5891 = 0xFFFFFFFF;
                                            } else {
                                                t5891 = 0x0;
                                            }
                                        }
                                        if (t5913 == t5891) {
                                            u5894 = 0.0f;
                                            t5929 = *(int *)(((int)stk + 668));
                                            t5891 = t5929;
                                            u5893 = (*(float *)(((((t5929 << 1) + t5891) << 2) + 0x8C294678)));
                                            if (!(u5894 > u5893)) {
                                                t5891 = (*(int *)(((int)stk + 668)));
                                                t5933 = t5891;
                                                t5891 = (t5891 << 1);
                                                t5891 = (t5891 + t5933);
                                                t5891 = (t5891 << 2);
                                                u5894 = (*(float *)((t5891 + 0x8C294678)));
                                            } else {
                                                t5935 = *(int *)(((int)stk + 668));
                                                t5891 = t5935;
                                                u5894 = (*(float *)(((((t5935 << 1) + t5891) << 2) + 0x8C294678)));
                                                u5894 = (-u5894);
                                            }
                                            u5893 = 0.0f;
                                            u5892 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                            if (!(u5893 > u5892)) {
                                                t5891 = (*(int *)(((int)stk + 992)));
                                                u5893 = (*(float *)((t5891 + 0xBA4)));
                                            } else {
                                                u5893 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                u5893 = (-u5893);
                                            }
                                            if (!(u5893 > u5894)) {
                                                t5891 = (*(int *)(((int)stk + 668)));
                                                t5950 = t5891;
                                                t5891 = (t5891 << 1);
                                                t5891 = (t5891 + t5950);
                                                t5891 = (t5891 << 2);
                                                t5891 = (t5891 + 0x8C294670);
                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)(t5891); }
                                                t5891 = (*(int *)(((int)stk + 668)));
                                                u5894 = (float)t5891;
                                                u5893 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                                u5894 = (u5894 - u5893);
                                                t5891 = (int)u5894;
                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t5891;
                                                t5891 = 0x1;
                                                if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC50))) < (int)t5891) {
                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t5891;
                                                }
                                                *(unsigned int *)(((int)stk + 668)) = 0x12C;
                                            }
                                        }
                                        t5891 = (*(int *)(((int)stk + 668)));
                                        t5891 = (t5891 + 0x1);
                                        continue;
                                    }
                                    break;
                                }
                                if (((int)(*(int *)(((int)stk + 668))) > (int)(*(int *)0x8C295480)) && (t5971 = *(int *)(((int)stk + 668)), (int)t5971 < (int)0x12C)) {
                                    t5972 = *(int *)(((int)stk + 992));
                                    *(Stk3 *)(((int)stk + 56)) = vecMake(1.0f, 0.0f, 0.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                                    *(int *)((int)stk + 16) = (0xB9C + t5972);
                                    *(int *)((int)stk + 16) = (0xB9C + t5972);
                                    t5976 = ((int (*)(Stk4, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
                                }
                            }
                        }
                    }
                    t6014 = (*(int *)0x8C2873D0);
                    *(int *)((int)stk + 64) = t6014;
                    t6021 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                    motionChange((*(int *)(((int)stk + 992))), (*(int *)(((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194) + ((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C)) + ((((t6021 << 2) << 1) + t6021) << 2)) + 0x0))), 0xA, 0x0, t6014, (*(float *)0x8C23D204));
                    if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) == 0) {
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = 1.0f;
                        t6028 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t6028 + 0xB60)) = ((*(int *)((t6028 + 0xB60))) | 0x4000);
                    } else {
                        t6031 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                        if (((*(int *)((0x8C105FE0 + ((((t6031 << 1) + t6031) << 2) << 1)))) & 0x40000) != 0) {
                            t6035 = 0xC54;
                            t6036 = (*(int *)(((int)stk + 992)));
                        } else {
                            t6035 = 0xC50;
                            t6036 = (*(int *)(((int)stk + 992)));
                        }
                        *(float *)(((int)stk + 744)) = ((float)(*(int *)((t6036 + t6035))) * (*(float *)0x8C23D204));
                        u6040 = *(float *)(((int)stk + 744));
                        if (1.0f > u6040) {
                            *(float *)(((int)stk + 744)) = 1.0f;
                        }
                        t6043 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                        if (((*(int *)((((((t6043 << 1) + t6043) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                            *(float *)(((int)stk + 68)) = 999.0f;
                            u6050 = *(float *)(((*(int *)(((int)stk + 900))) + 0x30));
                            *(unsigned int *)(((int)stk + 668)) = (int)u6050;
                            u6052 = u6040;
                            u6053 = u6050;
                            for (;;) {
                                if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)0x8C295480)) {
                                    t6056 = *(int *)(((int)stk + 992));
                                    t6062 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                    t6064 = *(int *)(((int)stk + 668));
                                    t6066 = *(int *)(((int)stk + 668));
                                    u6051 = (vecDistXZf((*(float *)(((((t6066 << 1) + t6066) << 2) + 0x8C294674))), (*(float *)(((((t6064 << 1) + t6064) << 2) + 0x8C294678))), (*(float *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)((t6056 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6062 << 2) << 1) + t6062) << 2)) + 0x18))), (*(float *)((t6056 + 0xAF0)))));
                                    u6053 = (*(float *)(((int)stk + 68)));
                                    if (u6053 > u6051) {
                                        t6070 = *(int *)(((int)stk + 992));
                                        t6076 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                        t6078 = *(int *)(((int)stk + 668));
                                        t6080 = *(int *)(((int)stk + 668));
                                        u6051 = (vecDistXZf((*(float *)(((((t6080 << 1) + t6080) << 2) + 0x8C294674))), (*(float *)(((((t6078 << 1) + t6078) << 2) + 0x8C294678))), (*(float *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)((t6070 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6076 << 2) << 1) + t6076) << 2)) + 0x18))), (*(float *)((t6070 + 0xAF0)))));
                                        *(float *)(((int)stk + 68)) = u6051;
                                        t6084 = *(int *)(((int)stk + 668));
                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)) = *(struct mv3 *)(((((t6084 << 1) + t6084) << 2) + 0x8C294670)); }
                                        u6053 = (float)(*(int *)(((int)stk + 668)));
                                        u6052 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                        u6053 = (u6053 - u6052);
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC54)) = (int)u6053;
                                        if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC54))) < (int)0x1) {
                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC54)) = 0x1;
                                        }
                                        u6098 = u6052;
                                    }
                                    u6052 = u6098;
                                    *(unsigned int *)(((int)stk + 668)) = ((*(int *)(((int)stk + 668))) + 0x1);
                                    continue;
                                }
                                break;
                            }
                            *(float *)(((int)stk + 744)) = ((float)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC54))) * (*(float *)0x8C23D204));
                            t6105 = *(int *)(((int)stk + 992));
                            t6108 = *(int *)((t6105 + 0xC74));
                            *(float *)((t6105 + 0xC70)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6105) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t6105) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t6108 << 2) << 1) + t6108) << 2)) + 0x8))) / (*(float *)(((int)stk + 744))));
                            if (!((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f))) {
                            } else {
                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                if (10.0f > (*(float *)(((int)stk + 744)))) {
                                    *(float *)(((int)stk + 744)) = 10.0f;
                                }
                                t6116 = *(int *)(((int)stk + 992));
                                t6119 = *(int *)((t6116 + 0xC74));
                                *(float *)((t6116 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6116) + 0x0))) * 0x6C) + (((*(int *)((t6116 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6119 << 2) << 1) + t6119) << 2)) + 0x8))) - ((*(float *)(((int)stk + 744))) * (1.0f + 1.0f)));
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))))) {
                                } else {
                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC)) = 0.0f;
                                }
                            }
                        } else {
                            t6147 = 0x1;
                            if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))) > 0.0f) {
                            } else {
                                t6144 = 0x0;
                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)))) {
                                    t6144 = 0xFFFFFFFF;
                                }
                                t6147 = t6144;
                            }
                            t6159 = 0x1;
                            if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x14))) > 0.0f) {
                            } else {
                                t6156 = 0x0;
                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x14)))) {
                                    t6156 = 0xFFFFFFFF;
                                }
                                t6159 = t6156;
                            }
                            if (t6147 != t6159) {
                                t6164 = *(int *)(((int)stk + 992));
                                t6167 = *(int *)((t6164 + 0xC74));
                                *(float *)((t6164 + 0xC70)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6164) + 0x0))) * 0x6C) + (((*(int *)((t6164 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6167 << 2) << 1) + t6167) << 2)) + 0x8))) / (*(float *)(((int)stk + 744))));
                                t6171 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                if (((*(int *)((0x8C105FE0 + ((((t6171 << 1) + t6171) << 2) << 1)))) & 16) != 0) {
                                    if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f)) {
                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                    }
                                    if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 12) {
                                        t6180 = *(int *)(((int)stk + 992));
                                        if (!(0.0f > ((*(float *)((t6180 + 0xB9C))) - (*(float *)((t6180 + 0xAE8)))))) {
                                            t6183 = *(int *)(((int)stk + 992));
                                            u6194 = ((*(float *)((t6183 + 0xB9C))) - (*(float *)((t6183 + 0xAE8))));
                                        } else {
                                            t6186 = *(int *)(((int)stk + 992));
                                            u6194 = ((-(*(float *)((t6186 + 0xB9C)))) + (*(float *)((t6186 + 0xAE8))));
                                        }
                                        *(float *)(((int)stk + 748)) = (u6194 / 420.0f);
                                        if ((u6194 / 420.0f) > 1.0f) {
                                            *(float *)(((int)stk + 748)) = 1.0f;
                                        }
                                        if (0.699999988f > (*(float *)(((int)stk + 748)))) {
                                            *(float *)(((int)stk + 748)) = 0.699999988f;
                                        }
                                        t6200 = *(int *)(((int)stk + 992));
                                        t6203 = *(int *)((t6200 + 0xC74));
                                        *(float *)((t6200 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6200) + 0x0))) * 0x6C) + (((*(int *)((t6200 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6203 << 2) << 1) + t6203) << 2)) + 0x8))) * (1.0f - (*(float *)(((int)stk + 748)))));
                                    }
                                } else {
                                    if (!((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f))) {
                                    } else {
                                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                        if (10.0f > (*(float *)(((int)stk + 744)))) {
                                            *(float *)(((int)stk + 744)) = 10.0f;
                                        }
                                        t6222 = *(int *)(((int)stk + 992));
                                        t6225 = *(int *)((t6222 + 0xC74));
                                        *(float *)((t6222 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6222) + 0x0))) * 0x6C) + (((*(int *)((t6222 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6225 << 2) << 1) + t6225) << 2)) + 0x8))) - ((*(float *)(((int)stk + 744))) * (1.0f + 1.0f)));
                                        if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC)))) {
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC)) = 0.0f;
                                        }
                                        if ((*(float *)(((int)stk + 120))) == 0.0f) {
                                        } else {
                                            t6235 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                            if (((*(int *)((((((t6235 << 1) + t6235) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                            } else {
                                                t6237 = *(int *)(((int)stk + 992));
                                                *(float *)(((int)stk + 748)) = ((-((*(float *)((t6237 + 0xC))) / (float)(*(int *)((t6237 + 0x30))))) + 1.0f);
                                                t6240 = *(int *)(((int)stk + 992));
                                                u6241 = *(float *)((t6240 + 0xB00));
                                                t6244 = *(int *)(((0xC74 + t6240) + 0x0));
                                                t6247 = *(int *)(((0xC74 + t6240) + 0x0));
                                                u6251 = (*(float *)(((0x1C + ((((*(int *)(((0xC6C + t6240) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t6240) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t6247 << 2) << 1) + t6247) << 2))) + 0x0)));
                                                u6251 = u6251 + (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))) * (*(float *)((0x10 + ((((*(int *)((0xC6C + t6240))) * 0x6C) + (((*(int *)((0xC5C + t6240))) * 0xD8) + 0x8C104194)) + ((((t6244 << 2) << 1) + t6244) << 2)))));
                                                u6253 = (*(float *)((t6240 + 0xAF0)));
                                                u6253 = u6253 + u6251 * u6241;
                                                *(float *)((t6240 + 0xBA4)) = u6253;
                                                t6256 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xD30)));
                                                u6257 = u6253;
                                                u6258 = u6251;
                                                u6259 = u6241;
                                                for (;;) {
                                                    *(unsigned int *)(((int)stk + 668)) = t6256;
                                                    t6256 = 0x8C295480;
                                                    if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)((t6256 + 0x0)))) {
                                                        u6259 = 0.0f;
                                                        t6265 = *(int *)(((int)stk + 668));
                                                        t6256 = t6265;
                                                        u6258 = (*(float *)(((((t6265 << 1) + t6256) << 2) + 0x8C294678)));
                                                        t6278 = 0x1;
                                                        if (u6258 > u6259) {
                                                        } else {
                                                            t6256 = (*(int *)(((int)stk + 668)));
                                                            t6274 = t6256;
                                                            t6256 = (t6256 << 1);
                                                            t6256 = (t6256 + t6274);
                                                            t6256 = (t6256 << 2);
                                                            u6258 = (*(float *)((t6256 + 0x8C294678)));
                                                            t6276 = 0x0;
                                                            if (u6259 > u6258) {
                                                                t6276 = 0xFFFFFFFF;
                                                            }
                                                            t6278 = t6276;
                                                        }
                                                        u6259 = 0.0f;
                                                        u6258 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                        if (u6258 > u6259) {
                                                            t6256 = 0x1;
                                                        } else {
                                                            t6256 = 0xBA4;
                                                            u6259 = 0.0f;
                                                            u6258 = (*(float *)((t6256 + (*(int *)(((int)stk + 992))))));
                                                            if (u6259 > u6258) {
                                                                t6256 = 0xFFFFFFFF;
                                                            } else {
                                                                t6256 = 0x0;
                                                            }
                                                        }
                                                        if (t6278 == t6256) {
                                                            u6259 = 0.0f;
                                                            t6294 = *(int *)(((int)stk + 668));
                                                            t6256 = t6294;
                                                            u6258 = (*(float *)(((((t6294 << 1) + t6256) << 2) + 0x8C294678)));
                                                            if (!(u6259 > u6258)) {
                                                                t6256 = (*(int *)(((int)stk + 668)));
                                                                t6298 = t6256;
                                                                t6256 = (t6256 << 1);
                                                                t6256 = (t6256 + t6298);
                                                                t6256 = (t6256 << 2);
                                                                u6259 = (*(float *)((t6256 + 0x8C294678)));
                                                            } else {
                                                                t6300 = *(int *)(((int)stk + 668));
                                                                t6256 = t6300;
                                                                u6259 = (*(float *)(((((t6300 << 1) + t6256) << 2) + 0x8C294678)));
                                                                u6259 = (-u6259);
                                                            }
                                                            u6258 = 0.0f;
                                                            u6257 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                            if (!(u6258 > u6257)) {
                                                                t6256 = (*(int *)(((int)stk + 992)));
                                                                u6258 = (*(float *)((t6256 + 0xBA4)));
                                                            } else {
                                                                u6258 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                u6258 = (-u6258);
                                                            }
                                                            if (!(u6258 > u6259)) {
                                                                t6256 = (*(int *)(((int)stk + 668)));
                                                                t6315 = t6256;
                                                                t6256 = (t6256 << 1);
                                                                t6256 = (t6256 + t6315);
                                                                t6256 = (t6256 << 2);
                                                                t6256 = (t6256 + 0x8C294670);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)(t6256); }
                                                                t6256 = (*(int *)(((int)stk + 668)));
                                                                u6259 = (float)t6256;
                                                                u6258 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                                                u6259 = (u6259 - u6258);
                                                                t6256 = (int)u6259;
                                                                *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6256;
                                                                t6256 = 0x1;
                                                                if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC50))) < (int)t6256) {
                                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6256;
                                                                }
                                                                *(unsigned int *)(((int)stk + 668)) = 0x12C;
                                                            }
                                                        }
                                                        t6256 = (*(int *)(((int)stk + 668)));
                                                        t6256 = (t6256 + 0x1);
                                                        continue;
                                                    }
                                                    break;
                                                }
                                                if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)0x8C295480)) {
                                                } else {
                                                    if ((int)(*(int *)(((int)stk + 668))) >= (int)0x12C) {
                                                    } else {
                                                        t6340 = *(int *)(((int)stk + 992));
                                                        *(Stk3 *)(((int)stk + 56)) = vecMake(1.0f, 0.0f, 0.0f);
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                                                        *(int *)((int)stk + 16) = (0xB9C + t6340);
                                                        *(int *)((int)stk + 16) = (0xB9C + t6340);
                                                        t6344 = ((int (*)(Stk4, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                    u6419 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                } else {
                                    u6419 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                }
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x14))))) {
                                    u6429 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x14)));
                                } else {
                                    u6429 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x14))));
                                }
                                if (!(u6429 > u6419)) {
                                    t6433 = *(int *)(((int)stk + 992));
                                    t6436 = *(int *)((t6433 + 0xC74));
                                    *(float *)((t6433 + 0xC70)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6433) + 0x0))) * 0x6C) + (((*(int *)((t6433 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6436 << 2) << 1) + t6436) << 2)) + 0x8))) / (*(float *)(((int)stk + 744))));
                                    t6440 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                    if (((*(int *)((0x8C105FE0 + ((((t6440 << 1) + t6440) << 2) << 1)))) & 16) != 0) {
                                        if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f)) {
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                        }
                                        if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 12) {
                                            t6449 = *(int *)(((int)stk + 992));
                                            if (!(0.0f > ((*(float *)((t6449 + 0xB9C))) - (*(float *)((t6449 + 0xAE8)))))) {
                                                t6452 = *(int *)(((int)stk + 992));
                                                u6463 = ((*(float *)((t6452 + 0xB9C))) - (*(float *)((t6452 + 0xAE8))));
                                            } else {
                                                t6455 = *(int *)(((int)stk + 992));
                                                u6463 = ((-(*(float *)((t6455 + 0xB9C)))) + (*(float *)((t6455 + 0xAE8))));
                                            }
                                            *(float *)(((int)stk + 748)) = (u6463 / 420.0f);
                                            if ((u6463 / 420.0f) > 1.0f) {
                                                *(float *)(((int)stk + 748)) = 1.0f;
                                            }
                                            if (0.699999988f > (*(float *)(((int)stk + 748)))) {
                                                *(float *)(((int)stk + 748)) = 0.699999988f;
                                            }
                                            t6469 = *(int *)(((int)stk + 992));
                                            t6472 = *(int *)((t6469 + 0xC74));
                                            *(float *)((t6469 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6469) + 0x0))) * 0x6C) + (((*(int *)((t6469 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6472 << 2) << 1) + t6472) << 2)) + 0x8))) * (1.0f - (*(float *)(((int)stk + 748)))));
                                        }
                                    } else {
                                        if (!((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f))) {
                                        } else {
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                            if (10.0f > (*(float *)(((int)stk + 744)))) {
                                                *(float *)(((int)stk + 744)) = 10.0f;
                                            }
                                            t6491 = *(int *)(((int)stk + 992));
                                            t6494 = *(int *)((t6491 + 0xC74));
                                            *(float *)((t6491 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6491) + 0x0))) * 0x6C) + (((*(int *)((t6491 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6494 << 2) << 1) + t6494) << 2)) + 0x8))) - ((*(float *)(((int)stk + 744))) * (1.0f + 1.0f)));
                                            if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC)))) {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC)) = 0.0f;
                                            }
                                            if ((*(float *)(((int)stk + 120))) == 0.0f) {
                                            } else {
                                                t6504 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                                if (((*(int *)((((((t6504 << 1) + t6504) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                                } else {
                                                    t6506 = *(int *)(((int)stk + 992));
                                                    *(float *)(((int)stk + 748)) = ((-((*(float *)((t6506 + 0xC))) / (float)(*(int *)((t6506 + 0x30))))) + 1.0f);
                                                    t6509 = *(int *)(((int)stk + 992));
                                                    u6510 = *(float *)((t6509 + 0xB00));
                                                    t6513 = *(int *)(((0xC74 + t6509) + 0x0));
                                                    t6516 = *(int *)(((0xC74 + t6509) + 0x0));
                                                    u6520 = (*(float *)(((0x1C + ((((*(int *)(((0xC6C + t6509) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t6509) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t6516 << 2) << 1) + t6516) << 2))) + 0x0)));
                                                    u6520 = u6520 + (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))) * (*(float *)((0x10 + ((((*(int *)((0xC6C + t6509))) * 0x6C) + (((*(int *)((0xC5C + t6509))) * 0xD8) + 0x8C104194)) + ((((t6513 << 2) << 1) + t6513) << 2)))));
                                                    u6522 = (*(float *)((t6509 + 0xAF0)));
                                                    u6522 = u6522 + u6520 * u6510;
                                                    *(float *)((t6509 + 0xBA4)) = u6522;
                                                    t6525 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xD30)));
                                                    u6526 = u6522;
                                                    u6527 = u6520;
                                                    u6528 = u6510;
                                                    for (;;) {
                                                        *(unsigned int *)(((int)stk + 668)) = t6525;
                                                        t6525 = 0x8C295480;
                                                        if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)((t6525 + 0x0)))) {
                                                            u6528 = 0.0f;
                                                            t6534 = *(int *)(((int)stk + 668));
                                                            t6525 = t6534;
                                                            u6527 = (*(float *)(((((t6534 << 1) + t6525) << 2) + 0x8C294678)));
                                                            t6547 = 0x1;
                                                            if (u6527 > u6528) {
                                                            } else {
                                                                t6525 = (*(int *)(((int)stk + 668)));
                                                                t6543 = t6525;
                                                                t6525 = (t6525 << 1);
                                                                t6525 = (t6525 + t6543);
                                                                t6525 = (t6525 << 2);
                                                                u6527 = (*(float *)((t6525 + 0x8C294678)));
                                                                t6545 = 0x0;
                                                                if (u6528 > u6527) {
                                                                    t6545 = 0xFFFFFFFF;
                                                                }
                                                                t6547 = t6545;
                                                            }
                                                            u6528 = 0.0f;
                                                            u6527 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                            if (u6527 > u6528) {
                                                                t6525 = 0x1;
                                                            } else {
                                                                t6525 = 0xBA4;
                                                                u6528 = 0.0f;
                                                                u6527 = (*(float *)((t6525 + (*(int *)(((int)stk + 992))))));
                                                                if (u6528 > u6527) {
                                                                    t6525 = 0xFFFFFFFF;
                                                                } else {
                                                                    t6525 = 0x0;
                                                                }
                                                            }
                                                            if (t6547 == t6525) {
                                                                u6528 = 0.0f;
                                                                t6563 = *(int *)(((int)stk + 668));
                                                                t6525 = t6563;
                                                                u6527 = (*(float *)(((((t6563 << 1) + t6525) << 2) + 0x8C294678)));
                                                                if (!(u6528 > u6527)) {
                                                                    t6525 = (*(int *)(((int)stk + 668)));
                                                                    t6567 = t6525;
                                                                    t6525 = (t6525 << 1);
                                                                    t6525 = (t6525 + t6567);
                                                                    t6525 = (t6525 << 2);
                                                                    u6528 = (*(float *)((t6525 + 0x8C294678)));
                                                                } else {
                                                                    t6569 = *(int *)(((int)stk + 668));
                                                                    t6525 = t6569;
                                                                    u6528 = (*(float *)(((((t6569 << 1) + t6525) << 2) + 0x8C294678)));
                                                                    u6528 = (-u6528);
                                                                }
                                                                u6527 = 0.0f;
                                                                u6526 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                if (!(u6527 > u6526)) {
                                                                    t6525 = (*(int *)(((int)stk + 992)));
                                                                    u6527 = (*(float *)((t6525 + 0xBA4)));
                                                                } else {
                                                                    u6527 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                    u6527 = (-u6527);
                                                                }
                                                                if (!(u6527 > u6528)) {
                                                                    t6525 = (*(int *)(((int)stk + 668)));
                                                                    t6584 = t6525;
                                                                    t6525 = (t6525 << 1);
                                                                    t6525 = (t6525 + t6584);
                                                                    t6525 = (t6525 << 2);
                                                                    t6525 = (t6525 + 0x8C294670);
                                                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)(t6525); }
                                                                    t6525 = (*(int *)(((int)stk + 668)));
                                                                    u6528 = (float)t6525;
                                                                    u6527 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                                                    u6528 = (u6528 - u6527);
                                                                    t6525 = (int)u6528;
                                                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6525;
                                                                    t6525 = 0x1;
                                                                    if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC50))) < (int)t6525) {
                                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6525;
                                                                    }
                                                                    *(unsigned int *)(((int)stk + 668)) = 0x12C;
                                                                }
                                                            }
                                                            t6525 = (*(int *)(((int)stk + 668)));
                                                            t6525 = (t6525 + 0x1);
                                                            continue;
                                                        }
                                                        break;
                                                    }
                                                    if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)0x8C295480)) {
                                                    } else {
                                                        if ((int)(*(int *)(((int)stk + 668))) >= (int)0x12C) {
                                                        } else {
                                                            t6609 = *(int *)(((int)stk + 992));
                                                            *(Stk3 *)(((int)stk + 56)) = vecMake(1.0f, 0.0f, 0.0f);
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                                                            *(int *)((int)stk + 16) = (0xB9C + t6609);
                                                            *(int *)((int)stk + 16) = (0xB9C + t6609);
                                                            t6613 = ((int (*)(Stk4, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                        u6688 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                    } else {
                                        u6688 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                    }
                                    if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4))))) {
                                        u6698 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                    } else {
                                        u6698 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4))));
                                    }
                                    if (!(u6688 > u6698)) {
                                        t6700 = *(int *)(((int)stk + 992));
                                        t6703 = *(int *)((t6700 + 0xC74));
                                        *(float *)((t6700 + 0xC70)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6700) + 0x0))) * 0x6C) + (((*(int *)((t6700 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6703 << 2) << 1) + t6703) << 2)) + 0x8))) / (*(float *)(((int)stk + 744))));
                                        t6707 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                        if (((*(int *)((0x8C105FE0 + ((((t6707 << 1) + t6707) << 2) << 1)))) & 16) != 0) {
                                            if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f)) {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                            }
                                            if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 12) {
                                                t6716 = *(int *)(((int)stk + 992));
                                                if (!(0.0f > ((*(float *)((t6716 + 0xB9C))) - (*(float *)((t6716 + 0xAE8)))))) {
                                                    t6719 = *(int *)(((int)stk + 992));
                                                    u6730 = ((*(float *)((t6719 + 0xB9C))) - (*(float *)((t6719 + 0xAE8))));
                                                } else {
                                                    t6722 = *(int *)(((int)stk + 992));
                                                    u6730 = ((-(*(float *)((t6722 + 0xB9C)))) + (*(float *)((t6722 + 0xAE8))));
                                                }
                                                *(float *)(((int)stk + 748)) = (u6730 / 420.0f);
                                                if ((u6730 / 420.0f) > 1.0f) {
                                                    *(float *)(((int)stk + 748)) = 1.0f;
                                                }
                                                if (0.699999988f > (*(float *)(((int)stk + 748)))) {
                                                    *(float *)(((int)stk + 748)) = 0.699999988f;
                                                }
                                                t6736 = *(int *)(((int)stk + 992));
                                                t6739 = *(int *)((t6736 + 0xC74));
                                                *(float *)((t6736 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6736) + 0x0))) * 0x6C) + (((*(int *)((t6736 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6739 << 2) << 1) + t6739) << 2)) + 0x8))) * (1.0f - (*(float *)(((int)stk + 748)))));
                                            }
                                        } else {
                                            if (!((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f))) {
                                            } else {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                                if (10.0f > (*(float *)(((int)stk + 744)))) {
                                                    *(float *)(((int)stk + 744)) = 10.0f;
                                                }
                                                t6758 = *(int *)(((int)stk + 992));
                                                t6761 = *(int *)((t6758 + 0xC74));
                                                *(float *)((t6758 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t6758) + 0x0))) * 0x6C) + (((*(int *)((t6758 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6761 << 2) << 1) + t6761) << 2)) + 0x8))) - ((*(float *)(((int)stk + 744))) * (1.0f + 1.0f)));
                                                if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC)))) {
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC)) = 0.0f;
                                                }
                                                if ((*(float *)(((int)stk + 120))) == 0.0f) {
                                                } else {
                                                    t6771 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                                    if (((*(int *)((((((t6771 << 1) + t6771) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                                    } else {
                                                        t6773 = *(int *)(((int)stk + 992));
                                                        *(float *)(((int)stk + 748)) = ((-((*(float *)((t6773 + 0xC))) / (float)(*(int *)((t6773 + 0x30))))) + 1.0f);
                                                        t6776 = *(int *)(((int)stk + 992));
                                                        u6777 = *(float *)((t6776 + 0xB00));
                                                        t6780 = *(int *)(((0xC74 + t6776) + 0x0));
                                                        t6783 = *(int *)(((0xC74 + t6776) + 0x0));
                                                        u6787 = (*(float *)(((0x1C + ((((*(int *)(((0xC6C + t6776) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t6776) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t6783 << 2) << 1) + t6783) << 2))) + 0x0)));
                                                        u6787 = u6787 + (*(float *)(((0x2A8 + ((int)stk + 68)) + 0x0))) * (*(float *)((0x10 + ((((*(int *)((0xC6C + t6776))) * 0x6C) + (((*(int *)((0xC5C + t6776))) * 0xD8) + 0x8C104194)) + ((((t6780 << 2) << 1) + t6780) << 2)))));
                                                        u6789 = (*(float *)((t6776 + 0xAF0)));
                                                        u6789 = u6789 + u6787 * u6777;
                                                        *(float *)((t6776 + 0xBA4)) = u6789;
                                                        t6792 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xD30)));
                                                        u6793 = u6789;
                                                        u6794 = u6787;
                                                        u6795 = u6777;
                                                        for (;;) {
                                                            *(unsigned int *)(((int)stk + 668)) = t6792;
                                                            t6792 = 0x8C295480;
                                                            if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)((t6792 + 0x0)))) {
                                                                u6795 = 0.0f;
                                                                t6801 = *(int *)(((int)stk + 668));
                                                                t6792 = t6801;
                                                                u6794 = (*(float *)(((((t6801 << 1) + t6792) << 2) + 0x8C294678)));
                                                                t6814 = 0x1;
                                                                if (u6794 > u6795) {
                                                                } else {
                                                                    t6792 = (*(int *)(((int)stk + 668)));
                                                                    t6810 = t6792;
                                                                    t6792 = (t6792 << 1);
                                                                    t6792 = (t6792 + t6810);
                                                                    t6792 = (t6792 << 2);
                                                                    u6794 = (*(float *)((t6792 + 0x8C294678)));
                                                                    t6812 = 0x0;
                                                                    if (u6795 > u6794) {
                                                                        t6812 = 0xFFFFFFFF;
                                                                    }
                                                                    t6814 = t6812;
                                                                }
                                                                u6795 = 0.0f;
                                                                u6794 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                if (u6794 > u6795) {
                                                                    t6792 = 0x1;
                                                                } else {
                                                                    t6792 = 0xBA4;
                                                                    u6795 = 0.0f;
                                                                    u6794 = (*(float *)((t6792 + (*(int *)(((int)stk + 992))))));
                                                                    if (u6795 > u6794) {
                                                                        t6792 = 0xFFFFFFFF;
                                                                    } else {
                                                                        t6792 = 0x0;
                                                                    }
                                                                }
                                                                if (t6814 == t6792) {
                                                                    u6795 = 0.0f;
                                                                    t6830 = *(int *)(((int)stk + 668));
                                                                    t6792 = t6830;
                                                                    u6794 = (*(float *)(((((t6830 << 1) + t6792) << 2) + 0x8C294678)));
                                                                    if (!(u6795 > u6794)) {
                                                                        t6792 = (*(int *)(((int)stk + 668)));
                                                                        t6834 = t6792;
                                                                        t6792 = (t6792 << 1);
                                                                        t6792 = (t6792 + t6834);
                                                                        t6792 = (t6792 << 2);
                                                                        u6795 = (*(float *)((t6792 + 0x8C294678)));
                                                                    } else {
                                                                        t6836 = *(int *)(((int)stk + 668));
                                                                        t6792 = t6836;
                                                                        u6795 = (*(float *)(((((t6836 << 1) + t6792) << 2) + 0x8C294678)));
                                                                        u6795 = (-u6795);
                                                                    }
                                                                    u6794 = 0.0f;
                                                                    u6793 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                    if (!(u6794 > u6793)) {
                                                                        t6792 = (*(int *)(((int)stk + 992)));
                                                                        u6794 = (*(float *)((t6792 + 0xBA4)));
                                                                    } else {
                                                                        u6794 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                                                                        u6794 = (-u6794);
                                                                    }
                                                                    if (!(u6794 > u6795)) {
                                                                        t6792 = (*(int *)(((int)stk + 668)));
                                                                        t6851 = t6792;
                                                                        t6792 = (t6792 << 1);
                                                                        t6792 = (t6792 + t6851);
                                                                        t6792 = (t6792 << 2);
                                                                        t6792 = (t6792 + 0x8C294670);
                                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)) = *(struct mv3 *)(t6792); }
                                                                        t6792 = (*(int *)(((int)stk + 668)));
                                                                        u6795 = (float)t6792;
                                                                        u6794 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                                                        u6795 = (u6795 - u6794);
                                                                        t6792 = (int)u6795;
                                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6792;
                                                                        t6792 = 0x1;
                                                                        if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC50))) < (int)t6792) {
                                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC50)) = t6792;
                                                                        }
                                                                        *(unsigned int *)(((int)stk + 668)) = 0x12C;
                                                                    }
                                                                }
                                                                t6792 = (*(int *)(((int)stk + 668)));
                                                                t6792 = (t6792 + 0x1);
                                                                continue;
                                                            }
                                                            break;
                                                        }
                                                        if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)0x8C295480)) {
                                                        } else {
                                                            if ((int)(*(int *)(((int)stk + 668))) >= (int)0x12C) {
                                                            } else {
                                                                t6876 = *(int *)(((int)stk + 992));
                                                                *(Stk3 *)(((int)stk + 56)) = vecMake(1.0f, 0.0f, 0.0f);
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xB9C)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                                                                *(int *)((int)stk + 16) = (0xB9C + t6876);
                                                                *(int *)((int)stk + 16) = (0xB9C + t6876);
                                                                t6880 = ((int (*)(Stk4, Stk3, Stk3))(vecLineCrossXZ))(*(Stk4 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 32)), *(Stk3 *)(((int)stk + 44)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        t6948 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                        if (((*(int *)((((((t6948 << 1) + t6948) << 2) << 1) + 0x8C105FE0))) & 0x40000) == 0) {
                                            t6950 = *(int *)(((int)stk + 992));
                                            *(float *)((t6950 + 0xBA4)) = (*(float *)((t6950 + 0xAF0)));
                                            t6953 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                                            if (((*(int *)((0x8C105FE0 + ((((t6953 << 1) + t6953) << 2) << 1)))) & 16) == 0) {
                                                t6955 = *(int *)(((int)stk + 992));
                                                t6958 = *(int *)((t6955 + 0xC74));
                                                *(float *)((t6955 + 0xC)) = (float)(*(int *)((((((*(int *)(((0xC6C + t6955) + 0x0))) * 0x6C) + (((*(int *)((0xC5C + t6955))) * 0xD8) + 0x8C104194)) + ((((t6958 << 2) << 1) + t6958) << 2)) + 0x4)));
                                            }
                                            *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = 1.5f;
                                            t6970 = *(int *)(((int)stk + 992));
                                            *(unsigned int *)((t6970 + 0xB60)) = ((*(int *)((t6970 + 0xB60))) | 0x4000);
                                        } else {
                                            *(float *)(((int)stk + 68)) = 999.0f;
                                            u6973 = *(float *)(((*(int *)(((int)stk + 900))) + 0x30));
                                            *(unsigned int *)(((int)stk + 668)) = (int)u6973;
                                            u6975 = u6698;
                                            u6976 = u6973;
                                            for (;;) {
                                                if ((int)(*(int *)(((int)stk + 668))) <= (int)(*(int *)0x8C295480)) {
                                                    t6979 = *(int *)(((int)stk + 992));
                                                    t6985 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                                    t6987 = *(int *)(((int)stk + 668));
                                                    t6989 = *(int *)(((int)stk + 668));
                                                    u6974 = (vecDistXZf((*(float *)(((((t6989 << 1) + t6989) << 2) + 0x8C294674))), (*(float *)(((((t6987 << 1) + t6987) << 2) + 0x8C294678))), (*(float *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)((t6979 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6985 << 2) << 1) + t6985) << 2)) + 0x18))), (*(float *)((t6979 + 0xAF0)))));
                                                    u6976 = (*(float *)(((int)stk + 68)));
                                                    if (u6976 > u6974) {
                                                        t6993 = *(int *)(((int)stk + 992));
                                                        t6999 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                                                        t7001 = *(int *)(((int)stk + 668));
                                                        t7003 = *(int *)(((int)stk + 668));
                                                        u6974 = (vecDistXZf((*(float *)(((((t7003 << 1) + t7003) << 2) + 0x8C294674))), (*(float *)(((((t7001 << 1) + t7001) << 2) + 0x8C294678))), (*(float *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)((t6993 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t6999 << 2) << 1) + t6999) << 2)) + 0x18))), (*(float *)((t6993 + 0xAF0)))));
                                                        *(float *)(((int)stk + 68)) = u6974;
                                                        t7007 = *(int *)(((int)stk + 668));
                                                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xBA8)) = *(struct mv3 *)(((((t7007 << 1) + t7007) << 2) + 0x8C294670)); }
                                                        u6976 = (float)(*(int *)(((int)stk + 668)));
                                                        u6975 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x30)));
                                                        u6976 = (u6976 - u6975);
                                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC54)) = (int)u6976;
                                                        if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC54))) < (int)0x1) {
                                                            *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xC54)) = 0x1;
                                                        }
                                                        u7021 = u6975;
                                                    }
                                                    u6975 = u7021;
                                                    *(unsigned int *)(((int)stk + 668)) = ((*(int *)(((int)stk + 668))) + 0x1);
                                                    continue;
                                                }
                                                break;
                                            }
                                            *(float *)(((int)stk + 744)) = ((float)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC54))) * (*(float *)0x8C23D204));
                                            t7028 = *(int *)(((int)stk + 992));
                                            t7031 = *(int *)((t7028 + 0xC74));
                                            *(float *)((t7028 + 0xC70)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t7028) + 0x0))) * 0x6C) + (((*(int *)(((0xC5C + t7028) + 0x0))) * 0xD8) + 0x8C104194)) + ((((t7031 << 2) << 1) + t7031) << 2)) + 0x8))) / (*(float *)(((int)stk + 744))));
                                            if (!((*(float *)(((*(int *)(((int)stk + 992))) + 0xC70))) > (1.0f + 1.0f))) {
                                            } else {
                                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                                if (10.0f > (*(float *)(((int)stk + 744)))) {
                                                    *(float *)(((int)stk + 744)) = 10.0f;
                                                }
                                                t7039 = *(int *)(((int)stk + 992));
                                                t7042 = *(int *)((t7039 + 0xC74));
                                                *(float *)((t7039 + 0xC)) = ((float)(*(int *)((((((*(int *)(((0xC6C + t7039) + 0x0))) * 0x6C) + (((*(int *)((t7039 + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t7042 << 2) << 1) + t7042) << 2)) + 0x8))) - ((*(float *)(((int)stk + 744))) * (1.0f + 1.0f)));
                                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC))))) {
                                                } else {
                                                    *(float *)(((*(int *)(((int)stk + 992))) + 0xC)) = 0.0f;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    if (1.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC70)))) {
                        *(unsigned int *)(((int)stk + 636)) = 0x1;
                    }
                    if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) == 20) {
                        t7139 = *(int *)(((int)stk + 992));
                        *(unsigned short *)(((0xB0E + t7139) + 0x0)) = (nlArcTan2(((*(float *)((t7139 + 0xB9C))) - (*(float *)((t7139 + 0xAE8)))), ((*(float *)((t7139 + 0xBA4))) - (*(float *)((t7139 + 0xAF0))))));
                    }
                    t7154 = *(int *)(((int)stk + 992));
                    if (!(0.0f > ((*(float *)((t7154 + 0xAE8))) - (*(float *)((t7154 + 0xB9C)))))) {
                        t7157 = *(int *)(((int)stk + 992));
                        u7168 = ((*(float *)((t7157 + 0xAE8))) - (*(float *)((t7157 + 0xB9C))));
                    } else {
                        t7160 = *(int *)(((int)stk + 992));
                        u7168 = ((-(*(float *)((t7160 + 0xAE8)))) + (*(float *)((t7160 + 0xB9C))));
                    }
                    t7175 = *(int *)((0xC74 + (*(int *)(((int)stk + 992)))));
                    if (!(0.0f > (*(float *)((((((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t7175 << 2) << 1) + t7175) << 2)) + 0x20))))) {
                        t7182 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                        u7193 = (*(float *)((((((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t7182 << 2) << 1) + t7182) << 2)) + 0x20)));
                    } else {
                        t7189 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC74));
                        u7193 = (-(*(float *)((((((*(int *)(((0xC6C + (*(int *)(((int)stk + 992)))) + 0x0))) * 0x6C) + (((*(int *)(((*(int *)(((int)stk + 992))) + 0xC5C))) * 0xD8) + 0x8C104194)) + ((((t7189 << 2) << 1) + t7189) << 2)) + 0x20))));
                    }
                    if (u7168 > (u7193 + 10.0f)) {
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                        t7197 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7197 + 0xB60)) = ((*(int *)((t7197 + 0xB60))) | 0x4000);
                        *(unsigned int *)(((int)stk + 636)) = 0x0;
                    }
                    if ((*(int *)((0xC5C + (*(int *)(((int)stk + 992)))))) != 20) {
                        t7220 = 0x1;
                        if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x3C))) > 0.0f) {
                        } else {
                            t7217 = 0x0;
                            if (0.0f > (*(float *)((0x3C + (*(int *)(((int)stk + 900))))))) {
                                t7217 = 0xFFFFFFFF;
                            }
                            t7220 = t7217;
                        }
                        t7232 = 0x1;
                        if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) > 0.0f) {
                        } else {
                            t7229 = 0x0;
                            if (0.0f > (*(float *)((0xB00 + (*(int *)(((int)stk + 992))))))) {
                                t7229 = 0xFFFFFFFF;
                            }
                            t7232 = t7229;
                        }
                        if (t7220 == (-t7232)) {
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4))))) {
                                u7245 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4)));
                            } else {
                                u7245 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xBA4))));
                            }
                            if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))))) {
                                u7255 = (*(float *)(((*(int *)(((int)stk + 900))) + 0x6C)));
                            } else {
                                u7255 = (-(*(float *)(((*(int *)(((int)stk + 900))) + 0x6C))));
                            }
                            if (u7245 > u7255) {
                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC70)) = (1.0f + 1.0f);
                                t7258 = *(int *)(((int)stk + 992));
                                *(unsigned int *)((t7258 + 0xB60)) = ((*(int *)((t7258 + 0xB60))) | 0x4000);
                                *(unsigned int *)(((int)stk + 636)) = 0x0;
                            }
                        }
                    }
                    t7282 = *(int *)(((int)stk + 992));
                    *(float *)((t7282 + 0x14)) = ((*(float *)((t7282 + 0xC70))) * (*(float *)0x8C23D204));
                    t7286 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                    if ((((*(int *)((((((t7286 << 1) + t7286) << 2) << 1) + 0x8C105FE0))) & 0x8000) != 0) && ((t7288 = *(int *)(((int)stk + 992)), t7289 = *(int *)((t7288 + 0xCEC)), (int)t7289 > 0) && (t7290 = *(int *)(((int)stk + 992)), t7291 = *(int *)((t7290 + 0xCEC)), (int)t7291 < (int)0x3))) {
                        if ((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 992)))))) << 2)))) == 1) {
                            *(float *)(((0xC90 + (*(int *)(((int)stk + 992)))) + 0x0)) = ((*(float *)((0x8C102BC0 + (((eepromGetDiff()) << 2) << 1)))) * 1.5f);
                        } else {
                            *(float *)((0xC90 + (*(int *)(((int)stk + 992))))) = 1.5f;
                        }
                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xCEC)) = 0x63;
                        t7317 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7317 + 0xB60)) = ((*(int *)((t7317 + 0xB60))) | 0x10000);
                    }
                    t7328 = *(int *)((0xC5C + (*(int *)(((int)stk + 992)))));
                    if (((*(int *)((0x8C105FE0 + ((((t7328 << 1) + t7328) << 2) << 1)))) & 8) != 0) {
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 0.0f;
                    }
                    if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xBD0))) > 0) {
                        *(unsigned int *)(((int)stk + 636)) = 0x1;
                    }
                    if ((*(int *)(((int)stk + 636))) != 0) {
                        t7342 = (((int)stk + 68) + 0x54);
                        t7343 = ((((int)stk + 68) + 0x54) + 480);
                        t7344 = (*(int *)(((int)stk + 992)));
                        for (;;) { t7345 = *(int *)t7342; t7342 = (t7342 + 4); if ((unsigned int)t7343 < (unsigned int)t7342) break; *(unsigned int *)t7344 = t7345; t7344 = (t7344 + 4); }
                        t7346 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7346 + 0xC68)) = (*(short *)((t7346 + 0xD44)));
                        *(float *)(((*(int *)(((int)stk + 992))) + 0xB18)) = 1.0f;
                        t7349 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7349 + 0xB60)) = ((*(int *)((t7349 + 0xB60))) & 0xFFFFFEFF);
                        t7351 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7351 + 0xB60)) = ((*(int *)((t7351 + 0xB60))) & 0xFFFFFBFF);
                        t7353 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7353 + 0xB60)) = ((*(int *)((t7353 + 0xB60))) & 0xFFFFFDFF);
                        t7355 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7355 + 0xB60)) = ((*(int *)((t7355 + 0xB60))) & 0xFFFFBFFF);
                    } else {
                        *(unsigned int *)(((0xC68 + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x0;
                        if (((*(int *)0x8C421F60) == 0) && (t7359 = *(int *)0x8C287B3C, (t7359 & 1) == 0)) {
                        } else {
                            if ((*(int *)0x8C294668) != 0) {
                            } else {
                                if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC50))) < (int)0x14) {
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD74)) = 0x1;
                                    t7372 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t7372 + 0xD70)) = ((*(int *)((t7372 + 0xC50))) - 5);
                                    if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xD70))) >= (int)0x1) {
                                    } else {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD70)) = 0x1;
                                    }
                                } else {
                                    *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD74)) = 0x0;
                                    t7380 = *(int *)(((int)stk + 992));
                                    *(unsigned int *)((t7380 + 0xD70)) = ((*(int *)((t7380 + 0xC50))) - 20);
                                    if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xD70))) >= (int)0x1) {
                                    } else {
                                        *(unsigned int *)(((*(int *)(((int)stk + 992))) + 0xD70)) = 0x1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        t7436 = *(int *)(((int)stk + 992));
        *(unsigned int *)((t7436 + 0xBD0)) = ((*(int *)((t7436 + 0xBD0))) - 1);
        if (((*(int *)0x8C287C60) == 0) && (t7439 = *(int *)(((int)stk + 124)), t7439 == 0)) {
            t7440 = *(int *)(((int)stk + 992));
            *(float *)((t7440 + 0xC7C)) = ((*(float *)((t7440 + 0xC7C))) * 0.899999976f);
            if (0.100000001f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xC7C)))) {
                *(float *)(((*(int *)(((int)stk + 992))) + 0xC7C)) = 0.0f;
            }
        }
    }
    playerExec((*(int *)(((int)stk + 992))));
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        if (((*(int *)((0xB60 + (*(int *)(((int)stk + 992)))))) & 1) == 0) {
        } else {
            if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xC40))) >= 0) {
            } else {
                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x100) == 0) {
                } else {
                    t7491 = racketHitCheck((*(int *)(((int)stk + 992))), (*(int *)(((int)stk + 900))), 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28));
                    if (t7491 == 0) {
                    } else {
                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                            if (((*(int *)((0x54 + (*(int *)(((int)stk + 900)))))) & 4) != 0) {
                                if ((*(int *)(((*(int *)(((int)stk + 900))) + 0x4C))) != 0) {
                                    t7501 = *(int *)(((*(int *)(((int)stk + 992))) + 0xB5C));
                                    t7502 = serveGetReceiver();
                                    if (t7501 != t7502) {
                                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x100);
                                    }
                                } else {
                                    *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x100);
                                }
                            }
                        }
                        *(unsigned int *)(((int)stk + 704)) = (*(int *)(((*(int *)(((int)stk + 900))) + 0x50)));
                        *(unsigned int *)(((*(int *)(((int)stk + 900))) + 0x50)) = (*(int *)(((*(int *)(((int)stk + 992))) + 0xC64)));
                        if (((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xCEC))) < (int)0x63) && (t7535 = *(int *)(((int)stk + 704)), t7536 = *(int *)((((((t7535 << 1) + t7535) << 2) << 1) + 0x8C105FE0)), (t7536 & 0x40000) != 0)) {
                            if (((*(int *)0x8C295DDC) & 16) != 0) {
                            } else {
                                if (((*(int *)0x8C295DDC) & 1) == 0) {
                                    t7548 = *(int *)(((int)stk + 992));
                                    t7549 = rndRangef(1.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                    *(float *)(((0xB90 + t7548) + 0x0)) = ((*(float *)(((0xB90 + t7548) + 0x0))) + (((t7549 + -0.5f) * (vecLength(*(Stk3 *)(((int)stk + 56))))) / 7.0f));
                                    t7553 = *(int *)(((int)stk + 992));
                                    u7554 = *(float *)((t7553 + 0xB00));
                                    t7555 = rndRangef(1.0f);
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                                    *(float *)(((0xB98 + t7553) + 0x0)) = ((*(float *)(((0xB98 + t7553) + 0x0))) + ((((u7554 * t7555)) * (vecLength(*(Stk3 *)(((int)stk + 44))))) / 7.0f));
                                }
                            }
                        } else {
                            if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 1) {
                                t7580 = *(int *)(((int)stk + 992));
                                u7583 = 0.800000012f;
                                u7583 = u7583 + (*(float *)((0xB00 + t7580))) * (*(float *)((t7580 + 0xB98)));
                                *(float *)(((0xB98 + t7580) + 0x0)) = ((u7583 / (1.0f + 1.0f)) * (*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))));
                            }
                        }
                        t7604 = *(int *)(((int)stk + 900));
                        t7605 = *(int *)((t7604 + 0x50));
                        *(float *)((t7604 + 0x38)) = ((*(float *)((((((t7605 << 1) + t7605) << 2) << 1) + 0x8C105FCC))) * 0.699999988f);
                        *(Stk3 *)(((int)stk + 56)) = vecMake(0.0f, 0.0f, ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB00))) * 64.0f));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0xC)); }
                        t7610 = ((float (*)(Stk3))(vecDistXZ))(*(Stk3 *)(((int)stk + 44)));
                        t7613 = nlArcTan2(((-(*(float *)(((*(int *)(((int)stk + 900))) + 0x10)))) + 10.0f), t7610);
                        *(float *)(((int)stk + 740)) = ((nlSin(t7613)) * 8.0f);
                        t7616 = *(int *)(((*(int *)(((int)stk + 900))) + 0x50));
                        if ((((*(int *)((((((t7616 << 1) + t7616) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) && (u7618 = *(float *)(((int)stk + 740)), u7618 > 0.0f)) {
                            *(float *)(((int)stk + 740)) = 0.0f;
                        }
                        if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 1) {
                            *(float *)(((int)stk + 740)) = 0.0f;
                        }
                        t7628 = *(int *)(((int)stk + 900));
                        u7631 = (*(float *)((t7628 + 0x38)));
                        u7631 = u7631 + 0.699999988f * (*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0)));
                        *(float *)((t7628 + 0x38)) = u7631;
                        if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 5) {
                            if ((*(int *)(((*(int *)(((int)stk + 992))) + 0xC6C))) == 0) {
                                if (!(0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))))) {
                                    u7650 = (*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0)));
                                } else {
                                    u7650 = (-(*(float *)(((*(int *)(((int)stk + 992))) + 0xAF0))));
                                }
                                if (u7650 > 118.849998f) {
                                    t7652 = *(int *)(((int)stk + 900));
                                    *(float *)((t7652 + 0x38)) = ((*(float *)((t7652 + 0x38))) + 0.600000024f);
                                }
                            } else {
                                t7661 = *(int *)(((int)stk + 900));
                                *(float *)((t7661 + 0x38)) = ((*(float *)((t7661 + 0x38))) + 0.600000024f);
                            }
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x34)); }
                        *(float *)(((int)stk + 740)) = (vecLengthXZ(*(Stk3 *)(((int)stk + 56))));
                        if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 1) {
                            *(float *)(((int)stk + 740)) = 2.79999995f;
                        }
                        if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xCEC))) < (int)0x63) {
                            t7689 = *(int *)(((*(int *)(((int)stk + 900))) + 0x50));
                            if ((((*(int *)((((((t7689 << 1) + t7689) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) && (t7691 = *(int *)(((int)stk + 704)), t7692 = *(int *)((((((t7691 << 1) + t7691) << 2) << 1) + 0x8C105FE0)), (t7692 & 0x40000) == 0)) {
                                if ((*(float *)(((int)stk + 740))) > 2.79999995f) {
                                    t7697 = *(int *)(((int)stk + 900));
                                    *(float *)((t7697 + 0x38)) = ((*(float *)((t7697 + 0x38))) - (((*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0))) + -2.79999995f) * 0.150000006f));
                                }
                            } else {
                                t7709 = *(int *)(((int)stk + 900));
                                u7711 = (*(float *)((t7709 + 0x38)));
                                u7711 = u7711 + 0.150000006f * ((*(float *)(((0x2A0 + ((int)stk + 68)) + 0x0))) + -2.79999995f);
                                *(float *)((t7709 + 0x38)) = u7711;
                            }
                        }
                        if ((*(float *)(((*(int *)(((int)stk + 900))) + 0x38))) > 1.70000005f) {
                            *(float *)(((*(int *)(((int)stk + 900))) + 0x38)) = 1.70000005f;
                        }
                        t7734 = *(int *)(((int)stk + 900));
                        t7735 = *(int *)((t7734 + 0x50));
                        *(float *)((t7734 + 0x70)) = ((((*(float *)((((((t7735 << 1) + t7735) << 2) << 1) + 0x8C105FD8))) * (*(float *)((((*(int *)(((0xC6C + (*(int *)(((0x39C + ((int)stk + 68)) + 0x0)))) + 0x0))) << 2) + (((*(int *)((0xC58 + (*(int *)(((int)stk + 992)))))) * 0x6C) + 0x8C102434)))))) * 0.163333341f);
                        if ((int)(*(int *)(((*(int *)(((int)stk + 992))) + 0xCEC))) < (int)0x63) {
                            t7746 = *(int *)((0x50 + (*(int *)(((int)stk + 900)))));
                            if (((*(int *)((0x8C105FE0 + ((((t7746 << 1) + t7746) << 2) << 1)))) & 1) == 0) {
                                *(float *)(((*(int *)(((int)stk + 992))) + 0xC90)) = 0.0f;
                                t7749 = *(int *)(((int)stk + 992));
                                *(unsigned int *)((t7749 + 0xB60)) = ((*(int *)((t7749 + 0xB60))) & 0xFFFEFFFF);
                            }
                        }
                        t7763 = *(int *)(((int)stk + 900));
                        u7766 = 1.0f;
                        u7766 = u7766 + 0.25f * (*(float *)(((*(int *)(((0x39C + ((int)stk + 68)) + 0x0))) + 0xC90)));
                        *(float *)(((t7763 + 0x70) + 0x0)) = ((*(float *)(((t7763 + 0x70) + 0x0))) * u7766);
                        if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB5C))) == 0) && ((t7770 = *(int *)0x8C287D5C, t7770 == 2) || (t7771 = *(int *)0x8C287D5C, t7771 == 3))) {
                            t7772 = *(int *)(((int)stk + 900));
                            *(float *)((t7772 + 0x70)) = ((*(float *)((t7772 + 0x70))) * (*(float *)0x8C2FBC74));
                        }
                        if ((*(int *)((0x8C287AE0 + ((*(int *)((0xB5C + (*(int *)(((int)stk + 992)))))) << 2)))) == 1) {
                            t7783 = *(int *)(((int)stk + 900));
                            *(float *)(((t7783 + 0x70) + 0x0)) = ((*(float *)(((t7783 + 0x70) + 0x0))) * (*(float *)((0x8C102BBC + (((eepromGetDiff()) << 2) << 1)))));
                        }
                        t7796 = *(int *)(((int)stk + 900));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7796 + 0x18)) = *(struct mv3 *)((t7796 + 0xC)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 992))) + 0xC44)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x18)); }
                        t7799 = *(int *)(((int)stk + 900));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((t7799 + 0x24)) = *(struct mv3 *)((t7799 + 0x34)); }
                        *(float *)((0x30 + (*(int *)(((int)stk + 900))))) = (-1.0f);
                        *(float *)(((*(int *)(((int)stk + 900))) + 0x88)) = 0.0f;
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x40)) = *(struct mv3 *)(0x8C1016D4); }
                        *(unsigned int *)(((0xC40 + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x14;
                        *(unsigned int *)(((0x4C + (*(int *)(((int)stk + 900)))) + 0x0)) = 0x0;
                        *(unsigned int *)(((0xC50 + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x63;
                        *(unsigned int *)(((0xC54 + (*(int *)(((int)stk + 992)))) + 0x0)) = 0x63;
                        t7807 = *(int *)(((int)stk + 900));
                        *(unsigned int *)((t7807 + 0x54)) = ((*(int *)((t7807 + 0x54))) & 0xFFFFFFFB);
                        *(unsigned int *)0x8C287AF8 = (*(int *)(((*(int *)(((int)stk + 992))) + 0xB5C)));
                        *(unsigned int *)0x8C287B84 = ((*(int *)0x8C287B84) + 0x1);
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x2);
                        shotAim((*(int *)(((int)stk + 992))), (*(float *)(((*(int *)(((int)stk + 900))) + 0x70))));
                        t7826 = 0x1;
                        if ((*(float *)(((*(int *)(((int)stk + 992))) + 0xB90))) > 0.0f) {
                        } else {
                            t7823 = 0x0;
                            if (0.0f > (*(float *)(((*(int *)(((int)stk + 992))) + 0xB90)))) {
                                t7823 = 0xFFFFFFFF;
                            }
                            t7826 = t7823;
                        }
                        *(unsigned int *)0x8C287B78 = t7826;
                        t7829 = *(int *)(((int)stk + 992));
                        *(unsigned int *)((t7829 + 0xB60)) = ((*(int *)((t7829 + 0xB60))) & 0xFFFFFBFF);
                        if ((*(int *)(((*(int *)(((int)stk + 904))) + 0x10))) == 4) {
                            t7836 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                            t7837 = ((~(((~(t7836 + 0x2)) + 0x1) & 0x3)) + 0x1);
                            if ((int)(t7836 + 0x2) >= 0) {
                                t7837 = ((t7836 + 0x2) & 0x3);
                            }
                            *(unsigned int *)(((int)stk + 76)) = ((t7837 * 0xD78) + 0x8C287D84);
                            *(unsigned int *)(((0xC40 + ((t7837 * 0xD78) + 0x8C287D84)) + 0x0)) = 0x14;
                            *(unsigned int *)(((0xC50 + (*(int *)(((int)stk + 76)))) + 0x0)) = 0x63;
                            *(unsigned int *)(((0xC54 + (*(int *)(((int)stk + 76)))) + 0x0)) = 0x63;
                            *(unsigned int *)(((0xB60 + (*(int *)(((int)stk + 76)))) + 0x0)) = ((*(int *)(((0xB60 + (*(int *)(((int)stk + 76)))) + 0x0))) & 0xFFFFFBFF);
                        }
                        if ((*(int *)0x8C38BA70) != 0) {
                            t7852 = *(int *)(((int)stk + 900));
                            *(Stk3 *)(((int)stk + 56)) = vecMake((*(float *)((t7852 + 0xC))), (*(float *)((t7852 + 0x10))), (*(float *)(((*(int *)(((int)stk + 992))) + 0xD0C))));
                            u7857 = 1.0f;
                            u7857 = u7857 + 0.600000024f * (*(float *)(((*(int *)(((int)stk + 992))) + 0xC90)));
                            effHitFlashSpawn(u7857);
                        }
                        if ((*(int *)0x8C38BA70) == 0) {
                        } else {
                            if (((*(int *)((0xD6C + (*(int *)(((int)stk + 992)))))) != -1) && ((t7889 = *(int *)(((int)stk + 992)), t7890 = *(int *)((0xD6C + t7889)), t7890 != 4) && ((t7891 = *(int *)(((int)stk + 992)), t7892 = *(int *)((0xD6C + t7891)), t7892 != 5) && (t7893 = *(int *)(((int)stk + 992)), t7894 = *(int *)((0xD6C + t7893)), t7894 != 7)))) {
                                if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 1) {
                                    t7913 = 0x8C1023E0;
                                    t7914 = (((*(int *)(((*(int *)(((int)stk + 992))) + 0xD6C))) << 1) << 2);
                                } else {
                                    t7913 = 0x8C1023DC;
                                    t7914 = (((*(int *)(((*(int *)(((int)stk + 992))) + 0xD6C))) << 1) << 2);
                                }
                                nlsndSeqRequest((*(int *)((t7914 + t7913))));
                            } else {
                                if (((*(int *)(((*(int *)(((int)stk + 992))) + 0xB60))) & 0x10000) == 0) {
                                    t7921 = *(int *)(((*(int *)(((int)stk + 900))) + 0x50));
                                    if (((*(int *)((((((t7921 << 1) + t7921) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                        seShotHit2((*(int *)(((int)stk + 992))), (*(int *)(((int)stk + 900))));
                                    } else {
                                        seShotHit((*(int *)(((int)stk + 992))), (*(int *)(((int)stk + 900))), 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28));
                                    }
                                } else {
                                    seShotHit2((*(int *)(((int)stk + 992))), (*(int *)(((int)stk + 900))));
                                }
                            }
                        }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)(((*(int *)(((int)stk + 900))) + 0x24)); }
                        t7946 = vecLength(*(Stk3 *)(((int)stk + 56)));
                        *(unsigned int *)(((0x290 + ((int)stk + 68)) + 0x0)) = (int)t7946;
                        if ((int)(int)t7946 > (int)0x7) {
                            *(unsigned int *)(((int)stk + 724)) = 0x7;
                        }
                        if ((((*(int *)0x8C287B3C) & 1) == 0) && (t7951 = *(int *)(((int)stk + 992)), t7952 = *(int *)((t7951 + 0xB5C)), t7953 = *(int *)(((t7952 << 2) + 0x8C287AE0)), t7953 == 0)) {
                            *(int *)((int)stk + 64) = 0x5;
                            *(int *)((int)stk + 60) = 0xA;
                            padVibRequest((*(int *)(((*(int *)(((int)stk + 992))) + 0xB64))), ((unsigned short)(*(signed char *)(((int)stk + 724))) * (unsigned short)((-((*(signed char *)(((*(int *)(((int)stk + 992))) + 0xC6C))) << 1)) + 0x1)), 0x7, 0x0, 0xA, 0x5);
                        }
                        if ((*(int *)0x8C287D5C) == 3) {
                            miniOnEvent(0x5, (*(int *)(((int)stk + 992))));
                        }
                        if ((*(int *)0x8C287D5C) != 2) {
                        } else {
                            if ((((*(int *)0x8C287B3C) & 1) == 0) && ((t7978 = *(int *)(((int)stk + 992)), t7979 = *(int *)((0xB5C + t7978)), (t7979 & 1) == 0) && (t7980 = *(int *)0x8C287B3C, (t7980 & 0x100) == 0))) {
                                *(unsigned int *)0x8C2FBCA8 = ((*(int *)0x8C2FBCA8) + 0x1);
                                *(unsigned int *)(((int)stk + 724)) = 0x0;
                                if ((*(int *)((0x50 + (*(int *)(((int)stk + 900)))))) == 1) {
                                    *(unsigned int *)0x8C2FBCD4 = ((*(int *)0x8C2FBCD4) + 0x1);
                                    *(unsigned int *)(((int)stk + 724)) = 0x1;
                                }
                                t7990 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                if (((*(int *)((((((t7990 << 1) + t7990) << 2) << 1) + 0x8C105FE0))) & 0x40000) != 0) {
                                    *(unsigned int *)0x8C2FBCCC = ((*(int *)0x8C2FBCCC) + 0x1);
                                    *(unsigned int *)(((int)stk + 724)) = 0x1;
                                }
                                t7998 = *(int *)(((*(int *)(((int)stk + 992))) + 0xC5C));
                                if (((*(int *)((((((t7998 << 1) + t7998) << 2) << 1) + 0x8C105FE0))) & 0x10000) != 0) {
                                    *(unsigned int *)0x8C2FBCC4 = ((*(int *)0x8C2FBCC4) + 0x1);
                                    *(unsigned int *)(((int)stk + 724)) = 0x1;
                                }
                                if ((*(int *)(((int)stk + 724))) == 0) {
                                    *(unsigned int *)0x8C2FBCBC = ((*(int *)0x8C2FBCBC) + 0x1);
                                }
                            }
                        }
                        if (((*(int *)0x8C287B3C) & 1) == 0) {
                            t8021 = *(int *)((0xB5C + (*(int *)(((int)stk + 992)))));
                            *(unsigned int *)((0x8C287BA4 + (((((t8021 & 0x1) << 2) << 1) + (t8021 & 0x1)) << 2))) = ((*(int *)((0x8C287BA4 + (((((t8021 & 0x1) << 2) << 1) + (t8021 & 0x1)) << 2)))) + 0x1);
                        }
                    }
                }
            }
        }
    }
    return (sndPlayerDiveLand((*(int *)(((int)stk + 992)))));
}
