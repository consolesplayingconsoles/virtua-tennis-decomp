/* cpuSglAimTable as the reader writes it, returning r0: more labels than the compiler takes, so a main function and parts
   (gen_equiv/splitflat.py); kept in a file of its own with the cases drawn for it (tests/aimtable_b/). */

int cpuAimPointSet(int, int, float, float);
int cpuSglAimTable(int p_a4, int p_a5);

int cpuSglAimTable(int p_a4, int p_a5)
{
    int cpuSglAimTable_p1(int *S_, int at);
    int cpuSglAimTable_p2(int *S_, int at);
    int cpuSglAimTable_p3(int *S_, int at);
    int S_v[426];
    int *S_ = S_v;
    int NEXT_;

#define u59 (*(float *)&S_[0])
#define t68 (*(int *)&S_[1])
#define u75 (*(float *)&S_[2])
#define t76 (*(int *)&S_[3])
#define t95 (*(int *)&S_[4])
#define t106 (*(int *)&S_[5])
#define t113 (*(int *)&S_[6])
#define t115 (*(int *)&S_[7])
#define t122 (*(int *)&S_[8])
#define t124 (*(int *)&S_[9])
#define t131 (*(int *)&S_[10])
#define t148 (*(int *)&S_[11])
#define t155 (*(int *)&S_[12])
#define t157 (*(int *)&S_[13])
#define t179 (*(int *)&S_[14])
#define t185 (*(int *)&S_[15])
#define t196 (*(int *)&S_[16])
#define t203 (*(int *)&S_[17])
#define t205 (*(int *)&S_[18])
#define t212 (*(int *)&S_[19])
#define t214 (*(int *)&S_[20])
#define t221 (*(int *)&S_[21])
#define t238 (*(int *)&S_[22])
#define t245 (*(int *)&S_[23])
#define t247 (*(int *)&S_[24])
#define t254 (*(int *)&S_[25])
#define t256 (*(int *)&S_[26])
#define t283 (*(int *)&S_[27])
#define t314 (*(int *)&S_[28])
#define t321 (*(int *)&S_[29])
#define t328 (*(int *)&S_[30])
#define t339 (*(int *)&S_[31])
#define t346 (*(int *)&S_[32])
#define t348 (*(int *)&S_[33])
#define t355 (*(int *)&S_[34])
#define t367 (*(int *)&S_[35])
#define t374 (*(int *)&S_[36])
#define t376 (*(int *)&S_[37])
#define t383 (*(int *)&S_[38])
#define t385 (*(int *)&S_[39])
#define t412 (*(int *)&S_[40])
#define u447 (*(float *)&S_[41])
#define u455 (*(float *)&S_[42])
#define u474 (*(float *)&S_[43])
#define t485 (*(int *)&S_[44])
#define t492 (*(int *)&S_[45])
#define t494 (*(int *)&S_[46])
#define t503 (*(int *)&S_[47])
#define t527 (*(int *)&S_[48])
#define t541 (*(int *)&S_[49])
#define t552 (*(int *)&S_[50])
#define t559 (*(int *)&S_[51])
#define t561 (*(int *)&S_[52])
#define t568 (*(int *)&S_[53])
#define t570 (*(int *)&S_[54])
#define t577 (*(int *)&S_[55])
#define t594 (*(int *)&S_[56])
#define t601 (*(int *)&S_[57])
#define t603 (*(int *)&S_[58])
#define t625 (*(int *)&S_[59])
#define t633 (*(int *)&S_[60])
#define t640 (*(int *)&S_[61])
#define t642 (*(int *)&S_[62])
#define t660 (*(int *)&S_[63])
#define t671 (*(int *)&S_[64])
#define t678 (*(int *)&S_[65])
#define t680 (*(int *)&S_[66])
#define t687 (*(int *)&S_[67])
#define t699 (*(int *)&S_[68])
#define t706 (*(int *)&S_[69])
#define t708 (*(int *)&S_[70])
#define t731 (*(int *)&S_[71])
#define t762 (*(int *)&S_[72])
#define t769 (*(int *)&S_[73])
#define t773 (*(int *)&S_[74])
#define t780 (*(int *)&S_[75])
#define t792 (*(int *)&S_[76])
#define t805 (*(int *)&S_[77])
#define t814 (*(int *)&S_[78])
#define t821 (*(int *)&S_[79])
#define t828 (*(int *)&S_[80])
#define t830 (*(int *)&S_[81])
#define t851 (*(int *)&S_[82])
#define t858 (*(int *)&S_[83])
#define t860 (*(int *)&S_[84])
#define t869 (*(int *)&S_[85])
#define t881 (*(int *)&S_[86])
#define t888 (*(int *)&S_[87])
#define t890 (*(int *)&S_[88])
#define t914 (*(int *)&S_[89])
#define u963 (*(float *)&S_[90])
#define t974 (*(int *)&S_[91])
#define t981 (*(int *)&S_[92])
#define t983 (*(int *)&S_[93])
#define t990 (*(int *)&S_[94])
#define t1014 (*(int *)&S_[95])
#define t1021 (*(int *)&S_[96])
#define t1023 (*(int *)&S_[97])
#define t1034 (*(int *)&S_[98])
#define t1041 (*(int *)&S_[99])
#define t1043 (*(int *)&S_[100])
#define t1050 (*(int *)&S_[101])
#define t1052 (*(int *)&S_[102])
#define t1059 (*(int *)&S_[103])
#define t1076 (*(int *)&S_[104])
#define t1083 (*(int *)&S_[105])
#define t1085 (*(int *)&S_[106])
#define t1107 (*(int *)&S_[107])
#define t1120 (*(int *)&S_[108])
#define t1127 (*(int *)&S_[109])
#define t1129 (*(int *)&S_[110])
#define t1136 (*(int *)&S_[111])
#define t1138 (*(int *)&S_[112])
#define t1149 (*(int *)&S_[113])
#define t1156 (*(int *)&S_[114])
#define t1158 (*(int *)&S_[115])
#define t1165 (*(int *)&S_[116])
#define t1177 (*(int *)&S_[117])
#define t1184 (*(int *)&S_[118])
#define t1186 (*(int *)&S_[119])
#define t1209 (*(int *)&S_[120])
#define t1250 (*(int *)&S_[121])
#define t1257 (*(int *)&S_[122])
#define t1261 (*(int *)&S_[123])
#define t1268 (*(int *)&S_[124])
#define t1280 (*(int *)&S_[125])
#define t1293 (*(int *)&S_[126])
#define t1300 (*(int *)&S_[127])
#define t1302 (*(int *)&S_[128])
#define t1309 (*(int *)&S_[129])
#define t1311 (*(int *)&S_[130])
#define t1318 (*(int *)&S_[131])
#define t1337 (*(int *)&S_[132])
#define t1344 (*(int *)&S_[133])
#define t1346 (*(int *)&S_[134])
#define t1353 (*(int *)&S_[135])
#define t1355 (*(int *)&S_[136])
#define t1362 (*(int *)&S_[137])
#define t1364 (*(int *)&S_[138])
#define t1397 (*(int *)&S_[139])
#define u1443 (*(float *)&S_[140])
#define t1461 (*(int *)&S_[141])
#define t1468 (*(int *)&S_[142])
#define t1470 (*(int *)&S_[143])
#define t1477 (*(int *)&S_[144])
#define t1479 (*(int *)&S_[145])
#define t1490 (*(int *)&S_[146])
#define t1497 (*(int *)&S_[147])
#define t1499 (*(int *)&S_[148])
#define t1507 (*(int *)&S_[149])
#define t1519 (*(int *)&S_[150])
#define t1526 (*(int *)&S_[151])
#define t1528 (*(int *)&S_[152])
#define t1543 (*(int *)&S_[153])
#define t1559 (*(int *)&S_[154])
#define t1566 (*(int *)&S_[155])
#define t1568 (*(int *)&S_[156])
#define t1575 (*(int *)&S_[157])
#define t1577 (*(int *)&S_[158])
#define t1588 (*(int *)&S_[159])
#define t1595 (*(int *)&S_[160])
#define t1597 (*(int *)&S_[161])
#define t1605 (*(int *)&S_[162])
#define t1617 (*(int *)&S_[163])
#define t1624 (*(int *)&S_[164])
#define t1626 (*(int *)&S_[165])
#define t1648 (*(int *)&S_[166])
#define t1673 (*(int *)&S_[167])
#define t1684 (*(int *)&S_[168])
#define t1691 (*(int *)&S_[169])
#define t1693 (*(int *)&S_[170])
#define t1700 (*(int *)&S_[171])
#define t1712 (*(int *)&S_[172])
#define t1719 (*(int *)&S_[173])
#define t1721 (*(int *)&S_[174])
#define t1743 (*(int *)&S_[175])
#define t1774 (*(int *)&S_[176])
#define t1781 (*(int *)&S_[177])
#define t1783 (*(int *)&S_[178])
#define t1790 (*(int *)&S_[179])
#define t1792 (*(int *)&S_[180])
#define t1803 (*(int *)&S_[181])
#define t1810 (*(int *)&S_[182])
#define t1812 (*(int *)&S_[183])
#define t1819 (*(int *)&S_[184])
#define t1831 (*(int *)&S_[185])
#define t1838 (*(int *)&S_[186])
#define t1840 (*(int *)&S_[187])
#define t1863 (*(int *)&S_[188])
#define t1879 (*(int *)&S_[189])
#define t1886 (*(int *)&S_[190])
#define t1888 (*(int *)&S_[191])
#define t1895 (*(int *)&S_[192])
#define t1897 (*(int *)&S_[193])
#define t1908 (*(int *)&S_[194])
#define t1915 (*(int *)&S_[195])
#define t1917 (*(int *)&S_[196])
#define t1925 (*(int *)&S_[197])
#define t1937 (*(int *)&S_[198])
#define t1944 (*(int *)&S_[199])
#define t1946 (*(int *)&S_[200])
#define t1968 (*(int *)&S_[201])
#define t1994 (*(int *)&S_[202])
#define t2001 (*(int *)&S_[203])
#define t2003 (*(int *)&S_[204])
#define t2010 (*(int *)&S_[205])
#define t2012 (*(int *)&S_[206])
#define t2019 (*(int *)&S_[207])
#define t2021 (*(int *)&S_[208])
#define t2028 (*(int *)&S_[209])
#define t2030 (*(int *)&S_[210])
#define t2040 (*(int *)&S_[211])
#define u2096 (*(float *)&S_[212])
#define u2104 (*(float *)&S_[213])
#define u2122 (*(float *)&S_[214])
#define t2140 (*(int *)&S_[215])
#define t2147 (*(int *)&S_[216])
#define t2149 (*(int *)&S_[217])
#define t2156 (*(int *)&S_[218])
#define t2160 (*(int *)&S_[219])
#define t2167 (*(int *)&S_[220])
#define t2169 (*(int *)&S_[221])
#define t2176 (*(int *)&S_[222])
#define t2178 (*(int *)&S_[223])
#define t2189 (*(int *)&S_[224])
#define t2196 (*(int *)&S_[225])
#define t2198 (*(int *)&S_[226])
#define t2206 (*(int *)&S_[227])
#define t2218 (*(int *)&S_[228])
#define t2225 (*(int *)&S_[229])
#define t2227 (*(int *)&S_[230])
#define t2242 (*(int *)&S_[231])
#define t2268 (*(int *)&S_[232])
#define t2275 (*(int *)&S_[233])
#define t2277 (*(int *)&S_[234])
#define t2284 (*(int *)&S_[235])
#define t2288 (*(int *)&S_[236])
#define t2295 (*(int *)&S_[237])
#define t2297 (*(int *)&S_[238])
#define t2304 (*(int *)&S_[239])
#define t2306 (*(int *)&S_[240])
#define t2317 (*(int *)&S_[241])
#define t2324 (*(int *)&S_[242])
#define t2326 (*(int *)&S_[243])
#define t2334 (*(int *)&S_[244])
#define t2346 (*(int *)&S_[245])
#define t2353 (*(int *)&S_[246])
#define t2355 (*(int *)&S_[247])
#define t2377 (*(int *)&S_[248])
#define t2412 (*(int *)&S_[249])
#define t2423 (*(int *)&S_[250])
#define t2430 (*(int *)&S_[251])
#define t2432 (*(int *)&S_[252])
#define t2439 (*(int *)&S_[253])
#define t2453 (*(int *)&S_[254])
#define t2460 (*(int *)&S_[255])
#define t2462 (*(int *)&S_[256])
#define t2471 (*(int *)&S_[257])
#define t2483 (*(int *)&S_[258])
#define t2490 (*(int *)&S_[259])
#define t2492 (*(int *)&S_[260])
#define t2516 (*(int *)&S_[261])
#define t2547 (*(int *)&S_[262])
#define t2554 (*(int *)&S_[263])
#define t2556 (*(int *)&S_[264])
#define t2563 (*(int *)&S_[265])
#define t2567 (*(int *)&S_[266])
#define t2574 (*(int *)&S_[267])
#define t2576 (*(int *)&S_[268])
#define t2583 (*(int *)&S_[269])
#define t2585 (*(int *)&S_[270])
#define t2602 (*(int *)&S_[271])
#define t2613 (*(int *)&S_[272])
#define t2620 (*(int *)&S_[273])
#define t2622 (*(int *)&S_[274])
#define t2629 (*(int *)&S_[275])
#define t2641 (*(int *)&S_[276])
#define t2648 (*(int *)&S_[277])
#define t2650 (*(int *)&S_[278])
#define t2673 (*(int *)&S_[279])
#define t2689 (*(int *)&S_[280])
#define t2696 (*(int *)&S_[281])
#define t2698 (*(int *)&S_[282])
#define t2705 (*(int *)&S_[283])
#define t2709 (*(int *)&S_[284])
#define t2716 (*(int *)&S_[285])
#define t2718 (*(int *)&S_[286])
#define t2725 (*(int *)&S_[287])
#define t2727 (*(int *)&S_[288])
#define t2741 (*(int *)&S_[289])
#define t2752 (*(int *)&S_[290])
#define t2759 (*(int *)&S_[291])
#define t2761 (*(int *)&S_[292])
#define t2769 (*(int *)&S_[293])
#define t2781 (*(int *)&S_[294])
#define t2788 (*(int *)&S_[295])
#define t2790 (*(int *)&S_[296])
#define t2812 (*(int *)&S_[297])
#define t2838 (*(int *)&S_[298])
#define t2845 (*(int *)&S_[299])
#define t2847 (*(int *)&S_[300])
#define t2854 (*(int *)&S_[301])
#define t2856 (*(int *)&S_[302])
#define t2863 (*(int *)&S_[303])
#define t2865 (*(int *)&S_[304])
#define t2872 (*(int *)&S_[305])
#define t2876 (*(int *)&S_[306])
#define t2883 (*(int *)&S_[307])
#define t2885 (*(int *)&S_[308])
#define t2886 (*(int *)&S_[309])
#define u2887 (*(float *)&S_[310])
#define u2888 (*(float *)&S_[311])
#define t2890 (*(int *)&S_[312])
#define t2897 (*(int *)&S_[313])
#define u2972 (*(float *)&S_[314])
#define t2990 (*(int *)&S_[315])
#define t3002 (*(int *)&S_[316])
#define t3009 (*(int *)&S_[317])
#define t3011 (*(int *)&S_[318])
#define t3018 (*(int *)&S_[319])
#define t3022 (*(int *)&S_[320])
#define t3029 (*(int *)&S_[321])
#define t3046 (*(int *)&S_[322])
#define t3057 (*(int *)&S_[323])
#define t3064 (*(int *)&S_[324])
#define t3066 (*(int *)&S_[325])
#define t3073 (*(int *)&S_[326])
#define t3085 (*(int *)&S_[327])
#define t3092 (*(int *)&S_[328])
#define t3094 (*(int *)&S_[329])
#define t3101 (*(int *)&S_[330])
#define t3105 (*(int *)&S_[331])
#define t3112 (*(int *)&S_[332])
#define t3134 (*(int *)&S_[333])
#define t3146 (*(int *)&S_[334])
#define t3163 (*(int *)&S_[335])
#define t3170 (*(int *)&S_[336])
#define t3172 (*(int *)&S_[337])
#define t3190 (*(int *)&S_[338])
#define t3197 (*(int *)&S_[339])
#define t3199 (*(int *)&S_[340])
#define t3206 (*(int *)&S_[341])
#define t3210 (*(int *)&S_[342])
#define t3217 (*(int *)&S_[343])
#define t3254 (*(int *)&S_[344])
#define t3265 (*(int *)&S_[345])
#define t3272 (*(int *)&S_[346])
#define t3274 (*(int *)&S_[347])
#define t3283 (*(int *)&S_[348])
#define t3295 (*(int *)&S_[349])
#define t3302 (*(int *)&S_[350])
#define t3304 (*(int *)&S_[351])
#define t3328 (*(int *)&S_[352])
#define t3359 (*(int *)&S_[353])
#define t3372 (*(int *)&S_[354])
#define t3379 (*(int *)&S_[355])
#define t3381 (*(int *)&S_[356])
#define t3398 (*(int *)&S_[357])
#define t3399 (*(int *)&S_[358])
#define u3400 (*(float *)&S_[359])
#define u3401 (*(float *)&S_[360])
#define t3403 (*(int *)&S_[361])
#define t3410 (*(int *)&S_[362])
#define t3412 (*(int *)&S_[363])
#define t3419 (*(int *)&S_[364])
#define t3423 (*(int *)&S_[365])
#define t3430 (*(int *)&S_[366])
#define t3454 (*(int *)&S_[367])
#define t3460 (*(int *)&S_[368])
#define t3473 (*(int *)&S_[369])
#define t3480 (*(int *)&S_[370])
#define t3482 (*(int *)&S_[371])
#define t3499 (*(int *)&S_[372])
#define t3500 (*(int *)&S_[373])
#define u3501 (*(float *)&S_[374])
#define u3502 (*(float *)&S_[375])
#define t3504 (*(int *)&S_[376])
#define t3511 (*(int *)&S_[377])
#define t3515 (*(int *)&S_[378])
#define t3522 (*(int *)&S_[379])
#define t3541 (*(int *)&S_[380])
#define t3559 (*(int *)&S_[381])
#define t3560 (*(int *)&S_[382])
#define u3561 (*(float *)&S_[383])
#define u3562 (*(float *)&S_[384])
#define t3564 (*(int *)&S_[385])
#define t3575 (*(int *)&S_[386])
#define t3584 (*(int *)&S_[387])
#define t3585 (*(int *)&S_[388])
#define u3586 (*(float *)&S_[389])
#define u3587 (*(float *)&S_[390])
#define t3589 (*(int *)&S_[391])
#define t3598 (*(int *)&S_[392])
#define t3600 (*(int *)&S_[393])
#define stk (S_ + 394)
#define R0 (*(int *)&S_[404])
#define R1 (*(int *)&S_[405])
#define R2 (*(int *)&S_[406])
#define R3 (*(int *)&S_[407])
#define R4 (*(int *)&S_[408])
#define R5 (*(int *)&S_[409])
#define R6 (*(int *)&S_[410])
#define R8 (*(int *)&S_[411])
#define R9 (*(int *)&S_[412])
#define R11 (*(int *)&S_[413])
#define R13 (*(int *)&S_[414])
#define R14 (*(int *)&S_[415])
#define F0 (*(float *)&S_[416])
#define F1 (*(float *)&S_[417])
#define F2 (*(float *)&S_[418])
#define F3 (*(float *)&S_[419])
#define F4 (*(float *)&S_[420])
#define F5 (*(float *)&S_[421])
#define T_ (*(int *)&S_[422])
#define a4 (*(int *)&S_[423])
#define a5 (*(int *)&S_[424])
    a4 = p_a4;
    a5 = p_a5;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 32)) = R4;
    *(unsigned int *)(((int)stk + 28)) = R5;
    *(unsigned int *)(((int)stk + 24)) = (((((*(int *)((0xB5C + (*(int *)(((int)stk + 32)))))) + 0x1) & 0x1) * 0xD78) + 0x8C287D84);
    *(unsigned int *)(((int)stk + 20)) = (((*(int *)(((*(int *)(((int)stk + 32))) + 0xB5C))) * 0x160) + 0x8C2FC69C);
    *(unsigned int *)(((int)stk + 16)) = (0x8C2FC69C + ((*(int *)(((*(int *)(((int)stk + 24))) + 0xB5C))) * 0x160));
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 28)));
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) > 0.0f))) { NEXT_ = 863; goto X_; }
    R3 = (0x1);
    L_8C050352:;
    if (((float)R3 != (*(float *)(((*(int *)(((int)stk + 32))) + 0xB00))))) goto L_8C050388;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30))))) { NEXT_ = 862; goto X_; }
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))));
    L_8C05037C:;
    if ((!(F3 > 0.150000006f))) goto L_8C050388;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    L_8C050388:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))))) { NEXT_ = 861; goto X_; }
    F3 = ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))));
    L_8C0503A4:;
    if ((16.460001f > F3)) { NEXT_ = 333; goto X_; }
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))))) { NEXT_ = 332; goto X_; }
    F3 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))));
    L_8C052FF4:;
    if ((47.5400009f > F3)) goto L_8C053000;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))))) goto L_8C053946;
    F3 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))));
    L_8C05394E:;
    if ((83.1949997f > F3)) goto L_8C05395A;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) goto L_8C054370;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C05435C;
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C054364:;
    if ((0.200000003f > F3)) goto L_8C054370;
    u59 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u59 = u59 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u59;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u59))) goto L_8C054602;
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C054610:;
    if ((20.0f > F2)) goto L_8C05461C;
    t68 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t68 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t68 + 0xB9C))) > 0.0f))) goto L_8C054A7C;
    R3 = (0x1);
    L_8C054A8C:;
    u75 = *(float *)0x8C054B80;
    t76 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t76 + 0x1);
    cpuAimPointSet(((t76 + 0x1) - 1), 0x1, ((float)R3 * u75), F5);
    L_8C054AA6:;
    return ((*(int *)(((int)stk + 8))) - (*(int *)(((int)stk + 28))));
    L_8C054A7C:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054A8A;
    R3 = (0xFFFFFFFF);
    goto L_8C054A8C;
    L_8C054A8A:;
    R3 = (0x0);
    goto L_8C054A8C;
    L_8C05461C:;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C05462C;
    R2 = (0x1);
    L_8C05463C:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C05464C;
    R1 = (0x1);
    L_8C05467A:;
    if ((R2 == R1)) goto L_8C054682;
    t95 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t95 + 0xB9C))) - (*(float *)((t95 + 0xAE8)))) > 0.0f))) goto L_8C0548AE;
    R3 = (0x1);
    L_8C0548C6:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0548D6;
    R2 = (0x1);
    L_8C0548E8:;
    if ((R3 != R2)) goto L_8C0549B8;
    t106 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t106 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t106 + 0xB9C))) > 0.0f))) goto L_8C054906;
    R3 = (0x1);
    L_8C054916:;
    t113 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t113 + 0x1);
    cpuAimPointSet(((t113 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t115 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t115 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t115 + 0xB9C))) > 0.0f))) goto L_8C05494A;
    R3 = (0x1);
    L_8C054972:;
    t122 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t122 + 0x1);
    cpuAimPointSet(((t122 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t124 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t124 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t124 + 0xB9C))) > 0.0f))) goto L_8C0549A6;
    R3 = (0x1);
    L_8C054A28:;
    t131 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t131 + 0x1);
    cpuAimPointSet(((t131 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C0549A6:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0549B4;
    R3 = (0xFFFFFFFF);
    goto L_8C054A28;
    L_8C0549B4:;
    R3 = (0x0);
    goto L_8C054A28;
    L_8C05494A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054970;
    R3 = (0xFFFFFFFF);
    goto L_8C054972;
    L_8C054970:;
    R3 = (0x0);
    goto L_8C054972;
    L_8C054906:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054914;
    R3 = (0xFFFFFFFF);
    goto L_8C054916;
    L_8C054914:;
    R3 = (0x0);
    goto L_8C054916;
    L_8C0549B8:;
    t148 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t148 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t148 + 0xB9C))) > 0.0f))) goto L_8C0549D4;
    R3 = (0x1);
    L_8C0549E4:;
    t155 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t155 + 0x1);
    cpuAimPointSet(((t155 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t157 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t157 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t157 + 0xB9C))) > 0.0f))) goto L_8C054A18;
    R3 = (0x1);
    goto L_8C054A28;
    L_8C054A18:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054A26;
    R3 = (0xFFFFFFFF);
    goto L_8C054A28;
    L_8C054A26:;
    R3 = (0x0);
    goto L_8C054A28;
    L_8C0549D4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0549E2;
    R3 = (0xFFFFFFFF);
    goto L_8C0549E4;
    L_8C0549E2:;
    R3 = (0x0);
    goto L_8C0549E4;
    L_8C0548D6:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0548E6;
    R2 = (0xFFFFFFFF);
    goto L_8C0548E8;
    L_8C0548E6:;
    R2 = (0x0);
    goto L_8C0548E8;
    L_8C0548AE:;
    t179 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t179 + 0xB9C))) - (*(float *)((t179 + 0xAE8))))))) goto L_8C0548C4;
    R3 = (0xFFFFFFFF);
    goto L_8C0548C6;
    L_8C0548C4:;
    R3 = (0x0);
    goto L_8C0548C6;
    L_8C054682:;
    t185 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t185 + 0xB9C))) - (*(float *)((t185 + 0xAE8)))) > 0.0f))) goto L_8C05469A;
    R3 = (0x1);
    L_8C0546B2:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0546C2;
    R2 = (0x1);
    L_8C0546D4:;
    if ((R3 != R2)) goto L_8C0547A6;
    t196 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t196 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t196 + 0xB9C))) > 0.0f))) goto L_8C0546F2;
    R3 = (0x1);
    L_8C054702:;
    t203 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t203 + 0x1);
    cpuAimPointSet(((t203 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t205 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t205 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t205 + 0xB9C))) > 0.0f))) goto L_8C054736;
    R3 = (0x1);
    L_8C05475E:;
    t212 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t212 + 0x1);
    cpuAimPointSet(((t212 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t214 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t214 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t214 + 0xB9C))) > 0.0f))) goto L_8C054794;
    R3 = (0x1);
    L_8C054876:;
    t221 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t221 + 0x1);
    cpuAimPointSet(((t221 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C054794:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0547A2;
    R3 = (0xFFFFFFFF);
    goto L_8C054876;
    L_8C0547A2:;
    R3 = (0x0);
    goto L_8C054876;
    L_8C054736:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05475C;
    R3 = (0xFFFFFFFF);
    goto L_8C05475E;
    L_8C05475C:;
    R3 = (0x0);
    goto L_8C05475E;
    L_8C0546F2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054700;
    R3 = (0xFFFFFFFF);
    goto L_8C054702;
    L_8C054700:;
    R3 = (0x0);
    goto L_8C054702;
    L_8C0547A6:;
    t238 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t238 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t238 + 0xB9C))) > 0.0f))) goto L_8C0547C2;
    R3 = (0x1);
    L_8C0547D2:;
    t245 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t245 + 0x1);
    cpuAimPointSet(((t245 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t247 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t247 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t247 + 0xB9C))) > 0.0f))) goto L_8C054806;
    R3 = (0x1);
    L_8C054816:;
    t254 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t254 + 0x1);
    cpuAimPointSet(((t254 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t256 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t256 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t256 + 0xB9C))) > 0.0f))) goto L_8C05484C;
    R3 = (0x1);
    goto L_8C054876;
    L_8C05484C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054874;
    R3 = (0xFFFFFFFF);
    goto L_8C054876;
    L_8C054874:;
    R3 = (0x0);
    goto L_8C054876;
    L_8C054806:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054814;
    R3 = (0xFFFFFFFF);
    goto L_8C054816;
    L_8C054814:;
    R3 = (0x0);
    goto L_8C054816;
    L_8C0547C2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0547D0;
    R3 = (0xFFFFFFFF);
    goto L_8C0547D2;
    L_8C0547D0:;
    R3 = (0x0);
    goto L_8C0547D2;
    L_8C0546C2:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0546D2;
    R2 = (0xFFFFFFFF);
    goto L_8C0546D4;
    L_8C0546D2:;
    R2 = (0x0);
    goto L_8C0546D4;
    L_8C05469A:;
    t283 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t283 + 0xB9C))) - (*(float *)((t283 + 0xAE8))))))) goto L_8C0546B0;
    R3 = (0xFFFFFFFF);
    goto L_8C0546B2;
    L_8C0546B0:;
    R3 = (0x0);
    goto L_8C0546B2;
    L_8C05464C:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C054678;
    R1 = (0xFFFFFFFF);
    goto L_8C05467A;
    L_8C054678:;
    R1 = (0x0);
    goto L_8C05467A;
    L_8C05462C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C05463A;
    R2 = (0xFFFFFFFF);
    goto L_8C05463C;
    L_8C05463A:;
    R2 = (0x0);
    goto L_8C05463C;
    L_8C054602:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    goto L_8C054610;
    L_8C054370:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C054394;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C0543A6:;
    if ((20.0f > F3)) goto L_8C0543B2;
    t314 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t314 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t314 + 0xB9C))) > 0.0f))) goto L_8C05459A;
    R3 = (0x1);
    L_8C0545AA:;
    t321 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t321 + 0x1);
    cpuAimPointSet(((t321 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C05459A:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0545A8;
    R3 = (0xFFFFFFFF);
    goto L_8C0545AA;
    L_8C0545A8:;
    R3 = (0x0);
    goto L_8C0545AA;
    L_8C0543B2:;
    t328 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t328 + 0xB9C))) - (*(float *)((t328 + 0xAE8)))) > 0.0f))) goto L_8C0543CA;
    R2 = (0x1);
    L_8C0543E2:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0543F2;
    R1 = (0x1);
    L_8C054404:;
    if ((R2 == R1)) goto L_8C05448E;
    t339 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t339 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t339 + 0xB9C))) > 0.0f))) goto L_8C054424;
    R3 = (0x1);
    L_8C054446:;
    t346 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t346 + 0x1);
    cpuAimPointSet(((t346 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t348 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t348 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t348 + 0xB9C))) > 0.0f))) goto L_8C05447C;
    R3 = (0x1);
    L_8C05455E:;
    t355 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t355 + 0x1);
    cpuAimPointSet(((t355 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C05447C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05448A;
    R3 = (0xFFFFFFFF);
    goto L_8C05455E;
    L_8C05448A:;
    R3 = (0x0);
    goto L_8C05455E;
    L_8C054424:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054444;
    R3 = (0xFFFFFFFF);
    goto L_8C054446;
    L_8C054444:;
    R3 = (0x0);
    goto L_8C054446;
    L_8C05448E:;
    t367 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t367 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t367 + 0xB9C))) > 0.0f))) goto L_8C0544AA;
    R3 = (0x1);
    L_8C0544BA:;
    t374 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t374 + 0x1);
    cpuAimPointSet(((t374 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t376 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t376 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t376 + 0xB9C))) > 0.0f))) goto L_8C0544EE;
    R3 = (0x1);
    L_8C0544FE:;
    t383 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t383 + 0x1);
    cpuAimPointSet(((t383 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t385 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t385 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t385 + 0xB9C))) > 0.0f))) goto L_8C054534;
    R3 = (0x1);
    goto L_8C05455E;
    L_8C054534:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05455C;
    R3 = (0xFFFFFFFF);
    goto L_8C05455E;
    L_8C05455C:;
    R3 = (0x0);
    goto L_8C05455E;
    L_8C0544EE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0544FC;
    R3 = (0xFFFFFFFF);
    goto L_8C0544FE;
    L_8C0544FC:;
    R3 = (0x0);
    goto L_8C0544FE;
    L_8C0544AA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0544B8;
    R3 = (0xFFFFFFFF);
    goto L_8C0544BA;
    L_8C0544B8:;
    R3 = (0x0);
    goto L_8C0544BA;
    L_8C0543F2:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C054402;
    R1 = (0xFFFFFFFF);
    goto L_8C054404;
    L_8C054402:;
    R1 = (0x0);
    goto L_8C054404;
    L_8C0543CA:;
    t412 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t412 + 0xB9C))) - (*(float *)((t412 + 0xAE8))))))) goto L_8C0543E0;
    R2 = (0xFFFFFFFF);
    goto L_8C0543E2;
    L_8C0543E0:;
    R2 = (0x0);
    goto L_8C0543E2;
    L_8C054394:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    goto L_8C0543A6;
    L_8C05435C:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C054364;
    L_8C05395A:;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) > 0.0f))) goto L_8C05396A;
    R2 = (0x1);
    L_8C05397A:;
    if (((float)R2 != (-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB00)))))) goto L_8C053A44;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30))))) goto L_8C05399E;
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))));
    L_8C0539A6:;
    if ((!(F3 > 0.300000012f))) goto L_8C053A44;
    u447 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)));
    u447 = u447 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    if ((0.0f > u447)) goto L_8C0539F2;
    u455 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)));
    u455 = u455 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    F3 = (u455);
    L_8C053A14:;
    if ((!(35.6550026f > F3))) goto L_8C053A44;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    L_8C053A48:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) goto L_8C053A7C;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C053A68;
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C053A70:;
    if ((0.200000003f > F3)) goto L_8C053A7C;
    u474 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u474 = u474 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u474;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u474))) goto L_8C053E14;
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C053E22:;
    if ((20.0f > F2)) goto L_8C053E2E;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0542E0;
    t485 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t485 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t485 + 0xB9C))) > 0.0f))) goto L_8C0542B6;
    R3 = (0x1);
    L_8C0542C6:;
    t492 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t492 + 0x1);
    cpuAimPointSet(((t492 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C0542E0:;
    t494 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t494 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t494 + 0xB9C))) > 0.0f))) goto L_8C0542FA;
    R3 = (0x1);
    L_8C05430A:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    L_8C054318:;
    t503 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t503 + 0x1);
    cpuAimPointSet(((t503 + 0x1) - 1), R5, F4, F5);
    goto L_8C054AA6;
    L_8C0542FA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054308;
    R3 = (0xFFFFFFFF);
    goto L_8C05430A;
    L_8C054308:;
    R3 = (0x0);
    goto L_8C05430A;
    L_8C0542B6:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0542C4;
    R3 = (0xFFFFFFFF);
    goto L_8C0542C6;
    L_8C0542C4:;
    R3 = (0x0);
    goto L_8C0542C6;
    L_8C053E2E:;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C053E3E;
    R2 = (0x1);
    L_8C053E4E:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C053E7C;
    R1 = (0x1);
    L_8C053E8E:;
    if ((R2 == R1)) goto L_8C053E96;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0540D0;
    t527 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t527 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t527 + 0xB9C))) > 0.0f))) goto L_8C0540B0;
    R3 = (0x1);
    L_8C0540C0:;
    R5 = (0x2);
    F4 = (((float)R3 * 41.1500015f));
    goto L_8C054318;
    L_8C0540B0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0540BE;
    R3 = (0xFFFFFFFF);
    goto L_8C0540C0;
    L_8C0540BE:;
    R3 = (0x0);
    goto L_8C0540C0;
    L_8C0540D0:;
    t541 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t541 + 0xB9C))) - (*(float *)((t541 + 0xAE8)))) > 0.0f))) goto L_8C0540E8;
    R3 = (0x1);
    L_8C054100:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C054110;
    R2 = (0x1);
    L_8C054122:;
    if ((R3 != R2)) goto L_8C0541EC;
    t552 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t552 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t552 + 0xB9C))) > 0.0f))) goto L_8C054140;
    R3 = (0x1);
    L_8C054162:;
    t559 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t559 + 0x1);
    cpuAimPointSet(((t559 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t561 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t561 + 0xB00))) * 59.4249992f));
    if ((!((*(float *)((t561 + 0xB9C))) > 0.0f))) goto L_8C054196;
    R3 = (0x1);
    L_8C0541A6:;
    t568 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t568 + 0x1);
    cpuAimPointSet(((t568 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t570 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t570 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t570 + 0xB9C))) > 0.0f))) goto L_8C0541DA;
    R3 = (0x1);
    L_8C054276:;
    t577 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t577 + 0x1);
    cpuAimPointSet(((t577 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C0541DA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0541E8;
    R3 = (0xFFFFFFFF);
    goto L_8C054276;
    L_8C0541E8:;
    R3 = (0x0);
    goto L_8C054276;
    L_8C054196:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0541A4;
    R3 = (0xFFFFFFFF);
    goto L_8C0541A6;
    L_8C0541A4:;
    R3 = (0x0);
    goto L_8C0541A6;
    L_8C054140:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054160;
    R3 = (0xFFFFFFFF);
    goto L_8C054162;
    L_8C054160:;
    R3 = (0x0);
    goto L_8C054162;
    L_8C0541EC:;
    t594 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t594 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t594 + 0xB9C))) > 0.0f))) goto L_8C054208;
    R3 = (0x1);
    L_8C054218:;
    t601 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t601 + 0x1);
    cpuAimPointSet(((t601 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t603 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t603 + 0xB00))) * 59.4249992f));
    if ((!((*(float *)((t603 + 0xB9C))) > 0.0f))) goto L_8C05424C;
    R3 = (0x1);
    goto L_8C054276;
    L_8C05424C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054274;
    R3 = (0xFFFFFFFF);
    goto L_8C054276;
    L_8C054274:;
    R3 = (0x0);
    goto L_8C054276;
    L_8C054208:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054216;
    R3 = (0xFFFFFFFF);
    goto L_8C054218;
    L_8C054216:;
    R3 = (0x0);
    goto L_8C054218;
    L_8C054110:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054120;
    R2 = (0xFFFFFFFF);
    goto L_8C054122;
    L_8C054120:;
    R2 = (0x0);
    goto L_8C054122;
    L_8C0540E8:;
    t625 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t625 + 0xB9C))) - (*(float *)((t625 + 0xAE8))))))) goto L_8C0540FE;
    R3 = (0xFFFFFFFF);
    goto L_8C054100;
    L_8C0540FE:;
    R3 = (0x0);
    goto L_8C054100;
    L_8C053E96:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C053F10;
    t633 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t633 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t633 + 0xB9C))) > 0.0f))) goto L_8C053EB8;
    R3 = (0x1);
    L_8C053EC8:;
    t640 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t640 + 0x1);
    cpuAimPointSet(((t640 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t642 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t642 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t642 + 0xB9C))) > 0.0f))) goto L_8C053EFC;
    R3 = (0x1);
    L_8C053F0C:;
    R3 = ((-R3));
    goto L_8C0540C0;
    L_8C053EFC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053F0A;
    R3 = (0xFFFFFFFF);
    goto L_8C053F0C;
    L_8C053F0A:;
    R3 = (0x0);
    goto L_8C053F0C;
    L_8C053EB8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053EC6;
    R3 = (0xFFFFFFFF);
    goto L_8C053EC8;
    L_8C053EC6:;
    R3 = (0x0);
    goto L_8C053EC8;
    L_8C053F10:;
    t660 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t660 + 0xB9C))) - (*(float *)((t660 + 0xAE8)))) > 0.0f))) goto L_8C053F28;
    R3 = (0x1);
    L_8C053F40:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C053F50;
    R2 = (0x1);
    L_8C053F76:;
    if ((R3 != R2)) goto L_8C053FEA;
    t671 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t671 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t671 + 0xB9C))) > 0.0f))) goto L_8C053F94;
    R3 = (0x1);
    L_8C053FA4:;
    t678 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t678 + 0x1);
    cpuAimPointSet(((t678 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t680 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t680 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t680 + 0xB9C))) > 0.0f))) goto L_8C053FD8;
    R3 = (0x1);
    L_8C054070:;
    t687 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t687 + 0x1);
    cpuAimPointSet(((t687 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C053FD8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053FE6;
    R3 = (0xFFFFFFFF);
    goto L_8C054070;
    L_8C053FE6:;
    R3 = (0x0);
    goto L_8C054070;
    L_8C053F94:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053FA2;
    R3 = (0xFFFFFFFF);
    goto L_8C053FA4;
    L_8C053FA2:;
    R3 = (0x0);
    goto L_8C053FA4;
    L_8C053FEA:;
    t699 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t699 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t699 + 0xB9C))) > 0.0f))) goto L_8C054006;
    R3 = (0x1);
    L_8C054016:;
    t706 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t706 + 0x1);
    cpuAimPointSet(((t706 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t708 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t708 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t708 + 0xB9C))) > 0.0f))) goto L_8C05404A;
    R3 = (0x1);
    L_8C05406E:;
    R3 = ((-R3));
    goto L_8C054070;
    L_8C05404A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05406C;
    R3 = (0xFFFFFFFF);
    goto L_8C05406E;
    L_8C05406C:;
    R3 = (0x0);
    goto L_8C05406E;
    L_8C054006:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C054014;
    R3 = (0xFFFFFFFF);
    goto L_8C054016;
    L_8C054014:;
    R3 = (0x0);
    goto L_8C054016;
    L_8C053F50:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053F74;
    R2 = (0xFFFFFFFF);
    goto L_8C053F76;
    L_8C053F74:;
    R2 = (0x0);
    goto L_8C053F76;
    L_8C053F28:;
    t731 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t731 + 0xB9C))) - (*(float *)((t731 + 0xAE8))))))) goto L_8C053F3E;
    R3 = (0xFFFFFFFF);
    goto L_8C053F40;
    L_8C053F3E:;
    R3 = (0x0);
    goto L_8C053F40;
    L_8C053E7C:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C053E8C;
    R1 = (0xFFFFFFFF);
    goto L_8C053E8E;
    L_8C053E8C:;
    R1 = (0x0);
    goto L_8C053E8E;
    L_8C053E3E:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C053E4C;
    R2 = (0xFFFFFFFF);
    goto L_8C053E4E;
    L_8C053E4C:;
    R2 = (0x0);
    goto L_8C053E4E;
    L_8C053E14:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    goto L_8C053E22;
    L_8C053A7C:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C053AA0;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C053AB2:;
    if ((20.0f > F3)) goto L_8C053ABE;
    t762 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t762 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t762 + 0xB9C))) > 0.0f))) goto L_8C053D5C;
    R3 = (0x1);
    L_8C053D6C:;
    t769 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t769 + 0x1);
    cpuAimPointSet(((t769 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C053D90;
    goto L_8C054AA6;
    L_8C053D90:;
    t773 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t773 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t773 + 0xB9C))) > 0.0f))) goto L_8C053DAC;
    R3 = (0x1);
    L_8C053DBC:;
    t780 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t780 + 0x1);
    cpuAimPointSet(((t780 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C053DAC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053DBA;
    R3 = (0xFFFFFFFF);
    goto L_8C053DBC;
    L_8C053DBA:;
    R3 = (0x0);
    goto L_8C053DBC;
    L_8C053D5C:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053D6A;
    R3 = (0xFFFFFFFF);
    goto L_8C053D6C;
    L_8C053D6A:;
    R3 = (0x0);
    goto L_8C053D6C;
    L_8C053ABE:;
    t792 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t792 + 0xB9C))) - (*(float *)((t792 + 0xAE8)))) > 0.0f))) goto L_8C053AD6;
    R2 = (0x1);
    L_8C053AEE:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C053AFE;
    R1 = (0x1);
    L_8C053B10:;
    if ((R2 != R1)) goto L_8C053B18;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C053C9E;
    t805 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t805 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t805 + 0xB9C))) > 0.0f))) goto L_8C053C7E;
    R3 = (0x1);
    L_8C053C8E:;
    R5 = (0x2);
    F4 = (((float)R3 * 41.1500015f));
    L_8C053D1C:;
    t814 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t814 + 0x1);
    cpuAimPointSet(((t814 + 0x1) - 1), R5, F4, F5);
    goto L_8C054AA6;
    L_8C053C7E:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053C8C;
    R3 = (0xFFFFFFFF);
    goto L_8C053C8E;
    L_8C053C8C:;
    R3 = (0x0);
    goto L_8C053C8E;
    L_8C053C9E:;
    t821 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t821 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t821 + 0xB9C))) > 0.0f))) goto L_8C053CBA;
    R3 = (0x1);
    L_8C053CCA:;
    t828 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t828 + 0x1);
    cpuAimPointSet(((t828 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t830 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t830 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t830 + 0xB9C))) > 0.0f))) goto L_8C053CFE;
    R3 = (0x1);
    L_8C053D0E:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    goto L_8C053D1C;
    L_8C053CFE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053D0C;
    R3 = (0xFFFFFFFF);
    goto L_8C053D0E;
    L_8C053D0C:;
    R3 = (0x0);
    goto L_8C053D0E;
    L_8C053CBA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053CC8;
    R3 = (0xFFFFFFFF);
    goto L_8C053CCA;
    L_8C053CC8:;
    R3 = (0x0);
    goto L_8C053CCA;
    L_8C053B18:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C053BB6;
    t851 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t851 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t851 + 0xB9C))) > 0.0f))) goto L_8C053B50;
    R3 = (0x1);
    L_8C053B60:;
    t858 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t858 + 0x1);
    cpuAimPointSet(((t858 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t860 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t860 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t860 + 0xB9C))) > 0.0f))) goto L_8C053B94;
    R3 = (0x1);
    L_8C053BA4:;
    R5 = (0x2);
    F4 = (((float)(-R3) * 41.1500015f));
    L_8C053C36:;
    t869 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t869 + 0x1);
    cpuAimPointSet(((t869 + 0x1) - 1), R5, F4, F5);
    goto L_8C054AA6;
    L_8C053B94:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053BA2;
    R3 = (0xFFFFFFFF);
    goto L_8C053BA4;
    L_8C053BA2:;
    R3 = (0x0);
    goto L_8C053BA4;
    L_8C053B50:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053B5E;
    R3 = (0xFFFFFFFF);
    goto L_8C053B60;
    L_8C053B5E:;
    R3 = (0x0);
    goto L_8C053B60;
    L_8C053BB6:;
    t881 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t881 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t881 + 0xB9C))) > 0.0f))) goto L_8C053BD2;
    R3 = (0x1);
    L_8C053BE2:;
    t888 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t888 + 0x1);
    cpuAimPointSet(((t888 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t890 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t890 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t890 + 0xB9C))) > 0.0f))) goto L_8C053C16;
    R3 = (0x1);
    L_8C053C26:;
    R5 = (0x1);
    F4 = (((float)(-R3) * 41.1500015f));
    goto L_8C053C36;
    L_8C053C16:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053C24;
    R3 = (0xFFFFFFFF);
    goto L_8C053C26;
    L_8C053C24:;
    R3 = (0x0);
    goto L_8C053C26;
    L_8C053BD2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053BE0;
    R3 = (0xFFFFFFFF);
    goto L_8C053BE2;
    L_8C053BE0:;
    R3 = (0x0);
    goto L_8C053BE2;
    L_8C053AFE:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C053B0E;
    R1 = (0xFFFFFFFF);
    goto L_8C053B10;
    L_8C053B0E:;
    R1 = (0x0);
    goto L_8C053B10;
    L_8C053AD6:;
    t914 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t914 + 0xB9C))) - (*(float *)((t914 + 0xAE8))))))) goto L_8C053AEC;
    R2 = (0xFFFFFFFF);
    goto L_8C053AEE;
    L_8C053AEC:;
    R2 = (0x0);
    goto L_8C053AEE;
    L_8C053AA0:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    goto L_8C053AB2;
    L_8C053A68:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    goto L_8C053A70;
    L_8C053A44:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    goto L_8C053A48;
    L_8C0539F2:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))) - ((((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))))) * 0.800000012f)));
    goto L_8C053A14;
    L_8C05399E:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))));
    goto L_8C0539A6;
    L_8C05396A:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))))) goto L_8C053978;
    R2 = (0xFFFFFFFF);
    goto L_8C05397A;
    L_8C053978:;
    R2 = (0x0);
    goto L_8C05397A;
    L_8C053946:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))));
    goto L_8C05394E;
    L_8C053000:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) { NEXT_ = 290; goto X_; }
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) { NEXT_ = 331; goto X_; }
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C053028:;
    if ((0.200000003f > F3)) { NEXT_ = 290; goto X_; }
    u963 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u963 = u963 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u963;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u963))) { NEXT_ = 289; goto X_; }
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C0533DA:;
    if ((20.0f > F2)) goto L_8C0533E6;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0538D0;
    t974 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t974 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t974 + 0xB9C))) > 0.0f))) goto L_8C0538A6;
    R3 = (0x1);
    L_8C0538B6:;
    t981 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t981 + 0x1);
    cpuAimPointSet(((t981 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C0538D0:;
    t983 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t983 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t983 + 0xB9C))) > 0.0f))) goto L_8C0538EA;
    R3 = (0x1);
    L_8C053912:;
    t990 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t990 + 0x1);
    cpuAimPointSet(((t990 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    L_8C0538EA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053910;
    R3 = (0xFFFFFFFF);
    goto L_8C053912;
    L_8C053910:;
    R3 = (0x0);
    goto L_8C053912;
    L_8C0538A6:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0538B4;
    R3 = (0xFFFFFFFF);
    goto L_8C0538B6;
    L_8C0538B4:;
    R3 = (0x0);
    goto L_8C0538B6;
    L_8C0533E6:;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) { NEXT_ = 287; goto X_; }
    R2 = (0x1);
    L_8C053428:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) { NEXT_ = 285; goto X_; }
    R1 = (0x1);
    L_8C05344A:;
    if ((R2 == R1)) { NEXT_ = 258; goto X_; }
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0536B4;
    t1014 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1014 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1014 + 0xB9C))) > 0.0f))) { NEXT_ = 256; goto X_; }
    R3 = (0x1);
    L_8C05369A:;
    t1021 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1021 + 0x1);
    cpuAimPointSet(((t1021 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C0536B4:;
    t1023 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1023 + 0xB9C))) - (*(float *)((t1023 + 0xAE8)))) > 0.0f))) { NEXT_ = 254; goto X_; }
    R2 = (0x1);
    L_8C0536E4:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) { NEXT_ = 252; goto X_; }
    R1 = (0x1);
    L_8C053722:;
    if ((R2 != R1)) { NEXT_ = 246; goto X_; }
    t1034 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1034 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1034 + 0xB9C))) > 0.0f))) { NEXT_ = 244; goto X_; }
    R3 = (0x1);
    L_8C053752:;
    t1041 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1041 + 0x1);
    cpuAimPointSet(((t1041 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1043 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1043 + 0xB00))) * 59.4249992f));
    if ((!((*(float *)((t1043 + 0xB9C))) > 0.0f))) { NEXT_ = 242; goto X_; }
    R3 = (0x1);
    L_8C053796:;
    t1050 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1050 + 0x1);
    cpuAimPointSet(((t1050 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1052 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1052 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1052 + 0xB9C))) > 0.0f))) { NEXT_ = 240; goto X_; }
    R3 = (0x1);
    L_8C053864:;
    t1059 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1059 + 0x1);
    cpuAimPointSet(((t1059 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    goto L_8C054AA6;
    NEXT_ = 240;
    X_:;
    for (;;) {
        if (NEXT_ < 0) return S_[425];
        if (NEXT_ >= 240 && NEXT_ < 480) { NEXT_ = cpuSglAimTable_p1(S_, NEXT_); continue; }
        if (NEXT_ >= 480 && NEXT_ < 720) { NEXT_ = cpuSglAimTable_p2(S_, NEXT_); continue; }
        if (NEXT_ >= 720 && NEXT_ < 865) { NEXT_ = cpuSglAimTable_p3(S_, NEXT_); continue; }
        break;
    }
    switch (NEXT_) { case 0: goto L_8C050352; case 1: goto L_8C05037C; case 2: goto L_8C050388; case 3: goto L_8C0503A4; case 4: goto L_8C052FF4; case 5: goto L_8C05394E; case 6: goto L_8C054364; case 7: goto L_8C054610; case 8: goto L_8C054A8C; case 9: goto L_8C054AA6; case 10: goto L_8C054A7C; case 11: goto L_8C054A8A; case 12: goto L_8C05461C; case 13: goto L_8C05463C; case 14: goto L_8C05467A; case 15: goto L_8C0548C6; case 16: goto L_8C0548E8; case 17: goto L_8C054916; case 18: goto L_8C054972; case 19: goto L_8C054A28; case 20: goto L_8C0549A6; case 21: goto L_8C0549B4; case 22: goto L_8C05494A; case 23: goto L_8C054970; case 24: goto L_8C054906; case 25: goto L_8C054914; case 26: goto L_8C0549B8; case 27: goto L_8C0549E4; case 28: goto L_8C054A18; case 29: goto L_8C054A26; case 30: goto L_8C0549D4; case 31: goto L_8C0549E2; case 32: goto L_8C0548D6; case 33: goto L_8C0548E6; case 34: goto L_8C0548AE; case 35: goto L_8C0548C4; case 36: goto L_8C054682; case 37: goto L_8C0546B2; case 38: goto L_8C0546D4; case 39: goto L_8C054702; case 40: goto L_8C05475E; case 41: goto L_8C054876; case 42: goto L_8C054794; case 43: goto L_8C0547A2; case 44: goto L_8C054736; case 45: goto L_8C05475C; case 46: goto L_8C0546F2; case 47: goto L_8C054700; case 48: goto L_8C0547A6; case 49: goto L_8C0547D2; case 50: goto L_8C054816; case 51: goto L_8C05484C; case 52: goto L_8C054874; case 53: goto L_8C054806; case 54: goto L_8C054814; case 55: goto L_8C0547C2; case 56: goto L_8C0547D0; case 57: goto L_8C0546C2; case 58: goto L_8C0546D2; case 59: goto L_8C05469A; case 60: goto L_8C0546B0; case 61: goto L_8C05464C; case 62: goto L_8C054678; case 63: goto L_8C05462C; case 64: goto L_8C05463A; case 65: goto L_8C054602; case 66: goto L_8C054370; case 67: goto L_8C0543A6; case 68: goto L_8C0545AA; case 69: goto L_8C05459A; case 70: goto L_8C0545A8; case 71: goto L_8C0543B2; case 72: goto L_8C0543E2; case 73: goto L_8C054404; case 74: goto L_8C054446; case 75: goto L_8C05455E; case 76: goto L_8C05447C; case 77: goto L_8C05448A; case 78: goto L_8C054424; case 79: goto L_8C054444; case 80: goto L_8C05448E; case 81: goto L_8C0544BA; case 82: goto L_8C0544FE; case 83: goto L_8C054534; case 84: goto L_8C05455C; case 85: goto L_8C0544EE; case 86: goto L_8C0544FC; case 87: goto L_8C0544AA; case 88: goto L_8C0544B8; case 89: goto L_8C0543F2; case 90: goto L_8C054402; case 91: goto L_8C0543CA; case 92: goto L_8C0543E0; case 93: goto L_8C054394; case 94: goto L_8C05435C; case 95: goto L_8C05395A; case 96: goto L_8C05397A; case 97: goto L_8C0539A6; case 98: goto L_8C053A14; case 99: goto L_8C053A48; case 100: goto L_8C053A70; case 101: goto L_8C053E22; case 102: goto L_8C0542C6; case 103: goto L_8C0542E0; case 104: goto L_8C05430A; case 105: goto L_8C054318; case 106: goto L_8C0542FA; case 107: goto L_8C054308; case 108: goto L_8C0542B6; case 109: goto L_8C0542C4; case 110: goto L_8C053E2E; case 111: goto L_8C053E4E; case 112: goto L_8C053E8E; case 113: goto L_8C0540C0; case 114: goto L_8C0540B0; case 115: goto L_8C0540BE; case 116: goto L_8C0540D0; case 117: goto L_8C054100; case 118: goto L_8C054122; case 119: goto L_8C054162; case 120: goto L_8C0541A6; case 121: goto L_8C054276; case 122: goto L_8C0541DA; case 123: goto L_8C0541E8; case 124: goto L_8C054196; case 125: goto L_8C0541A4; case 126: goto L_8C054140; case 127: goto L_8C054160; case 128: goto L_8C0541EC; case 129: goto L_8C054218; case 130: goto L_8C05424C; case 131: goto L_8C054274; case 132: goto L_8C054208; case 133: goto L_8C054216; case 134: goto L_8C054110; case 135: goto L_8C054120; case 136: goto L_8C0540E8; case 137: goto L_8C0540FE; case 138: goto L_8C053E96; case 139: goto L_8C053EC8; case 140: goto L_8C053F0C; case 141: goto L_8C053EFC; case 142: goto L_8C053F0A; case 143: goto L_8C053EB8; case 144: goto L_8C053EC6; case 145: goto L_8C053F10; case 146: goto L_8C053F40; case 147: goto L_8C053F76; case 148: goto L_8C053FA4; case 149: goto L_8C054070; case 150: goto L_8C053FD8; case 151: goto L_8C053FE6; case 152: goto L_8C053F94; case 153: goto L_8C053FA2; case 154: goto L_8C053FEA; case 155: goto L_8C054016; case 156: goto L_8C05406E; case 157: goto L_8C05404A; case 158: goto L_8C05406C; case 159: goto L_8C054006; case 160: goto L_8C054014; case 161: goto L_8C053F50; case 162: goto L_8C053F74; case 163: goto L_8C053F28; case 164: goto L_8C053F3E; case 165: goto L_8C053E7C; case 166: goto L_8C053E8C; case 167: goto L_8C053E3E; case 168: goto L_8C053E4C; case 169: goto L_8C053E14; case 170: goto L_8C053A7C; case 171: goto L_8C053AB2; case 172: goto L_8C053D6C; case 173: goto L_8C053D90; case 174: goto L_8C053DBC; case 175: goto L_8C053DAC; case 176: goto L_8C053DBA; case 177: goto L_8C053D5C; case 178: goto L_8C053D6A; case 179: goto L_8C053ABE; case 180: goto L_8C053AEE; case 181: goto L_8C053B10; case 182: goto L_8C053C8E; case 183: goto L_8C053D1C; case 184: goto L_8C053C7E; case 185: goto L_8C053C8C; case 186: goto L_8C053C9E; case 187: goto L_8C053CCA; case 188: goto L_8C053D0E; case 189: goto L_8C053CFE; case 190: goto L_8C053D0C; case 191: goto L_8C053CBA; case 192: goto L_8C053CC8; case 193: goto L_8C053B18; case 194: goto L_8C053B60; case 195: goto L_8C053BA4; case 196: goto L_8C053C36; case 197: goto L_8C053B94; case 198: goto L_8C053BA2; case 199: goto L_8C053B50; case 200: goto L_8C053B5E; case 201: goto L_8C053BB6; case 202: goto L_8C053BE2; case 203: goto L_8C053C26; case 204: goto L_8C053C16; case 205: goto L_8C053C24; case 206: goto L_8C053BD2; case 207: goto L_8C053BE0; case 208: goto L_8C053AFE; case 209: goto L_8C053B0E; case 210: goto L_8C053AD6; case 211: goto L_8C053AEC; case 212: goto L_8C053AA0; case 213: goto L_8C053A68; case 214: goto L_8C053A44; case 215: goto L_8C0539F2; case 216: goto L_8C05399E; case 217: goto L_8C05396A; case 218: goto L_8C053978; case 219: goto L_8C053946; case 220: goto L_8C053000; case 221: goto L_8C053028; case 222: goto L_8C0533DA; case 223: goto L_8C0538B6; case 224: goto L_8C0538D0; case 225: goto L_8C053912; case 226: goto L_8C0538EA; case 227: goto L_8C053910; case 228: goto L_8C0538A6; case 229: goto L_8C0538B4; case 230: goto L_8C0533E6; case 231: goto L_8C053428; case 232: goto L_8C05344A; case 233: goto L_8C05369A; case 234: goto L_8C0536B4; case 235: goto L_8C0536E4; case 236: goto L_8C053722; case 237: goto L_8C053752; case 238: goto L_8C053796; case 239: goto L_8C053864; }
    return S_[425];
}

int cpuSglAimTable_p1(int *S_, int at)
{
    switch (at) { case 240: goto L_8C0537CA; case 241: goto L_8C0537D8; case 242: goto L_8C053786; case 243: goto L_8C053794; case 244: goto L_8C053742; case 245: goto L_8C053750; case 246: goto L_8C0537DC; case 247: goto L_8C053820; case 248: goto L_8C053854; case 249: goto L_8C053862; case 250: goto L_8C053810; case 251: goto L_8C05381E; case 252: goto L_8C053710; case 253: goto L_8C053720; case 254: goto L_8C0536CC; case 255: goto L_8C0536E2; case 256: goto L_8C05368A; case 257: goto L_8C053698; case 258: goto L_8C053452; case 259: goto L_8C053484; case 260: goto L_8C0534C8; case 261: goto L_8C0534E4; case 262: goto L_8C053528; case 263: goto L_8C05354A; case 264: goto L_8C05357A; case 265: goto L_8C053648; case 266: goto L_8C0535AE; case 267: goto L_8C0535BC; case 268: goto L_8C05356A; case 269: goto L_8C053578; case 270: goto L_8C0535C0; case 271: goto L_8C053602; case 272: goto L_8C053646; case 273: goto L_8C053636; case 274: goto L_8C053644; case 275: goto L_8C0535DC; case 276: goto L_8C053600; case 277: goto L_8C053538; case 278: goto L_8C053548; case 279: goto L_8C053510; case 280: goto L_8C053526; case 281: goto L_8C0534B8; case 282: goto L_8C0534C6; case 283: goto L_8C053474; case 284: goto L_8C053482; case 285: goto L_8C053438; case 286: goto L_8C053448; case 287: goto L_8C053418; case 288: goto L_8C053426; case 289: goto L_8C0533CC; case 290: goto L_8C053034; case 291: goto L_8C05306A; case 292: goto L_8C053320; case 293: goto L_8C053346; case 294: goto L_8C053372; case 295: goto L_8C053362; case 296: goto L_8C053370; case 297: goto L_8C053310; case 298: goto L_8C05331E; case 299: goto L_8C053076; case 300: goto L_8C0530A6; case 301: goto L_8C0530DE; case 302: goto L_8C053232; case 303: goto L_8C05324C; case 304: goto L_8C053276; case 305: goto L_8C0532BA; case 306: goto L_8C0532AA; case 307: goto L_8C0532B8; case 308: goto L_8C053266; case 309: goto L_8C053274; case 310: goto L_8C053222; case 311: goto L_8C053230; case 312: goto L_8C0530E6; case 313: goto L_8C053118; case 314: goto L_8C05315C; case 315: goto L_8C053178; case 316: goto L_8C0531A2; case 317: goto L_8C0531FC; case 318: goto L_8C0531EC; case 319: goto L_8C0531FA; case 320: goto L_8C053192; case 321: goto L_8C0531A0; case 322: goto L_8C05314C; case 323: goto L_8C05315A; case 324: goto L_8C053108; case 325: goto L_8C053116; case 326: goto L_8C0530B6; case 327: goto L_8C0530DC; case 328: goto L_8C05308E; case 329: goto L_8C0530A4; case 330: goto L_8C053058; case 331: goto L_8C053020; case 332: goto L_8C052FEC; case 333: goto L_8C0503B2; case 334: goto L_8C0503CE; case 335: goto L_8C051162; case 336: goto L_8C05299C; case 337: goto L_8C0529E4; case 338: goto L_8C052BA2; case 339: goto L_8C052BBC; case 340: goto L_8C052E04; case 341: goto L_8C052E48; case 342: goto L_8C052E92; case 343: goto L_8C052ECE; case 344: goto L_8C052EFE; case 345: goto L_8C052F42; case 346: goto L_8C052FAA; case 347: goto L_8C052F32; case 348: goto L_8C052F40; case 349: goto L_8C052EEE; case 350: goto L_8C052EFC; case 351: goto L_8C052F50; case 352: goto L_8C052F7C; case 353: goto L_8C052F6C; case 354: goto L_8C052F7A; case 355: goto L_8C052EBC; case 356: goto L_8C052ECC; case 357: goto L_8C052E7A; case 358: goto L_8C052E90; case 359: goto L_8C052E38; case 360: goto L_8C052E46; case 361: goto L_8C052DF4; case 362: goto L_8C052E02; case 363: goto L_8C052BC4; case 364: goto L_8C052BEE; case 365: goto L_8C052C34; case 366: goto L_8C052C80; case 367: goto L_8C052CBA; case 368: goto L_8C052CEA; case 369: goto L_8C052D30; case 370: goto L_8C052DB8; case 371: goto L_8C052D20; case 372: goto L_8C052D2E; case 373: goto L_8C052CDA; case 374: goto L_8C052CE8; case 375: goto L_8C052D34; case 376: goto L_8C052D60; case 377: goto L_8C052DA8; case 378: goto L_8C052DB6; case 379: goto L_8C052D50; case 380: goto L_8C052D5E; case 381: goto L_8C052CA8; case 382: goto L_8C052CB8; case 383: goto L_8C052C68; case 384: goto L_8C052C7E; case 385: goto L_8C052C24; case 386: goto L_8C052C32; case 387: goto L_8C052BDE; case 388: goto L_8C052BEC; case 389: goto L_8C052BAE; case 390: goto L_8C052BBA; case 391: goto L_8C052B78; case 392: goto L_8C052BA0; case 393: goto L_8C0529F0; case 394: goto L_8C052A20; case 395: goto L_8C052A42; case 396: goto L_8C052A92; case 397: goto L_8C052B48; case 398: goto L_8C052AC6; case 399: goto L_8C052AD4; case 400: goto L_8C052A62; case 401: goto L_8C052A90; case 402: goto L_8C052AD8; case 403: goto L_8C052B04; case 404: goto L_8C052B38; case 405: goto L_8C052B46; case 406: goto L_8C052AF4; case 407: goto L_8C052B02; case 408: goto L_8C052A30; case 409: goto L_8C052A40; case 410: goto L_8C052A08; case 411: goto L_8C052A1E; case 412: goto L_8C0529D6; case 413: goto L_8C05231A; case 414: goto L_8C05234E; case 415: goto L_8C052384; case 416: goto L_8C05252E; case 417: goto L_8C05256A; case 418: goto L_8C0527B2; case 419: goto L_8C0527F6; case 420: goto L_8C052840; case 421: goto L_8C05287E; case 422: goto L_8C0528AE; case 423: goto L_8C05297C; case 424: goto L_8C0528E2; case 425: goto L_8C0528F0; case 426: goto L_8C05289E; case 427: goto L_8C0528AC; case 428: goto L_8C0528F4; case 429: goto L_8C052920; case 430: goto L_8C05297A; case 431: goto L_8C052956; case 432: goto L_8C052978; case 433: goto L_8C052910; case 434: goto L_8C05291E; case 435: goto L_8C052850; case 436: goto L_8C05287C; case 437: goto L_8C052828; case 438: goto L_8C05283E; case 439: goto L_8C0527E6; case 440: goto L_8C0527F4; case 441: goto L_8C0527A2; case 442: goto L_8C0527B0; case 443: goto L_8C052572; case 444: goto L_8C05259C; case 445: goto L_8C0525E2; case 446: goto L_8C05262E; case 447: goto L_8C052666; case 448: goto L_8C052696; case 449: goto L_8C0526DC; case 450: goto L_8C052766; case 451: goto L_8C0526CC; case 452: goto L_8C0526DA; case 453: goto L_8C052686; case 454: goto L_8C052694; case 455: goto L_8C0526E0; case 456: goto L_8C05270C; case 457: goto L_8C052740; case 458: goto L_8C052764; case 459: goto L_8C0526FC; case 460: goto L_8C05270A; case 461: goto L_8C05263E; case 462: goto L_8C052664; case 463: goto L_8C052616; case 464: goto L_8C05262C; case 465: goto L_8C0525D2; case 466: goto L_8C0525E0; case 467: goto L_8C05258C; case 468: goto L_8C05259A; case 469: goto L_8C05253E; case 470: goto L_8C052568; case 471: goto L_8C05251E; case 472: goto L_8C05252C; case 473: goto L_8C052390; case 474: goto L_8C0523BA; case 475: goto L_8C0523FE; case 476: goto L_8C052462; case 477: goto L_8C0524A6; case 478: goto L_8C0524EC; case 479: goto L_8C0524EE; }
    return -2;
    L_8C0537CA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0537D8;
    R3 = (0xFFFFFFFF);
    return 239;
    L_8C0537D8:;
    R3 = (0x0);
    return 239;
    L_8C053786:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053794;
    R3 = (0xFFFFFFFF);
    return 238;
    L_8C053794:;
    R3 = (0x0);
    return 238;
    L_8C053742:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053750;
    R3 = (0xFFFFFFFF);
    return 237;
    L_8C053750:;
    R3 = (0x0);
    return 237;
    L_8C0537DC:;
    t1076 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1076 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1076 + 0xB9C))) > 0.0f))) goto L_8C053810;
    R3 = (0x1);
    L_8C053820:;
    t1083 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1083 + 0x1);
    cpuAimPointSet(((t1083 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1085 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1085 + 0xB00))) * 59.4249992f));
    if ((!((*(float *)((t1085 + 0xB9C))) > 0.0f))) goto L_8C053854;
    R3 = (0x1);
    return 239;
    L_8C053854:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053862;
    R3 = (0xFFFFFFFF);
    return 239;
    L_8C053862:;
    R3 = (0x0);
    return 239;
    L_8C053810:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05381E;
    R3 = (0xFFFFFFFF);
    goto L_8C053820;
    L_8C05381E:;
    R3 = (0x0);
    goto L_8C053820;
    L_8C053710:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C053720;
    R1 = (0xFFFFFFFF);
    return 236;
    L_8C053720:;
    R1 = (0x0);
    return 236;
    L_8C0536CC:;
    t1107 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1107 + 0xB9C))) - (*(float *)((t1107 + 0xAE8))))))) goto L_8C0536E2;
    R2 = (0xFFFFFFFF);
    return 235;
    L_8C0536E2:;
    R2 = (0x0);
    return 235;
    L_8C05368A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053698;
    R3 = (0xFFFFFFFF);
    return 233;
    L_8C053698:;
    R3 = (0x0);
    return 233;
    L_8C053452:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0534E4;
    t1120 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1120 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1120 + 0xB9C))) > 0.0f))) goto L_8C053474;
    R3 = (0x1);
    L_8C053484:;
    t1127 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1127 + 0x1);
    cpuAimPointSet(((t1127 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t1129 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1129 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1129 + 0xB9C))) > 0.0f))) goto L_8C0534B8;
    R3 = (0x1);
    L_8C0534C8:;
    t1136 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1136 + 0x1);
    cpuAimPointSet(((t1136 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    L_8C0534E4:;
    t1138 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1138 + 0xB9C))) - (*(float *)((t1138 + 0xAE8)))) > 0.0f))) goto L_8C053510;
    R2 = (0x1);
    L_8C053528:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C053538;
    R1 = (0x1);
    L_8C05354A:;
    if ((R2 != R1)) goto L_8C0535C0;
    t1149 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1149 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1149 + 0xB9C))) > 0.0f))) goto L_8C05356A;
    R3 = (0x1);
    L_8C05357A:;
    t1156 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1156 + 0x1);
    cpuAimPointSet(((t1156 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1158 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1158 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1158 + 0xB9C))) > 0.0f))) goto L_8C0535AE;
    R3 = (0x1);
    L_8C053648:;
    t1165 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1165 + 0x1);
    cpuAimPointSet(((t1165 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C0535AE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0535BC;
    R3 = (0xFFFFFFFF);
    goto L_8C053648;
    L_8C0535BC:;
    R3 = (0x0);
    goto L_8C053648;
    L_8C05356A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053578;
    R3 = (0xFFFFFFFF);
    goto L_8C05357A;
    L_8C053578:;
    R3 = (0x0);
    goto L_8C05357A;
    L_8C0535C0:;
    t1177 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1177 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1177 + 0xB9C))) > 0.0f))) goto L_8C0535DC;
    R3 = (0x1);
    L_8C053602:;
    t1184 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1184 + 0x1);
    cpuAimPointSet(((t1184 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1186 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1186 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1186 + 0xB9C))) > 0.0f))) goto L_8C053636;
    R3 = (0x1);
    L_8C053646:;
    R3 = ((-R3));
    goto L_8C053648;
    L_8C053636:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053644;
    R3 = (0xFFFFFFFF);
    goto L_8C053646;
    L_8C053644:;
    R3 = (0x0);
    goto L_8C053646;
    L_8C0535DC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053600;
    R3 = (0xFFFFFFFF);
    goto L_8C053602;
    L_8C053600:;
    R3 = (0x0);
    goto L_8C053602;
    L_8C053538:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C053548;
    R1 = (0xFFFFFFFF);
    goto L_8C05354A;
    L_8C053548:;
    R1 = (0x0);
    goto L_8C05354A;
    L_8C053510:;
    t1209 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1209 + 0xB9C))) - (*(float *)((t1209 + 0xAE8))))))) goto L_8C053526;
    R2 = (0xFFFFFFFF);
    goto L_8C053528;
    L_8C053526:;
    R2 = (0x0);
    goto L_8C053528;
    L_8C0534B8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0534C6;
    R3 = (0xFFFFFFFF);
    goto L_8C0534C8;
    L_8C0534C6:;
    R3 = (0x0);
    goto L_8C0534C8;
    L_8C053474:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053482;
    R3 = (0xFFFFFFFF);
    goto L_8C053484;
    L_8C053482:;
    R3 = (0x0);
    goto L_8C053484;
    L_8C053438:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C053448;
    R1 = (0xFFFFFFFF);
    return 232;
    L_8C053448:;
    R1 = (0x0);
    return 232;
    L_8C053418:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C053426;
    R2 = (0xFFFFFFFF);
    return 231;
    L_8C053426:;
    R2 = (0x0);
    return 231;
    L_8C0533CC:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    return 222;
    L_8C053034:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C053058;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C05306A:;
    if ((20.0f > F3)) goto L_8C053076;
    t1250 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t1250 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1250 + 0xB9C))) > 0.0f))) goto L_8C053310;
    R3 = (0x1);
    L_8C053320:;
    t1257 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1257 + 0x1);
    cpuAimPointSet(((t1257 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C053346;
    return 9;
    L_8C053346:;
    t1261 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1261 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1261 + 0xB9C))) > 0.0f))) goto L_8C053362;
    R3 = (0x1);
    L_8C053372:;
    t1268 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1268 + 0x1);
    cpuAimPointSet(((t1268 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C053362:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053370;
    R3 = (0xFFFFFFFF);
    goto L_8C053372;
    L_8C053370:;
    R3 = (0x0);
    goto L_8C053372;
    L_8C053310:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05331E;
    R3 = (0xFFFFFFFF);
    goto L_8C053320;
    L_8C05331E:;
    R3 = (0x0);
    goto L_8C053320;
    L_8C053076:;
    t1280 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1280 + 0xB9C))) - (*(float *)((t1280 + 0xAE8)))) > 0.0f))) goto L_8C05308E;
    R2 = (0x1);
    L_8C0530A6:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0530B6;
    R1 = (0x1);
    L_8C0530DE:;
    if ((R2 != R1)) goto L_8C0530E6;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C05324C;
    t1293 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1293 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1293 + 0xB9C))) > 0.0f))) goto L_8C053222;
    R3 = (0x1);
    L_8C053232:;
    t1300 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1300 + 0x1);
    cpuAimPointSet(((t1300 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C05324C:;
    t1302 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1302 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1302 + 0xB9C))) > 0.0f))) goto L_8C053266;
    R3 = (0x1);
    L_8C053276:;
    t1309 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1309 + 0x1);
    cpuAimPointSet(((t1309 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1311 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1311 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1311 + 0xB9C))) > 0.0f))) goto L_8C0532AA;
    R3 = (0x1);
    L_8C0532BA:;
    t1318 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1318 + 0x1);
    cpuAimPointSet(((t1318 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C0532AA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0532B8;
    R3 = (0xFFFFFFFF);
    goto L_8C0532BA;
    L_8C0532B8:;
    R3 = (0x0);
    goto L_8C0532BA;
    L_8C053266:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053274;
    R3 = (0xFFFFFFFF);
    goto L_8C053276;
    L_8C053274:;
    R3 = (0x0);
    goto L_8C053276;
    L_8C053222:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053230;
    R3 = (0xFFFFFFFF);
    goto L_8C053232;
    L_8C053230:;
    R3 = (0x0);
    goto L_8C053232;
    L_8C0530E6:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C053178;
    t1337 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1337 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1337 + 0xB9C))) > 0.0f))) goto L_8C053108;
    R3 = (0x1);
    L_8C053118:;
    t1344 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1344 + 0x1);
    cpuAimPointSet(((t1344 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t1346 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1346 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1346 + 0xB9C))) > 0.0f))) goto L_8C05314C;
    R3 = (0x1);
    L_8C05315C:;
    t1353 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1353 + 0x1);
    cpuAimPointSet(((t1353 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    L_8C053178:;
    t1355 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1355 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1355 + 0xB9C))) > 0.0f))) goto L_8C053192;
    R3 = (0x1);
    L_8C0531A2:;
    t1362 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1362 + 0x1);
    cpuAimPointSet(((t1362 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1364 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1364 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1364 + 0xB9C))) > 0.0f))) goto L_8C0531EC;
    R3 = (0x1);
    L_8C0531FC:;
    R3 = ((-R3));
    goto L_8C0532BA;
    L_8C0531EC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0531FA;
    R3 = (0xFFFFFFFF);
    goto L_8C0531FC;
    L_8C0531FA:;
    R3 = (0x0);
    goto L_8C0531FC;
    L_8C053192:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0531A0;
    R3 = (0xFFFFFFFF);
    goto L_8C0531A2;
    L_8C0531A0:;
    R3 = (0x0);
    goto L_8C0531A2;
    L_8C05314C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05315A;
    R3 = (0xFFFFFFFF);
    goto L_8C05315C;
    L_8C05315A:;
    R3 = (0x0);
    goto L_8C05315C;
    L_8C053108:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C053116;
    R3 = (0xFFFFFFFF);
    goto L_8C053118;
    L_8C053116:;
    R3 = (0x0);
    goto L_8C053118;
    L_8C0530B6:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C0530DC;
    R1 = (0xFFFFFFFF);
    goto L_8C0530DE;
    L_8C0530DC:;
    R1 = (0x0);
    goto L_8C0530DE;
    L_8C05308E:;
    t1397 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1397 + 0xB9C))) - (*(float *)((t1397 + 0xAE8))))))) goto L_8C0530A4;
    R2 = (0xFFFFFFFF);
    goto L_8C0530A6;
    L_8C0530A4:;
    R2 = (0x0);
    goto L_8C0530A6;
    L_8C053058:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    goto L_8C05306A;
    L_8C053020:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    return 221;
    L_8C052FEC:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))));
    return 4;
    L_8C0503B2:;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))))) return 860;
    F3 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))));
    L_8C0503CE:;
    if ((47.5400009f > F3)) return 701;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))))) return 700;
    F3 = ((*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0))));
    L_8C051162:;
    if ((83.1949997f > F3)) return 493;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) goto L_8C05234E;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) return 492;
    if (((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) != 0.0f)) goto L_8C05231A;
    L_8C05299C:;
    u1443 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u1443 = u1443 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u1443;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u1443))) goto L_8C0529D6;
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C0529E4:;
    if ((20.0f > F2)) goto L_8C0529F0;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C052B78;
    R3 = (0x1);
    L_8C052BA2:;
    if ((!((*(float *)(((int)stk + 4))) > 0.0f))) goto L_8C052BAE;
    R2 = (0x1);
    L_8C052BBC:;
    if ((R3 == R2)) goto L_8C052BC4;
    t1461 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1461 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1461 + 0xB9C))) > 0.0f))) goto L_8C052DF4;
    R3 = (0x1);
    L_8C052E04:;
    t1468 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1468 + 0x1);
    cpuAimPointSet(((t1468 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1470 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1470 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1470 + 0xB9C))) > 0.0f))) goto L_8C052E38;
    R3 = (0x1);
    L_8C052E48:;
    t1477 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1477 + 0x1);
    cpuAimPointSet(((t1477 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1479 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1479 + 0xB9C))) - (*(float *)((t1479 + 0xAE8)))) > 0.0f))) goto L_8C052E7A;
    R2 = (0x1);
    L_8C052E92:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C052EBC;
    R1 = (0x1);
    L_8C052ECE:;
    if ((R2 != R1)) goto L_8C052F50;
    t1490 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1490 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1490 + 0xB9C))) > 0.0f))) goto L_8C052EEE;
    R3 = (0x1);
    L_8C052EFE:;
    t1497 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1497 + 0x1);
    cpuAimPointSet(((t1497 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1499 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1499 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1499 + 0xB9C))) > 0.0f))) goto L_8C052F32;
    R3 = (0x1);
    L_8C052F42:;
    F4 = (((float)R3 * 41.1500015f));
    L_8C052FAA:;
    t1507 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1507 + 0x1);
    cpuAimPointSet(((t1507 + 0x1) - 1), 0x1, F4, F5);
    return 9;
    L_8C052F32:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052F40;
    R3 = (0xFFFFFFFF);
    goto L_8C052F42;
    L_8C052F40:;
    R3 = (0x0);
    goto L_8C052F42;
    L_8C052EEE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052EFC;
    R3 = (0xFFFFFFFF);
    goto L_8C052EFE;
    L_8C052EFC:;
    R3 = (0x0);
    goto L_8C052EFE;
    L_8C052F50:;
    t1519 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1519 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1519 + 0xB9C))) > 0.0f))) goto L_8C052F6C;
    R3 = (0x1);
    L_8C052F7C:;
    t1526 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1526 + 0x1);
    cpuAimPointSet(((t1526 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1528 = *(int *)(((int)stk + 32));
    F4 = ((*(float *)((t1528 + 0xB9C))));
    F5 = (((*(float *)((t1528 + 0xB00))) * 118.849998f));
    goto L_8C052FAA;
    L_8C052F6C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052F7A;
    R3 = (0xFFFFFFFF);
    goto L_8C052F7C;
    L_8C052F7A:;
    R3 = (0x0);
    goto L_8C052F7C;
    L_8C052EBC:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C052ECC;
    R1 = (0xFFFFFFFF);
    goto L_8C052ECE;
    L_8C052ECC:;
    R1 = (0x0);
    goto L_8C052ECE;
    L_8C052E7A:;
    t1543 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1543 + 0xB9C))) - (*(float *)((t1543 + 0xAE8))))))) goto L_8C052E90;
    R2 = (0xFFFFFFFF);
    goto L_8C052E92;
    L_8C052E90:;
    R2 = (0x0);
    goto L_8C052E92;
    L_8C052E38:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052E46;
    R3 = (0xFFFFFFFF);
    goto L_8C052E48;
    L_8C052E46:;
    R3 = (0x0);
    goto L_8C052E48;
    L_8C052DF4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052E02;
    R3 = (0xFFFFFFFF);
    goto L_8C052E04;
    L_8C052E02:;
    R3 = (0x0);
    goto L_8C052E04;
    L_8C052BC4:;
    t1559 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1559 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1559 + 0xB9C))) > 0.0f))) goto L_8C052BDE;
    R3 = (0x1);
    L_8C052BEE:;
    t1566 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1566 + 0x1);
    cpuAimPointSet(((t1566 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1568 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1568 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1568 + 0xB9C))) > 0.0f))) goto L_8C052C24;
    R3 = (0x1);
    L_8C052C34:;
    t1575 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1575 + 0x1);
    cpuAimPointSet(((t1575 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1577 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1577 + 0xB9C))) - (*(float *)((t1577 + 0xAE8)))) > 0.0f))) goto L_8C052C68;
    R2 = (0x1);
    L_8C052C80:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C052CA8;
    R1 = (0x1);
    L_8C052CBA:;
    if ((R2 == R1)) goto L_8C052D34;
    t1588 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1588 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1588 + 0xB9C))) > 0.0f))) goto L_8C052CDA;
    R3 = (0x1);
    L_8C052CEA:;
    t1595 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1595 + 0x1);
    cpuAimPointSet(((t1595 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1597 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1597 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1597 + 0xB9C))) > 0.0f))) goto L_8C052D20;
    R3 = (0x1);
    L_8C052D30:;
    R3 = ((-R3));
    L_8C052DB8:;
    t1605 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1605 + 0x1);
    cpuAimPointSet(((t1605 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C052D20:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052D2E;
    R3 = (0xFFFFFFFF);
    goto L_8C052D30;
    L_8C052D2E:;
    R3 = (0x0);
    goto L_8C052D30;
    L_8C052CDA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052CE8;
    R3 = (0xFFFFFFFF);
    goto L_8C052CEA;
    L_8C052CE8:;
    R3 = (0x0);
    goto L_8C052CEA;
    L_8C052D34:;
    t1617 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1617 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1617 + 0xB9C))) > 0.0f))) goto L_8C052D50;
    R3 = (0x1);
    L_8C052D60:;
    t1624 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1624 + 0x1);
    cpuAimPointSet(((t1624 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1626 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1626 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1626 + 0xB9C))) > 0.0f))) goto L_8C052DA8;
    R3 = (0x1);
    goto L_8C052DB8;
    L_8C052DA8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052DB6;
    R3 = (0xFFFFFFFF);
    goto L_8C052DB8;
    L_8C052DB6:;
    R3 = (0x0);
    goto L_8C052DB8;
    L_8C052D50:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052D5E;
    R3 = (0xFFFFFFFF);
    goto L_8C052D60;
    L_8C052D5E:;
    R3 = (0x0);
    goto L_8C052D60;
    L_8C052CA8:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C052CB8;
    R1 = (0xFFFFFFFF);
    goto L_8C052CBA;
    L_8C052CB8:;
    R1 = (0x0);
    goto L_8C052CBA;
    L_8C052C68:;
    t1648 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1648 + 0xB9C))) - (*(float *)((t1648 + 0xAE8))))))) goto L_8C052C7E;
    R2 = (0xFFFFFFFF);
    goto L_8C052C80;
    L_8C052C7E:;
    R2 = (0x0);
    goto L_8C052C80;
    L_8C052C24:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052C32;
    R3 = (0xFFFFFFFF);
    goto L_8C052C34;
    L_8C052C32:;
    R3 = (0x0);
    goto L_8C052C34;
    L_8C052BDE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052BEC;
    R3 = (0xFFFFFFFF);
    goto L_8C052BEE;
    L_8C052BEC:;
    R3 = (0x0);
    goto L_8C052BEE;
    L_8C052BAE:;
    if ((!(0.0f > (*(float *)(((int)stk + 4)))))) goto L_8C052BBA;
    R2 = (0xFFFFFFFF);
    goto L_8C052BBC;
    L_8C052BBA:;
    R2 = (0x0);
    goto L_8C052BBC;
    L_8C052B78:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052BA0;
    R3 = (0xFFFFFFFF);
    goto L_8C052BA2;
    L_8C052BA0:;
    R3 = (0x0);
    goto L_8C052BA2;
    L_8C0529F0:;
    t1673 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    if ((!(((*(float *)((t1673 + 0xB9C))) - (*(float *)((t1673 + 0xAE8)))) > 0.0f))) goto L_8C052A08;
    R2 = (0x1);
    L_8C052A20:;
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C052A30;
    R1 = (0x1);
    L_8C052A42:;
    if ((R2 != R1)) goto L_8C052AD8;
    t1684 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1684 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1684 + 0xB9C))) > 0.0f))) goto L_8C052A62;
    R3 = (0x1);
    L_8C052A92:;
    t1691 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1691 + 0x1);
    cpuAimPointSet(((t1691 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1693 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1693 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1693 + 0xB9C))) > 0.0f))) goto L_8C052AC6;
    R3 = (0x1);
    L_8C052B48:;
    t1700 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1700 + 0x1);
    cpuAimPointSet(((t1700 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C052AC6:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052AD4;
    R3 = (0xFFFFFFFF);
    goto L_8C052B48;
    L_8C052AD4:;
    R3 = (0x0);
    goto L_8C052B48;
    L_8C052A62:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052A90;
    R3 = (0xFFFFFFFF);
    goto L_8C052A92;
    L_8C052A90:;
    R3 = (0x0);
    goto L_8C052A92;
    L_8C052AD8:;
    t1712 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1712 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1712 + 0xB9C))) > 0.0f))) goto L_8C052AF4;
    R3 = (0x1);
    L_8C052B04:;
    t1719 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1719 + 0x1);
    cpuAimPointSet(((t1719 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1721 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1721 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1721 + 0xB9C))) > 0.0f))) goto L_8C052B38;
    R3 = (0x1);
    goto L_8C052B48;
    L_8C052B38:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052B46;
    R3 = (0xFFFFFFFF);
    goto L_8C052B48;
    L_8C052B46:;
    R3 = (0x0);
    goto L_8C052B48;
    L_8C052AF4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052B02;
    R3 = (0xFFFFFFFF);
    goto L_8C052B04;
    L_8C052B02:;
    R3 = (0x0);
    goto L_8C052B04;
    L_8C052A30:;
    if ((!(0.0f > (*(float *)((0x28 + (*(int *)(((int)stk + 16))))))))) goto L_8C052A40;
    R1 = (0xFFFFFFFF);
    goto L_8C052A42;
    L_8C052A40:;
    R1 = (0x0);
    goto L_8C052A42;
    L_8C052A08:;
    t1743 = *(int *)(((int)stk + 32));
    if ((!(F2 > ((*(float *)((t1743 + 0xB9C))) - (*(float *)((t1743 + 0xAE8))))))) goto L_8C052A1E;
    R2 = (0xFFFFFFFF);
    goto L_8C052A20;
    L_8C052A1E:;
    R2 = (0x0);
    goto L_8C052A20;
    L_8C0529D6:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    goto L_8C0529E4;
    L_8C05231A:;
    L_8C05234E:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) return 491;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C052384:;
    if ((20.0f > F3)) goto L_8C052390;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C05251E;
    R3 = (0x1);
    L_8C05252E:;
    if ((!((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f))) goto L_8C05253E;
    R2 = (0x1);
    L_8C05256A:;
    if ((R3 == R2)) goto L_8C052572;
    t1774 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1774 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1774 + 0xB9C))) > 0.0f))) goto L_8C0527A2;
    R3 = (0x1);
    L_8C0527B2:;
    t1781 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1781 + 0x1);
    cpuAimPointSet(((t1781 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1783 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1783 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1783 + 0xB9C))) > 0.0f))) goto L_8C0527E6;
    R3 = (0x1);
    L_8C0527F6:;
    t1790 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1790 + 0x1);
    cpuAimPointSet(((t1790 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1792 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1792 + 0xB9C))) - (*(float *)((t1792 + 0xAE8)))) > 0.0f))) goto L_8C052828;
    R2 = (0x1);
    L_8C052840:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C052850;
    R1 = (0x1);
    L_8C05287E:;
    if ((R2 != R1)) goto L_8C0528F4;
    t1803 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1803 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1803 + 0xB9C))) > 0.0f))) goto L_8C05289E;
    R3 = (0x1);
    L_8C0528AE:;
    t1810 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1810 + 0x1);
    cpuAimPointSet(((t1810 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1812 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1812 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1812 + 0xB9C))) > 0.0f))) goto L_8C0528E2;
    R3 = (0x1);
    L_8C05297C:;
    t1819 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1819 + 0x1);
    cpuAimPointSet(((t1819 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C0528E2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0528F0;
    R3 = (0xFFFFFFFF);
    goto L_8C05297C;
    L_8C0528F0:;
    R3 = (0x0);
    goto L_8C05297C;
    L_8C05289E:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0528AC;
    R3 = (0xFFFFFFFF);
    goto L_8C0528AE;
    L_8C0528AC:;
    R3 = (0x0);
    goto L_8C0528AE;
    L_8C0528F4:;
    t1831 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1831 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1831 + 0xB9C))) > 0.0f))) goto L_8C052910;
    R3 = (0x1);
    L_8C052920:;
    t1838 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1838 + 0x1);
    cpuAimPointSet(((t1838 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1840 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1840 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1840 + 0xB9C))) > 0.0f))) goto L_8C052956;
    R3 = (0x1);
    L_8C05297A:;
    R3 = ((-R3));
    goto L_8C05297C;
    L_8C052956:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052978;
    R3 = (0xFFFFFFFF);
    goto L_8C05297A;
    L_8C052978:;
    R3 = (0x0);
    goto L_8C05297A;
    L_8C052910:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05291E;
    R3 = (0xFFFFFFFF);
    goto L_8C052920;
    L_8C05291E:;
    R3 = (0x0);
    goto L_8C052920;
    L_8C052850:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C05287C;
    R1 = (0xFFFFFFFF);
    goto L_8C05287E;
    L_8C05287C:;
    R1 = (0x0);
    goto L_8C05287E;
    L_8C052828:;
    t1863 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1863 + 0xB9C))) - (*(float *)((t1863 + 0xAE8))))))) goto L_8C05283E;
    R2 = (0xFFFFFFFF);
    goto L_8C052840;
    L_8C05283E:;
    R2 = (0x0);
    goto L_8C052840;
    L_8C0527E6:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0527F4;
    R3 = (0xFFFFFFFF);
    goto L_8C0527F6;
    L_8C0527F4:;
    R3 = (0x0);
    goto L_8C0527F6;
    L_8C0527A2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0527B0;
    R3 = (0xFFFFFFFF);
    goto L_8C0527B2;
    L_8C0527B0:;
    R3 = (0x0);
    goto L_8C0527B2;
    L_8C052572:;
    t1879 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1879 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1879 + 0xB9C))) > 0.0f))) goto L_8C05258C;
    R3 = (0x1);
    L_8C05259C:;
    t1886 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1886 + 0x1);
    cpuAimPointSet(((t1886 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1888 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1888 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1888 + 0xB9C))) > 0.0f))) goto L_8C0525D2;
    R3 = (0x1);
    L_8C0525E2:;
    t1895 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1895 + 0x1);
    cpuAimPointSet(((t1895 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1897 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t1897 + 0xB9C))) - (*(float *)((t1897 + 0xAE8)))) > 0.0f))) goto L_8C052616;
    R2 = (0x1);
    L_8C05262E:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C05263E;
    R1 = (0x1);
    L_8C052666:;
    if ((R2 != R1)) goto L_8C0526E0;
    t1908 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1908 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1908 + 0xB9C))) > 0.0f))) goto L_8C052686;
    R3 = (0x1);
    L_8C052696:;
    t1915 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1915 + 0x1);
    cpuAimPointSet(((t1915 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t1917 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1917 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1917 + 0xB9C))) > 0.0f))) goto L_8C0526CC;
    R3 = (0x1);
    L_8C0526DC:;
    R3 = ((-R3));
    L_8C052766:;
    t1925 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1925 + 0x1);
    cpuAimPointSet(((t1925 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C0526CC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0526DA;
    R3 = (0xFFFFFFFF);
    goto L_8C0526DC;
    L_8C0526DA:;
    R3 = (0x0);
    goto L_8C0526DC;
    L_8C052686:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052694;
    R3 = (0xFFFFFFFF);
    goto L_8C052696;
    L_8C052694:;
    R3 = (0x0);
    goto L_8C052696;
    L_8C0526E0:;
    t1937 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1937 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t1937 + 0xB9C))) > 0.0f))) goto L_8C0526FC;
    R3 = (0x1);
    L_8C05270C:;
    t1944 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t1944 + 0x1);
    cpuAimPointSet(((t1944 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t1946 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t1946 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1946 + 0xB9C))) > 0.0f))) goto L_8C052740;
    R3 = (0x1);
    goto L_8C052766;
    L_8C052740:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052764;
    R3 = (0xFFFFFFFF);
    goto L_8C052766;
    L_8C052764:;
    R3 = (0x0);
    goto L_8C052766;
    L_8C0526FC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05270A;
    R3 = (0xFFFFFFFF);
    goto L_8C05270C;
    L_8C05270A:;
    R3 = (0x0);
    goto L_8C05270C;
    L_8C05263E:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C052664;
    R1 = (0xFFFFFFFF);
    goto L_8C052666;
    L_8C052664:;
    R1 = (0x0);
    goto L_8C052666;
    L_8C052616:;
    t1968 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t1968 + 0xB9C))) - (*(float *)((t1968 + 0xAE8))))))) goto L_8C05262C;
    R2 = (0xFFFFFFFF);
    goto L_8C05262E;
    L_8C05262C:;
    R2 = (0x0);
    goto L_8C05262E;
    L_8C0525D2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0525E0;
    R3 = (0xFFFFFFFF);
    goto L_8C0525E2;
    L_8C0525E0:;
    R3 = (0x0);
    goto L_8C0525E2;
    L_8C05258C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05259A;
    R3 = (0xFFFFFFFF);
    goto L_8C05259C;
    L_8C05259A:;
    R3 = (0x0);
    goto L_8C05259C;
    L_8C05253E:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C052568;
    R2 = (0xFFFFFFFF);
    goto L_8C05256A;
    L_8C052568:;
    R2 = (0x0);
    goto L_8C05256A;
    L_8C05251E:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05252C;
    R3 = (0xFFFFFFFF);
    goto L_8C05252E;
    L_8C05252C:;
    R3 = (0x0);
    goto L_8C05252E;
    L_8C052390:;
    t1994 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t1994 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t1994 + 0xB9C))) > 0.0f))) return 489;
    R3 = (0x1);
    L_8C0523BA:;
    t2001 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2001 + 0x1);
    cpuAimPointSet(((t2001 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2003 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2003 + 0xB00))) * 35.6550026f));
    if ((!((*(float *)((t2003 + 0xB9C))) > 0.0f))) return 487;
    R3 = (0x1);
    L_8C0523FE:;
    t2010 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2010 + 0x1);
    cpuAimPointSet(((t2010 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2012 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2012 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2012 + 0xB9C))) > 0.0f))) return 485;
    R3 = (0x1);
    L_8C052462:;
    t2019 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2019 + 0x1);
    cpuAimPointSet(((t2019 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2021 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2021 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2021 + 0xB9C))) > 0.0f))) return 483;
    R3 = (0x1);
    L_8C0524A6:;
    t2028 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2028 + 0x1);
    cpuAimPointSet(((t2028 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2030 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2030 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2030 + 0xB9C))) > 0.0f))) return 481;
    R3 = (0x1);
    L_8C0524EC:;
    R3 = ((-R3));
    L_8C0524EE:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    return 480;
}

