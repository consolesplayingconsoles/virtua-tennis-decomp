/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuDebugLine(int, Stk3, float);
int cpuDebugLine2(int, float);
Stk3 vecMake(float, float, float);
int kmProcessVertexRenderState(int a4, int a5, int a6, int a7);
int ndbEditShowEntry(int a4);

int kmProcessVertexRenderState(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int t11;
    int t13;
    int t15;
    int t17;
    int t19;
    int t21;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t29;
    int t37;
    int t35;
    int t43;
    int t41;
    int t49;
    int t46;
    int t52;
    int t78;
    int t64;
    int t99;
    int t85;
    int t104;
    int t101;
    int t109;
    int t106;
    int t115;
    int t111;
    int t122;
    int t117;
    int t128;
    int t124;
    int t134;
    int t130;
    int t140;
    int t136;
    int t147;
    int t142;
    int t154;
    int t149;
    int t160;
    int t156;
    int t169;
    int t162;
    int t175;
    int t171;
    int t184;
    int t180;
    int t202;
    int t187;
    int t188;
    int t190;
    int t196;
    int t192;
    int t199;
    int t210;
    int t207;
    int t216;
    int t214;
    int t221;
    int t219;
    int t227;
    int t237;
    int t232;
    int t230;
    int t243;
    int t241;
    int t250;
    int t247;
    int t257;
    int t254;
    int t262;
    int t265;
    int t22;
    int t55;
    int t73;
    int t68;
    int t94;
    int t89;
    int t178;
    int t186;
    int t225;
    int stk[94];

    t1 = *(int *)0x8C20A368;
    *(unsigned int *)(((0x148 + ((int)stk + 4)) + 0x0)) = (*(int *)0x8C20A364);
    *(unsigned int *)(((0x148 + ((int)stk + 4)) + 0x4)) = t1;
    *(unsigned int *)(((0x148 + ((int)stk + 4)) + 0x8)) = (*(int *)0x8C20A36C);
    t3 = *(int *)0x8C20A374;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x0)) = (*(int *)0x8C20A370);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x4)) = t3;
    t5 = *(int *)0x8C20A37C;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x8)) = (*(int *)0x8C20A378);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0xC)) = t5;
    t7 = *(int *)0x8C20A384;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x10)) = (*(int *)0x8C20A380);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x14)) = t7;
    t9 = *(int *)0x8C20A38C;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x18)) = (*(int *)0x8C20A388);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x1C)) = t9;
    t11 = *(int *)0x8C20A394;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x20)) = (*(int *)0x8C20A390);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x24)) = t11;
    t13 = *(int *)0x8C20A39C;
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x28)) = (*(int *)0x8C20A398);
    *(unsigned int *)(((0x118 + ((int)stk + 4)) + 0x2C)) = t13;
    t15 = *(int *)0x8C20A3A4;
    *(unsigned int *)(((0x108 + ((int)stk + 4)) + 0x0)) = (*(int *)0x8C20A3A0);
    *(unsigned int *)(((0x108 + ((int)stk + 4)) + 0x4)) = t15;
    t17 = *(int *)0x8C20A3AC;
    *(unsigned int *)(((0x108 + ((int)stk + 4)) + 0x8)) = (*(int *)0x8C20A3A8);
    *(unsigned int *)(((0x108 + ((int)stk + 4)) + 0xC)) = t17;
    t19 = 0x8C20A3B0;
    t21 = (((int)stk + 4) + 0x8);
    for (;;) { t22 = *(int *)t19; t19 = (t19 + 4); if ((unsigned int)((0x8C20A3B0 + 256)) < (unsigned int)t19) break; *(unsigned int *)t21 = t22; t21 = (t21 + 4); }
    t23 = *(int *)((a4 + 0x0));
    t24 = *(int *)((a4 + 0x94));
    t25 = *(int *)((a4 + 0x98));
    t26 = *(int *)((a4 + 0x9C));
    t27 = *(int *)((a4 + 0x90));
    t29 = t24;
    if ((t23 & 0x2) != 0) {
        t29 = ((0xE7FFFFFF & t24) | (((*(int *)((a4 + 0x18))) & 0x3) << 27));
    }
    if ((*(int *)((a4 + 0x4))) != 1) {
        t37 = t29;
        if ((t23 & 0x1) != 0) {
            t35 = *(int *)((a4 + 0x14));
            *(unsigned int *)(((int)stk + 4)) = ((t35 & 0x7) << 29);
            t37 = ((t29 & 0x1FFFFFFF) | ((t35 & 0x7) << 29));
        }
        t43 = t37;
        if ((0x20 & t23) != 0) {
            t41 = *(int *)((a4 + 0x28));
            *(unsigned int *)(((int)stk + 4)) = ((((t41 & 0x1) << 16) << 8) << 2);
            t43 = ((0xFBFFFFFF & t37) | ((((t41 & 0x1) << 16) << 8) << 2));
        }
        t49 = t43;
        if ((0x4000000 & t23) != 0) {
            t46 = *(int *)((a4 + 0xB4));
            *(unsigned int *)(((int)stk + 4)) = ((((t46 & 0x1) << 16) << 2) << 2);
            t49 = ((0xFFEFFFFF & t43) | ((((t46 & 0x1) << 16) << 2) << 2));
        }
        t55 = t49;
    } else {
        t52 = *(int *)((a4 + 0xA0));
        *(unsigned int *)(((int)stk + 4)) = (t52 & 0xE0000000);
        t55 = ((t29 & 0x1FFFFFFF) | (t52 & 0xE0000000));
    }
    t78 = t25;
    if ((t23 & 0x40) != 0) {
        if ((int)(*(int *)((a4 + 0x2C))) > (int)0x1) {
            t64 = *(int *)(((((*(int *)((a4 + 0x2C))) << 2) + (0x118 + ((int)stk + 4))) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (t64 << 29);
            t73 = ((t25 & 0x1FFFFFFF) | (t64 << 29));
        } else {
            if ((*(int *)((a4 + 0x2C))) == 0) {
                *(unsigned int *)(((int)stk + 4)) = 0xB0000000;
                t68 = (0xB0000000 | (0x3FFFFFF & t25));
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x94000000;
                t68 = (0x94000000 | (0x3FFFFFF & t25));
            }
            t73 = t68;
        }
        t78 = t73;
    }
    t99 = t78;
    if ((0x80 & t23) != 0) {
        if ((int)(*(int *)((a4 + 0x30))) > (int)0x1) {
            t85 = *(int *)(((((*(int *)((a4 + 0x30))) << 2) + (0x118 + ((int)stk + 4))) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = (((t85 << 16) << 8) << 2);
            t94 = ((0xE3FFFFFF & t78) | (((t85 << 16) << 8) << 2));
        } else {
            if ((*(int *)((a4 + 0x30))) == 0) {
                *(unsigned int *)(((int)stk + 4)) = 0xB0000000;
                t89 = (0xB0000000 | (0x3FFFFFF & t78));
            } else {
                *(unsigned int *)(((int)stk + 4)) = 0x94000000;
                t89 = (0x94000000 | (0x3FFFFFF & t78));
            }
            t94 = t89;
        }
        t99 = t94;
    }
    t104 = t99;
    if ((0x1000000 & t23) != 0) {
        t101 = *(int *)((a4 + 0x34));
        *(unsigned int *)(((int)stk + 4)) = ((((t101 & 0x1) << 16) << 8) << 1);
        t104 = ((0xFDFFFFFF & t99) | ((((t101 & 0x1) << 16) << 8) << 1));
    }
    t109 = t104;
    if ((0x2000000 & t23) != 0) {
        t106 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 4)) = (((t106 & 0x1) << 16) << 8);
        t109 = ((0xFEFFFFFF & t104) | (((t106 & 0x1) << 16) << 8));
    }
    t115 = t109;
    if ((0x100 & t23) != 0) {
        t111 = *(int *)((a4 + 0x3C));
        *(unsigned int *)(((int)stk + 4)) = ((t111 & 0x3) << 22);
        t115 = ((0xFF3FFFFF & t109) | ((t111 & 0x3) << 22));
    }
    t122 = t115;
    if ((0x40000 & t23) != 0) {
        t117 = *(int *)((a4 + 0x64));
        *(unsigned int *)(((int)stk + 4)) = ((t117 & 0x1) << 21);
        t122 = ((0xFFDFFFFF & t115) | ((t117 & 0x1) << 21));
    }
    t128 = t122;
    if ((0x400 & t23) != 0) {
        t124 = *(int *)((a4 + 0x44));
        *(unsigned int *)(((int)stk + 4)) = ((((t124 & 0x1) << 16) << 2) << 2);
        t128 = ((0xFFEFFFFF & t122) | ((((t124 & 0x1) << 16) << 2) << 2));
    }
    t134 = t128;
    if ((0x800 & t23) != 0) {
        t130 = *(int *)((a4 + 0x48));
        *(unsigned int *)(((int)stk + 4)) = ((((t130 & 0x1) << 16) << 2) << 1);
        t134 = ((0xFFF7FFFF & t128) | ((((t130 & 0x1) << 16) << 2) << 1));
    }
    t140 = t134;
    if ((0x2000 & t23) != 0) {
        t136 = *(int *)((a4 + 0x50));
        *(unsigned int *)(((int)stk + 4)) = (((t136 & 0x3) << 16) << 1);
        t140 = ((0xFFF9FFFF & t134) | (((t136 & 0x3) << 16) << 1));
    }
    t147 = t140;
    if ((0x1000 & t23) != 0) {
        t142 = *(int *)((a4 + 0x4C));
        *(unsigned int *)(((int)stk + 4)) = ((t142 & 0x3) << 15);
        t147 = ((0xFFFE7FFF & t140) | ((t142 & 0x3) << 15));
    }
    t154 = t147;
    if ((0x4000 & t23) != 0) {
        t149 = *(int *)((a4 + 0x54));
        *(unsigned int *)(((int)stk + 4)) = ((t149 & 0x3) << 13);
        t154 = ((0xFFFF9FFF & t147) | ((t149 & 0x3) << 13));
    }
    t160 = t154;
    if ((0x8000 & t23) != 0) {
        t156 = *(int *)((a4 + 0x58));
        *(unsigned int *)(((int)stk + 4)) = ((((t156 & 0x1) << 8) << 2) << 2);
        t160 = ((0xFFFFEFFF & t154) | ((((t156 & 0x1) << 8) << 2) << 2));
    }
    t169 = t160;
    if ((0x10000 & t23) != 0) {
        t162 = *(int *)((a4 + 0x5C));
        *(unsigned int *)(((int)stk + 4)) = ((t162 & 0xF) << 8);
        if (((t162 & 0xF) << 8) == 0) {
            *(unsigned int *)(((int)stk + 4)) = 0x400;
        }
        t169 = ((*(int *)(((int)stk + 4))) | (0xFFFFF0FF & t160));
    }
    t175 = t169;
    if ((0x20000 & t23) != 0) {
        t171 = *(int *)((a4 + 0x60));
        *(unsigned int *)(((int)stk + 4)) = ((((t171 & 0x3) << 2) << 2) << 2);
        t175 = ((0xFFFFFF3F & t169) | ((((t171 & 0x3) << 2) << 2) << 2));
    }
    t184 = t175;
    if ((((*(int *)((a4 + 0x20))) & 0x2) != 0) && (t178 = *(int *)((a4 + 0x6C)), t178 != 0)) {
        t180 = *(int *)(((*(int *)((a4 + 0x6C))) + 0x18));
        *(unsigned int *)(((int)stk + 4)) = (t180 & 0x3F);
        t184 = ((0xFFFFFFC0 & t175) | (t180 & 0x3F));
    }
    t202 = t26;
    if (((0x2 & (*(int *)((a4 + 0x20)))) != 0) && (t186 = *(int *)((a4 + 0x6C)), t186 != 0)) {
        t187 = *(int *)((a4 + 0x6C));
        *(unsigned int *)(((int)stk + 4)) = t187;
        t188 = *(int *)((t187 + 0x18));
        *(unsigned int *)(((int)stk + 8)) = t188;
        t190 = *(int *)(((*(int *)(((int)stk + 4))) + 0x8));
        *(unsigned int *)(((int)stk + 4)) = ((t188 | t190) & 0xFFE00000);
        t196 = ((0x1FFFFF & t26) | ((t188 | t190) & 0xFFE00000));
        if ((*(int *)(((int)stk + 8))) == 0x8000) {
            t192 = *(int *)((a4 + 0x68));
            *(unsigned int *)(((int)stk + 4)) = ((t192 & 0x3F) << 21);
            t196 = ((0xF81FFFFF & ((0x1FFFFF & t26) | ((t188 | t190) & 0xFFE00000))) | ((t192 & 0x3F) << 21));
        }
        t199 = *(int *)(((*(int *)((a4 + 0x6C))) + 0x1C));
        *(unsigned int *)(((int)stk + 4)) = (((unsigned int)((unsigned int)t199 >> 2) >> 1) & 0x1FFFFF);
        t202 = ((0xFFE00000 & t196) | (((unsigned int)((unsigned int)t199 >> 2) >> 1) & 0x1FFFFF));
    }
    t210 = t27;
    if ((0x100000 & t23) != 0) {
        t207 = *(int *)((((((*(int *)((a4 + 0x4))) & 0x3) << 2) + (0x148 + ((int)stk + 4))) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = (t207 << 29);
        t210 = ((0x1FFFFFFF & t27) | (t207 << 29));
    }
    t216 = t210;
    if ((0x200000 & t23) != 0) {
        t214 = *(int *)((a4 + 0x8));
        *(unsigned int *)(((int)stk + 4)) = (((t214 & 0x7) << 16) << 8);
        t216 = ((0xF8FFFFFF & t210) | (((t214 & 0x7) << 16) << 8));
    }
    t221 = (t216 | 0x8C0000);
    if ((0x10000000 & t23) != 0) {
        t219 = *(int *)((a4 + 0xBC));
        *(unsigned int *)(((int)stk + 4)) = ((t219 & 0x3) << 16);
        t221 = (0x800000 | ((0xFF7CFFFF & (t216 | 0x8C0000)) | ((t219 & 0x3) << 16)));
    }
    t227 = (0xFFFFFF3F & t221);
    if ((((*(int *)((a4 + 0xA0))) & 0x60000000) != 0) && (t225 = *(int *)((a4 + 0x8)), (t225 & 1) != 0)) {
        t227 = ((0xFFFFFF3F & t221) | 0x40);
    }
    t237 = t227;
    if ((0x10 & t23) != 0) {
        t232 = (0xFFFFFF3F & t227);
        if (((*(int *)((a4 + 0x24))) & 0x1) != 0) {
            t230 = *(int *)((a4 + 0x24));
            *(unsigned int *)(((int)stk + 4)) = (((t230 & 0x1) << 7) | 0x40);
            t232 = ((0xFFFFFF3F & t227) | (((t230 & 0x1) << 7) | 0x40));
        }
        t237 = t232;
    }
    t243 = t237;
    if ((0x400000 & t23) != 0) {
        t241 = *(int *)((a4 + 0xC));
        *(unsigned int *)(((int)stk + 4)) = (((t241 & 0x3) << 2) << 2);
        t243 = ((0xFFFFFFCF & t237) | (((t241 & 0x3) << 2) << 2));
    }
    t250 = t243;
    if ((0x8 & t23) != 0) {
        t247 = *(int *)(((((0x3 & (*(int *)((a4 + 0x20)))) << 2) + (0x108 + ((int)stk + 4))) + 0x0));
        *(unsigned int *)(((int)stk + 4)) = t247;
        t250 = (t247 | (0xFFFFFFF5 & t243));
    }
    t257 = t250;
    if ((0x200 & t23) != 0) {
        t254 = *(int *)((a4 + 0x40));
        *(unsigned int *)(((int)stk + 4)) = ((t254 & 0x1) << 2);
        t257 = ((0xFFFFFFFB & t250) | ((t254 & 0x1) << 2));
    }
    t262 = t257;
    if ((t23 & 0x800000) != 0) {
        t262 = ((0xFFFFFFFE & t257) | ((*(int *)((a4 + 0x10))) & 0x1));
    }
    t265 = *(int *)(((((((((unsigned int)((unsigned int)(0x20000000 & t262) >> 16) >> 8) | ((unsigned int)((unsigned int)((unsigned int)(0x1000000 & t262) >> 16) >> 2) >> 2)) | ((unsigned int)((unsigned int)(0x70 & t262) >> 2) >> 1)) | ((unsigned int)(0x4 & t262) >> 2)) << 2) + (((int)stk + 4) + 0x8)) + 0x0));
    *(unsigned int *)((a4 + 0x94)) = t55;
    *(unsigned int *)((a4 + 0x98)) = t184;
    *(unsigned int *)((a4 + 0x9C)) = t202;
    *(unsigned int *)((a4 + 0x90)) = ((((int)(t265 + 0x8) >= 0) ? (0x1 << ((t265 + 0x8) & 31)) : ((-(int)(t265 + 0x8) & 31) ? ((int)0x1 >> (-(int)(t265 + 0x8) & 31)) : ((int)0x1 >> 31))) | (t262 & 0xFFFF80FF));
    return 0x0;
}

int ndbEditShowEntry(int a4)
{
    int t7;
    float u20;
    int stk[34];

    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 40) + 0x1C)) = *(struct mv8 *)(0x8C10DA68); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 40) + 0xC)) = *(struct mv4 *)(0x8C10DA88); }
    *(float *)0x8C28886C = (*(float *)(((((unsigned char)(*(signed char *)((a4 + 0x0))) << 2) + (((int)stk + 40) + 0x1C)) + 0xC)));
    *(float *)0x8C288874 = (*(float *)(((((int)stk + 40) + 0xC) + ((unsigned char)(*(signed char *)((a4 + 0x1))) << 2))));
    *(float *)((((int)stk + 40) + 0x0)) = ((float)(*(signed char *)((a4 + 0x5))) * 5.87857151f);
    *(float *)((((int)stk + 40) + 0x4)) = 0.00999999978f;
    *(float *)((((int)stk + 40) + 0x8)) = ((-(((float)(unsigned char)(*(signed char *)((a4 + 0x6))) * 108.849998f) / 7.0f)) + -10.0f);
    t7 = 0xFFFF0000;
    if ((*(signed char *)((a4 + 0x7))) == 0) {
        t7 = 0xFF0000FF;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C28886C), 0.00999999978f, (*(float *)0x8C288874));
    cpuDebugLine2(t7, (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    cpuDebugLine(t7, *(Stk3 *)(((int)stk + 4)), (1.0f + 1.0f));
    *(float *)0x8C2895E4 = (*(float *)((((((int)stk + 40) + 0x1C) + ((*(signed char *)((a4 + 0x2))) << 2)) + 0xC)));
    *(float *)0x8C2895EC = (-(*(float *)(((((int)stk + 40) + 0xC) + ((unsigned char)(*(signed char *)((a4 + 0x3))) << 2)))));
    u20 = (*(float *)0x8C2895E4);
    u20 = u20 + (*(float *)0x8C0824D8) * (float)(*(signed char *)((a4 + 0x4)));
    *(float *)((((int)stk + 40) + 0x0)) = u20;
    *(float *)((((int)stk + 40) + 0x8)) = (*(float *)0x8C2895EC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((int)stk + 40)); }
    *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C2895E4), (*(float *)0x8C0824DC), (*(float *)0x8C2895EC));
    cpuDebugLine2(0xFFFF00FF, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 40)); }
    return (cpuDebugLine(0xFFFF00FF, *(Stk3 *)(((int)stk + 4)), 1.0f));
}
