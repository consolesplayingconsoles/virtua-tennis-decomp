/* Straight-line functions with calls and guards (batch gen_ek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int angleLerp(int, int, float);
int colliObjEntry(int);
int effFootDust(int, int, int, int, int, int, int, int, int);
int kmBlankScreen(int);
int kmiFLWCTRLGetFBLockStatus(int);
int kmiSetupRender(int, int);
int kmyGenerateRegionArray(int, int, int, int, int, int, int, int, int, int, int, int);
int kmyIsDisplayOddField(void);
int kmyResetRenderer(void);
int kmySetDitherMode(int, int);
int kmySetFlickerFilterMode(int, int);
int kmySetPixelClippingX(int, int, int);
int kmySetPixelClippingY(int, int, int);
int kmySetRegionArrayCallback(int, int);
int kmySetVirticalFilterMode(int, int);
int kmyStartRender(int, int);
int kmyStartRenderTexture(int, int, int);
int kmyUpdateFogParameter(void);
int kmyUpdatePalette(void);
float lerpf(float, float, float);
int motionAngleBlend(int, int);
int motionRootAtFrame(int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int nlAddVector(int, int);
int nlCalcPoint(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleVector(int, int, float);
int nlTranslate(float, float, float);
int perfPrint(void);
int playerPut(int, int, int, int, int, int, int, int, int, int, int, int);
int shadowPlayerDraw(int, int, int, int, int, int);
int motionRoot(int a4);
int motionRotate(int a4);
int motionRotate2(int a4);
int playerExec(int a4, int a5, int a6, int a7);
int kmiFLWCTRLStartRenderEntry(int a4);

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
    int t209;
    int t213;
    int t214;
    int t221;
    int t222;
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
            t209 = *(int *)0x8C2871D4;
            *(float *)((((((((t205 << 1) + t205) << 2) << 2) + (t38 + 0x60)) + (((a4 << 1) + a4) << 2)) + 0x0)) = (((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x0))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x0))), (u55 - (float)(int)u55))) * (*(float *)((t209 + 0x14)))) / (*(float *)((((*(int *)((t209 + 0x20))) + 0x14) + 0x0))));
            t213 = *(int *)0x8C2871D4;
            t214 = *(int *)((t213 + 0x48));
            *(float *)(((0x4 + ((((((t214 << 1) + t214) << 2) << 2) + (t213 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x2))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x2))), (u55 - (float)(int)u55))) / (*(float *)((((*(int *)(((*(int *)0x8C2871D4) + 0x20))) + 0x18) + 0x0))));
            t221 = *(int *)0x8C2871D4;
            t222 = *(int *)((t221 + 0x48));
            t226 = *(int *)0x8C2871D4;
            *(float *)(((0x8 + ((((((t222 << 1) + t222) << 2) << 2) + (t221 + 0x60)) + (((a4 << 1) + a4) << 2))) + 0x0)) = ((-((lerpf((float)(*(short *)((((t36 + t37) + (((((int)u31 * t34) + a4) << 1) + ((((int)u31 * t34) + a4) << 2))) + 0x4))), (float)(*(short *)(((((t49 << 1) + (t49 << 2)) + (t54 + t56)) + 0x4))), (u55 - (float)(int)u55))) * (*(float *)((t226 + 0x14))))) / (*(float *)((((*(int *)((t226 + 0x20))) + 0x1C) + 0x0))));
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

int motionRotate(int a4)
{
    int t0;
    int t4;
    int t8;
    int t12;
    int t16;
    int t20;
    int t24;
    int t26;
    int t27;
    int t28;
    float u29;
    int t33;
    int t34;
    float u40;
    int t42;
    int t52;
    int t53;
    float u57;
    int t58;
    float u62;
    int t67;
    float u73;
    int t75;
    int t90;
    float u91;
    int t101;
    int t102;
    int t114;
    int t115;
    int t127;
    int t128;
    int t132;
    int t138;
    int t139;
    int t142;
    int t143;
    int t146;
    int t147;
    int t148;
    int t149;
    int t152;
    int t153;
    int t156;
    int t157;
    int t164;
    int t168;
    int t169;
    int t173;
    int t174;
    int t178;
    int t184;
    int t185;
    int t188;
    int t189;
    int t192;
    int t193;
    int t194;
    int t195;
    int t198;
    int t199;
    int t202;
    int t203;
    int t214;
    int t218;
    int t222;
    int t226;
    int t230;
    int t234;
    int t47;
    int t80;
    int t159;
    int t160;
    int t205;
    int t206;
    int stk[17];

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
    t24 = *(int *)0x8C2871D4;
    t26 = *(int *)(((*(int *)((t24 + 0x20))) + 0x8));
    t27 = *(int *)0x8C2871D4;
    t28 = *(int *)((t24 + 0x54));
    u29 = *(float *)((t27 + 0xC));
    t33 = *(int *)0x8C2871D4;
    t34 = *(int *)((((*(int *)((t27 + 0x58))) + (*(int *)(((*(int *)((t27 + 0x34))) + 0x4)))) + 0x0));
    if ((*(int *)((t33 + 0x28))) == 1) {
        t47 = ((int)((int)(int)((*(float *)((t33 + 0xC))) + 1.0f) % (int)(*(int *)((t33 + 0x30)))));
    } else {
        u40 = *(float *)((t33 + 0xC));
        t42 = (int)(u40 + 1.0f);
        if ((int)(int)(u40 + 1.0f) > (int)((*(int *)((t33 + 0x30))) - 1)) {
            t42 = ((*(int *)((t33 + 0x30))) - 1);
        }
        t47 = t42;
    }
    t52 = *(int *)((t33 + 0x54));
    t53 = *(int *)(((*(int *)((t33 + 0x20))) + 0x8));
    u57 = *(float *)((t33 + 0xC));
    t58 = *(int *)((((*(int *)((t33 + 0x58))) + (*(int *)(((*(int *)((t33 + 0x34))) + 0x4)))) + 0x0));
    *(unsigned int *)(((int)stk + 24)) = (a4 << 2);
    if ((*(float *)((t33 + 0x4))) != 0.0f) {
        u62 = *(float *)((t33 + 0x8));
        t67 = *(int *)(((*(int *)(((*(int *)((t33 + 0x34))) + 0x4))) + (*(int *)((t33 + 0x58)))));
        *(unsigned int *)(((int)stk + 12)) = ((((*(int *)((t33 + 0x50))) + (*(int *)(((*(int *)((t33 + 0x1C))) + 0x8)))) + ((((int)u62 * t67) << 1) + (((int)u62 * t67) << 2))) + ((a4 << 1) + (a4 << 2)));
        if ((*(int *)((t33 + 0x24))) == 1) {
            t80 = ((int)((int)(int)((*(float *)((t33 + 0x8))) + 1.0f) % (int)(*(int *)((t33 + 0x2C)))));
        } else {
            u73 = *(float *)((t33 + 0x8));
            t75 = (int)(u73 + 1.0f);
            if ((int)(int)(u73 + 1.0f) > (int)((*(int *)((t33 + 0x2C))) - 1)) {
                t75 = ((*(int *)((t33 + 0x2C))) - 1);
            }
            t80 = t75;
        }
        t90 = *(int *)((((*(int *)((t33 + 0x58))) + (*(int *)(((*(int *)((t33 + 0x34))) + 0x4)))) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = ((((*(int *)((t33 + 0x50))) + (*(int *)(((*(int *)((t33 + 0x1C))) + 0x8)))) + (((t80 * t90) << 1) + ((t80 * t90) << 2))) + ((a4 << 1) + (a4 << 2)));
        u91 = *(float *)((t33 + 0x8));
        *(float *)0x8C2873F4 = (1.0f / (*(float *)((t33 + 0x4))));
        *(unsigned short *)(((int)stk + 16)) = (angleLerp((*(short *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x0))), (u91 - (float)(int)u91)));
        *(unsigned short *)(((int)stk + 20)) = (angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x0))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x0))), (u57 - (float)(int)u57)));
        t101 = *(int *)0x8C2871D4;
        t102 = *(int *)((t101 + 0x48));
        *(unsigned short *)(((((((((t102 << 2) << 1) + t102) << 2) << 2) + (t101 + 0xC0)) + ((a4 << 1) + (a4 << 2))) + 0x0)) = (motionAngleBlend((*(short *)(((int)stk + 16))), (*(short *)(((int)stk + 20)))));
        *(unsigned short *)(((int)stk + 20)) = (angleLerp((*(short *)(((*(int *)(((int)stk + 12))) + 0x2))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x2))), (u91 - (float)(int)u91)));
        *(unsigned short *)(((int)stk + 16)) = (angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))), (u57 - (float)(int)u57)));
        t114 = *(int *)0x8C2871D4;
        t115 = *(int *)((t114 + 0x48));
        *(unsigned short *)(((0x2 + (((((((t115 << 2) << 1) + t115) << 2) << 2) + (t114 + 0xC0)) + ((a4 << 1) + (a4 << 2)))) + 0x0)) = (motionAngleBlend((*(short *)(((int)stk + 20))), (*(short *)(((int)stk + 16)))));
        *(unsigned short *)(((int)stk + 12)) = (angleLerp((*(short *)(((*(int *)(((int)stk + 12))) + 0x4))), (*(short *)(((*(int *)(((int)stk + 8))) + 0x4))), (u91 - (float)(int)u91)));
        *(unsigned short *)(((int)stk + 8)) = (angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4))), (u57 - (float)(int)u57)));
        t127 = *(int *)0x8C2871D4;
        t128 = *(int *)((t127 + 0x48));
        *(unsigned short *)(((0x4 + (((((((t128 << 2) << 1) + t128) << 2) << 2) + (t127 + 0xC0)) + ((a4 << 1) + (a4 << 2)))) + 0x0)) = (-(motionAngleBlend((*(short *)(((int)stk + 12))), (*(short *)(((int)stk + 8))))));
        t132 = *(int *)0x8C2871D4;
        if ((*(int *)((((*(int *)((t132 + 0x58))) + (*(int *)(((*(int *)((t132 + 0x34))) + 0x0)))) + (*(int *)(((int)stk + 24)))))) != 0) {
            t138 = *(int *)0x8C2871D4;
            t139 = *(int *)((t138 + 0x48));
            nlRotateAZ((*(short *)(((((t138 + 0xC0) + (((((t139 << 2) << 1) + t139) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x4))));
            t142 = *(int *)0x8C2871D4;
            t143 = *(int *)((t142 + 0x48));
            nlRotateAY((*(short *)(((((t142 + 0xC0) + (((((t143 << 2) << 1) + t143) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x2))));
            t146 = *(int *)0x8C2871D4;
            t147 = *(int *)((t146 + 0x48));
            t159 = (((t147 << 2) << 1) + t147);
            t160 = t146;
        } else {
            t148 = *(int *)0x8C2871D4;
            t149 = *(int *)((t148 + 0x48));
            nlRotateAY((*(short *)(((((t148 + 0xC0) + (((((t149 << 2) << 1) + t149) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x2))));
            t152 = *(int *)0x8C2871D4;
            t153 = *(int *)((t152 + 0x48));
            nlRotateAZ((*(short *)(((((t152 + 0xC0) + (((((t153 << 2) << 1) + t153) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x4))));
            t156 = *(int *)0x8C2871D4;
            t157 = *(int *)((t156 + 0x48));
            t159 = (((t157 << 2) << 1) + t157);
            t160 = t156;
        }
        nlRotateAX((*(short *)(((((t160 + 0xC0) + ((t159 << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x0))));
    } else {
        t164 = *(int *)((t33 + 0x48));
        *(unsigned short *)(((((((((t164 << 2) << 1) + t164) << 2) << 2) + (0xC0 + t33)) + ((a4 << 1) + (a4 << 2))) + 0x0)) = (angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x0))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x0))), (u57 - (float)(int)u57)));
        t168 = *(int *)0x8C2871D4;
        t169 = *(int *)((t168 + 0x48));
        *(unsigned short *)(((0x2 + (((((((t169 << 2) << 1) + t169) << 2) << 2) + (t168 + 0xC0)) + ((a4 << 1) + (a4 << 2)))) + 0x0)) = (angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x2))), (u57 - (float)(int)u57)));
        t173 = *(int *)0x8C2871D4;
        t174 = *(int *)((t173 + 0x48));
        *(unsigned short *)(((0x4 + (((((((t174 << 2) << 1) + t174) << 2) << 2) + (t173 + 0xC0)) + ((a4 << 1) + (a4 << 2)))) + 0x0)) = (-(angleLerp((*(short *)(((((t28 + t26) + ((((int)u29 * t34) << 1) + (((int)u29 * t34) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4))), (*(short *)(((((t52 + t53) + (((t47 * t58) << 1) + ((t47 * t58) << 2))) + ((a4 << 1) + (a4 << 2))) + 0x4))), (u57 - (float)(int)u57))));
        t178 = *(int *)0x8C2871D4;
        if ((*(int *)((((*(int *)((t178 + 0x58))) + (*(int *)(((*(int *)((t178 + 0x34))) + 0x0)))) + (*(int *)(((int)stk + 24)))))) != 0) {
            t184 = *(int *)0x8C2871D4;
            t185 = *(int *)((t184 + 0x48));
            nlRotateAZ((*(short *)(((((t184 + 0xC0) + (((((t185 << 2) << 1) + t185) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x4))));
            t188 = *(int *)0x8C2871D4;
            t189 = *(int *)((t188 + 0x48));
            nlRotateAY((*(short *)(((((t188 + 0xC0) + (((((t189 << 2) << 1) + t189) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x2))));
            t192 = *(int *)0x8C2871D4;
            t193 = *(int *)((t192 + 0x48));
            t205 = (((t193 << 2) << 1) + t193);
            t206 = t192;
        } else {
            t194 = *(int *)0x8C2871D4;
            t195 = *(int *)((t194 + 0x48));
            nlRotateAY((*(short *)(((((t194 + 0xC0) + (((((t195 << 2) << 1) + t195) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x2))));
            t198 = *(int *)0x8C2871D4;
            t199 = *(int *)((t198 + 0x48));
            nlRotateAZ((*(short *)(((((t198 + 0xC0) + (((((t199 << 2) << 1) + t199) << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x4))));
            t202 = *(int *)0x8C2871D4;
            t203 = *(int *)((t202 + 0x48));
            t205 = (((t203 << 2) << 1) + t203);
            t206 = t202;
        }
        nlRotateAX((*(short *)(((((t206 + 0xC0) + ((t205 << 2) << 2)) + ((a4 << 1) + (a4 << 2))) + 0x0))));
    }
    t214 = *(int *)0x8C2871D4;
    *(float *)((t214 + 0x10)) = ((*(float *)((t214 + 0x10))) / (*(float *)((((*(int *)((t214 + 0x1C))) + 0xC) + 0x0))));
    t218 = *(int *)0x8C2871D4;
    *(float *)((t218 + 0x14)) = ((*(float *)((t218 + 0x14))) / (*(float *)((((*(int *)((t218 + 0x20))) + 0xC) + 0x0))));
    t222 = *(int *)0x8C2871D4;
    *(float *)((t222 + 0x8)) = ((*(float *)((t222 + 0x8))) / (*(float *)((((*(int *)((t222 + 0x1C))) + 0xC) + 0x0))));
    t226 = *(int *)0x8C2871D4;
    *(float *)((t226 + 0xC)) = ((*(float *)((t226 + 0xC))) / (*(float *)((((*(int *)((t226 + 0x20))) + 0xC) + 0x0))));
    t230 = *(int *)0x8C2871D4;
    *(unsigned int *)((t230 + 0x2C)) = (int)((float)(*(int *)((t230 + 0x2C))) / (*(float *)((((*(int *)((t230 + 0x1C))) + 0xC) + 0x0))));
    t234 = *(int *)0x8C2871D4;
    *(unsigned int *)((t234 + 0x30)) = (int)((float)(*(int *)((t234 + 0x30))) / (*(float *)((((*(int *)((t234 + 0x20))) + 0xC) + 0x0))));
    return 0xC;
}

int motionRotate2(int a4)
{
    int t0;
    int t4;
    int t8;
    int t12;
    int t16;
    int t20;
    int t24;
    int t26;
    int t27;
    int t28;
    int t29;
    float u30;
    int t34;
    int t35;
    float u41;
    int t43;
    int t53;
    int t54;
    float u58;
    int t59;
    int t61;
    int t62;
    int t67;
    int t68;
    int t72;
    int t73;
    int t78;
    int t80;
    int t83;
    int t84;
    int t89;
    int t91;
    int t94;
    int t100;
    int t103;
    int t104;
    int t107;
    int t108;
    int t109;
    int t112;
    int t113;
    int t116;
    int t117;
    int t124;
    int t128;
    int t132;
    int t136;
    int t140;
    int t144;
    int t48;
    int t119;
    int t120;
    int stk[11];

    *(unsigned int *)(((int)stk + 12)) = a4;
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
    t24 = *(int *)0x8C2871D4;
    t26 = *(int *)((t24 + 0x54));
    t27 = *(int *)(((*(int *)((t24 + 0x20))) + 0x8));
    t28 = *(int *)0x8C2871D4;
    t29 = *(int *)(((int)stk + 12));
    u30 = *(float *)((t28 + 0xC));
    t34 = *(int *)0x8C2871D4;
    t35 = *(int *)((((*(int *)((t28 + 0x58))) + (*(int *)(((*(int *)((t28 + 0x34))) + 0x4)))) + 0x0));
    if ((*(int *)((t34 + 0x28))) == 1) {
        t48 = ((int)((int)(int)((*(float *)((t34 + 0xC))) + 1.0f) % (int)(*(int *)((t34 + 0x30)))));
    } else {
        u41 = *(float *)((t34 + 0xC));
        t43 = (int)(u41 + 1.0f);
        if ((int)(int)(u41 + 1.0f) > (int)((*(int *)((t34 + 0x30))) - 1)) {
            t43 = ((*(int *)((t34 + 0x30))) - 1);
        }
        t48 = t43;
    }
    t53 = *(int *)((t34 + 0x54));
    t54 = *(int *)(((*(int *)((t34 + 0x20))) + 0x8));
    u58 = *(float *)((t34 + 0xC));
    t59 = *(int *)((((*(int *)((t34 + 0x58))) + (*(int *)(((*(int *)((t34 + 0x34))) + 0x4)))) + 0x0));
    *(float *)0x8C2873F4 = (1.0f / (*(float *)((t34 + 0x4))));
    t61 = *(int *)0x8C2871D4;
    t62 = *(int *)((t61 + 0x48));
    *(unsigned short *)(((int)stk + 4)) = (*(short *)(((((((((((-t62) + 0x1) << 2) << 1) + ((-t62) + 0x1)) << 2) << 2) + (t61 + 0xC0)) + ((t29 << 1) + (t29 << 2))) + 0x0)));
    *(unsigned short *)(((int)stk + 8)) = (angleLerp((*(short *)(((((t26 + t27) + ((((int)u30 * t35) << 1) + (((int)u30 * t35) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x0))), (*(short *)(((((t53 + t54) + (((t48 * t59) << 1) + ((t48 * t59) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x0))), (u58 - (float)(int)u58)));
    t67 = *(int *)0x8C2871D4;
    t68 = *(int *)((t67 + 0x48));
    *(unsigned short *)(((((((((t68 << 2) << 1) + t68) << 2) << 2) + (t67 + 0xC0)) + ((t29 << 1) + (t29 << 2))) + 0x0)) = (motionAngleBlend((*(short *)(((int)stk + 4))), (*(short *)(((int)stk + 8)))));
    t72 = *(int *)0x8C2871D4;
    t73 = *(int *)(((0x48 + t72) + 0x0));
    *(unsigned short *)(((int)stk + 8)) = (*(short *)(((((t72 + 0xC0) + (((((((-t73) + 0x1) << 2) << 1) + ((-t73) + 0x1)) << 2) << 2)) + ((t29 << 1) + (t29 << 2))) + 0x2)));
    *(unsigned short *)(((int)stk + 4)) = (angleLerp((*(short *)(((((t26 + t27) + ((((int)u30 * t35) << 1) + (((int)u30 * t35) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x2))), (*(short *)(((((t53 + t54) + (((t48 * t59) << 1) + ((t48 * t59) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x2))), (u58 - (float)(int)u58)));
    t78 = *(int *)0x8C2871D4;
    t80 = *(int *)((t78 + 0x48));
    *(unsigned short *)((((((((((t80 << 2) << 1) + t80) << 2) << 2) + (t78 + 0xC0)) + ((t29 << 1) + (t29 << 2))) + 0x2) + 0x0)) = (motionAngleBlend((*(short *)(((int)stk + 8))), (*(short *)(((int)stk + 4)))));
    t83 = *(int *)0x8C2871D4;
    t84 = *(int *)(((0x48 + t83) + 0x0));
    *(unsigned short *)(((int)stk + 8)) = (-(*(short *)(((((t83 + 0xC0) + (((((((-t84) + 0x1) << 2) << 1) + ((-t84) + 0x1)) << 2) << 2)) + ((t29 << 1) + (t29 << 2))) + 0x4))));
    *(unsigned short *)(((int)stk + 4)) = (angleLerp((*(short *)(((((t26 + t27) + ((((int)u30 * t35) << 1) + (((int)u30 * t35) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x4))), (*(short *)(((((t53 + t54) + (((t48 * t59) << 1) + ((t48 * t59) << 2))) + ((t29 << 1) + (t29 << 2))) + 0x4))), (u58 - (float)(int)u58)));
    t89 = *(int *)0x8C2871D4;
    t91 = *(int *)((t89 + 0x48));
    *(unsigned short *)((((((((((t91 << 2) << 1) + t91) << 2) << 2) + (t89 + 0xC0)) + ((t29 << 1) + (t29 << 2))) + 0x4) + 0x0)) = (-(motionAngleBlend((*(short *)(((int)stk + 8))), (*(short *)(((int)stk + 4))))));
    t94 = *(int *)0x8C2871D4;
    if ((*(int *)((((*(int *)(((int)stk + 12))) << 2) + ((*(int *)((0x58 + t94))) + (*(int *)(((*(int *)((t94 + 0x34))) + 0x0))))))) != 0) {
        t100 = *(int *)((t94 + 0x48));
        nlRotateAZ((*(short *)(((((((((t100 << 2) << 1) + t100) << 2) << 2) + (0xC0 + t94)) + ((t29 << 1) + (t29 << 2))) + 0x4))));
        t103 = *(int *)0x8C2871D4;
        t104 = *(int *)((t103 + 0x48));
        nlRotateAY((*(short *)(((((t103 + 0xC0) + (((((t104 << 2) << 1) + t104) << 2) << 2)) + ((t29 << 1) + (t29 << 2))) + 0x2))));
        t107 = *(int *)0x8C2871D4;
        t108 = *(int *)((t107 + 0x48));
        t119 = (((t108 << 2) << 1) + t108);
        t120 = t107;
    } else {
        t109 = *(int *)((t94 + 0x48));
        nlRotateAY((*(short *)(((((((((t109 << 2) << 1) + t109) << 2) << 2) + (0xC0 + t94)) + ((t29 << 1) + (t29 << 2))) + 0x2))));
        t112 = *(int *)0x8C2871D4;
        t113 = *(int *)((t112 + 0x48));
        nlRotateAZ((*(short *)(((((t112 + 0xC0) + (((((t113 << 2) << 1) + t113) << 2) << 2)) + ((t29 << 1) + (t29 << 2))) + 0x4))));
        t116 = *(int *)0x8C2871D4;
        t117 = *(int *)((t116 + 0x48));
        t119 = (((t117 << 2) << 1) + t117);
        t120 = t116;
    }
    nlRotateAX((*(short *)(((((t120 + 0xC0) + ((t119 << 2) << 2)) + ((t29 << 1) + (t29 << 2))) + 0x0))));
    t124 = *(int *)0x8C2871D4;
    *(float *)((t124 + 0x10)) = ((*(float *)((t124 + 0x10))) / (*(float *)((((*(int *)((t124 + 0x1C))) + 0xC) + 0x0))));
    t128 = *(int *)0x8C2871D4;
    *(float *)((t128 + 0x14)) = ((*(float *)((t128 + 0x14))) / (*(float *)((((*(int *)((t128 + 0x20))) + 0xC) + 0x0))));
    t132 = *(int *)0x8C2871D4;
    *(float *)((t132 + 0x8)) = ((*(float *)((t132 + 0x8))) / (*(float *)((((*(int *)((t132 + 0x1C))) + 0xC) + 0x0))));
    t136 = *(int *)0x8C2871D4;
    *(float *)((t136 + 0xC)) = ((*(float *)((t136 + 0xC))) / (*(float *)((((*(int *)((t136 + 0x20))) + 0xC) + 0x0))));
    t140 = *(int *)0x8C2871D4;
    *(unsigned int *)((t140 + 0x2C)) = (int)((float)(*(int *)((t140 + 0x2C))) / (*(float *)((((*(int *)((t140 + 0x1C))) + 0xC) + 0x0))));
    t144 = *(int *)0x8C2871D4;
    *(unsigned int *)((t144 + 0x30)) = (int)((float)(*(int *)((t144 + 0x30))) / (*(float *)((((*(int *)((t144 + 0x20))) + 0xC) + 0x0))));
    return 0xC;
}

int playerExec(int a4, int a5, int a6, int a7)
{
    int t21;
    int t36;
    float u99;
    float u101;
    int t131;
    float u14;
    int t22;
    int t81;
    int t96;
    int stk[155];

    if (((*(int *)0x8C295DDC) & 32) != 0) {
        motionRootAtFrame(a4, (int)(*(float *)((a4 + 0xC))), a6, a7, (((int)stk + 8) + 0x28));
        if ((float)(int)(*(float *)((a4 + 0xC))) > (*(float *)0x8C23D204)) {
            nlScaleVector((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28), (*(float *)((a4 + 0x14))));
        }
        if (((*(int *)0x8C287C60) == 0) && (u14 = *(float *)((a4 + 0x14)), u14 != 0.0f)) {
            nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
        }
        *(unsigned short *)((a4 + 0xB06)) = 0x0;
    } else {
        t21 = *(int *)((a4 + 0xB60));
        if (((0x400 & t21) == 0) && (((0x40 & t21) == 0) || (t22 = *(int *)((a4 + 0xC98)), (int)t22 < (int)0xD))) {
            nlPushMatrix(0x0);
            nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
            nlRotateAY((*(short *)((a4 + 0xB06))));
            motionSetCurrent(a4);
            motionRootBone(0x0, 0x5, 0x0, 0x0, *(int *)((int)stk + 8));
            nlPopMatrix(0x1);
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0xB06))));
            t36 = *(int *)((a4 + 0x48));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 8) + 0x1C)) = *(struct mv3 *)((((((t36 << 1) + t36) << 2) << 2) + (a4 + 0x60))); }
            *(float *)(((int)stk + 40)) = 0.0f;
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) * (-1.0f));
            }
            nlCalcPoint((((int)stk + 8) + 0x1C), (((int)stk + 8) + 0x28));
            nlPopMatrix(0x1);
            if ((*(int *)0x8C287C60) == 0) {
                nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
            }
        } else {
            nlPushUnitMatrix();
            nlRotateAY((*(short *)((a4 + 0xB06))));
            motionRootAtFrame(a4, (int)(*(float *)((a4 + 0xC))), 0x0, 0x0, (((int)stk + 8) + 0x28));
            if ((*(int *)((a4 + 0xD4C))) != 0) {
                *(float *)(((int)stk + 48)) = ((*(float *)(((int)stk + 48))) * (-1.0f));
            }
            nlCalcPoint((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28));
            nlPopMatrix(0x1);
            nlScaleVector((((int)stk + 8) + 0x28), (((int)stk + 8) + 0x28), (*(float *)((a4 + 0x14))));
            if ((*(int *)0x8C287C60) == 0) {
                nlAddVector((0xAE8 + a4), (((int)stk + 8) + 0x28));
            }
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCF4 + a4)) = *(struct mv3 *)((((int)stk + 8) + 0x28)); }
    }
    if ((*(int *)0x8C287D5C) != 3) {
        if ((((*(int *)((a4 + 0xA78))) & 1) != 0) && (t81 = *(int *)((a4 + 0xD40)), t81 == 0x8C01DE1A)) {
            *(float *)((a4 + 0xA5C)) = 0.0f;
            nlAddVector((0xAE8 + a4), (0xA58 + a4));
        }
        colliObjEntry((0xA40 + a4));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0xA4C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    }
    if ((((*(int *)0x8C295DDC) & 32) == 0) && (t96 = *(int *)0x8C287B3C, (t96 & 64) == 0)) {
        u99 = *(float *)((a4 + 0xAF0));
        u101 = (-u99);
        if (!(0.0f > u99)) {
            u101 = (*(float *)((a4 + 0xAF0)));
        }
        if ((*(float *)0x8C025D24) > u101) {
            *(float *)((a4 + 0xAF0)) = (-((*(float *)((a4 + 0xB00))) * (*(float *)0x8C025D24)));
        }
    }
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0xAE8))), (*(float *)((a4 + 0xAEC))), (*(float *)((a4 + 0xAF0))));
    nlRotateAY((*(short *)((a4 + 0xB06))));
    *(unsigned int *)(((int)stk + 8)) = (playerPut(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28)));
    nlPopMatrix(0x1);
    if ((*(int *)(((int)stk + 8))) != 0) {
        shadowPlayerDraw(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
        effFootDust(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    }
    t131 = 0xB5C;
    if ((*(int *)((a4 + 0xB5C))) == 0) {
        t131 = (perfPrint());
    }
    return t131;
}

int kmiFLWCTRLStartRenderEntry(int a4)
{
    int t13;
    int t49;
    int t61;
    int t97;
    int t98;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1FAC40:;
    kmyUpdatePalette();
    kmyUpdateFogParameter();
    R10 = (0x0);
    R11 = (0x1);
    R12 = (0xEEEE);
    R13 = (0x8C45EFC4);
    R14 = (R4);
    if (((*(int *)((R4 + 0x8))) != 0)) goto L_8C1FAC6C;
    goto L_8C1FAC68;
    L_8C1FAC68:;
    goto L_8C1FAE1C;
    L_8C1FAE1C:;
    if (((*(int *)((R13 + 0x82C))) != 1)) goto L_8C1FAE2A;
    goto L_8C1FAE24;
    L_8C1FAE24:;
    kmyResetRenderer();
    goto L_8C1FAE2A;
    L_8C1FAE2A:;
    t13 = *(int *)((R14 + 0x40));
    kmySetDitherMode((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x30))));
    kmySetPixelClippingX((*(int *)((R14 + 0x3C))), 0x0, ((*(int *)((t13 + 0xC))) - 1));
    kmySetPixelClippingY((*(int *)((R14 + 0x3C))), 0x0, ((*(int *)((t13 + 0x10))) - 1));
    kmiSetupRender((*(int *)((R14 + 0x20))), (*(int *)((R14 + 0x3C))));
    kmySetVirticalFilterMode((*(int *)((R14 + 0x3C))), 0x0);
    *(unsigned int *)(((((*(int *)((R13 + 0x938))) << 2) + (0x914 + R13)) + 0x0)) = (*(int *)0xFFD8000C);
    R12 = (t13);
    R5 = ((*(int *)((t13 + 0x1C))));
    if ((((*(int *)((t13 + 0x18))) & 0x2000000) == 0)) goto L_8C1FAEE0;
    goto L_8C1FAE7A;
    L_8C1FAE7A:;
    R6 = ((*(int *)0x8C471E2C));
    goto L_8C1FAEE2;
    L_8C1FAEE2:;
    kmyStartRenderTexture((*(int *)((R14 + 0x3C))), R5, R6);
    kmySetVirticalFilterMode((*(int *)((R14 + 0x3C))), (*(int *)((R13 + 0x20))));
    *(unsigned int *)0x8C4607B8 = R14;
    *(unsigned int *)0x8C4607B4 = R11;
    *(unsigned int *)((R14 + 0x14)) = 0x5;
    *(unsigned int *)0x8C4607DC = ((*(int *)((R13 + 0x82C))) + 0xA);
    R12 = (R10);
    goto L_8C1FAF08;
    L_8C1FAF08:;
    return R12;
    L_8C1FAEE0:;
    R6 = ((*(int *)((R12 + 0xC))));
    goto L_8C1FAEE2;
    L_8C1FAC6C:;
    if (((*(int *)0x8C45F93C) == 1)) goto L_8C1FAC90;
    goto L_8C1FAC74;
    L_8C1FAC74:;
    t49 = (kmiFLWCTRLGetFBLockStatus((*(int *)((R14 + 0x28))))) == 0;
    if (t49) goto L_8C1FAC82;
    goto L_8C1FAC7E;
    L_8C1FAC7E:;
    goto L_8C1FAF08;
    L_8C1FAC82:;
    if (((*(int *)0x8C4607C4) != (*(int *)((R14 + 0x28))))) goto L_8C1FAC90;
    goto L_8C1FAC8C;
    L_8C1FAC8C:;
    goto L_8C1FAF08;
    L_8C1FAC90:;
    if (((*(int *)((R13 + 0x82C))) != 1)) goto L_8C1FAC9E;
    goto L_8C1FAC98;
    L_8C1FAC98:;
    kmyResetRenderer();
    goto L_8C1FAC9E;
    L_8C1FAC9E:;
    *(unsigned int *)((R14 + 0x40)) = (*(int *)((((*(int *)((R14 + 0x28))) << 2) + 0x8C460790)));
    *(unsigned int *)((R14 + 0x24)) = (*(int *)((R14 + 0x28)));
    if (((*(int *)0x8C45F93C) == 1)) goto L_8C1FACCC;
    goto L_8C1FACB6;
    L_8C1FACB6:;
    t61 = *(int *)((R14 + 0x24));
    *(unsigned int *)0x8C45F960 = R11;
    *(unsigned int *)0x8C45F948 = ((*(int *)0x8C45F948) | (((int)t61 >= 0) ? (R11 << (t61 & 31)) : ((-(int)t61 & 31) ? ((int)R11 >> (-(int)t61 & 31)) : ((int)R11 >> 31))));
    *(unsigned int *)0x8C45F960 = R10;
    R4 = (t61);
    goto L_8C1FACCC;
    L_8C1FACCC:;
    kmySetDitherMode((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x30))));
    kmySetPixelClippingX((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x1A4))), ((*(int *)((R14 + 0x1AC))) - 1));
    kmySetPixelClippingY((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x1A8))), ((*(int *)((R14 + 0x1B0))) - 1));
    if (((*(int *)((R14 + 0x8))) != 2)) goto L_8C1FAD18;
    goto L_8C1FACFA;
    L_8C1FACFA:;
    if (((*(int *)0x8C45EFF0) != 0)) goto L_8C1FAD18;
    goto L_8C1FAD02;
    L_8C1FAD02:;
    *(unsigned int *)((R13 + 0x828)) = (0x1B4 + R14);
    kmySetRegionArrayCallback((*(int *)((R14 + 0x3C))), 0x8C1FABC0);
    kmyGenerateRegionArray((*(int *)((R14 + 0x3C))), 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
    goto L_8C1FAD18;
    L_8C1FAD18:;
    if (((*(int *)((R13 + 0x2C))) == 0)) goto L_8C1FAD2E;
    goto L_8C1FAD1E;
    L_8C1FAD1E:;
    R0 = (0x93C);
    if (((*(int *)((R13 + 0x93C))) == 0)) goto L_8C1FAD2E;
    goto L_8C1FAD26;
    L_8C1FAD26:;
    *(unsigned int *)((R13 + R0)) = R10;
    kmBlankScreen(0x0);
    goto L_8C1FAD2E;
    L_8C1FAD2E:;
    kmiSetupRender((*(int *)((R14 + 0x20))), (*(int *)((R14 + 0x3C))));
    *(unsigned int *)(((((*(int *)((R13 + 0x938))) << 2) + (0x914 + R13)) + 0x0)) = (*(int *)0xFFD8000C);
    T_ = ((((*(int *)((R13 + 0x28))) == 0)));
    goto L_8C1FADE0;
    L_8C1FADE0:;
    if ((T_)) goto L_8C1FADFA;
    goto L_8C1FADE2;
    L_8C1FADE2:;
    t97 = *(int *)((R14 + 0x28));
    t98 = kmyIsDisplayOddField();
    *(unsigned int *)(((0x8C4607A0 + (t97 << 2)) + 0x0)) = t98;
    *(unsigned int *)((R14 + 0x34)) = t98;
    kmySetFlickerFilterMode((*(int *)((R14 + 0x3C))), t98);
    goto L_8C1FADFA;
    L_8C1FADFA:;
    kmyStartRender((*(int *)((R14 + 0x3C))), (*(int *)((R14 + 0x40))));
    *(unsigned int *)0x8C4607B8 = R14;
    *(unsigned int *)0x8C4607B4 = R11;
    *(unsigned int *)((R14 + 0x14)) = 0x5;
    *(unsigned int *)0x8C4607DC = (*(int *)((R13 + 0x82C)));
    R12 = (R10);
    goto L_8C1FAF08;
}