int cpuSglAimTable_p2(int *S_, int at)
{
    switch (at) { case 480: goto L_8C0524FC; case 481: goto L_8C0524DC; case 482: goto L_8C0524EA; case 483: goto L_8C052496; case 484: goto L_8C0524A4; case 485: goto L_8C052432; case 486: goto L_8C052460; case 487: goto L_8C0523EE; case 488: goto L_8C0523FC; case 489: goto L_8C0523AA; case 490: goto L_8C0523B8; case 491: goto L_8C052372; case 492: goto L_8C05233C; case 493: goto L_8C051170; case 494: goto L_8C0511B2; case 495: goto L_8C0511DE; case 496: goto L_8C05124C; case 497: goto L_8C05125E; case 498: goto L_8C051ACC; case 499: goto L_8C051B14; case 500: goto L_8C051D90; case 501: goto L_8C051DAA; case 502: goto L_8C052094; case 503: goto L_8C0520D8; case 504: goto L_8C05213E; case 505: goto L_8C052184; case 506: goto L_8C05219E; case 507: goto L_8C0521CE; case 508: goto L_8C0521F0; case 509: goto L_8C052232; case 510: goto L_8C052276; case 511: goto L_8C0522DE; case 512: goto L_8C052266; case 513: goto L_8C052274; case 514: goto L_8C052210; case 515: goto L_8C052230; case 516: goto L_8C052284; case 517: goto L_8C0522B0; case 518: goto L_8C0522A0; case 519: goto L_8C0522AE; case 520: goto L_8C0521DE; case 521: goto L_8C0521EE; case 522: goto L_8C0521B6; case 523: goto L_8C0521CC; case 524: goto L_8C052174; case 525: goto L_8C052182; case 526: goto L_8C052114; case 527: goto L_8C05213C; case 528: goto L_8C0520C8; case 529: goto L_8C0520D6; case 530: goto L_8C052084; case 531: goto L_8C052092; case 532: goto L_8C051DB2; case 533: goto L_8C051DDC; case 534: goto L_8C051E36; case 535: goto L_8C051E84; case 536: goto L_8C051ECA; case 537: goto L_8C051EE4; case 538: goto L_8C051F14; case 539: goto L_8C051F4A; case 540: goto L_8C051F7A; case 541: goto L_8C051FC0; case 542: goto L_8C052048; case 543: goto L_8C051FB0; case 544: goto L_8C051FBE; case 545: goto L_8C051F6A; case 546: goto L_8C051F78; case 547: goto L_8C051FC4; case 548: goto L_8C051FF0; case 549: goto L_8C052038; case 550: goto L_8C052046; case 551: goto L_8C051FE0; case 552: goto L_8C051FEE; case 553: goto L_8C051F38; case 554: goto L_8C051F48; case 555: goto L_8C051EFC; case 556: goto L_8C051F12; case 557: goto L_8C051EBA; case 558: goto L_8C051EC8; case 559: goto L_8C051E74; case 560: goto L_8C051E82; case 561: goto L_8C051E12; case 562: goto L_8C051E34; case 563: goto L_8C051DCC; case 564: goto L_8C051DDA; case 565: goto L_8C051D9C; case 566: goto L_8C051DA8; case 567: goto L_8C051D80; case 568: goto L_8C051D8E; case 569: goto L_8C051B20; case 570: goto L_8C051B74; case 571: goto L_8C051B96; case 572: goto L_8C051CF4; case 573: goto L_8C051D38; case 574: goto L_8C051D28; case 575: goto L_8C051D36; case 576: goto L_8C051CE4; case 577: goto L_8C051CF2; case 578: goto L_8C051B9E; case 579: goto L_8C051BD0; case 580: goto L_8C051C14; case 581: goto L_8C051CB6; case 582: goto L_8C051C04; case 583: goto L_8C051C12; case 584: goto L_8C051BC0; case 585: goto L_8C051BCE; case 586: goto L_8C051C26; case 587: goto L_8C051C64; case 588: goto L_8C051CA8; case 589: goto L_8C051C98; case 590: goto L_8C051CA6; case 591: goto L_8C051C54; case 592: goto L_8C051C62; case 593: goto L_8C051B84; case 594: goto L_8C051B94; case 595: goto L_8C051B5C; case 596: goto L_8C051B72; case 597: goto L_8C051B06; case 598: goto L_8C051286; case 599: goto L_8C05129C; case 600: goto L_8C0512EE; case 601: goto L_8C05151A; case 602: goto L_8C05153C; case 603: goto L_8C051840; case 604: goto L_8C051884; case 605: goto L_8C0518D0; case 606: goto L_8C05192A; case 607: goto L_8C051954; case 608: goto L_8C051904; case 609: goto L_8C051928; case 610: goto L_8C0518C0; case 611: goto L_8C0518CE; case 612: goto L_8C05195C; case 613: goto L_8C05198C; case 614: goto L_8C0519AE; case 615: goto L_8C0519DC; case 616: goto L_8C051AAC; case 617: goto L_8C051A10; case 618: goto L_8C051A34; case 619: goto L_8C0519CC; case 620: goto L_8C0519DA; case 621: goto L_8C051A38; case 622: goto L_8C051A64; case 623: goto L_8C051AAA; case 624: goto L_8C051A9A; case 625: goto L_8C051AA8; case 626: goto L_8C051A54; case 627: goto L_8C051A62; case 628: goto L_8C05199C; case 629: goto L_8C0519AC; case 630: goto L_8C051974; case 631: goto L_8C05198A; case 632: goto L_8C051874; case 633: goto L_8C051882; case 634: goto L_8C051830; case 635: goto L_8C05183E; case 636: goto L_8C051544; case 637: goto L_8C05156E; case 638: goto L_8C0515B4; case 639: goto L_8C05161A; case 640: goto L_8C05165E; case 641: goto L_8C05164E; case 642: goto L_8C05165C; case 643: goto L_8C0515F2; case 644: goto L_8C051618; case 645: goto L_8C05168A; case 646: goto L_8C0516BA; case 647: goto L_8C0516DC; case 648: goto L_8C051722; case 649: goto L_8C051768; case 650: goto L_8C0517DC; case 651: goto L_8C051758; case 652: goto L_8C051766; case 653: goto L_8C0516FA; case 654: goto L_8C051720; case 655: goto L_8C05176C; case 656: goto L_8C051798; case 657: goto L_8C0517CC; case 658: goto L_8C0517DA; case 659: goto L_8C051788; case 660: goto L_8C051796; case 661: goto L_8C0516CA; case 662: goto L_8C0516DA; case 663: goto L_8C0516A2; case 664: goto L_8C0516B8; case 665: goto L_8C0515A4; case 666: goto L_8C0515B2; case 667: goto L_8C05155E; case 668: goto L_8C05156C; case 669: goto L_8C05152A; case 670: goto L_8C05153A; case 671: goto L_8C0514F6; case 672: goto L_8C051518; case 673: goto L_8C0512FA; case 674: goto L_8C051324; case 675: goto L_8C051368; case 676: goto L_8C0513AC; case 677: goto L_8C05140C; case 678: goto L_8C051434; case 679: goto L_8C051460; case 680: goto L_8C0514C4; case 681: goto L_8C0514B4; case 682: goto L_8C0514C2; case 683: goto L_8C051450; case 684: goto L_8C05145E; case 685: goto L_8C0513FC; case 686: goto L_8C05140A; case 687: goto L_8C05139C; case 688: goto L_8C0513AA; case 689: goto L_8C051358; case 690: goto L_8C051366; case 691: goto L_8C051314; case 692: goto L_8C051322; case 693: goto L_8C0512DC; case 694: goto L_8C05128A; case 695: goto L_8C05125A; case 696: goto L_8C05122A; case 697: goto L_8C0511D6; case 698: goto L_8C051180; case 699: goto L_8C0511B0; case 700: goto L_8C05115A; case 701: goto L_8C0503DA; case 702: goto L_8C050402; case 703: goto L_8C050A22; case 704: goto L_8C050BEC; case 705: goto L_8C050C06; case 706: goto L_8C050E14; case 707: goto L_8C050E3E; case 708: goto L_8C05108A; case 709: goto L_8C0510D0; case 710: goto L_8C0510F8; case 711: goto L_8C051124; case 712: goto L_8C051114; case 713: goto L_8C051122; case 714: goto L_8C0510C0; case 715: goto L_8C0510CE; case 716: goto L_8C051060; case 717: goto L_8C051088; case 718: goto L_8C050E46; case 719: goto L_8C050E8C; }
    return -2;
    L_8C0524FC:;
    t2040 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2040 + 0x1);
    cpuAimPointSet(((t2040 + 0x1) - 1), R5, F4, F5);
    return 9;
    L_8C0524DC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0524EA;
    R3 = (0xFFFFFFFF);
    return 478;
    L_8C0524EA:;
    R3 = (0x0);
    return 478;
    L_8C052496:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0524A4;
    R3 = (0xFFFFFFFF);
    return 477;
    L_8C0524A4:;
    R3 = (0x0);
    return 477;
    L_8C052432:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052460;
    R3 = (0xFFFFFFFF);
    return 476;
    L_8C052460:;
    R3 = (0x0);
    return 476;
    L_8C0523EE:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0523FC;
    R3 = (0xFFFFFFFF);
    return 475;
    L_8C0523FC:;
    R3 = (0x0);
    return 475;
    L_8C0523AA:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0523B8;
    R3 = (0xFFFFFFFF);
    return 474;
    L_8C0523B8:;
    R3 = (0x0);
    return 474;
    L_8C052372:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    return 415;
    L_8C05233C:;
    if (((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) != 0.0f)) return 414;
    return 336;
    L_8C051170:;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) > 0.0f))) goto L_8C051180;
    R2 = (0x1);
    L_8C0511B2:;
    if (((float)R2 != (-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB00)))))) goto L_8C05125A;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30))))) goto L_8C0511D6;
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))));
    L_8C0511DE:;
    if ((!(F3 > 0.300000012f))) goto L_8C05125A;
    u2096 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)));
    u2096 = u2096 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    if ((0.0f > u2096)) goto L_8C05122A;
    u2104 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)));
    u2104 = u2104 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    F3 = (u2104);
    L_8C05124C:;
    if ((!(35.6550026f > F3))) goto L_8C05125A;
    *(unsigned int *)(((int)stk + 12)) = 0x1;
    L_8C05125E:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) goto L_8C05129C;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) goto L_8C05128A;
    if (((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) != 0.0f)) goto L_8C051286;
    L_8C051ACC:;
    u2122 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u2122 = u2122 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u2122;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u2122))) goto L_8C051B06;
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C051B14:;
    if ((20.0f > F2)) goto L_8C051B20;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C051D80;
    R3 = (0x1);
    L_8C051D90:;
    if ((!((*(float *)(((int)stk + 4))) > 0.0f))) goto L_8C051D9C;
    R2 = (0x1);
    L_8C051DAA:;
    if ((R3 == R2)) goto L_8C051DB2;
    t2140 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2140 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2140 + 0xB9C))) > 0.0f))) goto L_8C052084;
    R3 = (0x1);
    L_8C052094:;
    t2147 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2147 + 0x1);
    cpuAimPointSet(((t2147 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2149 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2149 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2149 + 0xB9C))) > 0.0f))) goto L_8C0520C8;
    R3 = (0x1);
    L_8C0520D8:;
    t2156 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2156 + 0x1);
    cpuAimPointSet(((t2156 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C05219E;
    t2160 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2160 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2160 + 0xB9C))) > 0.0f))) goto L_8C052114;
    R3 = (0x1);
    L_8C05213E:;
    t2167 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2167 + 0x1);
    cpuAimPointSet(((t2167 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    t2169 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2169 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2169 + 0xB9C))) > 0.0f))) goto L_8C052174;
    R3 = (0x1);
    L_8C052184:;
    t2176 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2176 + 0x1);
    cpuAimPointSet(((t2176 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C05219E:;
    t2178 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t2178 + 0xB9C))) - (*(float *)((t2178 + 0xAE8)))) > 0.0f))) goto L_8C0521B6;
    R2 = (0x1);
    L_8C0521CE:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0521DE;
    R1 = (0x1);
    L_8C0521F0:;
    if ((R2 != R1)) goto L_8C052284;
    t2189 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2189 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2189 + 0xB9C))) > 0.0f))) goto L_8C052210;
    R3 = (0x1);
    L_8C052232:;
    t2196 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2196 + 0x1);
    cpuAimPointSet(((t2196 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2198 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2198 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2198 + 0xB9C))) > 0.0f))) goto L_8C052266;
    R3 = (0x1);
    L_8C052276:;
    F4 = (((float)R3 * 41.1500015f));
    L_8C0522DE:;
    t2206 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2206 + 0x1);
    cpuAimPointSet(((t2206 + 0x1) - 1), 0x1, F4, F5);
    return 9;
    L_8C052266:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052274;
    R3 = (0xFFFFFFFF);
    goto L_8C052276;
    L_8C052274:;
    R3 = (0x0);
    goto L_8C052276;
    L_8C052210:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052230;
    R3 = (0xFFFFFFFF);
    goto L_8C052232;
    L_8C052230:;
    R3 = (0x0);
    goto L_8C052232;
    L_8C052284:;
    t2218 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2218 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2218 + 0xB9C))) > 0.0f))) goto L_8C0522A0;
    R3 = (0x1);
    L_8C0522B0:;
    t2225 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2225 + 0x1);
    cpuAimPointSet(((t2225 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2227 = *(int *)(((int)stk + 32));
    F4 = ((*(float *)((t2227 + 0xB9C))));
    F5 = (((*(float *)((t2227 + 0xB00))) * 118.849998f));
    goto L_8C0522DE;
    L_8C0522A0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0522AE;
    R3 = (0xFFFFFFFF);
    goto L_8C0522B0;
    L_8C0522AE:;
    R3 = (0x0);
    goto L_8C0522B0;
    L_8C0521DE:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C0521EE;
    R1 = (0xFFFFFFFF);
    goto L_8C0521F0;
    L_8C0521EE:;
    R1 = (0x0);
    goto L_8C0521F0;
    L_8C0521B6:;
    t2242 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t2242 + 0xB9C))) - (*(float *)((t2242 + 0xAE8))))))) goto L_8C0521CC;
    R2 = (0xFFFFFFFF);
    goto L_8C0521CE;
    L_8C0521CC:;
    R2 = (0x0);
    goto L_8C0521CE;
    L_8C052174:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052182;
    R3 = (0xFFFFFFFF);
    goto L_8C052184;
    L_8C052182:;
    R3 = (0x0);
    goto L_8C052184;
    L_8C052114:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05213C;
    R3 = (0xFFFFFFFF);
    goto L_8C05213E;
    L_8C05213C:;
    R3 = (0x0);
    goto L_8C05213E;
    L_8C0520C8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0520D6;
    R3 = (0xFFFFFFFF);
    goto L_8C0520D8;
    L_8C0520D6:;
    R3 = (0x0);
    goto L_8C0520D8;
    L_8C052084:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052092;
    R3 = (0xFFFFFFFF);
    goto L_8C052094;
    L_8C052092:;
    R3 = (0x0);
    goto L_8C052094;
    L_8C051DB2:;
    t2268 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2268 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2268 + 0xB9C))) > 0.0f))) goto L_8C051DCC;
    R3 = (0x1);
    L_8C051DDC:;
    t2275 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2275 + 0x1);
    cpuAimPointSet(((t2275 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2277 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2277 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2277 + 0xB9C))) > 0.0f))) goto L_8C051E12;
    R3 = (0x1);
    L_8C051E36:;
    t2284 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2284 + 0x1);
    cpuAimPointSet(((t2284 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C051EE4;
    t2288 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2288 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2288 + 0xB9C))) > 0.0f))) goto L_8C051E74;
    R3 = (0x1);
    L_8C051E84:;
    t2295 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2295 + 0x1);
    cpuAimPointSet(((t2295 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    t2297 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2297 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2297 + 0xB9C))) > 0.0f))) goto L_8C051EBA;
    R3 = (0x1);
    L_8C051ECA:;
    t2304 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2304 + 0x1);
    cpuAimPointSet(((t2304 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    L_8C051EE4:;
    t2306 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t2306 + 0xB9C))) - (*(float *)((t2306 + 0xAE8)))) > 0.0f))) goto L_8C051EFC;
    R2 = (0x1);
    L_8C051F14:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C051F38;
    R1 = (0x1);
    L_8C051F4A:;
    if ((R2 == R1)) goto L_8C051FC4;
    t2317 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2317 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2317 + 0xB9C))) > 0.0f))) goto L_8C051F6A;
    R3 = (0x1);
    L_8C051F7A:;
    t2324 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2324 + 0x1);
    cpuAimPointSet(((t2324 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2326 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2326 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2326 + 0xB9C))) > 0.0f))) goto L_8C051FB0;
    R3 = (0x1);
    L_8C051FC0:;
    R3 = ((-R3));
    L_8C052048:;
    t2334 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2334 + 0x1);
    cpuAimPointSet(((t2334 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C051FB0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051FBE;
    R3 = (0xFFFFFFFF);
    goto L_8C051FC0;
    L_8C051FBE:;
    R3 = (0x0);
    goto L_8C051FC0;
    L_8C051F6A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051F78;
    R3 = (0xFFFFFFFF);
    goto L_8C051F7A;
    L_8C051F78:;
    R3 = (0x0);
    goto L_8C051F7A;
    L_8C051FC4:;
    t2346 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2346 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2346 + 0xB9C))) > 0.0f))) goto L_8C051FE0;
    R3 = (0x1);
    L_8C051FF0:;
    t2353 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2353 + 0x1);
    cpuAimPointSet(((t2353 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2355 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2355 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2355 + 0xB9C))) > 0.0f))) goto L_8C052038;
    R3 = (0x1);
    goto L_8C052048;
    L_8C052038:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C052046;
    R3 = (0xFFFFFFFF);
    goto L_8C052048;
    L_8C052046:;
    R3 = (0x0);
    goto L_8C052048;
    L_8C051FE0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051FEE;
    R3 = (0xFFFFFFFF);
    goto L_8C051FF0;
    L_8C051FEE:;
    R3 = (0x0);
    goto L_8C051FF0;
    L_8C051F38:;
    if ((!(0.0f > (*(float *)((0xB9C + (*(int *)(((int)stk + 32))))))))) goto L_8C051F48;
    R1 = (0xFFFFFFFF);
    goto L_8C051F4A;
    L_8C051F48:;
    R1 = (0x0);
    goto L_8C051F4A;
    L_8C051EFC:;
    t2377 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t2377 + 0xB9C))) - (*(float *)((t2377 + 0xAE8))))))) goto L_8C051F12;
    R2 = (0xFFFFFFFF);
    goto L_8C051F14;
    L_8C051F12:;
    R2 = (0x0);
    goto L_8C051F14;
    L_8C051EBA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051EC8;
    R3 = (0xFFFFFFFF);
    goto L_8C051ECA;
    L_8C051EC8:;
    R3 = (0x0);
    goto L_8C051ECA;
    L_8C051E74:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051E82;
    R3 = (0xFFFFFFFF);
    goto L_8C051E84;
    L_8C051E82:;
    R3 = (0x0);
    goto L_8C051E84;
    L_8C051E12:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051E34;
    R3 = (0xFFFFFFFF);
    goto L_8C051E36;
    L_8C051E34:;
    R3 = (0x0);
    goto L_8C051E36;
    L_8C051DCC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051DDA;
    R3 = (0xFFFFFFFF);
    goto L_8C051DDC;
    L_8C051DDA:;
    R3 = (0x0);
    goto L_8C051DDC;
    L_8C051D9C:;
    if ((!(0.0f > (*(float *)(((int)stk + 4)))))) goto L_8C051DA8;
    R2 = (0xFFFFFFFF);
    goto L_8C051DAA;
    L_8C051DA8:;
    R2 = (0x0);
    goto L_8C051DAA;
    L_8C051D80:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051D8E;
    R3 = (0xFFFFFFFF);
    goto L_8C051D90;
    L_8C051D8E:;
    R3 = (0x0);
    goto L_8C051D90;
    L_8C051B20:;
    t2412 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    if ((!(((*(float *)((t2412 + 0xB9C))) - (*(float *)((t2412 + 0xAE8)))) > 0.0f))) goto L_8C051B5C;
    R2 = (0x1);
    L_8C051B74:;
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C051B84;
    R1 = (0x1);
    L_8C051B96:;
    if ((R2 == R1)) goto L_8C051B9E;
    t2423 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2423 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2423 + 0xB9C))) > 0.0f))) goto L_8C051CE4;
    R3 = (0x1);
    L_8C051CF4:;
    t2430 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2430 + 0x1);
    cpuAimPointSet(((t2430 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2432 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2432 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2432 + 0xB9C))) > 0.0f))) goto L_8C051D28;
    R3 = (0x1);
    L_8C051D38:;
    t2439 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2439 + 0x1);
    cpuAimPointSet(((t2439 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C051D28:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051D36;
    R3 = (0xFFFFFFFF);
    goto L_8C051D38;
    L_8C051D36:;
    R3 = (0x0);
    goto L_8C051D38;
    L_8C051CE4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051CF2;
    R3 = (0xFFFFFFFF);
    goto L_8C051CF4;
    L_8C051CF2:;
    R3 = (0x0);
    goto L_8C051CF4;
    L_8C051B9E:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C051C26;
    t2453 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2453 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2453 + 0xB9C))) > 0.0f))) goto L_8C051BC0;
    R3 = (0x1);
    L_8C051BD0:;
    t2460 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2460 + 0x1);
    cpuAimPointSet(((t2460 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t2462 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2462 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2462 + 0xB9C))) > 0.0f))) goto L_8C051C04;
    R3 = (0x1);
    L_8C051C14:;
    R5 = (0x2);
    F4 = (((float)(-R3) * 41.1500015f));
    L_8C051CB6:;
    t2471 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2471 + 0x1);
    cpuAimPointSet(((t2471 + 0x1) - 1), R5, F4, F5);
    return 9;
    L_8C051C04:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051C12;
    R3 = (0xFFFFFFFF);
    goto L_8C051C14;
    L_8C051C12:;
    R3 = (0x0);
    goto L_8C051C14;
    L_8C051BC0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051BCE;
    R3 = (0xFFFFFFFF);
    goto L_8C051BD0;
    L_8C051BCE:;
    R3 = (0x0);
    goto L_8C051BD0;
    L_8C051C26:;
    t2483 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2483 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2483 + 0xB9C))) > 0.0f))) goto L_8C051C54;
    R3 = (0x1);
    L_8C051C64:;
    t2490 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2490 + 0x1);
    cpuAimPointSet(((t2490 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2492 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2492 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2492 + 0xB9C))) > 0.0f))) goto L_8C051C98;
    R3 = (0x1);
    L_8C051CA8:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    goto L_8C051CB6;
    L_8C051C98:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051CA6;
    R3 = (0xFFFFFFFF);
    goto L_8C051CA8;
    L_8C051CA6:;
    R3 = (0x0);
    goto L_8C051CA8;
    L_8C051C54:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051C62;
    R3 = (0xFFFFFFFF);
    goto L_8C051C64;
    L_8C051C62:;
    R3 = (0x0);
    goto L_8C051C64;
    L_8C051B84:;
    if ((!(0.0f > (*(float *)((0x28 + (*(int *)(((int)stk + 16))))))))) goto L_8C051B94;
    R1 = (0xFFFFFFFF);
    goto L_8C051B96;
    L_8C051B94:;
    R1 = (0x0);
    goto L_8C051B96;
    L_8C051B5C:;
    t2516 = *(int *)(((int)stk + 32));
    if ((!(F2 > ((*(float *)((t2516 + 0xB9C))) - (*(float *)((t2516 + 0xAE8))))))) goto L_8C051B72;
    R2 = (0xFFFFFFFF);
    goto L_8C051B74;
    L_8C051B72:;
    R2 = (0x0);
    goto L_8C051B74;
    L_8C051B06:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    goto L_8C051B14;
    L_8C051286:;
    L_8C05129C:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C0512DC;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C0512EE:;
    if ((20.0f > F3)) goto L_8C0512FA;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0514F6;
    R3 = (0x1);
    L_8C05151A:;
    if ((!((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f))) goto L_8C05152A;
    R2 = (0x1);
    L_8C05153C:;
    if ((R3 == R2)) goto L_8C051544;
    t2547 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2547 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2547 + 0xB9C))) > 0.0f))) goto L_8C051830;
    R3 = (0x1);
    L_8C051840:;
    t2554 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2554 + 0x1);
    cpuAimPointSet(((t2554 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2556 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2556 + 0xB00))) * 23.7700005f));
    if ((!((*(float *)((t2556 + 0xB9C))) > 0.0f))) goto L_8C051874;
    R3 = (0x1);
    L_8C051884:;
    t2563 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2563 + 0x1);
    cpuAimPointSet(((t2563 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C05195C;
    t2567 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2567 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2567 + 0xB9C))) > 0.0f))) goto L_8C0518C0;
    R3 = (0x1);
    L_8C0518D0:;
    t2574 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2574 + 0x1);
    cpuAimPointSet(((t2574 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t2576 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2576 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2576 + 0xB9C))) > 0.0f))) goto L_8C051904;
    R3 = (0x1);
    L_8C05192A:;
    t2583 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2583 + 0x1);
    cpuAimPointSet(((t2583 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    t2585 = *(int *)(((int)stk + 32));
    R3 = (t2585);
    F5 = (((*(float *)((t2585 + 0xB00))) * 118.849998f));
    L_8C051954:;
    R5 = (0x2);
    F4 = ((*(float *)((R3 + 0xB9C))));
    goto L_8C0524FC;
    L_8C051904:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051928;
    R3 = (0xFFFFFFFF);
    goto L_8C05192A;
    L_8C051928:;
    R3 = (0x0);
    goto L_8C05192A;
    L_8C0518C0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0518CE;
    R3 = (0xFFFFFFFF);
    goto L_8C0518D0;
    L_8C0518CE:;
    R3 = (0x0);
    goto L_8C0518D0;
    L_8C05195C:;
    t2602 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t2602 + 0xB9C))) - (*(float *)((t2602 + 0xAE8)))) > 0.0f))) goto L_8C051974;
    R3 = (0x1);
    L_8C05198C:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C05199C;
    R2 = (0x1);
    L_8C0519AE:;
    if ((R3 != R2)) goto L_8C051A38;
    t2613 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2613 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2613 + 0xB9C))) > 0.0f))) goto L_8C0519CC;
    R3 = (0x1);
    L_8C0519DC:;
    t2620 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2620 + 0x1);
    cpuAimPointSet(((t2620 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2622 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2622 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2622 + 0xB9C))) > 0.0f))) goto L_8C051A10;
    R3 = (0x1);
    L_8C051AAC:;
    t2629 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2629 + 0x1);
    cpuAimPointSet(((t2629 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C051A10:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051A34;
    R3 = (0xFFFFFFFF);
    goto L_8C051AAC;
    L_8C051A34:;
    R3 = (0x0);
    goto L_8C051AAC;
    L_8C0519CC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0519DA;
    R3 = (0xFFFFFFFF);
    goto L_8C0519DC;
    L_8C0519DA:;
    R3 = (0x0);
    goto L_8C0519DC;
    L_8C051A38:;
    t2641 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2641 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2641 + 0xB9C))) > 0.0f))) goto L_8C051A54;
    R3 = (0x1);
    L_8C051A64:;
    t2648 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2648 + 0x1);
    cpuAimPointSet(((t2648 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2650 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2650 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2650 + 0xB9C))) > 0.0f))) goto L_8C051A9A;
    R3 = (0x1);
    L_8C051AAA:;
    R3 = ((-R3));
    goto L_8C051AAC;
    L_8C051A9A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051AA8;
    R3 = (0xFFFFFFFF);
    goto L_8C051AAA;
    L_8C051AA8:;
    R3 = (0x0);
    goto L_8C051AAA;
    L_8C051A54:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051A62;
    R3 = (0xFFFFFFFF);
    goto L_8C051A64;
    L_8C051A62:;
    R3 = (0x0);
    goto L_8C051A64;
    L_8C05199C:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0519AC;
    R2 = (0xFFFFFFFF);
    goto L_8C0519AE;
    L_8C0519AC:;
    R2 = (0x0);
    goto L_8C0519AE;
    L_8C051974:;
    t2673 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t2673 + 0xB9C))) - (*(float *)((t2673 + 0xAE8))))))) goto L_8C05198A;
    R3 = (0xFFFFFFFF);
    goto L_8C05198C;
    L_8C05198A:;
    R3 = (0x0);
    goto L_8C05198C;
    L_8C051874:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051882;
    R3 = (0xFFFFFFFF);
    goto L_8C051884;
    L_8C051882:;
    R3 = (0x0);
    goto L_8C051884;
    L_8C051830:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05183E;
    R3 = (0xFFFFFFFF);
    goto L_8C051840;
    L_8C05183E:;
    R3 = (0x0);
    goto L_8C051840;
    L_8C051544:;
    t2689 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2689 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2689 + 0xB9C))) > 0.0f))) goto L_8C05155E;
    R3 = (0x1);
    L_8C05156E:;
    t2696 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2696 + 0x1);
    cpuAimPointSet(((t2696 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2698 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2698 + 0xB00))) * 47.5400009f));
    if ((!((*(float *)((t2698 + 0xB9C))) > 0.0f))) goto L_8C0515A4;
    R3 = (0x1);
    L_8C0515B4:;
    t2705 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2705 + 0x1);
    cpuAimPointSet(((t2705 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C05168A;
    t2709 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2709 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2709 + 0xB9C))) > 0.0f))) goto L_8C0515F2;
    R3 = (0x1);
    L_8C05161A:;
    t2716 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2716 + 0x1);
    cpuAimPointSet(((t2716 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t2718 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2718 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2718 + 0xB9C))) > 0.0f))) goto L_8C05164E;
    R3 = (0x1);
    L_8C05165E:;
    t2725 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2725 + 0x1);
    cpuAimPointSet(((t2725 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    t2727 = *(int *)(((int)stk + 32));
    R3 = (t2727);
    F5 = (((*(float *)((t2727 + 0xB00))) * 118.849998f));
    goto L_8C051954;
    L_8C05164E:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05165C;
    R3 = (0xFFFFFFFF);
    goto L_8C05165E;
    L_8C05165C:;
    R3 = (0x0);
    goto L_8C05165E;
    L_8C0515F2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051618;
    R3 = (0xFFFFFFFF);
    goto L_8C05161A;
    L_8C051618:;
    R3 = (0x0);
    goto L_8C05161A;
    L_8C05168A:;
    t2741 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t2741 + 0xB9C))) - (*(float *)((t2741 + 0xAE8)))) > 0.0f))) goto L_8C0516A2;
    R3 = (0x1);
    L_8C0516BA:;
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0516CA;
    R2 = (0x1);
    L_8C0516DC:;
    if ((R3 != R2)) goto L_8C05176C;
    t2752 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2752 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2752 + 0xB9C))) > 0.0f))) goto L_8C0516FA;
    R3 = (0x1);
    L_8C051722:;
    t2759 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2759 + 0x1);
    cpuAimPointSet(((t2759 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2761 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2761 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2761 + 0xB9C))) > 0.0f))) goto L_8C051758;
    R3 = (0x1);
    L_8C051768:;
    R3 = ((-R3));
    L_8C0517DC:;
    t2769 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2769 + 0x1);
    cpuAimPointSet(((t2769 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C051758:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051766;
    R3 = (0xFFFFFFFF);
    goto L_8C051768;
    L_8C051766:;
    R3 = (0x0);
    goto L_8C051768;
    L_8C0516FA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051720;
    R3 = (0xFFFFFFFF);
    goto L_8C051722;
    L_8C051720:;
    R3 = (0x0);
    goto L_8C051722;
    L_8C05176C:;
    t2781 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2781 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2781 + 0xB9C))) > 0.0f))) goto L_8C051788;
    R3 = (0x1);
    L_8C051798:;
    t2788 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2788 + 0x1);
    cpuAimPointSet(((t2788 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2790 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2790 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2790 + 0xB9C))) > 0.0f))) goto L_8C0517CC;
    R3 = (0x1);
    goto L_8C0517DC;
    L_8C0517CC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0517DA;
    R3 = (0xFFFFFFFF);
    goto L_8C0517DC;
    L_8C0517DA:;
    R3 = (0x0);
    goto L_8C0517DC;
    L_8C051788:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051796;
    R3 = (0xFFFFFFFF);
    goto L_8C051798;
    L_8C051796:;
    R3 = (0x0);
    goto L_8C051798;
    L_8C0516CA:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0516DA;
    R2 = (0xFFFFFFFF);
    goto L_8C0516DC;
    L_8C0516DA:;
    R2 = (0x0);
    goto L_8C0516DC;
    L_8C0516A2:;
    t2812 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t2812 + 0xB9C))) - (*(float *)((t2812 + 0xAE8))))))) goto L_8C0516B8;
    R3 = (0xFFFFFFFF);
    goto L_8C0516BA;
    L_8C0516B8:;
    R3 = (0x0);
    goto L_8C0516BA;
    L_8C0515A4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0515B2;
    R3 = (0xFFFFFFFF);
    goto L_8C0515B4;
    L_8C0515B2:;
    R3 = (0x0);
    goto L_8C0515B4;
    L_8C05155E:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05156C;
    R3 = (0xFFFFFFFF);
    goto L_8C05156E;
    L_8C05156C:;
    R3 = (0x0);
    goto L_8C05156E;
    L_8C05152A:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C05153A;
    R2 = (0xFFFFFFFF);
    goto L_8C05153C;
    L_8C05153A:;
    R2 = (0x0);
    goto L_8C05153C;
    L_8C0514F6:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051518;
    R3 = (0xFFFFFFFF);
    goto L_8C05151A;
    L_8C051518:;
    R3 = (0x0);
    goto L_8C05151A;
    L_8C0512FA:;
    t2838 = *(int *)(((int)stk + 32));
    F1 = (0.0f);
    F5 = (((*(float *)((t2838 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2838 + 0xB9C))) > 0.0f))) goto L_8C051314;
    R3 = (0x1);
    L_8C051324:;
    t2845 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2845 + 0x1);
    cpuAimPointSet(((t2845 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2847 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2847 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2847 + 0xB9C))) > 0.0f))) goto L_8C051358;
    R3 = (0x1);
    L_8C051368:;
    t2854 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2854 + 0x1);
    cpuAimPointSet(((t2854 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t2856 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2856 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2856 + 0xB9C))) > 0.0f))) goto L_8C05139C;
    R3 = (0x1);
    L_8C0513AC:;
    t2863 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2863 + 0x1);
    cpuAimPointSet(((t2863 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t2865 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2865 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t2865 + 0xB9C))) > 0.0f))) goto L_8C0513FC;
    R3 = (0x1);
    L_8C05140C:;
    t2872 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2872 + 0x1);
    cpuAimPointSet(((t2872 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C051434;
    return 9;
    L_8C051434:;
    t2876 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2876 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2876 + 0xB9C))) > 0.0f))) goto L_8C051450;
    R3 = (0x1);
    L_8C051460:;
    t2883 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2883 + 0x1);
    cpuAimPointSet(((t2883 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t2885 = *(int *)(((int)stk + 32));
    t2886 = *(int *)(((int)stk + 28));
    u2887 = *(float *)((t2885 + 0xB00));
    u2888 = *(float *)((t2885 + 0xB9C));
    *(unsigned int *)(((int)stk + 28)) = (t2886 + 0x1);
    cpuAimPointSet(((t2886 + 0x1) - 1), 0x2, u2888, (u2887 * 118.849998f));
    t2890 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t2890 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t2890 + 0xB9C))) > 0.0f))) goto L_8C0514B4;
    R3 = (0x1);
    L_8C0514C4:;
    t2897 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t2897 + 0x1);
    cpuAimPointSet(((t2897 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    return 9;
    L_8C0514B4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0514C2;
    R3 = (0xFFFFFFFF);
    goto L_8C0514C4;
    L_8C0514C2:;
    R3 = (0x0);
    goto L_8C0514C4;
    L_8C051450:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05145E;
    R3 = (0xFFFFFFFF);
    goto L_8C051460;
    L_8C05145E:;
    R3 = (0x0);
    goto L_8C051460;
    L_8C0513FC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05140A;
    R3 = (0xFFFFFFFF);
    goto L_8C05140C;
    L_8C05140A:;
    R3 = (0x0);
    goto L_8C05140C;
    L_8C05139C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0513AA;
    R3 = (0xFFFFFFFF);
    goto L_8C0513AC;
    L_8C0513AA:;
    R3 = (0x0);
    goto L_8C0513AC;
    L_8C051358:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051366;
    R3 = (0xFFFFFFFF);
    goto L_8C051368;
    L_8C051366:;
    R3 = (0x0);
    goto L_8C051368;
    L_8C051314:;
    if ((!(F1 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051322;
    R3 = (0xFFFFFFFF);
    goto L_8C051324;
    L_8C051322:;
    R3 = (0x0);
    goto L_8C051324;
    L_8C0512DC:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    goto L_8C0512EE;
    L_8C05128A:;
    if (((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))) != 0.0f)) goto L_8C05129C;
    goto L_8C051ACC;
    L_8C05125A:;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    goto L_8C05125E;
    L_8C05122A:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))) - ((((*(float *)(((*(int *)(((int)stk + 16))) + 0x30))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))))) * 0.800000012f)));
    goto L_8C05124C;
    L_8C0511D6:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))));
    goto L_8C0511DE;
    L_8C051180:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))))) goto L_8C0511B0;
    R2 = (0xFFFFFFFF);
    goto L_8C0511B2;
    L_8C0511B0:;
    R2 = (0x0);
    goto L_8C0511B2;
    L_8C05115A:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))));
    return 335;
    L_8C0503DA:;
    if ((((*(int *)(((*(int *)(((int)stk + 24))) + 0xB60))) & 0x100) != 0)) return 796;
    if ((0.0f > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28))))) return 859;
    F3 = ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))));
    L_8C050402:;
    if ((0.200000003f > F3)) return 796;
    u2972 = (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)));
    u2972 = u2972 + 0.800000012f * ((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) * (float)(*(short *)(((*(int *)(((int)stk + 20))) + 0x118))));
    *(float *)(((int)stk + 4)) = u2972;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - u2972))) return 795;
    F2 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))));
    L_8C050A22:;
    if ((20.0f > F2)) return 774;
    F2 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) return 772;
    R3 = (0x1);
    L_8C050BEC:;
    if ((!((*(float *)(((int)stk + 4))) > 0.0f))) return 770;
    R2 = (0x1);
    L_8C050C06:;
    if ((R3 == R2)) return 746;
    t2990 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t2990 + 0xB9C))) - (*(float *)((t2990 + 0xAE8)))) > 0.0f))) return 744;
    R3 = (0x1);
    L_8C050E14:;
    if ((!(((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4)))) > 0.0f))) return 742;
    R2 = (0x1);
    L_8C050E3E:;
    if ((R3 == R2)) goto L_8C050E46;
    t3002 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3002 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3002 + 0xB9C))) > 0.0f))) goto L_8C051060;
    R3 = (0x1);
    L_8C05108A:;
    t3009 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3009 + 0x1);
    cpuAimPointSet(((t3009 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t3011 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3011 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3011 + 0xB9C))) > 0.0f))) goto L_8C0510C0;
    R3 = (0x1);
    L_8C0510D0:;
    t3018 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3018 + 0x1);
    cpuAimPointSet(((t3018 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C0510F8;
    return 9;
    L_8C0510F8:;
    t3022 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3022 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3022 + 0xB9C))) > 0.0f))) goto L_8C051114;
    R3 = (0x1);
    L_8C051124:;
    t3029 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3029 + 0x1);
    cpuAimPointSet(((t3029 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    return 9;
    L_8C051114:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051122;
    R3 = (0xFFFFFFFF);
    goto L_8C051124;
    L_8C051122:;
    R3 = (0x0);
    goto L_8C051124;
    L_8C0510C0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0510CE;
    R3 = (0xFFFFFFFF);
    goto L_8C0510D0;
    L_8C0510CE:;
    R3 = (0x0);
    goto L_8C0510D0;
    L_8C051060:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051088;
    R3 = (0xFFFFFFFF);
    goto L_8C05108A;
    L_8C051088:;
    R3 = (0x0);
    goto L_8C05108A;
    L_8C050E46:;
    t3046 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t3046 + 0xB9C))) - (*(float *)((t3046 + 0xAE8)))) > 0.0f))) return 740;
    R2 = (0x1);
    L_8C050E8C:;
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) return 738;
    R1 = (0x1);
    return 720;
}

