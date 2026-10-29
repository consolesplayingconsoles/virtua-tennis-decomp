/* Straight-line functions with calls and guards (batch gen_lb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float lerpf(float, float, float);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int motionRoot(int a4);

int motionRoot(int a4)
{
    int t0;
    int t4;
    int t8;
    int t12;
    int t16;
    int t20;
    int t26;
    float u29;
    float u31;
    int t33;
    int t34;
    int t36;
    int t37;
    int t38;
    int t44;
    int t54;
    float u55;
    int t56;
    int t61;
    int t62;
    int t68;
    int t78;
    int t79;
    float u80;
    float u81;
    float u83;
    float t87;
    float u90;
    float t93;
    int t97;
    int t98;
    int t99;
    float t105;
    float u108;
    float t111;
    int t112;
    int t115;
    float t119;
    float u123;
    float t125;
    int t126;
    int t129;
    int t130;
    int t134;
    int t136;
    int t138;
    int t139;
    float t143;
    float u147;
    float t149;
    int t150;
    int t153;
    float t157;
    float u161;
    float t163;
    int t164;
    int t167;
    float t171;
    float u175;
    float t177;
    int t178;
    int t181;
    int t183;
    int t185;
    int t187;
    int t188;
    int t205;
    float t208;
    int t209;
    int t213;
    int t214;
    int t221;
    int t222;
    float t225;
    int t226;
    int t230;
    int t232;
    int t234;
    int t235;
    int t237;
    int t244;
    int t245;
    int t252;
    int t253;
    int t260;
    int t262;
    int t264;
    int t265;
    int t285;
    int t289;
    int t293;
    int t297;
    int t301;
    int t305;
    int t49;
    int t74;
    int t84;
    float u199;
    float u200;
    float u201;
    int t204;
    float u273;
    float u274;
    float u275;

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
    t26 = *(int *)(((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x10));
    u29 = *(float *)(((*(int *)0x8C2871D4) + 0x8));
    u31 = *(float *)(((*(int *)0x8C2871D4) + 0xC));
    t33 = *(int *)0x8C2871D4;
    t34 = *(int *)(((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x10));
    t36 = *(int *)((t33 + 0x54));
    t37 = *(int *)(((*(int *)((t33 + 0x20))) + 0x4));
    t38 = *(int *)0x8C2871D4;
    if ((*(int *)((t38 + 0x28))) == 1) {
        t49 = ((int)((int)((((int)u31 * t34) + a4) + t34) % (int)((*(int *)((t38 + 0x30))) * t34)));
    } else {
        t44 = ((((int)u31 * t34) + a4) + t34);
        if ((int)((((int)u31 * t34) + a4) + t34) > (int)(((*(int *)((t38 + 0x30))) - 1) * t34)) {
            t44 = ((((*(int *)((t38 + 0x30))) - 1) * t34) + a4);
        }
        t49 = t44;
    }
    t54 = *(int *)((t38 + 0x54));
    u55 = *(float *)((t38 + 0xC));
    t56 = *(int *)(((*(int *)((t38 + 0x20))) + 0x4));
    if ((*(float *)((t38 + 0x4))) != 0.0f) {
        t61 = *(int *)((t38 + 0x50));
        t62 = *(int *)(((*(int *)((t38 + 0x1C))) + 0x4));
        if ((*(int *)((t38 + 0x24))) == 1) {
            t74 = ((int)((int)((((int)u29 * t26) + a4) + t26) % (int)((*(int *)((t38 + 0x2C))) * t26)));
        } else {
            t68 = ((((int)u29 * t26) + a4) + t26);
            if ((int)((((int)u29 * t26) + a4) + t26) > (int)(((*(int *)((t38 + 0x2C))) - 1) * t26)) {
                t68 = ((((*(int *)((t38 + 0x2C))) - 1) * t26) + a4);
            }
            t74 = t68;
        }
        t78 = *(int *)((t38 + 0x50));
        t79 = *(int *)(((*(int *)((t38 + 0x1C))) + 0x4));
        u80 = *(float *)((t38 + 0x8));
        u81 = *(float *)((t38 + 0x0));
        u83 = *(float *)((t38 + 0x4));
        if (((*(int *)((t38 + 0x3C))) != 0) && (t84 = *(int *)((t38 + 0x40)), a4 == t84)) {
            t87 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x0))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x0))), (u80 - (float)(int)u80));
            u90 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x14) + 0x0));
            t93 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x0))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x0))), (u55 - (float)(int)u55));
            t97 = *(int *)0x8C2871D4;
            t98 = *(int *)((t97 + 0x48));
            t99 = *(int *)0x8C2871D4;
            *(float *)((((((((t98 << 1) + t98) << 2) << 2) + (t97 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = (lerpf(((t87 / u90) * (*(float *)((t99 + 0x10)))), ((t93 / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x14) + 0x0)))) * (*(float *)((t99 + 0x14)))), (u81 / u83)));
            t105 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x2))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x2))), (u80 - (float)(int)u80));
            u108 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x18) + 0x0));
            t111 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x2))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x2))), (u55 - (float)(int)u55));
            t112 = *(int *)0x8C2871D4;
            t115 = *(int *)((t112 + 0x48));
            *(float *)(((0x4 + ((((((t115 << 1) + t115) << 2) << 2) + (t112 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = (lerpf((t105 / u108), (t111 / (*(float *)((((*(int *)((t112 + 0x20))) + 0x18) + 0x0)))), (u81 / u83)));
            t119 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x4))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x4))), (u80 - (float)(int)u80));
            u123 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x1C) + 0x0));
            t125 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x4))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x4))), (u55 - (float)(int)u55));
            t126 = *(int *)0x8C2871D4;
            t129 = *(int *)((t126 + 0x48));
            t130 = *(int *)0x8C2871D4;
            *(float *)(((0x8 + ((((((t129 << 1) + t129) << 2) << 2) + (t126 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = (-(lerpf(((t119 / u123) * (*(float *)((t130 + 0x10)))), ((t125 / (*(float *)((((*(int *)((t126 + 0x20))) + 0x1C) + 0x0)))) * (*(float *)((t130 + 0x14)))), (u81 / u83))));
            t134 = *(int *)0x8C2871D4;
            t136 = *(int *)((t134 + 0x48));
            nlScaleVector((((t134 + 0x60) + ((((t136 << 1) + t136) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (((t134 + 0x60) + ((((t136 << 1) + t136) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (*(float *)((t134 + 0x4C))));
            t138 = *(int *)0x8C2871D4;
            t139 = *(int *)((t138 + 0x48));
            u199 = 0.0f;
            u200 = (*(float *)((((((((t139 << 1) + t139) << 2) << 2) + (t138 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4)));
            u201 = 0.0f;
        } else {
            t143 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x0))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x0))), (u80 - (float)(int)u80));
            u147 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x14) + 0x0));
            t149 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x0))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x0))), (u55 - (float)(int)u55));
            t150 = *(int *)0x8C2871D4;
            t153 = *(int *)((t150 + 0x48));
            *(float *)((((((((t153 << 1) + t153) << 2) << 2) + (t150 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = (lerpf((t143 / u147), (t149 / (*(float *)((((*(int *)((t150 + 0x20))) + 0x14) + 0x0)))), (u81 / u83)));
            t157 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x2))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x2))), (u80 - (float)(int)u80));
            u161 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x18) + 0x0));
            t163 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x2))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x2))), (u55 - (float)(int)u55));
            t164 = *(int *)0x8C2871D4;
            t167 = *(int *)((t164 + 0x48));
            *(float *)(((0x4 + ((((((t167 << 1) + t167) << 2) << 2) + (t164 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = (lerpf((t157 / u161), (t163 / (*(float *)((((*(int *)((t164 + 0x20))) + 0x18) + 0x0)))), (u81 / u83)));
            t171 = lerpf((float)(*(short *)((((t61 + t62) + (((((int)u29 * t26) + a4) << 1) + ((((int)u29 * t26) + a4) << 2))) + 0x4))), (float)(*(short *)((((t78 + t79) + ((t74 << 1) + (t74 << 2))) + 0x4))), (u80 - (float)(int)u80));
            u175 = *(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x1C))) + 0x1C) + 0x0));
            t177 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x4))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x4))), (u55 - (float)(int)u55));
            t178 = *(int *)0x8C2871D4;
            t181 = *(int *)((t178 + 0x48));
            *(float *)(((0x8 + ((((((t181 << 1) + t181) << 2) << 2) + (t178 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = (-(lerpf((t171 / u175), (t177 / (*(float *)((((*(int *)((t178 + 0x20))) + 0x1C) + 0x0)))), (u81 / u83))));
            t183 = *(int *)0x8C2871D4;
            t185 = *(int *)((t183 + 0x48));
            nlScaleVector((((t183 + 0x60) + ((((t185 << 1) + t185) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (((t183 + 0x60) + ((((t185 << 1) + t185) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (*(float *)((t183 + 0x4C))));
            t187 = *(int *)0x8C2871D4;
            t188 = *(int *)((t187 + 0x48));
            u199 = (*(float *)(((((t187 + 0x60) + ((((t188 << 1) + t188) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x0)));
            u200 = (*(float *)(((((t187 + 0x60) + ((((t188 << 1) + t188) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x4)));
            u201 = (*(float *)(((((t187 + 0x60) + ((((t188 << 1) + t188) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x8)));
        }
        nlTranslate(u199, u200, u201);
    } else {
        if (((*(int *)((t38 + 0x3C))) != 0) && (t204 = *(int *)((t38 + 0x40)), a4 == t204)) {
            t205 = *(int *)((t38 + 0x48));
            t208 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x0))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x0))), (u55 - (float)(int)u55));
            t209 = *(int *)0x8C2871D4;
            *(float *)((((((((t205 << 1) + t205) << 2) << 2) + (t38 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = ((t208 * (*(float *)((t209 + 0x14)))) / (*(float *)((((*(int *)((t209 + 0x20))) + 0x14) + 0x0))));
            t213 = *(int *)0x8C2871D4;
            t214 = *(int *)((t213 + 0x48));
            *(float *)(((0x4 + ((((((t214 << 1) + t214) << 2) << 2) + (t213 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x2))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x2))), (u55 - (float)(int)u55))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x18) + 0x0))));
            t221 = *(int *)0x8C2871D4;
            t222 = *(int *)((t221 + 0x48));
            t225 = lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x4))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x4))), (u55 - (float)(int)u55));
            t226 = *(int *)0x8C2871D4;
            *(float *)(((0x8 + ((((((t222 << 1) + t222) << 2) << 2) + (t221 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((-(t225 * (*(float *)((t226 + 0x14))))) / (*(float *)((((*(int *)((t226 + 0x20))) + 0x1C) + 0x0))));
            t230 = *(int *)0x8C2871D4;
            t232 = *(int *)((t230 + 0x48));
            nlScaleVector((((t230 + 0x60) + ((((t232 << 1) + t232) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (((t230 + 0x60) + ((((t232 << 1) + t232) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (*(float *)((t230 + 0x4C))));
            t234 = *(int *)0x8C2871D4;
            t235 = *(int *)((t234 + 0x48));
            u273 = 0.0f;
            u274 = (*(float *)((((((((t235 << 1) + t235) << 2) << 2) + (t234 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x4)));
            u275 = 0.0f;
        } else {
            t237 = *(int *)((t38 + 0x48));
            *(float *)((((((((t237 << 1) + t237) << 2) << 2) + (t38 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = ((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x0))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x0))), (u55 - (float)(int)u55))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x14) + 0x0))));
            t244 = *(int *)0x8C2871D4;
            t245 = *(int *)((t244 + 0x48));
            *(float *)(((0x4 + ((((((t245 << 1) + t245) << 2) << 2) + (t244 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x2))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x2))), (u55 - (float)(int)u55))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x18) + 0x0))));
            t252 = *(int *)0x8C2871D4;
            t253 = *(int *)((t252 + 0x48));
            *(float *)(((0x8 + ((((((t253 << 1) + t253) << 2) << 2) + (t252 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((-(lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x4))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x4))), (u55 - (float)(int)u55)))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x1C) + 0x0))));
            t260 = *(int *)0x8C2871D4;
            t262 = *(int *)((t260 + 0x48));
            nlScaleVector((((t260 + 0x60) + ((((t262 << 1) + t262) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (((t260 + 0x60) + ((((t262 << 1) + t262) << 2) << 2)) + (((a4 << 1) + a4) << 2)), (*(float *)((t260 + 0x4C))));
            t264 = *(int *)0x8C2871D4;
            t265 = *(int *)((t264 + 0x48));
            u273 = (*(float *)(((((t264 + 0x60) + ((((t265 << 1) + t265) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x0)));
            u274 = (*(float *)(((((t264 + 0x60) + ((((t265 << 1) + t265) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x4)));
            u275 = (*(float *)(((((t264 + 0x60) + ((((t265 << 1) + t265) << 2) << 2)) + (((a4 << 1) + a4) << 2)) + 0x8)));
        }
        nlTranslate(u273, u274, u275);
    }
    t285 = *(int *)0x8C2871D4;
    *(float *)((t285 + 0x10)) = ((*(float *)((t285 + 0x10))) / (*(float *)((((*(int *)((t285 + 0x1C))) + 0xC) + 0x0))));
    t289 = *(int *)0x8C2871D4;
    *(float *)((t289 + 0x14)) = ((*(float *)((t289 + 0x14))) / (*(float *)((((*(int *)((t289 + 0x20))) + 0xC) + 0x0))));
    t293 = *(int *)0x8C2871D4;
    *(float *)((t293 + 0x8)) = ((*(float *)((t293 + 0x8))) / (*(float *)((((*(int *)((t293 + 0x1C))) + 0xC) + 0x0))));
    t297 = *(int *)0x8C2871D4;
    *(float *)((t297 + 0xC)) = ((*(float *)((t297 + 0xC))) / (*(float *)((((*(int *)((t297 + 0x20))) + 0xC) + 0x0))));
    t301 = *(int *)0x8C2871D4;
    *(unsigned int *)((t301 + 0x2C)) = (int)((float)(*(int *)((t301 + 0x2C))) / (*(float *)((((*(int *)((t301 + 0x1C))) + 0xC) + 0x0))));
    t305 = *(int *)0x8C2871D4;
    *(unsigned int *)((t305 + 0x30)) = (int)((float)(*(int *)((t305 + 0x30))) / (*(float *)((((*(int *)((t305 + 0x20))) + 0xC) + 0x0))));
    return 0xC;
}
