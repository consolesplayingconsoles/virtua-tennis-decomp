/* Straight-line functions with calls and guards (batch gen_cw): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern void _builtin_prefetch(void *);
float lerpf(float, float, float);
float nlCos(int);
float nlSin(int);
int nlSprPutPosSet(int, int, int, float, float, float, float);
int nlSpriteF2ARGB(float, float, float, float);
int nlSpriteF2C(float);
int nlTranslate(float, float, float);
int motionRoot2(int a4);
int nlSprPut(int a4, int a5);

int motionRoot2(int a4)
{
    int t0;
    int t4;
    int t8;
    int t12;
    int t16;
    int t20;
    int t26;
    int t28;
    float u29;
    int t31;
    int t32;
    int t33;
    int t39;
    int t49;
    float u50;
    int t51;
    float u52;
    float u54;
    int t59;
    int t61;
    float u62;
    float u63;
    int t65;
    int t67;
    int t68;
    float u69;
    float t72;
    int t73;
    int t76;
    int t78;
    int t83;
    int t85;
    float u86;
    int t87;
    float u88;
    int t90;
    int t92;
    int t93;
    int t95;
    float u98;
    float t99;
    int t100;
    int t104;
    int t106;
    int t107;
    float u108;
    float t111;
    int t112;
    int t115;
    int t117;
    int t119;
    int t120;
    float u121;
    float t124;
    int t125;
    int t128;
    int t130;
    int t132;
    int t133;
    int t149;
    int t153;
    int t157;
    int t161;
    int t165;
    int t169;
    int t44;
    int t55;
    float u145;
    float u146;
    float u147;

    t0 = *(int *)0x8C2871D4;
    *(float *)((t0 + 0x10)) = ((*(float *)((t0 + 0x10))) * (*(float *)((((*(int *)((t0 + 0x1C))) + 0xC) + 0x0))));
    t4 = *(int *)0x8C2871D4;
    *(float *)((t4 + 0x14)) = ((*(float *)((t4 + 0x14))) * (*(float *)((((*(int *)((t4 + 0x20))) + 0xC) + 0x0))));
    t8 = *(int *)0x8C2871D4;
    *(float *)((t8 + 0x8)) = ((*(float *)((t8 + 0x8))) * (*(float *)((((*(int *)((t8 + 0x1C))) + 0xC) + 0x0))));
    t12 = *(int *)0x8C2871D4;
    *(float *)((t12 + 0xC)) = ((*(float *)((t12 + 0xC))) * (*(float *)((((*(int *)((t12 + 0x20))) + 0xC) + 0x0))));
    t16 = *(int *)0x8C2871D4;
    *(unsigned int *)((t16 + 0x2C)) = (int)((float)(*(int *)((t16 + 0x2C))) * (*(float *)((((*(int *)((t16 + 0x1C))) + 0xC) + 0x0))));
    t20 = *(int *)0x8C2871D4;
    *(unsigned int *)((t20 + 0x30)) = (int)((float)(*(int *)((t20 + 0x30))) * (*(float *)((((*(int *)((t20 + 0x20))) + 0xC) + 0x0))));
    t26 = *(int *)(((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x10));
    t28 = *(int *)0x8C2871D4;
    u29 = *(float *)(((*(int *)0x8C2871D4) + 0xC));
    t31 = *(int *)((t28 + 0x54));
    t32 = *(int *)(((*(int *)((t28 + 0x20))) + 0x4));
    t33 = *(int *)0x8C2871D4;
    if ((*(int *)((t33 + 0x28))) == 1) {
        t44 = ((int)((int)((((int)u29 * t26) + a4) + t26) % (int)((*(int *)((t33 + 0x30))) * t26)));
    } else {
        t39 = ((((int)u29 * t26) + a4) + t26);
        if ((int)((((int)u29 * t26) + a4) + t26) > (int)(((*(int *)((t33 + 0x30))) - 1) * t26)) {
            t39 = ((((*(int *)((t33 + 0x30))) - 1) * t26) + a4);
        }
        t44 = t39;
    }
    t49 = *(int *)((t33 + 0x54));
    u50 = *(float *)((t33 + 0xC));
    t51 = *(int *)(((*(int *)((t33 + 0x20))) + 0x4));
    u52 = *(float *)((t33 + 0x0));
    u54 = *(float *)((t33 + 0x4));
    if (((*(int *)((t33 + 0x3C))) != 0) && (t55 = *(int *)((t33 + 0x40)), a4 == t55)) {
        t59 = *(int *)0x8C2871D4;
        t61 = *(int *)((t59 + 0x20));
        u62 = *(float *)((t59 + 0x14));
        u63 = ((lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x0))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x0))), (u50 - (float)(int)u50))) * (*(float *)((t59 + 0x4C))));
        t65 = *(int *)((t59 + 0x48));
        *(float *)((((((((t65 << 1) + t65) << 2) << 2) + (t59 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = (lerpf(0.0f, ((u63 * u62) / (*(float *)(((t61 + 0x14) + 0x0)))), (u52 / u54)));
        t67 = *(int *)0x8C2871D4;
        t68 = *(int *)((t67 + 0x48));
        u69 = *(float *)((((((((((-t68) + 0x1) << 1) + ((-t68) + 0x1)) << 2) << 2) + (t67 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4));
        t72 = lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x2))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x2))), (u50 - (float)(int)u50));
        t73 = *(int *)0x8C2871D4;
        t76 = *(int *)0x8C2871D4;
        t78 = *(int *)((t76 + 0x48));
        *(float *)(((((((((t78 << 1) + t78) << 2) << 2) + (t76 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4) + 0x0)) = (lerpf(u69, ((t72 * (*(float *)((t73 + 0x4C)))) / (*(float *)((((*(int *)((t73 + 0x20))) + 0x18) + 0x0)))), (u52 / u54)));
        t83 = *(int *)0x8C2871D4;
        t85 = *(int *)((t83 + 0x20));
        u86 = *(float *)((t83 + 0x14));
        t87 = *(int *)0x8C2871D4;
        u88 = ((lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x4))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x4))), (u50 - (float)(int)u50))) * (*(float *)((t83 + 0x4C))));
        t90 = *(int *)((t87 + 0x48));
        *(float *)(((((((((t90 << 1) + t90) << 2) << 2) + (t87 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x8) + 0x0)) = (lerpf(0.0f, ((-(u88 * u86)) / (*(float *)(((t85 + 0x1C) + 0x0)))), (u52 / u54)));
        t92 = *(int *)0x8C2871D4;
        t93 = *(int *)((t92 + 0x48));
        u145 = 0.0f;
        u146 = (*(float *)((((((((t93 << 1) + t93) << 2) << 2) + (t92 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4)));
        u147 = 0.0f;
    } else {
        t95 = *(int *)((t33 + 0x48));
        u98 = *(float *)((((((((((-t95) + 0x1) << 1) + ((-t95) + 0x1)) << 2) << 2) + (t33 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0));
        t99 = lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x0))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x0))), (u50 - (float)(int)u50));
        t100 = *(int *)0x8C2871D4;
        t104 = *(int *)((t100 + 0x48));
        *(float *)((((((((t104 << 1) + t104) << 2) << 2) + (t100 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = (lerpf(u98, ((t99 * (*(float *)((t100 + 0x4C)))) / (*(float *)((((*(int *)((t100 + 0x20))) + 0x14) + 0x0)))), (u52 / u54)));
        t106 = *(int *)0x8C2871D4;
        t107 = *(int *)((t106 + 0x48));
        u108 = *(float *)((((((((((-t107) + 0x1) << 1) + ((-t107) + 0x1)) << 2) << 2) + (t106 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4));
        t111 = lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x2))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x2))), (u50 - (float)(int)u50));
        t112 = *(int *)0x8C2871D4;
        t115 = *(int *)0x8C2871D4;
        t117 = *(int *)((t115 + 0x48));
        *(float *)(((((((((t117 << 1) + t117) << 2) << 2) + (t115 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4) + 0x0)) = (lerpf(u108, ((t111 * (*(float *)((t112 + 0x4C)))) / (*(float *)((((*(int *)((t112 + 0x20))) + 0x18) + 0x0)))), (u52 / u54)));
        t119 = *(int *)0x8C2871D4;
        t120 = *(int *)((t119 + 0x48));
        u121 = *(float *)((((((((((-t120) + 0x1) << 1) + ((-t120) + 0x1)) << 2) << 2) + (t119 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x8));
        t124 = lerpf((float)(*(short *)((((t31 + t32) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x4))), (float)(*(short *)((((t49 + t51) + ((t44 << 1) + (t44 << 2))) + 0x4))), (u50 - (float)(int)u50));
        t125 = *(int *)0x8C2871D4;
        t128 = *(int *)0x8C2871D4;
        t130 = *(int *)((t128 + 0x48));
        *(float *)(((((((((t130 << 1) + t130) << 2) << 2) + (t128 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x8) + 0x0)) = (lerpf(u121, ((-(t124 * (*(float *)((t125 + 0x4C))))) / (*(float *)((((*(int *)((t125 + 0x20))) + 0x1C) + 0x0)))), (u52 / u54)));
        t132 = *(int *)0x8C2871D4;
        t133 = *(int *)((t132 + 0x48));
        u145 = (*(float *)(((((t132 + 0x60) + ((((t133 << 1) + t133) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x0)));
        u146 = (*(float *)(((((t132 + 0x60) + ((((t133 << 1) + t133) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x4)));
        u147 = (*(float *)(((((t132 + 0x60) + ((((t133 << 1) + t133) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x8)));
    }
    nlTranslate(u145, u146, u147);
    t149 = *(int *)0x8C2871D4;
    *(float *)((t149 + 0x10)) = ((*(float *)((t149 + 0x10))) / (*(float *)((((*(int *)((t149 + 0x1C))) + 0xC) + 0x0))));
    t153 = *(int *)0x8C2871D4;
    *(float *)((t153 + 0x14)) = ((*(float *)((t153 + 0x14))) / (*(float *)((((*(int *)((t153 + 0x20))) + 0xC) + 0x0))));
    t157 = *(int *)0x8C2871D4;
    *(float *)((t157 + 0x8)) = ((*(float *)((t157 + 0x8))) / (*(float *)((((*(int *)((t157 + 0x1C))) + 0xC) + 0x0))));
    t161 = *(int *)0x8C2871D4;
    *(float *)((t161 + 0xC)) = ((*(float *)((t161 + 0xC))) / (*(float *)((((*(int *)((t161 + 0x20))) + 0xC) + 0x0))));
    t165 = *(int *)0x8C2871D4;
    *(unsigned int *)((t165 + 0x2C)) = (int)((float)(*(int *)((t165 + 0x2C))) / (*(float *)((((*(int *)((t165 + 0x1C))) + 0xC) + 0x0))));
    t169 = *(int *)0x8C2871D4;
    *(unsigned int *)((t169 + 0x30)) = (int)((float)(*(int *)((t169 + 0x30))) / (*(float *)((((*(int *)((t169 + 0x20))) + 0xC) + 0x0))));
    return 0xC;
}

int nlSprPut(int a4, int a5)
{
    int t207;
    int t13;
    int t20;
    int t21;
    int t43;
    float u30;
    int t36;
    int t33;
    float u49;
    float u52;
    float t56;
    float u60;
    float u61;
    float u62;
    float u63;
    int t64;
    int t65;
    float u66;
    float u67;
    int t88;
    int t89;
    int t127;
    float u128;
    float u129;
    float u131;
    float u132;
    float u134;
    float u135;
    float u137;
    float u138;
    int t140;
    int t152;
    int t154;
    int t157;
    int t155;
    int t160;
    int t188;
    int t189;
    float u44;
    int t40;
    float u41;
    float u109;
    int t99;
    int t121;
    int t166;
    int stk[28];

    t207 = 0xFFFFFFFF;
    if ((int)(*(int *)((a4 + 0x0))) >= (int)(*(int *)0x8C454C84)) {
    } else {
        t13 = *(short *)((((*(int *)((a4 + 0x0))) << 1) + (*(int *)0x8C454C80)));
        if (t13 == -1) {
        } else {
            t20 = *(int *)((a4 + 0x30));
            t21 = *(int *)0x8C454C90;
            t43 = 0x0;
            if (t20 != 0) {
                if ((t20 != 2) && (t20 != 4)) {
                    u30 = *(float *)((a4 + 0x2C));
                    t36 = 0x1;
                    if (!(1.0f > u30)) {
                        t33 = 0x0;
                        if ((*(short *)((((((t13 << 2) << 2) << 1) + t21) + 0x14))) != 0) {
                            t33 = 0x1;
                        }
                        t36 = t33;
                    }
                    t40 = t36;
                    u41 = u30;
                } else {
                    t40 = 0x1;
                    u41 = (*(float *)((a4 + 0x2C)));
                }
                t43 = t40;
                u44 = u41;
            }
            u49 = ((*(float *)((((((t13 << 2) << 2) << 1) + t21) + 0x18))) * (*(float *)((a4 + 0x10))));
            *(float *)(((int)stk + 8)) = ((((*(float *)((((((t13 << 2) << 2) << 1) + t21) + 0x1C))) * (*(float *)((a4 + 0x14))))) * 0.5f);
            u52 = *(float *)((a4 + 0xC));
            *(float *)(((int)stk + 12)) = (nlSin((*(int *)((a4 + 0x28)))));
            t56 = nlCos((*(int *)((a4 + 0x28))));
            nlSprPutPosSet(a4, (((int)stk + 4) + 0x2C), (((int)stk + 4) + 0x1C), (u49 * 0.5f), (*(float *)(((int)stk + 8))), (*(float *)(((int)stk + 12))), t56);
            u60 = *(float *)0x8C1DCA28;
            u61 = *(float *)0x8C454C98;
            u62 = *(float *)0x8C1DCA24;
            u63 = *(float *)0x8C454C94;
            t64 = 0x4;
            t65 = 0x0;
            u66 = u60;
            u67 = u62;
            for (;;) {
                if ((unsigned int)t65 >= (unsigned int)0x10) {
                    break;
                }
                t64 = t65;
                u67 = (*(float *)(((((int)stk + 4) + 0x2C) + t64)));
                t65 = (t65 + 0x4);
                u67 = (u67 * ((u63 * u62)));
                *(float *)(((((int)stk + 4) + 0x2C) + t64)) = u67;
                u66 = (*(float *)(((((int)stk + 4) + 0x1C) + t64)));
                u66 = (u66 * ((u61 * u60)));
                *(float *)(((((int)stk + 4) + 0x1C) + t64)) = u66;
            }
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) & 0xF8FCFFFF);
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4))) & 0x1FFFFFFF);
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) & 0x3278FFF);
            if (((*(int *)((a4 + 0x34))) & 0x800) == 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x800000);
            }
            if (((*(int *)((a4 + 0x34))) & 0x1000) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x2000);
            }
            if (((*(int *)((a4 + 0x34))) & 0x10000) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x1000);
            }
            t88 = *(int *)((a4 + 0x34));
            t89 = (0x7 & ((int)t88 >> 8));
            if ((0x7 & ((int)t88 >> 8)) == 0) {
                t89 = 0x4;
            }
            *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4))) | (t89 << 29));
            if (t43 != 0) {
                if ((*(int *)((a4 + 0x30))) == 4) {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x94100000);
                    t99 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x4000000);
                } else {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | (((((*(int *)0x8C424418) ^ 0xFC) << 16) << 8) | 0x100000));
                    t99 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x2000000);
                }
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = t99;
                u109 = u44;
            } else {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | 0x20080000);
                u109 = 1.0f;
            }
            if ((0x2000 & (*(int *)((a4 + 0x34)))) != 0) {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)) = (nlSpriteF2ARGB(u109, (*(float *)0x8C1DCA70), (*(float *)0x8C1DCA74), (*(float *)0x8C1DCA78)));
            } else {
                if (((*(int *)((a4 + 0x34))) & 0x20000) != 0) {
                    t121 = ((((nlSpriteF2C(u109)) << 16) << 8) | (*(int *)((a4 + 0x38))));
                } else {
                    t121 = (nlSpriteF2ARGB(u109, 1.0f, 1.0f, 1.0f));
                }
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)) = t121;
            }
            t127 = *(int *)((a4 + 0x34));
            u128 = *(float *)((a4 + 0x18));
            u129 = *(float *)((a4 + 0x20));
            u131 = u129;
            u132 = u128;
            if ((0x10 & (t127 & 0x30)) != 0) {
                u131 = (1.0f - u129);
                u132 = (1.0f - u128);
            }
            u134 = *(float *)((a4 + 0x1C));
            u135 = *(float *)((a4 + 0x24));
            u137 = u134;
            u138 = u135;
            if (((t127 & 0x30) & 0x20) == 0) {
                u137 = (1.0f - u134);
                u138 = (1.0f - u135);
            }
            t140 = *(int *)((a4 + 0x34));
            if ((t140 & 0xC000) != 0x8000) {
                if ((t140 & 0xC000) != 0xC000) {
                } else {
                    *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x30000);
                }
            } else {
                *(unsigned int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | 0x20000);
            }
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u132;
            *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((((int)stk + 4) + 0x18) + 0x0))) & 0xFFFF0000);
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u131;
            *(unsigned int *)(((int)stk + 4)) = (0xFFFF0000 & (*(int *)(((((int)stk + 4) + 0x18) + 0x0))));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u137;
            t152 = *(int *)(((((int)stk + 4) + 0x18) + 0x0));
            *(float *)(((((int)stk + 4) + 0x18) + 0x0)) = u138;
            *(unsigned int *)(((int)stk + 16)) = ((unsigned int)(*(int *)(((((int)stk + 4) + 0x18) + 0x0))) >> 16);
            t154 = *(int *)((a4 + 0x30));
            t157 = t154;
            if (t154 == -1) {
                t155 = 0x0;
                if (t43 != 0) {
                    t155 = 0x2;
                }
                t157 = t155;
            }
            *(unsigned int *)(((int)stk + 20)) = (t157 << 2);
            t160 = *(int *)(((t157 << 2) + (*(int *)0x8C42445C)));
            *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t160 >> 16) >> 8);
            *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t160 >> 16) >> 8);
            if (((*(int *)((a4 + 0x34))) & 0x20000) != 0) {
                t166 = (((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | (*(int *)0x8C458E04)) | 0x4);
            } else {
                t166 = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x0))) | (*(int *)0x8C458E04));
            }
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x0)) = t166;
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x4)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x4)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x8)) = ((*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x8))) | (*(int *)0x8C458E08));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0xC)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0xC)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x10)) = (*(int *)((((((t13 << 2) << 2) << 1) + t21) + 0x10)));
            *(unsigned int *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x14)) = ((((nlSpriteF2C(u109)) << 16) << 8) | (*(int *)((a4 + 0x3C))));
            _builtin_prefetch((void *)((0x3FFFFFF & t160) | 0xE0000000));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x0)) = 0xF0000000;
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x4)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x0)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x8)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x0)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0xC)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x10)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x4)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x14)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x4)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x18)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x1C)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0x8)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0x8)));
            *(float *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x24)) = (1.0f / u52);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x28)) = (*(int *)(((((int)stk + 4) + 0x2C) + 0xC)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x2C)) = (*(int *)(((((int)stk + 4) + 0x1C) + 0xC)));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x30)) = (t13 | 0x53500000);
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x34)) = ((*(int *)(((int)stk + 24))) | ((unsigned int)t152 >> 16));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x38)) = (((unsigned int)t152 >> 16) | (*(int *)(((int)stk + 4))));
            *(unsigned int *)(((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x3C)) = ((*(int *)(((int)stk + 4))) | (*(int *)(((int)stk + 16))));
            _builtin_prefetch((void *)(((0x3FFFFFF & t160) | 0xE0000000) + 0x20));
            _builtin_prefetch((void *)((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20));
            t188 = *(int *)(((int)stk + 20));
            t189 = *(int *)0x8C42445C;
            *(unsigned int *)(((t188 + t189) + 0x0)) = (((*(int *)(((t188 + t189) + 0x0))) & 0xFC000000) | ((((((0x3FFFFFF & t160) | 0xE0000000) + 0x20) + 0x20) + 0x20) & 0x3FFFFFF));
        }
        t207 = 0x0;
    }
    return t207;
}