int cpuSglAimTable_p3(int *S_, int at)
{
    switch (at) { case 720: goto L_8C050EAE; case 721: goto L_8C050FE0; case 722: goto L_8C051024; case 723: goto L_8C051014; case 724: goto L_8C051022; case 725: goto L_8C050FD0; case 726: goto L_8C050FDE; case 727: goto L_8C050EB6; case 728: goto L_8C050EE2; case 729: goto L_8C050F26; case 730: goto L_8C050F4C; case 731: goto L_8C050F94; case 732: goto L_8C050F84; case 733: goto L_8C050F92; case 734: goto L_8C050F16; case 735: goto L_8C050F24; case 736: goto L_8C050ED2; case 737: goto L_8C050EE0; case 738: goto L_8C050E9C; case 739: goto L_8C050EAC; case 740: goto L_8C050E74; case 741: goto L_8C050E8A; case 742: goto L_8C050E28; case 743: goto L_8C050E3C; case 744: goto L_8C050DFC; case 745: goto L_8C050E12; case 746: goto L_8C050C0E; case 747: goto L_8C050C2E; case 748: goto L_8C050C58; case 749: goto L_8C050C9C; case 750: goto L_8C050CE2; case 751: goto L_8C050CD2; case 752: goto L_8C050CE0; case 753: goto L_8C050C8C; case 754: goto L_8C050C9A; case 755: goto L_8C050CEA; case 756: goto L_8C050D16; case 757: goto L_8C050D72; case 758: goto L_8C050D98; case 759: goto L_8C050DC4; case 760: goto L_8C050DB4; case 761: goto L_8C050DC2; case 762: goto L_8C050D4A; case 763: goto L_8C050D70; case 764: goto L_8C050D06; case 765: goto L_8C050D14; case 766: goto L_8C050C42; case 767: goto L_8C050C56; case 768: goto L_8C050C1E; case 769: goto L_8C050C2C; case 770: goto L_8C050BF8; case 771: goto L_8C050C04; case 772: goto L_8C050BDC; case 773: goto L_8C050BEA; case 774: goto L_8C050A2E; case 775: goto L_8C050A5E; case 776: goto L_8C050AA2; case 777: goto L_8C050AD2; case 778: goto L_8C050B16; case 779: goto L_8C050BBA; case 780: goto L_8C050B06; case 781: goto L_8C050B14; case 782: goto L_8C050AC2; case 783: goto L_8C050AD0; case 784: goto L_8C050B28; case 785: goto L_8C050B54; case 786: goto L_8C050BAC; case 787: goto L_8C050B9C; case 788: goto L_8C050BAA; case 789: goto L_8C050B44; case 790: goto L_8C050B52; case 791: goto L_8C050A90; case 792: goto L_8C050AA0; case 793: goto L_8C050A46; case 794: goto L_8C050A5C; case 795: goto L_8C050A14; case 796: goto L_8C05040E; case 797: goto L_8C050466; case 798: goto L_8C0505E8; case 799: goto L_8C05060A; case 800: goto L_8C050802; case 801: goto L_8C050830; case 802: goto L_8C050874; case 803: goto L_8C0508AA; case 804: goto L_8C0508BA; case 805: goto L_8C050864; case 806: goto L_8C050872; case 807: goto L_8C0508C0; case 808: goto L_8C050908; case 809: goto L_8C050966; case 810: goto L_8C05098C; case 811: goto L_8C0509B8; case 812: goto L_8C0509A8; case 813: goto L_8C0509B6; case 814: goto L_8C05093C; case 815: goto L_8C050964; case 816: goto L_8C0508F8; case 817: goto L_8C050906; case 818: goto L_8C050818; case 819: goto L_8C05082E; case 820: goto L_8C0507EA; case 821: goto L_8C050800; case 822: goto L_8C050612; case 823: goto L_8C050642; case 824: goto L_8C050686; case 825: goto L_8C0506B6; case 826: goto L_8C0506EC; case 827: goto L_8C0506FA; case 828: goto L_8C0506A6; case 829: goto L_8C0506B4; case 830: goto L_8C050700; case 831: goto L_8C05075E; case 832: goto L_8C050786; case 833: goto L_8C0507B2; case 834: goto L_8C0507A2; case 835: goto L_8C0507B0; case 836: goto L_8C050738; case 837: goto L_8C05075C; case 838: goto L_8C05065A; case 839: goto L_8C050684; case 840: goto L_8C05062A; case 841: goto L_8C050640; case 842: goto L_8C0505F8; case 843: goto L_8C050608; case 844: goto L_8C0505D8; case 845: goto L_8C0505E6; case 846: goto L_8C050472; case 847: goto L_8C0504D0; case 848: goto L_8C0505B6; case 849: goto L_8C0504B8; case 850: goto L_8C0504CE; case 851: goto L_8C0504E0; case 852: goto L_8C050538; case 853: goto L_8C0505A8; case 854: goto L_8C050590; case 855: goto L_8C0505A6; case 856: goto L_8C050520; case 857: goto L_8C050536; case 858: goto L_8C050454; case 859: goto L_8C0503FA; case 860: goto L_8C0503C6; case 861: goto L_8C05039C; case 862: goto L_8C050374; case 863: goto L_8C05032C; case 864: goto L_8C050350; }
    return -2;
    L_8C050EAE:;
    if ((R2 == R1)) goto L_8C050EB6;
    t3057 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3057 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3057 + 0xB9C))) > 0.0f))) goto L_8C050FD0;
    R3 = (0x1);
    L_8C050FE0:;
    t3064 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3064 + 0x1);
    cpuAimPointSet(((t3064 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3066 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3066 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3066 + 0xB9C))) > 0.0f))) goto L_8C051014;
    R3 = (0x1);
    L_8C051024:;
    t3073 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3073 + 0x1);
    cpuAimPointSet(((t3073 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C051014:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C051022;
    R3 = (0xFFFFFFFF);
    goto L_8C051024;
    L_8C051022:;
    R3 = (0x0);
    goto L_8C051024;
    L_8C050FD0:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050FDE;
    R3 = (0xFFFFFFFF);
    goto L_8C050FE0;
    L_8C050FDE:;
    R3 = (0x0);
    goto L_8C050FE0;
    L_8C050EB6:;
    t3085 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3085 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3085 + 0xB9C))) > 0.0f))) goto L_8C050ED2;
    R3 = (0x1);
    L_8C050EE2:;
    t3092 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3092 + 0x1);
    cpuAimPointSet(((t3092 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3094 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3094 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3094 + 0xB9C))) > 0.0f))) goto L_8C050F16;
    R3 = (0x1);
    L_8C050F26:;
    t3101 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3101 + 0x1);
    cpuAimPointSet(((t3101 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C050F4C;
    return 9;
    L_8C050F4C:;
    t3105 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3105 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3105 + 0xB9C))) > 0.0f))) goto L_8C050F84;
    R3 = (0x1);
    L_8C050F94:;
    t3112 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3112 + 0x1);
    cpuAimPointSet(((t3112 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C050F84:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050F92;
    R3 = (0xFFFFFFFF);
    goto L_8C050F94;
    L_8C050F92:;
    R3 = (0x0);
    goto L_8C050F94;
    L_8C050F16:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050F24;
    R3 = (0xFFFFFFFF);
    goto L_8C050F26;
    L_8C050F24:;
    R3 = (0x0);
    goto L_8C050F26;
    L_8C050ED2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050EE0;
    R3 = (0xFFFFFFFF);
    goto L_8C050EE2;
    L_8C050EE0:;
    R3 = (0x0);
    goto L_8C050EE2;
    L_8C050E9C:;
    if ((!(0.0f > (*(float *)((0x28 + (*(int *)(((int)stk + 16))))))))) goto L_8C050EAC;
    R1 = (0xFFFFFFFF);
    goto L_8C050EAE;
    L_8C050EAC:;
    R1 = (0x0);
    goto L_8C050EAE;
    L_8C050E74:;
    t3134 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t3134 + 0xB9C))) - (*(float *)((t3134 + 0xAE8))))))) goto L_8C050E8A;
    R2 = (0xFFFFFFFF);
    return 719;
    L_8C050E8A:;
    R2 = (0x0);
    return 719;
    L_8C050E28:;
    if ((!(0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((int)stk + 4))))))) goto L_8C050E3C;
    R2 = (0xFFFFFFFF);
    return 707;
    L_8C050E3C:;
    R2 = (0x0);
    return 707;
    L_8C050DFC:;
    t3146 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t3146 + 0xB9C))) - (*(float *)((t3146 + 0xAE8))))))) goto L_8C050E12;
    R3 = (0xFFFFFFFF);
    return 706;
    L_8C050E12:;
    R3 = (0x0);
    return 706;
    L_8C050C0E:;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C050C1E;
    R2 = (0x1);
    L_8C050C2E:;
    if ((!(((*(float *)(((int)stk + 4))) - (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) > 0.0f))) goto L_8C050C42;
    R1 = (0x1);
    L_8C050C58:;
    if ((R2 != R1)) goto L_8C050CEA;
    t3163 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3163 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3163 + 0xB9C))) > 0.0f))) goto L_8C050C8C;
    R3 = (0x1);
    L_8C050C9C:;
    t3170 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3170 + 0x1);
    cpuAimPointSet(((t3170 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t3172 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3172 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3172 + 0xB9C))) > 0.0f))) goto L_8C050CD2;
    R3 = (0x1);
    L_8C050CE2:;
    R3 = ((-R3));
    return 479;
    L_8C050CD2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050CE0;
    R3 = (0xFFFFFFFF);
    goto L_8C050CE2;
    L_8C050CE0:;
    R3 = (0x0);
    goto L_8C050CE2;
    L_8C050C8C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050C9A;
    R3 = (0xFFFFFFFF);
    goto L_8C050C9C;
    L_8C050C9A:;
    R3 = (0x0);
    goto L_8C050C9C;
    L_8C050CEA:;
    t3190 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3190 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3190 + 0xB9C))) > 0.0f))) goto L_8C050D06;
    R3 = (0x1);
    L_8C050D16:;
    t3197 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3197 + 0x1);
    cpuAimPointSet(((t3197 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3199 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3199 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3199 + 0xB9C))) > 0.0f))) goto L_8C050D4A;
    R3 = (0x1);
    L_8C050D72:;
    t3206 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3206 + 0x1);
    cpuAimPointSet(((t3206 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C050D98;
    return 9;
    L_8C050D98:;
    t3210 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3210 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3210 + 0xB9C))) > 0.0f))) goto L_8C050DB4;
    R3 = (0x1);
    L_8C050DC4:;
    t3217 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3217 + 0x1);
    cpuAimPointSet(((t3217 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C050DB4:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050DC2;
    R3 = (0xFFFFFFFF);
    goto L_8C050DC4;
    L_8C050DC2:;
    R3 = (0x0);
    goto L_8C050DC4;
    L_8C050D4A:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050D70;
    R3 = (0xFFFFFFFF);
    goto L_8C050D72;
    L_8C050D70:;
    R3 = (0x0);
    goto L_8C050D72;
    L_8C050D06:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050D14;
    R3 = (0xFFFFFFFF);
    goto L_8C050D16;
    L_8C050D14:;
    R3 = (0x0);
    goto L_8C050D16;
    L_8C050C42:;
    if ((!(0.0f > ((*(float *)(((int)stk + 4))) - (*(float *)((0xB9C + (*(int *)(((int)stk + 32)))))))))) goto L_8C050C56;
    R1 = (0xFFFFFFFF);
    goto L_8C050C58;
    L_8C050C56:;
    R1 = (0x0);
    goto L_8C050C58;
    L_8C050C1E:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))))) goto L_8C050C2C;
    R2 = (0xFFFFFFFF);
    goto L_8C050C2E;
    L_8C050C2C:;
    R2 = (0x0);
    goto L_8C050C2E;
    L_8C050BF8:;
    if ((!(0.0f > (*(float *)(((int)stk + 4)))))) goto L_8C050C04;
    R2 = (0xFFFFFFFF);
    return 705;
    L_8C050C04:;
    R2 = (0x0);
    return 705;
    L_8C050BDC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050BEA;
    R3 = (0xFFFFFFFF);
    return 704;
    L_8C050BEA:;
    R3 = (0x0);
    return 704;
    L_8C050A2E:;
    t3254 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    if ((!(((*(float *)((t3254 + 0xB9C))) - (*(float *)((t3254 + 0xAE8)))) > 0.0f))) goto L_8C050A46;
    R2 = (0x1);
    L_8C050A5E:;
    if ((!((*(float *)(((*(int *)(((int)stk + 16))) + 0x28))) > 0.0f))) goto L_8C050A90;
    R1 = (0x1);
    L_8C050AA2:;
    if ((R2 != R1)) goto L_8C050B28;
    t3265 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3265 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3265 + 0xB9C))) > 0.0f))) goto L_8C050AC2;
    R3 = (0x1);
    L_8C050AD2:;
    t3272 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3272 + 0x1);
    cpuAimPointSet(((t3272 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    t3274 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3274 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3274 + 0xB9C))) > 0.0f))) goto L_8C050B06;
    R3 = (0x1);
    L_8C050B16:;
    R5 = (0x2);
    F4 = (((float)(-R3) * 41.1500015f));
    L_8C050BBA:;
    t3283 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3283 + 0x1);
    cpuAimPointSet(((t3283 + 0x1) - 1), R5, F4, F5);
    return 9;
    L_8C050B06:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050B14;
    R3 = (0xFFFFFFFF);
    goto L_8C050B16;
    L_8C050B14:;
    R3 = (0x0);
    goto L_8C050B16;
    L_8C050AC2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050AD0;
    R3 = (0xFFFFFFFF);
    goto L_8C050AD2;
    L_8C050AD0:;
    R3 = (0x0);
    goto L_8C050AD2;
    L_8C050B28:;
    t3295 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3295 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3295 + 0xB9C))) > 0.0f))) goto L_8C050B44;
    R3 = (0x1);
    L_8C050B54:;
    t3302 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3302 + 0x1);
    cpuAimPointSet(((t3302 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3304 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3304 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3304 + 0xB9C))) > 0.0f))) goto L_8C050B9C;
    R3 = (0x1);
    L_8C050BAC:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    goto L_8C050BBA;
    L_8C050B9C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050BAA;
    R3 = (0xFFFFFFFF);
    goto L_8C050BAC;
    L_8C050BAA:;
    R3 = (0x0);
    goto L_8C050BAC;
    L_8C050B44:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050B52;
    R3 = (0xFFFFFFFF);
    goto L_8C050B54;
    L_8C050B52:;
    R3 = (0x0);
    goto L_8C050B54;
    L_8C050A90:;
    if ((!(0.0f > (*(float *)((0x28 + (*(int *)(((int)stk + 16))))))))) goto L_8C050AA0;
    R1 = (0xFFFFFFFF);
    goto L_8C050AA2;
    L_8C050AA0:;
    R1 = (0x0);
    goto L_8C050AA2;
    L_8C050A46:;
    t3328 = *(int *)(((int)stk + 32));
    if ((!(F2 > ((*(float *)((t3328 + 0xB9C))) - (*(float *)((t3328 + 0xAE8))))))) goto L_8C050A5C;
    R2 = (0xFFFFFFFF);
    goto L_8C050A5E;
    L_8C050A5C:;
    R2 = (0x0);
    goto L_8C050A5E;
    L_8C050A14:;
    F2 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((int)stk + 4)))));
    return 703;
    L_8C05040E:;
    if ((0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C050454;
    F3 = (((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    L_8C050466:;
    if ((20.0f > F3)) goto L_8C050472;
    F3 = (0.0f);
    if ((!((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) > 0.0f))) goto L_8C0505D8;
    R3 = (0x1);
    L_8C0505E8:;
    if ((!((*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))) > 0.0f))) goto L_8C0505F8;
    R2 = (0x1);
    L_8C05060A:;
    if ((R3 == R2)) goto L_8C050612;
    t3359 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t3359 + 0xB9C))) - (*(float *)((t3359 + 0xAE8)))) > 0.0f))) goto L_8C0507EA;
    R3 = (0x1);
    L_8C050802:;
    if ((!(((*(float *)(((*(int *)(((int)stk + 32))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C050818;
    R2 = (0x1);
    L_8C050830:;
    if ((R3 != R2)) goto L_8C0508C0;
    t3372 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3372 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3372 + 0xB9C))) > 0.0f))) goto L_8C050864;
    R3 = (0x1);
    L_8C050874:;
    t3379 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3379 + 0x1);
    cpuAimPointSet(((t3379 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3381 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3381 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3381 + 0xB9C))) > 0.0f))) goto L_8C0508AA;
    R3 = (0x1);
    return 479;
    L_8C0508AA:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0508BA;
    R3 = (0xFFFFFFFF);
    return 479;
    L_8C0508BA:;
    R3 = (0x0);
    return 479;
    L_8C050864:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050872;
    R3 = (0xFFFFFFFF);
    goto L_8C050874;
    L_8C050872:;
    R3 = (0x0);
    goto L_8C050874;
    L_8C0508C0:;
    t3398 = *(int *)(((int)stk + 32));
    t3399 = *(int *)(((int)stk + 28));
    u3400 = *(float *)((t3398 + 0xB00));
    u3401 = *(float *)((t3398 + 0xB9C));
    *(unsigned int *)(((int)stk + 28)) = (t3399 + 0x1);
    cpuAimPointSet(((t3399 + 0x1) - 1), 0x1, u3401, (u3400 * 118.849998f));
    t3403 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3403 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3403 + 0xB9C))) > 0.0f))) goto L_8C0508F8;
    R3 = (0x1);
    L_8C050908:;
    t3410 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3410 + 0x1);
    cpuAimPointSet(((t3410 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3412 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3412 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3412 + 0xB9C))) > 0.0f))) goto L_8C05093C;
    R3 = (0x1);
    L_8C050966:;
    t3419 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3419 + 0x1);
    cpuAimPointSet(((t3419 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C05098C;
    return 9;
    L_8C05098C:;
    t3423 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3423 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3423 + 0xB9C))) > 0.0f))) goto L_8C0509A8;
    R3 = (0x1);
    L_8C0509B8:;
    t3430 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3430 + 0x1);
    cpuAimPointSet(((t3430 + 0x1) - 1), 0x2, ((float)(-R3) * 41.1500015f), F5);
    return 9;
    L_8C0509A8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0509B6;
    R3 = (0xFFFFFFFF);
    goto L_8C0509B8;
    L_8C0509B6:;
    R3 = (0x0);
    goto L_8C0509B8;
    L_8C05093C:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050964;
    R3 = (0xFFFFFFFF);
    goto L_8C050966;
    L_8C050964:;
    R3 = (0x0);
    goto L_8C050966;
    L_8C0508F8:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C050906;
    R3 = (0xFFFFFFFF);
    goto L_8C050908;
    L_8C050906:;
    R3 = (0x0);
    goto L_8C050908;
    L_8C050818:;
    if ((!(0.0f > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xAE8))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C05082E;
    R2 = (0xFFFFFFFF);
    goto L_8C050830;
    L_8C05082E:;
    R2 = (0x0);
    goto L_8C050830;
    L_8C0507EA:;
    t3454 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t3454 + 0xB9C))) - (*(float *)((t3454 + 0xAE8))))))) goto L_8C050800;
    R3 = (0xFFFFFFFF);
    goto L_8C050802;
    L_8C050800:;
    R3 = (0x0);
    goto L_8C050802;
    L_8C050612:;
    t3460 = *(int *)(((int)stk + 32));
    F3 = (0.0f);
    if ((!(((*(float *)((t3460 + 0xB9C))) - (*(float *)((t3460 + 0xAE8)))) > 0.0f))) goto L_8C05062A;
    R2 = (0x1);
    L_8C050642:;
    if ((!(((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C05065A;
    R1 = (0x1);
    L_8C050686:;
    if ((R2 != R1)) goto L_8C050700;
    t3473 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3473 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3473 + 0xB9C))) > 0.0f))) goto L_8C0506A6;
    R3 = (0x1);
    L_8C0506B6:;
    t3480 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3480 + 0x1);
    cpuAimPointSet(((t3480 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    t3482 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3482 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3482 + 0xB9C))) > 0.0f))) goto L_8C0506EC;
    R3 = (0x1);
    goto L_8C050CE2;
    L_8C0506EC:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0506FA;
    R3 = (0xFFFFFFFF);
    goto L_8C050CE2;
    L_8C0506FA:;
    R3 = (0x0);
    goto L_8C050CE2;
    L_8C0506A6:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0506B4;
    R3 = (0xFFFFFFFF);
    goto L_8C0506B6;
    L_8C0506B4:;
    R3 = (0x0);
    goto L_8C0506B6;
    L_8C050700:;
    t3499 = *(int *)(((int)stk + 32));
    t3500 = *(int *)(((int)stk + 28));
    u3501 = *(float *)((t3499 + 0xB00));
    u3502 = *(float *)((t3499 + 0xB9C));
    *(unsigned int *)(((int)stk + 28)) = (t3500 + 0x1);
    cpuAimPointSet(((t3500 + 0x1) - 1), 0x1, u3502, (u3501 * 118.849998f));
    t3504 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3504 + 0xB00))) * 11.8850002f));
    if ((!((*(float *)((t3504 + 0xB9C))) > 0.0f))) goto L_8C050738;
    R3 = (0x1);
    L_8C05075E:;
    t3511 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3511 + 0x1);
    cpuAimPointSet(((t3511 + 0x1) - 1), 0x1, ((float)(-R3) * 41.1500015f), F5);
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C050786;
    return 9;
    L_8C050786:;
    t3515 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3515 + 0xB00))) * 118.849998f));
    if ((!((*(float *)((t3515 + 0xB9C))) > 0.0f))) goto L_8C0507A2;
    R3 = (0x1);
    L_8C0507B2:;
    t3522 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3522 + 0x1);
    cpuAimPointSet(((t3522 + 0x1) - 1), 0x2, ((float)R3 * 41.1500015f), F5);
    return 9;
    L_8C0507A2:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0507B0;
    R3 = (0xFFFFFFFF);
    goto L_8C0507B2;
    L_8C0507B0:;
    R3 = (0x0);
    goto L_8C0507B2;
    L_8C050738:;
    if ((!(F2 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C05075C;
    R3 = (0xFFFFFFFF);
    goto L_8C05075E;
    L_8C05075C:;
    R3 = (0x0);
    goto L_8C05075E;
    L_8C05065A:;
    if ((!(0.0f > ((*(float *)((0xB9C + (*(int *)(((int)stk + 32)))))) - (*(float *)(((0xAE8 + (*(int *)(((int)stk + 24)))) + 0x0))))))) goto L_8C050684;
    R1 = (0xFFFFFFFF);
    goto L_8C050686;
    L_8C050684:;
    R1 = (0x0);
    goto L_8C050686;
    L_8C05062A:;
    t3541 = *(int *)(((int)stk + 32));
    if ((!(F3 > ((*(float *)((t3541 + 0xB9C))) - (*(float *)((t3541 + 0xAE8))))))) goto L_8C050640;
    R2 = (0xFFFFFFFF);
    goto L_8C050642;
    L_8C050640:;
    R2 = (0x0);
    goto L_8C050642;
    L_8C0505F8:;
    if ((!(0.0f > (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))))) goto L_8C050608;
    R2 = (0xFFFFFFFF);
    goto L_8C05060A;
    L_8C050608:;
    R2 = (0x0);
    goto L_8C05060A;
    L_8C0505D8:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))))) goto L_8C0505E6;
    R3 = (0xFFFFFFFF);
    goto L_8C0505E8;
    L_8C0505E6:;
    R3 = (0x0);
    goto L_8C0505E8;
    L_8C050472:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0504E0;
    t3559 = *(int *)(((int)stk + 32));
    t3560 = *(int *)(((int)stk + 28));
    u3561 = *(float *)((t3559 + 0xB00));
    u3562 = *(float *)((t3559 + 0xB9C));
    *(unsigned int *)(((int)stk + 28)) = (t3560 + 0x1);
    cpuAimPointSet(((t3560 + 0x1) - 1), 0x2, u3562, (u3561 * 118.849998f));
    t3564 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3564 + 0xB00))) * 118.849998f));
    if ((!(((*(float *)((t3564 + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C0504B8;
    R3 = (0x1);
    L_8C0504D0:;
    R5 = (0x2);
    F4 = (((float)R3 * 41.1500015f));
    L_8C0505B6:;
    t3575 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3575 + 0x1);
    cpuAimPointSet(((t3575 + 0x1) - 1), R5, F4, F5);
    return 9;
    L_8C0504B8:;
    if ((!(F2 > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C0504CE;
    R3 = (0xFFFFFFFF);
    goto L_8C0504D0;
    L_8C0504CE:;
    R3 = (0x0);
    goto L_8C0504D0;
    L_8C0504E0:;
    t3584 = *(int *)(((int)stk + 32));
    t3585 = *(int *)(((int)stk + 28));
    u3586 = *(float *)((t3584 + 0xB00));
    u3587 = *(float *)((t3584 + 0xB9C));
    *(unsigned int *)(((int)stk + 28)) = (t3585 + 0x1);
    cpuAimPointSet(((t3585 + 0x1) - 1), 0x1, u3587, (u3586 * 11.8850002f));
    t3589 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3589 + 0xB00))) * 11.8850002f));
    if ((!(((*(float *)((t3589 + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C050520;
    R3 = (0x1);
    L_8C050538:;
    t3598 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 28)) = (t3598 + 0x1);
    cpuAimPointSet(((t3598 + 0x1) - 1), 0x1, ((float)R3 * 41.1500015f), F5);
    t3600 = *(int *)(((int)stk + 32));
    F2 = (0.0f);
    F5 = (((*(float *)((t3600 + 0xB00))) * 118.849998f));
    if ((!(((*(float *)((t3600 + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))) > 0.0f))) goto L_8C050590;
    R3 = (0x1);
    L_8C0505A8:;
    R5 = (0x1);
    F4 = (((float)R3 * 41.1500015f));
    goto L_8C0505B6;
    L_8C050590:;
    if ((!(F2 > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C0505A6;
    R3 = (0xFFFFFFFF);
    goto L_8C0505A8;
    L_8C0505A6:;
    R3 = (0x0);
    goto L_8C0505A8;
    L_8C050520:;
    if ((!(F2 > ((*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C))) - (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8))))))) goto L_8C050536;
    R3 = (0xFFFFFFFF);
    goto L_8C050538;
    L_8C050536:;
    R3 = (0x0);
    goto L_8C050538;
    L_8C050454:;
    F3 = (((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))) + (*(float *)(((*(int *)(((int)stk + 24))) + 0xAE8)))));
    goto L_8C050466;
    L_8C0503FA:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x28)))));
    return 702;
    L_8C0503C6:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 24))) + 0xAF0)))));
    return 334;
    L_8C05039C:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 32))) + 0xB9C)))));
    return 3;
    L_8C050374:;
    F3 = ((-(*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))));
    return 1;
    L_8C05032C:;
    if ((!(F3 > (*(float *)(((*(int *)(((int)stk + 16))) + 0x30)))))) goto L_8C050350;
    R3 = (0xFFFFFFFF);
    return 0;
    L_8C050350:;
    R3 = (0x0);
    return 0;
    return -1;
}

