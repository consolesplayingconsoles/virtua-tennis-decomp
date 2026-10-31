/* Straight-line functions with calls and guards (batch gen_xq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c0eaf00(int, int, int, float);
int advSpriteLoad(void);
int cacheOcbiRange(int, int);
int camExec(int, int, int, int, int, int, int, int, int, int, int, int);
int camSetupView(void);
int charaTexFreeAll(void);
int colliObjEntry(int);
extern float cpuDblPathCross();
float cpuDistXZ(int, int);
int cpuSglHitReady(int);
extern int cpuShotAimCheck();
int cpuShotAimStick(int);
int cpuShotTargetSet(int, float, float);
int endPlayerPut(int, int);
int endingCameraSet(int);
int endingDraw(void);
int endingPlayerExec(void);
int endingScreenObjPut(void);
int endingScreenObjPutTrnsl(float);
int entryClearJoined(void);
int entryFirstPortFlag(void);
int entryInit(void);
int entryPortJoin(int, int, int, int, int, int, int, int);
int entryPortLeave(int, int);
int fadeScreenStart(int, int, int, int, int, int);
int lightUpdate(int);
int matchSceneExec(int);
int miniPointPopSpawn(int, int, int, Stk3);
int motionAdvance(int);
int motionBackup(int);
int mtxGetWorldPos(int, int, int, int, int);
int nlArcTan2(float, float);
int nlCloseEvent2(int);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlExecuteEvent(void);
extern int nlExecuteEvent2();
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
float nlRandom(void);
int nlRenderTextureBegin(int, int, int, int, int, int, int, int, int);
int nlRenderTextureEnd(int, int, int, int, int, int, int, int, int);
int nlRotateAX(int);
int nlRotateAY(int);
float nlSin(int);
int nlTranslate(float, float, float);
int nlWaitVSync(void);
int nlsndSeqRequest(int);
int plPic2SeleLoad(void);
int primVertexSet(int, int, int, int, int);
int selGridClear(void);
int serveGetReceiver(void);
int sprAdvLoad(void);
int sprSet192Load(void);
int stageTexFree(void);
int strmBgmFadeOut(int, int);
int strmBgmPlay(int);
int strmVoiceQueueReset(void);
int uniformTexRestore(int);
int unlockApplyW1(void);
Stk3 vecMake(float, float, float);
int FUN_8c03aa92(int a4, int a5, int a6);
int FUN_8c0d49f4(void);
float FUN_8c0457dc(int a4);
int FUN_8c087ff4(int a4);
float FUN_8c0611cc(int a4, float f4, float f5, float f6, float f7);

int FUN_8c03aa92(int a4, int a5, int a6)
{
    int stk[28];
    register int t0;
    register int t46;
    register int t52;
    register float u62;
    register float t64;
    register int t78;
    register float u79;
    register int t97;
    register int t98;
    register float u107;
    register float u108;
    register float u109;
    register float t102;
    register float u103;
    register float t122;
    register float u123;
    register float t140;
    register float u141;
    register int t191;
    register int t53;
    register int t105;
    register int t129;
    register int t147;
    register float u160;
    register int t171;
    register int t177;

    t0 = *(int *)((a4 + 0x44));
    *(unsigned int *)(((int)stk + 20)) = (t0 - 2);
    if ((*(int *)0x8C287C60) == 0) {
        if (((*(int *)(((a4 + 0x14) + 0x38))) & 0x1) == 0) {
            if (((*(int *)(((a4 + 0x14) + 0xB0))) & 0x1) != 0) {
                if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x104 + a4)); }
                    miniPointPopSpawn(0xC8, a5, a6, *(Stk3 *)(((int)stk + 4)));
                }
                *(unsigned int *)((0x8C2FBF54 + ((t0 - 2) << 2))) = 0x1;
                *(unsigned int *)((((t0 - 2) << 2) + 0x8C2FC0B4)) = 0x0;
                nlsndSeqRequest(0x1E02A9);
            }
        } else {
            if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0x104 + a4)); }
                miniPointPopSpawn(0xC8, a5, a6, *(Stk3 *)(((int)stk + 4)));
            }
            *(unsigned int *)((0x8C2FBF54 + ((t0 - 2) << 2))) = 0x1;
            *(unsigned int *)((((t0 - 2) << 2) + 0x8C2FC0B4)) = 0x0;
            nlsndSeqRequest(0x1E02A9);
        }
    }
    *(volatile int *)0x8C10C790;
    t46 = 0x0;
    for (;;) {
        if ((int)t46 >= (int)(*(int *)0x8C10C794)) {
            break;
        }
        colliObjEntry(((t46 * 0x78) + (a4 + 0x14)));
        t46 = (t46 + 0x1);
    }
    if ((*(int *)0x8C287C60) == 0) {
        t52 = *(int *)((((t0 - 2) << 2) + 0x8C2FC0A0));
        *(unsigned int *)((((t0 - 2) << 2) + 0x8C2FC0A0)) = (t52 - 1);
        if (((int)(t52 - 1) < (int)0xF) && (t53 = *(int *)((((t0 - 2) << 2) + 0x8C2FBF54)), t53 == 0)) {
            *(unsigned short *)((a4 + 0x110)) = ((*(short *)((a4 + 0x110))) + 0x222);
        }
    }
    u62 = *(float *)((a4 + 0x10C));
    *(float *)(((int)stk + 12)) = ((-u62) + 118.849998f);
    t64 = nlCos((unsigned short)(*(short *)((a4 + 0x110))));
    *(unsigned short *)(((0x112 + a4) + 0x0)) = (nlArcTan2(((t64 * 41.1500015f) - (*(float *)((a4 + 0x104)))), ((-u62) + 118.849998f)));
    *(unsigned short *)((((*(int *)(((int)stk + 20))) << 1) + 0x8C2FC094)) = (*(short *)(((0x112 + a4) + 0x0)));
    *(float *)((a4 + 0x108)) = 0.200000003f;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((a4 + 0x104))), (*(float *)((a4 + 0x108))), (*(float *)((a4 + 0x10C))));
    if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 1) {
        nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f);
        if ((*(int *)0x8C287C60) == 0) {
            *(int *)((int)stk + 12) = (0x114 + a4);
            t78 = *(int *)(((0x114 + a4) + 0x0));
            u79 = 1092.0f;
            u79 = u79 + 273.0f * (nlRandom());
            *(unsigned int *)(((0x114 + a4) + 0x0)) = (int)((float)t78 + u79);
        }
        nlRotateAY((*(int *)((a4 + 0x114))));
        nlRotateAX(0xFFFFFF00);
        nlRotateAY((-(*(int *)((a4 + 0x114)))));
    }
    nlObjPut(0xCB5E690);
    nlPushMatrix(0x0);
    nlTranslate(-1.29999995f, 0.0f, 0.0f);
    *(unsigned int *)(((int)stk + 24)) = (((t0 - 2) << 2) + 0x8C2FBF54);
    t97 = (((t0 - 2) << 2) + 0x8C2FBF54);
    t98 = 0x0;
    for (;;) {
        u107 = 0.0f;
        u108 = 0.25f;
        u109 = 1.0f;
        if ((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) == 1) {
            t105 = t97;
        } else {
            t97 = 0x8C20D19C;
            t102 = nlSin((((*(int *)((t97 + 0x0))) + t98) * 0x888));
            u103 = 0.5f;
            u103 = u103 + 0.5f * t102;
            u107 = u103;
            u108 = 0.0f;
            u109 = 0.0f;
        }
        t97 = t105;
        nlObjPutSetFadeColor(u107, u108, u109);
        nlObjPut(0xCB65020);
        nlTranslate(1.29999995f, 0.0f, 0.0f);
        t97 = 0x10;
        t98 = (t98 + 0x4);
        if ((int)t98 >= (int)t97) {
            break;
        }
    }
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(-3.0f, 15.3999996f, 4.4000001f);
    nlObjPut(0xCB654C8);
    if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 1) {
        nlObjPutSetFadeColor(0.0f, 0.25f, 1.0f);
        t129 = 0xCB652A8;
    } else {
        t122 = nlSin(((*(int *)0x8C20D19C) * 0x888));
        u123 = 0.5f;
        u123 = u123 + 0.5f * t122;
        *(float *)(((int)stk + 16)) = u123;
        nlObjPutSetFadeColor(u123, u123, u123);
        nlObjPut(0xCB652A8);
        nlRotateAY(((*(int *)0x8C20D19C) * 0x888));
        t129 = 0xCB62A50;
    }
    nlObjPut(t129);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    nlTranslate(3.0f, 15.3999996f, 4.4000001f);
    nlObjPut(0xCB654C8);
    if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 1) {
        nlObjPutSetFadeColor(0.0f, 0.25f, 1.0f);
        t147 = 0xCB652A8;
    } else {
        t140 = nlSin((((*(int *)0x8C20D19C) * 0x888) + 0x8000));
        u141 = 0.5f;
        u141 = u141 + 0.5f * t140;
        nlObjPutSetFadeColor(u141, u141, u141);
        nlObjPut(0xCB652A8);
        nlRotateAY((((*(int *)0x8C20D19C) * 0x888) + 0x8000));
        t147 = 0xCB62A50;
    }
    nlObjPut(t147);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlPopMatrix(0x1);
    nlRotateAY((unsigned short)(*(short *)((a4 + 0x112))));
    if ((int)(*(int *)((0x8C2FC0A0 + ((t0 - 2) << 2)))) > 0) {
        if ((int)(*(int *)((0x8C2FC0A0 + ((t0 - 2) << 2)))) > (int)0xF) {
            u160 = (float)((*(int *)((0x8C2FC0A0 + ((t0 - 2) << 2)))) - 30);
        } else {
            u160 = (float)(-(*(int *)((0x8C2FC0A0 + ((t0 - 2) << 2)))));
        }
        nlTranslate(0.0f, 0.0f, (u160 * 0.200000003f));
    }
    if ((*(int *)((0x8C2FBF54 + ((t0 - 2) << 2)))) == 1) {
        nlObjPutSetFadeColor(0.5f, 0.5f, 0.5f);
        if (((*(int *)0x8C287C60) == 0) && (t171 = *(int *)((((t0 - 2) << 2) + 0x8C2FC0B4)), (int)t171 < (int)0xA)) {
            *(unsigned int *)((((t0 - 2) << 2) + 0x8C2FC0B4)) = ((*(int *)((((t0 - 2) << 2) + 0x8C2FC0B4))) + 0x1);
        }
    } else {
        if (((*(int *)0x8C287C60) == 0) && (t177 = *(int *)((((t0 - 2) << 2) + 0x8C2FC0B4)), (int)t177 > 0)) {
            *(unsigned int *)((((t0 - 2) << 2) + 0x8C2FC0B4)) = ((*(int *)((((t0 - 2) << 2) + 0x8C2FC0B4))) - 1);
        }
    }
    nlRotateAX((int)((float)(*(int *)((((t0 - 2) << 2) + 0x8C2FC0B4))) * 819.200012f));
    nlObjPut(0xCB62BC8);
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    nlTranslate(0.0f, (*(float *)0x8C03B0E4), (*(float *)0x8C03B0E0));
    t191 = *(int *)(((int)stk + 20));
    *(int *)((int)stk + 12) = (0x8C2FC058 + (((t191 << 1) + t191) << 2));
    mtxGetWorldPos(0x0, 0x0, 0x0, 0x0, (0x8C2FC058 + (((t191 << 1) + t191) << 2)));
    return (nlPopMatrix(0x1));
}

int FUN_8c0d49f4(void)
{
    int stk[11];
    register int t1;
    register int t60;
    register int t173;
    register int t167;
    register int t161;
    register int t95;
    register int t109;
    register int t122;
    register int t138;
    register int t141;
    register float u182;
    register float u207;
    register float u208;
    register int t215;
    register int t259;
    register int t267;
    register int t268;
    register int t266;
    register int t270;
    register int t271;
    register int t272;
    register int t273;
    register int t274;
    register int t309;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t155;
    register int t107;
    register int t108;
    register int t129;
    register int t120;
    register int t121;
    register int t149;
    register int t139;
    register int t140;
    register int t195;
    register float u200;
    register int t187;
    register float u192;
    register int t204;
    register int t205;
    register int t210;
    register int t224;
    register float u227;
    register int t244;
    register int t239;
    register int t257;
    register int t260;
    register int t281;
    register int t282;
    register int t283;
    register int t284;
    register int t285;
    register int t292;
    register int t293;
    register int t294;
    register int t295;
    register float u298;
    register int t307;
    register int t310;

    *(unsigned int *)0x8C407FC0 = 0x3E7;
    *(unsigned int *)0x8C407FC4 = 0x3E7;
    endingCameraSet(0x3E7);
    t1 = *(int *)0x8C402CAC;
    if (((t1 != 3) && (t1 != 7)) || ((t2 = *(int *)0x8C402CAC, t3 = *(int *)0x8C407FC0, t2 == t3) && (t4 = *(int *)0x8C402CA0, t5 = *(int *)0x8C407FC4, t4 == t5))) {
    } else {
        camExec(t1, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16), *(int *)((int)stk + 8 + 20), *(int *)((int)stk + 8 + 24), *(int *)((int)stk + 8 + 28));
    }
    camSetupView();
    *(unsigned int *)0x8C38B824 = ((*(int *)((((*(int *)0x8C402CAC) << 2) + 0x8C40C17C))) << 8);
    *(unsigned int *)0x8C38B828 = ((*(int *)((((*(int *)0x8C402CAC) << 2) + 0x8C40C19C))) << 8);
    lightUpdate(0x0);
    if ((*(int *)0x8C402CAC) == 0) {
        if ((*(int *)0x8C402CA0) != (((*(int *)((0x8C1D34F4 + ((*(int *)0x8C402CAC) << 2)))) * 0x3C) - 2)) {
        } else {
            *(unsigned int *)0x8C407FB4 = 0x1;
            *(float *)0x8C407FB8 = 1.0f;
            *(float *)0x8C407FBC = 0.0399999991f;
        }
    } else {
        if ((int)(*(int *)0x8C402CA0) >= (int)(((*(int *)((0x8C1D34F4 + ((*(int *)0x8C402CAC) << 2)))) * 0x3C) - 1)) {
            *(unsigned int *)0x8C407FB4 = 0x1;
            *(float *)0x8C407FB8 = 1.0f;
            *(float *)0x8C407FBC = 0.0399999991f;
        }
    }
    motionBackup((*(int *)0x8C402CB4));
    if ((*(int *)0x8C287ADC) == 4) {
        motionBackup((*(int *)0x8C402CB8));
    }
    if ((*(int *)0x8C402CA0) == 0) {
        endingPlayerExec();
    }
    if ((*(int *)0x8C407FB4) != 0) {
        nlRenderTextureBegin(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
    }
    t60 = *(int *)0x8C402CAC;
    t173 = t60;
    if (t60 != 2) {
        t167 = t60;
        if (t60 != 3) {
            t161 = t60;
            if (t60 != 7) {
                t95 = *(int *)0x8C402CB4;
                if ((*(int *)0x8C287ADC) == 2) {
                    if (((*(int *)0x8C402CAC) == (*(int *)0x8C407FC0)) && (t107 = *(int *)0x8C407FC4, t108 = *(int *)0x8C402CA0, t108 == t107)) {
                        t109 = *(int *)((t95 + 0x48));
                        *(int *)((int)stk + 4) = (((((t109 << 1) + t109) << 2) << 2) + (t95 + 0x60));
                        *(Stk3 *)((((((t109 << 1) + t109) << 2) << 2) + (t95 + 0x60))) = vecMake(0.0f, 0.0f, 0.0f);
                    } else {
                        motionAdvance(t95);
                    }
                    endPlayerPut((*(int *)0x8C402CB4), 0x0);
                } else {
                    if ((*(int *)0x8C402CAC) != 1) {
                        if (((*(int *)0x8C402CAC) == (*(int *)0x8C407FC0)) && (t120 = *(int *)0x8C407FC4, t121 = *(int *)0x8C402CA0, t121 == t120)) {
                            t122 = *(int *)((t95 + 0x48));
                            *(int *)((int)stk + 4) = (((((t122 << 1) + t122) << 2) << 2) + (t95 + 0x60));
                            *(Stk3 *)((((((t122 << 1) + t122) << 2) << 2) + (t95 + 0x60))) = vecMake(0.0f, 0.0f, 0.0f);
                        } else {
                            motionAdvance(t95);
                        }
                        endPlayerPut((*(int *)0x8C402CB4), 0x0);
                    } else {
                        t129 = t60;
                    }
                    if ((*(int *)0x8C402CAC) != 0) {
                        t138 = *(int *)0x8C402CB8;
                        if (((*(int *)0x8C402CAC) == (*(int *)0x8C407FC0)) && (t139 = *(int *)0x8C402CA0, t140 = *(int *)0x8C407FC4, t139 == t140)) {
                            t141 = *(int *)((t138 + 0x48));
                            *(int *)((int)stk + 4) = (((((t141 << 1) + t141) << 2) << 2) + (t138 + 0x60));
                            *(Stk3 *)((((((t141 << 1) + t141) << 2) << 2) + (t138 + 0x60))) = vecMake(0.0f, 0.0f, 0.0f);
                        } else {
                            motionAdvance(t138);
                        }
                        endPlayerPut((*(int *)0x8C402CB8), 0x1);
                    } else {
                        t149 = t129;
                    }
                    t155 = t149;
                }
                t161 = t155;
            }
            t167 = t161;
        }
        t173 = t167;
    }
    matchSceneExec(t173);
    endingDraw();
    nlExecuteEvent();
    if ((*(int *)0x8C407FB4) != 0) {
        nlRenderTextureEnd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12), *(int *)((int)stk + 8 + 16));
        endingScreenObjPut();
        *(unsigned int *)0x8C407FB4 = 0x0;
    } else {
        u182 = *(float *)0x8C407FB8;
        if (u182 > 0.0f) {
            endingScreenObjPutTrnsl(u182);
            *(float *)0x8C407FB8 = ((*(float *)0x8C407FB8) - (*(float *)0x8C407FBC));
        } else {
            t187 = 0x8C407FB4;
            u192 = u182;
        }
        t195 = t187;
        u200 = u192;
    }
    if (((*(int *)0x8C402CAC) == (*(int *)0x8C407FC0)) && (t204 = *(int *)0x8C402CA0, t205 = *(int *)0x8C407FC4, t204 == t205)) {
        *(unsigned int *)0x8C402CA0 = (*(int *)0x8C407FC4);
        *(unsigned int *)0x8C1D2BE4 = 0x1;
        t210 = t204;
    } else {
        u207 = *(float *)0x8C402CA4;
        u208 = *(float *)0x8C23D204;
        *(float *)0x8C402CA4 = (u207 + u208);
        *(unsigned int *)0x8C402CA0 = (int)(u207 + u208);
        *(unsigned int *)0x8C1D2BE4 = 0x0;
        t210 = t195;
    }
    t215 = *(int *)0x8C402CAC;
    if (t215 == 7) {
        if ((*(int *)0x8C402CA0) == (((*(int *)((0x8C1D34F4 + ((*(int *)0x8C402CAC) << 2)))) - 1) * 0x3C)) {
            fadeScreenStart(0x3, 0x0, 0x3C, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
        } else {
            t224 = 0x8C1D2BE4;
            u227 = u200;
        }
        if ((int)(*(int *)0x8C402CA0) >= (int)((*(int *)((0x8C1D34F4 + ((*(int *)0x8C402CAC) << 2)))) * 0x3C)) {
            FUN_8c0eaf00(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, u227);
            cacheOcbiRange(0xCA00000, 0x200000);
            if ((*(int *)0x8C402CB0) != 2) {
                *(unsigned int *)0x8C20D150 = 0x3;
                t244 = 0x3;
            } else {
                if (((*(int *)0x8C40C30C) & 0x10000) != 0) {
                    *(unsigned int *)0x8C20D150 = 0x3;
                    t239 = 0x3;
                } else {
                    *(unsigned int *)0x8C20D150 = 0x8;
                    *(unsigned int *)0x8C40C30C = ((*(int *)0x8C40C30C) | 0x10000);
                    t239 = (unlockApplyW1());
                }
                t244 = t239;
            }
            *(unsigned int *)0x8C20D15C = 0x0;
            *(unsigned int *)0x8C301970 = 0x0;
            return t244;
        }
        if ((int)(*(int *)0x8C402CA8) > 0) {
            *(unsigned int *)0x8C402CA8 = ((*(int *)0x8C402CA8) - 1);
        }
        if ((*(int *)0x8C402CA8) == 0) {
            FUN_8c0eaf00(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, u227);
            *(unsigned int *)0x8C407FCC = 0x1;
            cacheOcbiRange(0xCA00000, 0x200000);
            if (((*(int *)0x8C402CB0) == 2) && (t257 = *(int *)0x8C40C30C, (t257 & 0x10000) == 0)) {
                *(unsigned int *)0x8C40C30C = ((*(int *)0x8C40C30C) | 0x10000);
                t259 = unlockApplyW1();
                *(unsigned int *)0x8C20D150 = 0x8;
                t260 = t259;
            } else {
                *(unsigned int *)0x8C20D150 = 0x3;
                t260 = 0x3;
            }
            *(unsigned int *)0x8C20D15C = 0x0;
            *(unsigned int *)0x8C301970 = 0x0;
            return t260;
        }
        return ((int (*)(int))(nlExecuteEvent2))(t224);
    }
    t267 = (t215 << 2);
    t268 = t210;
    if ((int)(*(int *)0x8C402CA0) >= (int)((*(int *)((0x8C1D34F4 + (t215 << 2)))) * 0x3C)) {
        t266 = *(int *)0x8C402CAC;
        *(unsigned int *)0x8C402CAC = (t266 + 0x1);
        *(unsigned int *)0x8C402CA0 = 0x0;
        *(float *)0x8C402CA4 = 0.0f;
        t267 = 0x4;
        t268 = (t266 + 0x1);
    }
    t270 = t267;
    t271 = t268;
    t272 = 0x8C1D3514;
    t273 = 0x8C287D84;
    t274 = 0x0;
    for (;;) {
        if ((unsigned int)t272 >= (unsigned int)0x8C1D3524) {
            break;
        }
        t270 = (*(int *)((t272 + 0x0)));
        if ((t270 == 1) && (t281 = (t270 == 1), t270 = 0xB64, t271 = 0x8C29B898, t282 = *(int *)((t273 + t270)), t270 = t282, t270 = (t270 << 2), t283 = *(int *)((t271 + t270)), t270 = t283, t284 = *(int *)((t270 + 0x10)), t270 = t284, (t270 & 8) != 0)) {
            t274 = 0x1;
        }
        t272 = (t272 + 0x4);
        t273 = (t273 + 0xD78);
    }
    if ((t274 != 0) && (t285 = *(int *)0x8C402CA8, t285 == -1)) {
        *(unsigned int *)0x8C402CA8 = 0x3C;
        fadeScreenStart(0x3, 0x0, 0x3C, t274, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4));
        strmBgmFadeOut(0x2, 0x0);
    } else {
        t292 = t272;
        t293 = t273;
        t294 = 0xD78;
        t295 = t274;
        u298 = u200;
    }
    if ((int)(*(int *)0x8C402CA8) > 0) {
        *(unsigned int *)0x8C402CA8 = ((*(int *)0x8C402CA8) - 1);
    }
    if ((*(int *)0x8C402CA8) == 0) {
        FUN_8c0eaf00(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, u298);
        *(unsigned int *)0x8C407FCC = 0x1;
        cacheOcbiRange(0xCA00000, 0x200000);
        if (((*(int *)0x8C402CB0) == 2) && (t307 = *(int *)0x8C40C30C, (t307 & 0x10000) == 0)) {
            *(unsigned int *)0x8C40C30C = ((*(int *)0x8C40C30C) | 0x10000);
            t309 = unlockApplyW1();
            *(unsigned int *)0x8C20D150 = 0x8;
            t310 = t309;
        } else {
            *(unsigned int *)0x8C20D150 = 0x3;
            t310 = 0x3;
        }
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C301970 = 0x0;
        return t310;
    }
    return ((int (*)(int, int, int, int))(nlExecuteEvent2))(t292, t293, t294, t295);
}

float FUN_8c0457dc(int a4)
{
    int stk[10];

    register int R9;
    register float F0;
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
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    register float w0_5;
    register float w0_6;
    register float w0_7;
    register float w0_8;
    v0_6 = a4;
    v0_2 = *(int *)((v0_6 + 0xB5C));
    v0_0 = (((v0_2 * 0x160) + 0x8C2FC69C));
    v0_1 = (v0_6);
    v0_3 = (0x8C2FC69C);
    v0_4 = (0x160);
    w0_4 = (32.0f);
    w0_5 = (96.0f);
    w0_2 = (0.0f);
    if (((*(float *)((((v0_2 * 0x160) + 0x8C2FC69C) + 0x4))) == 0.0f)) goto L_8C045844;
    cpuSglHitReady(v0_1);
    w0_0 = *(float *)((v0_1 + 0xAE8));
    w0_1 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (0.0f);
    w0_3 = ((w0_1 - w0_0));
    if ((!((w0_1 - w0_0) > 0.0f))) goto L_8C045828;
    v0_2 = (0x1);
    L_8C045832:;
    w0_0 = ((*(float *)((v0_1 + 0xB00))) * (float)v0_2);
    w0_2 = (((-(w0_0 * w0_4)) + w0_5));
    L_8C045894:;
    *(unsigned short *)((v0_0 + 0x20)) = (int)w0_2;
    v0_7 = (0x20);
    L_8C045C2E:;
    return F0;
    L_8C045828:;
    if ((!(w0_2 > w0_3))) goto L_8C045830;
    v0_2 = (0xFFFFFFFF);
    goto L_8C045832;
    L_8C045830:;
    v0_2 = (0x0);
    goto L_8C045832;
    L_8C045844:;
    w0_0 = (24.0f);
    w0_1 = (8.0f);
    if ((((*(int *)((v0_1 + 0xB60))) & 0x100) != 0)) goto L_8C04585A;
    w0_6 = *(float *)((v0_1 + 0xAE8));
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_3 = ((w0_7 - w0_6));
    if ((!((w0_7 - w0_6) > w0_2))) goto L_8C045B54;
    v0_2 = (0x1);
    L_8C045B60:;
    w0_2 = ((*(float *)((v0_1 + 0xB00))) * (float)v0_2);
    *(unsigned short *)((v0_0 + 0x20)) = (int)((-(w0_2 * w0_4)) + w0_5);
    w0_3 = *(float *)((v0_1 + 0xB98));
    w0_4 = *(float *)((v0_1 + 0xA2C));
    w0_2 = (0.0f);
    w0_5 = ((w0_4 - w0_3));
    if ((!((w0_4 - w0_3) > 0.0f))) goto L_8C045B8C;
    v0_8 = (0x1);
    L_8C045B96:;
    w0_4 = *(float *)((v0_1 + 0xB00));
    v0_7 = (0xB00);
    w0_2 = (0.0f);
    w0_3 = (w0_4);
    if ((!(w0_4 > 0.0f))) goto L_8C045BA4;
    v0_2 = (0x1);
    L_8C045BAE:;
    if ((v0_8 != v0_2)) goto L_8C045C2E;
    v0_7 = (0xAE8);
    if ((0.0f > ((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))))) goto L_8C045BD8;
    w0_2 = (((*(float *)((v0_1 + 0xAE8))) - (*(float *)((v0_1 + 0xB9C)))));
    L_8C045BE2:;
    v0_7 = (0x8C045CF8);
    if ((!((*(float *)0x8C045CF8) > w0_2))) goto L_8C045C2E;
    w0_4 = *(float *)(((0xB98 + v0_1) + 0x0));
    w0_5 = *(float *)(((0xA2C + v0_1) + 0x0));
    v0_7 = (0x20);
    w0_2 = (0.0f);
    w0_3 = ((w0_5 - w0_4));
    if ((!((w0_5 - w0_4) > 0.0f))) goto L_8C045C04;
    v0_8 = (0x1);
    L_8C045C0E:;
    w0_2 = ((*(float *)(((0xB00 + v0_1) + 0x0))) * (float)v0_8);
    *(unsigned short *)((v0_0 + v0_7)) = (int)((float)(*(short *)((v0_0 + v0_7))) + ((-(w0_2 * w0_1)) + w0_0));
    goto L_8C045C2E;
    L_8C045C04:;
    if ((!(w0_2 > w0_3))) goto L_8C045C0C;
    v0_8 = (0xFFFFFFFF);
    goto L_8C045C0E;
    L_8C045C0C:;
    v0_8 = (0x0);
    goto L_8C045C0E;
    L_8C045BD8:;
    w0_2 = (((-(*(float *)((v0_1 + v0_7)))) + (*(float *)((v0_1 + 0xB9C)))));
    goto L_8C045BE2;
    L_8C045BA4:;
    if ((!(w0_2 > w0_3))) goto L_8C045BAC;
    v0_2 = (0xFFFFFFFF);
    goto L_8C045BAE;
    L_8C045BAC:;
    v0_2 = (0x0);
    goto L_8C045BAE;
    L_8C045B8C:;
    if ((!(w0_2 > w0_5))) goto L_8C045B94;
    v0_8 = (0xFFFFFFFF);
    goto L_8C045B96;
    L_8C045B94:;
    v0_8 = (0x0);
    goto L_8C045B96;
    L_8C045B54:;
    if ((!(0.0f > w0_3))) goto L_8C045B5E;
    v0_2 = (0xFFFFFFFF);
    goto L_8C045B60;
    L_8C045B5E:;
    v0_2 = (0x0);
    goto L_8C045B60;
    L_8C04585A:;
    v0_7 = (0x118);
    w0_4 = (1.0f);
    if (((int)(*(short *)((v0_0 + 0x118))) <= (int)0xA)) goto L_8C04589E;
    w0_5 = *(float *)((v0_1 + 0xB98));
    w0_3 = (((-w0_5) + w0_4));
    if ((!(((-w0_5) + w0_4) > w0_2))) goto L_8C045878;
    v0_8 = (0x1);
    L_8C045884:;
    w0_2 = ((*(float *)((v0_1 + 0xB00))) * (float)v0_8);
    w0_2 = (((-(w0_2 * w0_1)) + w0_0));
    goto L_8C045894;
    L_8C045878:;
    if ((!(0.0f > w0_3))) goto L_8C045882;
    v0_8 = (0xFFFFFFFF);
    goto L_8C045884;
    L_8C045882:;
    v0_8 = (0x0);
    goto L_8C045884;
    L_8C04589E:;
    v0_2 = (0x0);
    v0_6 = (0x8C287D84);
    v0_5 = (0xD78);
    if (((*(short *)((v0_0 + v0_7))) == 10)) goto L_8C0458AE;
    if (((*(signed char *)((v0_0 + 0x12A))) == 0)) goto L_8C045AB4;
    v0_7 = *(int *)((v0_1 + 0xB5C));
    v0_8 = *(int *)(((v0_6 + (((v0_7 + 0x1) & 0x1) * v0_5)) + 0xB5C));
    w0_4 = *(float *)(((v0_3 + (v0_8 * v0_4)) + 0x30));
    v0_6 = ((v0_6 + (((v0_7 + 0x1) & 0x1) * v0_5)));
    v0_3 = ((v0_3 + (v0_8 * v0_4)));
    v0_4 = ((v0_8 * v0_4));
    w0_3 = (w0_4);
    if ((w0_2 > w0_4)) goto L_8C045A66;
    w0_2 = (w0_3);
    L_8C045A6A:;
    if ((!(w0_2 > 0.100000001f))) goto L_8C045A92;
    w0_2 = (0.0f);
    if ((!(w0_3 > 0.0f))) goto L_8C045A7C;
    v0_8 = (0x1);
    L_8C045A86:;
    if (((float)v0_8 != (*(float *)((v0_1 + 0xB00))))) goto L_8C045AB0;
    L_8C045A92:;
    w0_2 = *(float *)((v0_6 + 0xAF0));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C045AA0;
    w0_2 = (w0_3);
    L_8C045AA4:;
    if ((!(45.1629982f > w0_2))) goto L_8C045AB0;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x2;
    L_8C045AB0:;
    *(unsigned char *)((v0_0 + 0x12A)) = v0_2;
    L_8C045AB4:;
    if (((*(signed char *)((v0_0 + 0x24))) != 0)) goto L_8C045ACE;
    v0_3 = ((int (*)(int, int, int, int))(cpuShotAimCheck))(v0_1, v0_3, v0_4, v0_5);
    *(unsigned char *)(((0x24 + v0_0) + 0x0)) = v0_3;
    if (!(((unsigned char)v0_3 == 0))) goto L_8C045ACE;
    *(unsigned short *)((v0_0 + 0x20)) = v0_2;
    goto L_8C045AFC;
    L_8C045ACE:;
    *(unsigned short *)(((0x20 + v0_0) + 0x0)) = (cpuShotAimStick(v0_1));
    L_8C045AFC:;
    w0_4 = *(float *)(((0xB98 + v0_1) + 0x0));
    w0_5 = *(float *)(((0xA2C + v0_1) + 0x0));
    v0_7 = (0x20);
    w0_2 = (0.0f);
    w0_3 = ((w0_5 - w0_4));
    if ((!((w0_5 - w0_4) > 0.0f))) goto L_8C045B16;
    v0_2 = (0x1);
    L_8C045B20:;
    w0_2 = ((*(float *)(((0xB00 + v0_1) + 0x0))) * (float)v0_2);
    *(unsigned short *)((v0_0 + v0_7)) = (int)((float)(*(short *)((v0_0 + v0_7))) + ((-(w0_2 * w0_1)) + w0_0));
    goto L_8C045C2E;
    L_8C045B16:;
    if ((!(w0_2 > w0_3))) goto L_8C045B1E;
    v0_2 = (0xFFFFFFFF);
    goto L_8C045B20;
    L_8C045B1E:;
    v0_2 = (0x0);
    goto L_8C045B20;
    L_8C045AA0:;
    w0_2 = ((-w0_3));
    goto L_8C045AA4;
    L_8C045A7C:;
    if ((!(w0_2 > w0_3))) goto L_8C045A84;
    v0_8 = (0xFFFFFFFF);
    goto L_8C045A86;
    L_8C045A84:;
    v0_8 = (0x0);
    goto L_8C045A86;
    L_8C045A66:;
    w0_2 = ((-w0_3));
    goto L_8C045A6A;
    L_8C0458AE:;
    v0_7 = *(int *)((v0_1 + 0xB5C));
    v0_8 = *(int *)(((v0_6 + (((v0_7 + 0x1) & 0x1) * v0_5)) + 0xB5C));
    w0_6 = *(float *)(((v0_3 + (v0_8 * v0_4)) + 0x28));
    v0_6 = ((v0_6 + (((v0_7 + 0x1) & 0x1) * v0_5)));
    v0_3 = ((v0_3 + (v0_8 * v0_4)));
    w0_5 = (41.1500015f);
    w0_3 = (w0_6);
    if ((w0_2 > w0_6)) goto L_8C045908;
    w0_2 = (w0_3);
    L_8C04590C:;
    if ((!(0.150000006f > w0_2))) goto L_8C04593C;
    w0_6 = *(float *)((v0_6 + 0xAE8));
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_2 = (0.0f);
    w0_3 = ((w0_7 - w0_6));
    if ((!((w0_7 - w0_6) > 0.0f))) goto L_8C045928;
    v0_8 = (0x1);
    L_8C045932:;
    *(float *)(((int)stk + 4)) = ((float)v0_8 * w0_5);
    L_8C0459B4:;
    cpuShotTargetSet(v0_1, (((*(float *)((v0_1 + 0xB00))) * (*(float *)(((int)stk + 4)))) / w0_5), w0_4);
    if (((*(signed char *)((v0_0 + 0x24))) != 0)) goto L_8C0459E2;
    v0_3 = ((int (*)(int, int, int, int))(cpuShotAimCheck))(v0_1, v0_3, v0_4, v0_5);
    *(unsigned char *)(((0x24 + v0_0) + 0x0)) = v0_3;
    if (!(((unsigned char)v0_3 == 0))) goto L_8C0459E2;
    *(unsigned short *)((v0_0 + 0x20)) = v0_2;
    goto L_8C045A14;
    L_8C0459E2:;
    *(unsigned short *)(((0x20 + v0_0) + 0x0)) = (cpuShotAimStick(v0_1));
    L_8C045A14:;
    w0_4 = *(float *)(((0xB98 + v0_1) + 0x0));
    w0_5 = *(float *)(((0xA2C + v0_1) + 0x0));
    v0_7 = (0x20);
    w0_2 = (0.0f);
    w0_3 = ((w0_5 - w0_4));
    if ((!((w0_5 - w0_4) > 0.0f))) goto L_8C045A2E;
    v0_2 = (0x1);
    goto L_8C045B20;
    L_8C045A2E:;
    if ((!(w0_2 > w0_3))) goto L_8C045A36;
    v0_2 = (0xFFFFFFFF);
    goto L_8C045B20;
    L_8C045A36:;
    v0_2 = (0x0);
    goto L_8C045B20;
    L_8C045928:;
    if ((!(w0_2 > w0_3))) goto L_8C045930;
    v0_8 = (0xFFFFFFFF);
    goto L_8C045932;
    L_8C045930:;
    v0_8 = (0x0);
    goto L_8C045932;
    L_8C04593C:;
    w0_2 = *(float *)((v0_3 + 0x28));
    w0_3 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C04594A;
    w0_2 = (w0_3);
    L_8C04594E:;
    if ((!(0.649999976f > w0_2))) goto L_8C045980;
    w0_6 = *(float *)((v0_6 + 0xAE8));
    w0_7 = *(float *)((v0_1 + 0xB9C));
    w0_8 = *(float *)((v0_3 + 0x28));
    w0_2 = (0.0f);
    w0_3 = (((w0_7 - w0_6) - (w0_8 * w0_1)));
    if ((!(((w0_7 - w0_6) - (w0_8 * w0_1)) > 0.0f))) goto L_8C045974;
    v0_8 = (0x1);
    L_8C0459AC:;
    *(float *)(((int)stk + 4)) = ((float)v0_8 * w0_5);
    goto L_8C0459B4;
    L_8C045974:;
    if ((!(w0_2 > w0_3))) goto L_8C04597C;
    v0_8 = (0xFFFFFFFF);
    goto L_8C0459AC;
    L_8C04597C:;
    v0_8 = (0x0);
    goto L_8C0459AC;
    L_8C045980:;
    w0_2 = *(float *)((v0_6 + 0xAE8));
    w0_6 = *(float *)((v0_1 + 0xB9C));
    w0_7 = *(float *)((v0_3 + 0x28));
    w0_8 = (0.0f);
    w0_3 = (((w0_6 - w0_2) - (w0_7 * 16.0f)));
    if ((!(((w0_6 - w0_2) - (w0_7 * 16.0f)) > 0.0f))) goto L_8C0459A2;
    v0_8 = (0x1);
    goto L_8C0459AC;
    L_8C0459A2:;
    if ((!(w0_8 > w0_3))) goto L_8C0459AA;
    v0_8 = (0xFFFFFFFF);
    goto L_8C0459AC;
    L_8C0459AA:;
    v0_8 = (0x0);
    goto L_8C0459AC;
    L_8C04594A:;
    w0_2 = ((-w0_3));
    goto L_8C04594E;
    L_8C045908:;
    w0_2 = ((-w0_3));
    goto L_8C04590C;
}

int FUN_8c087ff4(int a4)
{
    int stk[43];
    register int t1;
    register int t4;
    register int t7;
    register int t10;
    register int t16;
    register int t20;
    register int t24;
    register int t28;
    register int t34;
    register int t38;
    register int t42;
    register int t46;
    register int t52;
    register int t56;
    register int t60;
    register int t64;
    register int t77;
    register int t87;
    register int t95;
    register int t98;
    register int t178;
    register int t169;
    register int t116;
    register int t124;
    register int t125;
    int t126;
    register int t127;
    register int t128;
    register int t139;
    register int t144;
    register int t146;
    register int t76;
    register int t84;
    register int t85;
    register int t86;
    register int t102;
    register int t99;
    register int t115;
    register int t123;
    register int t134;
    register int t135;
    register int t145;
    register int t150;

    *(unsigned int *)(((int)stk + 40)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 20) + 0x28) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x28) + 0x10);
    *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 0.0f, 0.00200000009f);
    t1 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t1;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t1);
    *(unsigned int *)(((int)stk + 28)) = (((int)stk + 20) + 0x28);
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x28);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 0.0f, 0.00200000009f);
    t4 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t4;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t4);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x28) + 0x30);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x28) + 0x30);
    *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 240.0f, 0.00200000009f);
    t7 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t7;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t7);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 20) + 0x28) + 0x20);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x28) + 0x20);
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 240.0f, 0.00200000009f);
    t10 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t10;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t10);
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x28));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 0.0f, 0.00200000009f);
    t16 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t16;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t16);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, 0.00200000009f);
    t20 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t20;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t20);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 240.0f, 0.00200000009f);
    t24 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t24;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t24);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 240.0f, 0.00200000009f);
    t28 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t28;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t28);
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x28));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 240.0f, 0.00200000009f);
    t34 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t34;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t34);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 240.0f, 0.00200000009f);
    t38 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t38;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t38);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(640.0f, 480.0f, 0.00200000009f);
    t42 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t42;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t42);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 480.0f, 0.00200000009f);
    t46 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t46;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t46);
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x28));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 240.0f, 0.00200000009f);
    t52 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t52;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t52);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 240.0f, 0.00200000009f);
    t56 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t56;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t56);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(320.0f, 480.0f, 0.00200000009f);
    t60 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t60;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t60);
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 480.0f, 0.00200000009f);
    t64 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t64;
    primVertexSet(0x96000000, 0x0, 0x0, 0x0, t64);
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x28));
    *(unsigned int *)(((*(int *)(((int)stk + 40))) + 0x60)) = 0x1;
    *(unsigned int *)0x8C30196C = 0x1;
    *(unsigned int *)0x8C301BEC = 0x1;
    if ((*(int *)0x8C301BF0) == 1) {
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) - 1);
    } else {
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) - 2);
    }
    if (((int)(*(int *)((a4 + 0x20))) <= (int)0x64) && (t76 = *(int *)((a4 + 0x2C)), t76 == 0)) {
        t77 = entryFirstPortFlag();
        if (t77 == 0) {
            *(unsigned int *)((a4 + 0x2C)) = 0x1;
        }
    }
    if (((*(int *)0x8C287ADC) == 2) && ((t84 = *(int *)((a4 + 0x28)), t84 == 0) && ((t85 = *(int *)((a4 + 0x30)), t85 == 0) && (t86 = *(int *)0x8C287D5C, t86 == 0)))) {
        t87 = plPic2SeleLoad();
        if (t87 == 1) {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
            sprSet192Load();
        }
    }
    t95 = *(int *)0x8C287ADC;
    if (t95 != 4) {
        t98 = *(int *)((a4 + 0x28));
        if ((t98 != 1) && (t99 = *(int *)0x8C287D5C, t99 == 0)) {
        } else {
            *(unsigned int *)((a4 + 0x30)) = 0x1;
        }
        t102 = t98;
    } else {
        *(unsigned int *)((a4 + 0x30)) = 0x1;
        t102 = t95;
    }
    t178 = t102;
    if ((int)(*(int *)((a4 + 0x20))) >= 0) {
    } else {
        t169 = t102;
        if ((*(int *)((a4 + 0x30))) == 0) {
        } else {
            *(unsigned int *)0x8C38BA70 = 0x1;
            if ((*(int *)((a4 + 0x28))) == 0) {
                { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 20) + 0x18)) = *(struct mv4 *)(0x8C10DB28); }
                charaTexFreeAll();
                stageTexFree();
                strmBgmPlay(0x2);
                *(unsigned int *)0x8C3343C0 = 0x0;
                *(unsigned int *)0x8C3343C4 = 0x0;
                strmVoiceQueueReset();
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFF7FFF);
                if (((*(int *)0x8C287ADC) == 2) && (t115 = *(int *)0x8C287D5C, t115 == 0)) {
                    for (;;) {
                        t116 = advSpriteLoad();
                        if (t116 == 1) {
                            break;
                        }
                        nlWaitVSync();
                    }
                    sprAdvLoad();
                } else {
                    t123 = 0xFFFF7FFF;
                }
                t124 = *(int *)0x8C287D5C;
                if (t124 == 1) {
                    t125 = t124;
                    t126 = 0x8C287D5C;
                    t127 = t123;
                    t128 = 0x0;
                    for (;;) {
                        if ((int)t128 >= (int)0x4) {
                            break;
                        }
                        t125 = 0x8C185298;
                        t127 = t128;
                        t127 = (t127 << 1);
                        t126 = (*(short *)((t127 + t125)));
                        t125 = (*(short *)0x8C343262);
                        t126 = (unsigned short)t126;
                        t125 = (unsigned short)t125;
                        if ((t125 & t126) != 0) {
                            t126 = 0x8C0C67EC;
                            t125 = (uniformTexRestore(t128));
                            t125 = t128;
                            t125 = (t125 << 2);
                            *(unsigned int *)(((((int)stk + 20) + 0x18) + t125)) = 0x1;
                        } else {
                            t134 = t126;
                            t135 = t127;
                        }
                        t128 = (t128 + 0x1);
                        t126 = t134;
                        t127 = t135;
                    }
                    t139 = 0x0;
                    for (;;) {
                        if ((int)t139 >= (int)0x4) {
                            break;
                        }
                        entryPortLeave(t139, 0x1);
                        t139 = (t139 + 0x1);
                    }
                    selGridClear();
                    entryInit();
                    t144 = (entryClearJoined());
                    t146 = 0x0;
                    for (;;) {
                        if ((int)t146 >= (int)0x4) {
                            break;
                        }
                        t144 = t146;
                        t144 = (t144 << 2);
                        t145 = (*(int *)(((((int)stk + 20) + 0x18) + t144)));
                        if (t145 != 0) {
                            t144 = (entryPortJoin(t146, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4), *(int *)((int)stk + 20 + 8), *(int *)((int)stk + 20 + 12)));
                        } else {
                            t150 = t145;
                        }
                        t146 = (t146 + 0x1);
                        t145 = t150;
                    }
                }
                *(unsigned int *)0x8C20D150 = 0x0;
                *(unsigned int *)0x8C20D14C = 0x1;
            } else {
                *(unsigned int *)0x8C287C50 = 0x0;
                *(unsigned int *)0x8C20D14C = 0x5;
                *(unsigned int *)0x8C20D150 = 0x0;
            }
            *(unsigned int *)0x8C287C60 = 0x0;
            *(unsigned int *)0x8C301BEC = 0x0;
            t169 = (nlCloseEvent2(a4));
        }
        t178 = t169;
    }
    return t178;
}

float FUN_8c0611cc(int a4, float f4, float f5, float f6, float f7)
{
    int stk[24];

    register float F0;
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
    register float w0_5;
    register float w0_6;
    register float w0_7;
    v0_5 = a4;
    w0_5 = f6;
    w0_4 = f7;
    v0_1 = *(int *)((v0_5 + 0xB5C));
    v0_0 = *(int *)(((((0x3 & (v0_1 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 52)) = 0x8C291F24;
    v0_3 = (0x12E);
    v0_6 = (v0_5);
    v0_0 = (((v0_0 * 0x160) + 0x8C2FC69C));
    v0_2 = (((v0_1 * 0x160) + 0x8C2FC69C));
    v0_5 = (0x8C2FC69C);
    v0_7 = (0x160);
    v0_8 = (v0_1);
    v0_4 = ((((0x3 & (v0_1 + 0x2)) * 0xD78) + 0x8C287D84));
    if (((*(signed char *)((((v0_1 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0)) goto L_8C06121E;
    L_8C06156C:;
    return F0;
    L_8C06121E:;
    if (((*(signed char *)((v0_0 + v0_3))) == 0)) goto L_8C061228;
    goto L_8C06156C;
    L_8C061228:;
    v0_1 = (0x1);
    if ((((*(int *)((0x54 + (*(int *)(((int)stk + 52)))))) & 4) == 0)) goto L_8C061260;
    v0_3 = (serveGetReceiver()) != (*(int *)(((0xB5C + v0_6) + 0x0)));
    if (!(v0_3)) goto L_8C061562;
    v0_2 = serveGetReceiver();
    v0_3 = (v0_2);
    if ((v0_2 != (*(int *)(((0xB5C + v0_4) + 0x0))))) goto L_8C06125C;
    goto L_8C061568;
    L_8C061562:;
    *(unsigned char *)((v0_2 + 0x12E)) = v0_1;
    v0_3 = (0x12E);
    goto L_8C06156C;
    L_8C061568:;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    v0_3 = (0x12E);
    goto L_8C06156C;
    L_8C06125C:;
    goto L_8C06156C;
    L_8C061260:;
    if (((*(int *)((v0_4 + 0xC5C))) != 12)) goto L_8C061276;
    if ((((*(int *)((v0_4 + 0xB60))) & 0x100) == 0)) goto L_8C061276;
    goto L_8C061562;
    L_8C061276:;
    if (((*(int *)((v0_6 + 0xC5C))) != 12)) goto L_8C06128C;
    if ((((*(int *)((v0_6 + 0xB60))) & 0x100) == 0)) goto L_8C06128C;
    goto L_8C061568;
    L_8C06128C:;
    w0_2 = *(float *)((v0_6 + 0xAF0));
    w0_0 = ((*(float *)((v0_4 + 0xAF0))));
    w0_1 = (w0_2);
    if ((0.0f > w0_2)) goto L_8C06129C;
    w0_4 = (w0_1);
    L_8C0612A0:;
    if ((0.0f > w0_0)) goto L_8C0612AA;
    w0_1 = (w0_0);
    L_8C0612AE:;
    if ((!(w0_1 > w0_4))) goto L_8C0612D8;
    v0_3 = (v0_4);
    v0_4 = (v0_6);
    L_8C0612DC:;
    v0_9 = *(int *)(((int)stk + 52));
    v0_2 = *(int *)((v0_4 + 0xB5C));
    v0_0 = *(int *)((v0_3 + 0xB5C));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((v0_9 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((v0_9 + 0x18)); }
    w0_0 = ((float (*)(int, int, int, Stk3, Stk3))(cpuDblPathCross))((0xB8 + ((v0_2 * v0_7) + v0_5)), v0_7, v0_8, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((v0_9 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((v0_9 + 0x18)); }
    w0_1 = ((float (*)(int, Stk3, Stk3))(cpuDblPathCross))((0xB8 + ((v0_0 * v0_7) + v0_5)), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    v0_0 = (((v0_0 * v0_7) + v0_5));
    v0_2 = (((v0_2 * v0_7) + v0_5));
    F0 = (w0_1);
    w0_2 = (w0_0);
    w0_3 = (w0_1);
    if ((!((*(float *)((v0_4 + 0xBA0))) > 30.0f))) goto L_8C06138C;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    w0_2 = *(float *)((v0_3 + 0xB9C));
    w0_1 = (0.0f);
    w0_0 = (w0_2);
    if ((!(w0_2 > 0.0f))) goto L_8C06135C;
    v0_5 = (0x1);
    L_8C061366:;
    v0_3 = (0x13D);
    if ((v0_5 == (*(signed char *)((v0_2 + 0x13D))))) goto L_8C061372;
    goto L_8C06156C;
    L_8C061372:;
    if ((0.0f > w0_0)) goto L_8C06137C;
    w0_4 = (w0_0);
    L_8C061380:;
    v0_3 = (0x8C0613E0);
    if ((w0_4 > 21.9400005f)) goto L_8C061414;
    goto L_8C06156C;
    L_8C061414:;
    *(unsigned char *)((v0_2 + 0x13D)) = ((short)(*(signed char *)((v0_2 + 0x13D))) * (short)0xFFFFFFFF);
    *(unsigned char *)((v0_0 + 0x13D)) = ((short)(*(signed char *)((v0_0 + 0x13D))) * (short)0xFFFFFFFF);
    v0_3 = (0x13D);
    goto L_8C06156C;
    L_8C06137C:;
    w0_4 = ((-w0_0));
    goto L_8C061380;
    L_8C06135C:;
    if ((!(w0_1 > w0_0))) goto L_8C061364;
    v0_5 = (0xFFFFFFFF);
    goto L_8C061366;
    L_8C061364:;
    v0_5 = (0x0);
    goto L_8C061366;
    L_8C06138C:;
    if ((((*(int *)((v0_6 + 0xB60))) & 4) == 0)) goto L_8C06142A;
    w0_0 = cpuDistXZ((0xAE8 + v0_4), (0xBA8 + v0_4));
    F0 = (w0_0);
    if ((!(w0_0 > 25.0f))) goto L_8C06142A;
    *(unsigned char *)((v0_0 + 0x12E)) = v0_1;
    w0_1 = *(float *)((v0_3 + 0xB9C));
    w0_4 = (0.0f);
    w0_0 = (w0_1);
    if ((!(w0_1 > 0.0f))) goto L_8C0613BA;
    v0_5 = (0x1);
    L_8C0613EE:;
    v0_3 = (0x13D);
    if ((v0_5 == (*(signed char *)((v0_2 + 0x13D))))) goto L_8C0613FA;
    goto L_8C06156C;
    L_8C0613FA:;
    if ((0.0f > w0_0)) goto L_8C061404;
    w0_4 = (w0_0);
    L_8C061408:;
    v0_3 = (0x8C0614E4);
    if ((w0_4 > 21.9400005f)) goto L_8C061414;
    goto L_8C06156C;
    L_8C061404:;
    w0_4 = ((-w0_0));
    goto L_8C061408;
    L_8C0613BA:;
    if ((!(w0_4 > w0_0))) goto L_8C0613EC;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0613EE;
    L_8C0613EC:;
    v0_5 = (0x0);
    goto L_8C0613EE;
    L_8C06142A:;
    w0_6 = *(float *)((v0_4 + 0xAE8));
    w0_7 = *(float *)((v0_4 + 0xB9C));
    w0_0 = (25.0f);
    w0_1 = ((w0_6 - w0_7));
    w0_5 = (w0_7);
    w0_4 = (w0_6);
    if ((0.0f > (w0_6 - w0_7))) goto L_8C061444;
    w0_4 = (w0_1);
    L_8C06144C:;
    if ((!(w0_0 > w0_4))) goto L_8C061454;
    goto L_8C061562;
    L_8C061454:;
    w0_6 = *(float *)((v0_4 + 0xAE8));
    w0_7 = *(float *)((v0_4 + 0xB9C));
    w0_1 = ((w0_6 - w0_7));
    w0_5 = (w0_6);
    w0_4 = (w0_7);
    if ((0.0f > (w0_6 - w0_7))) goto L_8C06146A;
    w0_4 = (w0_1);
    L_8C061472:;
    if ((!(37.5f > w0_4))) goto L_8C0614A4;
    *(unsigned char *)((v0_2 + 0x12E)) = v0_1;
    w0_2 = *(float *)((v0_3 + 0xAE8));
    w0_3 = *(float *)((v0_3 + 0xB9C));
    v0_3 = (0xB9C);
    w0_1 = ((w0_2 - w0_3));
    w0_5 = (w0_2);
    w0_4 = (w0_3);
    if ((0.0f > (w0_2 - w0_3))) goto L_8C061494;
    w0_4 = (w0_1);
    L_8C06149C:;
    if ((!(w0_0 > w0_4))) goto L_8C06156C;
    goto L_8C061568;
    L_8C061494:;
    w0_1 = ((-w0_5));
    w0_4 = (((-w0_5) + w0_4));
    goto L_8C06149C;
    L_8C0614A4:;
    w0_6 = *(float *)((v0_3 + 0xAE8));
    w0_7 = *(float *)((v0_3 + 0xB9C));
    w0_1 = ((w0_6 - w0_7));
    w0_5 = (w0_6);
    w0_4 = (w0_7);
    if ((0.0f > (w0_6 - w0_7))) goto L_8C0614BA;
    w0_4 = (w0_1);
    L_8C0614C2:;
    if ((w0_0 > w0_4)) goto L_8C061568;
    w0_0 = *(float *)((v0_4 + 0xAE8));
    w0_6 = *(float *)((v0_4 + 0xB9C));
    w0_4 = (0.0f);
    w0_1 = (w0_0);
    w0_5 = ((w0_6 - w0_0));
    if ((!((w0_6 - w0_0) > 0.0f))) goto L_8C0614F0;
    v0_5 = (0x1);
    L_8C0614FA:;
    w0_5 = *(float *)((v0_3 + 0xAE8));
    w0_4 = (0.0f);
    w0_0 = ((w0_1 - w0_5));
    if ((!((w0_1 - w0_5) > 0.0f))) goto L_8C06150C;
    v0_6 = (0x1);
    L_8C061516:;
    if ((v0_5 == v0_6)) goto L_8C061562;
    w0_5 = *(float *)((v0_3 + 0xAE8));
    w0_6 = *(float *)((v0_3 + 0xB9C));
    w0_4 = (0.0f);
    w0_0 = ((w0_6 - w0_5));
    w0_1 = (w0_5);
    if ((!((w0_6 - w0_5) > 0.0f))) goto L_8C06152E;
    v0_3 = (0x1);
    L_8C061538:;
    w0_0 = *(float *)((v0_4 + 0xAE8));
    w0_4 = (0.0f);
    w0_5 = ((w0_1 - w0_0));
    if ((!((w0_1 - w0_0) > 0.0f))) goto L_8C06154A;
    v0_5 = (0x1);
    L_8C061554:;
    if ((v0_3 == v0_5)) goto L_8C061568;
    w0_4 = (0.0f);
    if ((w0_3 == 0.0f)) goto L_8C061568;
    if ((w0_2 != w0_4)) goto L_8C061568;
    goto L_8C061562;
    L_8C06154A:;
    if ((!(w0_4 > w0_5))) goto L_8C061552;
    v0_5 = (0xFFFFFFFF);
    goto L_8C061554;
    L_8C061552:;
    v0_5 = (0x0);
    goto L_8C061554;
    L_8C06152E:;
    if ((!(w0_4 > w0_0))) goto L_8C061536;
    v0_3 = (0xFFFFFFFF);
    goto L_8C061538;
    L_8C061536:;
    v0_3 = (0x0);
    goto L_8C061538;
    L_8C06150C:;
    if ((!(w0_4 > w0_0))) goto L_8C061514;
    v0_6 = (0xFFFFFFFF);
    goto L_8C061516;
    L_8C061514:;
    v0_6 = (0x0);
    goto L_8C061516;
    L_8C0614F0:;
    if ((!(w0_4 > w0_5))) goto L_8C0614F8;
    v0_5 = (0xFFFFFFFF);
    goto L_8C0614FA;
    L_8C0614F8:;
    v0_5 = (0x0);
    goto L_8C0614FA;
    L_8C0614BA:;
    w0_1 = ((-w0_5));
    w0_4 = (((-w0_5) + w0_4));
    goto L_8C0614C2;
    L_8C06146A:;
    w0_4 = (((-w0_5) + w0_4));
    goto L_8C061472;
    L_8C061444:;
    w0_4 = (((-w0_4) + w0_5));
    goto L_8C06144C;
    L_8C0612D8:;
    v0_3 = (v0_6);
    v0_4 = (v0_4);
    goto L_8C0612DC;
    L_8C0612AA:;
    w0_1 = ((-w0_0));
    goto L_8C0612AE;
    L_8C06129C:;
    w0_4 = ((-w0_1));
    goto L_8C0612A0;
}