#undef u59
#undef t68
#undef u75
#undef t76
#undef t95
#undef t106
#undef t113
#undef t115
#undef t122
#undef t124
#undef t131
#undef t148
#undef t155
#undef t157
#undef t179
#undef t185
#undef t196
#undef t203
#undef t205
#undef t212
#undef t214
#undef t221
#undef t238
#undef t245
#undef t247
#undef t254
#undef t256
#undef t283
#undef t314
#undef t321
#undef t328
#undef t339
#undef t346
#undef t348
#undef t355
#undef t367
#undef t374
#undef t376
#undef t383
#undef t385
#undef t412
#undef u447
#undef u455
#undef u474
#undef t485
#undef t492
#undef t494
#undef t503
#undef t527
#undef t541
#undef t552
#undef t559
#undef t561
#undef t568
#undef t570
#undef t577
#undef t594
#undef t601
#undef t603
#undef t625
#undef t633
#undef t640
#undef t642
#undef t660
#undef t671
#undef t678
#undef t680
#undef t687
#undef t699
#undef t706
#undef t708
#undef t731
#undef t762
#undef t769
#undef t773
#undef t780
#undef t792
#undef t805
#undef t814
#undef t821
#undef t828
#undef t830
#undef t851
#undef t858
#undef t860
#undef t869
#undef t881
#undef t888
#undef t890
#undef t914
#undef u963
#undef t974
#undef t981
#undef t983
#undef t990
#undef t1014
#undef t1021
#undef t1023
#undef t1034
#undef t1041
#undef t1043
#undef t1050
#undef t1052
#undef t1059
#undef t1076
#undef t1083
#undef t1085
#undef t1107
#undef t1120
#undef t1127
#undef t1129
#undef t1136
#undef t1138
#undef t1149
#undef t1156
#undef t1158
#undef t1165
#undef t1177
#undef t1184
#undef t1186
#undef t1209
#undef t1250
#undef t1257
#undef t1261
#undef t1268
#undef t1280
#undef t1293
#undef t1300
#undef t1302
#undef t1309
#undef t1311
#undef t1318
#undef t1337
#undef t1344
#undef t1346
#undef t1353
#undef t1355
#undef t1362
#undef t1364
#undef t1397
#undef u1443
#undef t1461
#undef t1468
#undef t1470
#undef t1477
#undef t1479
#undef t1490
#undef t1497
#undef t1499
#undef t1507
#undef t1519
#undef t1526
#undef t1528
#undef t1543
#undef t1559
#undef t1566
#undef t1568
#undef t1575
#undef t1577
#undef t1588
#undef t1595
#undef t1597
#undef t1605
#undef t1617
#undef t1624
#undef t1626
#undef t1648
#undef t1673
#undef t1684
#undef t1691
#undef t1693
#undef t1700
#undef t1712
#undef t1719
#undef t1721
#undef t1743
#undef t1774
#undef t1781
#undef t1783
#undef t1790
#undef t1792
#undef t1803
#undef t1810
#undef t1812
#undef t1819
#undef t1831
#undef t1838
#undef t1840
#undef t1863
#undef t1879
#undef t1886
#undef t1888
#undef t1895
#undef t1897
#undef t1908
#undef t1915
#undef t1917
#undef t1925
#undef t1937
#undef t1944
#undef t1946
#undef t1968
#undef t1994
#undef t2001
#undef t2003
#undef t2010
#undef t2012
#undef t2019
#undef t2021
#undef t2028
#undef t2030
#undef t2040
#undef u2096
#undef u2104
#undef u2122
#undef t2140
#undef t2147
#undef t2149
#undef t2156
#undef t2160
#undef t2167
#undef t2169
#undef t2176
#undef t2178
#undef t2189
#undef t2196
#undef t2198
#undef t2206
#undef t2218
#undef t2225
#undef t2227
#undef t2242
#undef t2268
#undef t2275
#undef t2277
#undef t2284
#undef t2288
#undef t2295
#undef t2297
#undef t2304
#undef t2306
#undef t2317
#undef t2324
#undef t2326
#undef t2334
#undef t2346
#undef t2353
#undef t2355
#undef t2377
#undef t2412
#undef t2423
#undef t2430
#undef t2432
#undef t2439
#undef t2453
#undef t2460
#undef t2462
#undef t2471
#undef t2483
#undef t2490
#undef t2492
#undef t2516
#undef t2547
#undef t2554
#undef t2556
#undef t2563
#undef t2567
#undef t2574
#undef t2576
#undef t2583
#undef t2585
#undef t2602
#undef t2613
#undef t2620
#undef t2622
#undef t2629
#undef t2641
#undef t2648
#undef t2650
#undef t2673
#undef t2689
#undef t2696
#undef t2698
#undef t2705
#undef t2709
#undef t2716
#undef t2718
#undef t2725
#undef t2727
#undef t2741
#undef t2752
#undef t2759
#undef t2761
#undef t2769
#undef t2781
#undef t2788
#undef t2790
#undef t2812
#undef t2838
#undef t2845
#undef t2847
#undef t2854
#undef t2856
#undef t2863
#undef t2865
#undef t2872
#undef t2876
#undef t2883
#undef t2885
#undef t2886
#undef u2887
#undef u2888
#undef t2890
#undef t2897
#undef u2972
#undef t2990
#undef t3002
#undef t3009
#undef t3011
#undef t3018
#undef t3022
#undef t3029
#undef t3046
#undef t3057
#undef t3064
#undef t3066
#undef t3073
#undef t3085
#undef t3092
#undef t3094
#undef t3101
#undef t3105
#undef t3112
#undef t3134
#undef t3146
#undef t3163
#undef t3170
#undef t3172
#undef t3190
#undef t3197
#undef t3199
#undef t3206
#undef t3210
#undef t3217
#undef t3254
#undef t3265
#undef t3272
#undef t3274
#undef t3283
#undef t3295
#undef t3302
#undef t3304
#undef t3328
#undef t3359
#undef t3372
#undef t3379
#undef t3381
#undef t3398
#undef t3399
#undef u3400
#undef u3401
#undef t3403
#undef t3410
#undef t3412
#undef t3419
#undef t3423
#undef t3430
#undef t3454
#undef t3460
#undef t3473
#undef t3480
#undef t3482
#undef t3499
#undef t3500
#undef u3501
#undef u3502
#undef t3504
#undef t3511
#undef t3515
#undef t3522
#undef t3541
#undef t3559
#undef t3560
#undef u3561
#undef u3562
#undef t3564
#undef t3575
#undef t3584
#undef t3585
#undef u3586
#undef u3587
#undef t3589
#undef t3598
#undef t3600
#undef stk
#undef R0
#undef R1
#undef R2
#undef R3
#undef R4
#undef R5
#undef R6
#undef R8
#undef R9
#undef R11
#undef R13
#undef R14
#undef F0
#undef F1
#undef F2
#undef F3
#undef F4
#undef F5
#undef T_
#undef a4
#undef a5
