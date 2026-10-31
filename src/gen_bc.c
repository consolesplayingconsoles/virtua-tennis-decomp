/* Straight-line functions with calls and guards (batch gen_bc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char gNlCommonTextureOffset[];
extern char gNlTextureSurfaces[];
extern char padPeri[];

typedef struct { int w[3]; } Stk3;
typedef struct { int w[4]; } Stk4;
int nlUnitVector(int);
int _slow_strcmp1(int, int);
int abs(int);
int buAnalyzeBackupFileImage(int, int);
int buGetDiskInfo(int, int);
int buGetFileInfo(int, int, int);
int buGetFileSize(int, int);
int buGetLastError(int);
int buLoadFile(int, int, int, int);
int buStat(int);
int decoSwingDraw(int, int, Stk3, float);
int kmFreeTexture(int);
int memmove(int, int, int);
int msgWinSet(int, int);
int mtxGetPos(int, int, int);
int nlAddVector(int, int);
int nlAddVector3op(int, int, int);
int nlCommonTextureClearTextureIndex(int, int);
int nlFreePalette(int, int, int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAY(int);
int nlRotateV(int, int);
int nlScaleVector(int, int, float);
float nlSin(int);
int nlSprPut(int, int, int, int);
int nlSubVector3op(int, int, int);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
int nlsndSeqRequest(int);
int padLcdMessage(int);
int padLcdPixel(int, int, int, int);
int padVmsBeep(int, int);
int primSprDrawScaleAlpha(int, int, int, int, Stk3, float, float, float);
int primSprSetSize(int, float, float);
int set_event(int, int);
int set_event2(int, int);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int unlockApplyW1(void);
int unlockApplyW2(void);
int vecAdd(int, int, int, int, int);
float vecDistXZ(Stk3);
float vecLength(Stk4);
int vecMake(int, int, int, int, int, float, float, float);
int vecScale(int, int, int, int, int, float, float, float, float, float, float, float);
int vecSub(int, int, int, int, int);
int decoHeaderDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int BupLoadFile(int a4, int a5, int a6, int a7);
int cpuSglHitReady(int a4, int a5, int a6, int a7, float f4, float f5, float f6);
int cpuDblPartnerSignal(void);
int countryNamePutC(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
void playerPivotTurn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
float sprSheetPut(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int cpuDblSwingInput(int a4);
void segPlaneHit(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14);
int seFootLand(int a4, int a5, float f4);
int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6);
void ballMarkCheck(int a4, int a5, int a6, int a7);
int padLcdLine(int a4, int a5, int a6, int a7);
int cpuSglReceivePos(int a4, float f4, float f5);
void umpCallDeuce(int a4);
void titleSprAnim(int a4);


int BupLoadFile(int a4, int a5, int a6, int a7)
{
    int t0;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t16;
    int t26;
    int t31;
    int stk[46];

    *(unsigned int *)(((int)stk + 24)) = a6;
    *(unsigned int *)(((int)stk + 28)) = a7;
    t0 = *(int *)0x8C40C628;
    *(unsigned int *)(((int)stk + 20)) = ((t0 * 0x4C) + 0x8C40C6B0);
    t2 = buGetDiskInfo((*(int *)0x8C40C628), (((t0 * 0x4C) + 0x8C40C6B0) + 0x14));
    padVmsBeep(0x0, 0xF4);
    t4 = buGetFileSize(a4, a5);
    *(unsigned int *)(((int)stk + 20)) = t4;
    t5 = buLoadFile(a4, a5, 0x8C41BE14, t4);
    if (t5 == 0) {
        for (;;) {
            t6 = buStat(a4);
            if (t6 == -1) {
                if (t2 == 0xFFFFFF01) {
                    break;
                }
                continue;
            }
            t7 = buGetLastError(a4);
            if (t7 == 0) {
                t8 = buAnalyzeBackupFileImage((((int)stk + 20) + 0x20), 0x8C41BE14);
                if (t8 != 0) {
                    padLcdMessage(0xA);
                    return t8;
                }
                memmove((*(int *)(((int)stk + 24))), (*(int *)(((int)stk + 140))), (*(int *)(((int)stk + 28))));
                if (t8 != 0) {
                    padLcdMessage(0xA);
                    padVmsBeep(0x0, 0x0);
                    if (t8 == 0) {
                        t16 = _slow_strcmp1(a5, 0x8C126AB0);
                        if (t16 == 0) {
                            unlockApplyW1();
                            unlockApplyW2();
                            return t8;
                        }
                        return t8;
                    }
                    return t8;
                }
                vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
                msgWinSet(0x6, 0x0);
                padLcdMessage(0xD);
                buGetFileInfo((*(int *)0x8C40C628), a5, (((int)stk + 20) + 0xC));
                memmove(0x8C40C6A8, (((int)stk + 20) + 0x16), 0x8);
                padVmsBeep(0x0, 0x0);
                if (t8 == 0) {
                    t26 = _slow_strcmp1(a5, 0x8C126AB0);
                    if (t26 == 0) {
                        unlockApplyW1();
                        unlockApplyW2();
                        return t8;
                    }
                    return t8;
                }
                return t8;
            }
            padLcdMessage(0xA);
            return t7;
        }
        t31 = 0xFFFFFF9D;
    } else {
        padLcdMessage(0xA);
        t31 = t5;
    }
    return t31;
}


int cpuDblPartnerSignal(void)
{
    int t1;
    int t2;
    int t3;
    int t6;
    int t40;
    int t41;
    int t17;
    int t12;
    int t28;
    int t30;
    int t36;
    int t37;
    int t54;
    int t50;
    int t0;
    int stk[12];

    *(unsigned int *)(((int)stk + 12)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 8)) = 0x8C28B364;
    *(unsigned char *)(((int)stk + 16)) = 0x1;
    *(unsigned char *)(((int)stk + 4)) = 0x1;
    t1 = 0x1;
    t2 = (int)Player;
    for (;;) {
        t3 = *(int *)((t2 + 0xB5C));
        t6 = *(int *)((((*(int *)(((0xB5C + (((0x3 & (t3 + 0x2)) * 0xD78) + (int)Player)) + 0x0))) << 2) + ((*(int *)(((int)stk + 12))) + 0x14)));
        t40 = t6;
        t41 = 0x0;
        if (t6 == 2) {
            t0 = 0x20000;
            t1 = (*(int *)(((((0x3 & (t3 + 0x2)) * 0xD78) + (int)Player) + 0xB5C)));
            t1 = (t1 * 0x160);
            t1 = (t1 + 0x8C2FC69C);
            t17 = 0x0;
            if (((*(int *)(((*(int *)(((int)padPeri + ((*(int *)((t2 + 0xB64))) << 2)))) + 0x10))) & t0) != 0) {
                t12 = *(signed char *)((t1 + 0x12B));
                *(unsigned char *)((t1 + 0x12B)) = (t12 - 1);
                if ((int)(signed char)(t12 - 1) < 0) {
                    *(unsigned char *)((t1 + 0x12B)) = 0x0;
                } else {
                    *(unsigned char *)((t1 + 0x146)) = 0xFFFFFFFF;
                }
                t17 = 0x1;
            }
            t0 = (*(int *)(((*(int *)(((int)padPeri + ((*(int *)((t2 + 0xB64))) << 2)))) + 0x10)));
            t28 = t17;
            if ((t0 & 0x10000) != 0) {
                t0 = (*(signed char *)((t1 + 0x12B)));
                t0 = (t0 + 0x1);
                *(unsigned char *)((t1 + 0x12B)) = t0;
                t0 = (signed char)t0;
                if ((int)t0 > (int)0x2) {
                    *(unsigned char *)((t1 + 0x12B)) = 0x2;
                } else {
                    t0 = 0x146;
                    t0 = (t0 + t1);
                    *(unsigned char *)((t0 + 0x0)) = (*(signed char *)(((int)stk + 16)));
                }
                t28 = (t17 + 0x1);
            }
            t30 = *(int *)((t2 + 0xB64));
            t0 = (*(int *)(((*(int *)(((int)padPeri + (t30 << 2)))) + 0x10)));
            t36 = (t30 << 2);
            t37 = t28;
            if ((t0 & 0x100) != 0) {
                t0 = (*(signed char *)((t1 + 0x12B)));
                t0 = (t0 + 0x1);
                *(unsigned char *)((t1 + 0x12B)) = t0;
                t0 = (signed char)t0;
                if ((int)t0 > (int)0x2) {
                    *(unsigned char *)((t1 + 0x12B)) = 0x0;
                }
                *(unsigned char *)((t1 + 0x146)) = (*(signed char *)(((int)stk + 4)));
                t36 = 0x146;
                t37 = (t28 + 0x1);
            }
            t40 = t36;
            t41 = t37;
        }
        t54 = t40;
        if (t41 != 0) {
            t50 = 0xA24;
            if ((*(int *)(((((0x3 & (t3 + 0x2)) * 0xD78) + (int)Player) + 0xA24))) == 0) {
                t1 = (*(int *)(((((0x3 & (t3 + 0x2)) * 0xD78) + (int)Player) + 0xB5C)));
                *(unsigned int *)(((((0x3 & (t3 + 0x2)) * 0xD78) + (int)Player) + 0xA24)) = 0x4;
                t1 = (t1 * 0x160);
                t1 = (t1 + 0x8C2FC69C);
                *(unsigned char *)((t1 + 0xAF)) = 0x0;
                *(unsigned char *)((t1 + 0xAE)) = 0x0;
                *(unsigned char *)((t1 + 0xB1)) = 0x0;
                *(unsigned char *)((t1 + 0xB0)) = 0x0;
                t50 = 0xB0;
            }
            t54 = t50;
        }
        t2 = (t2 + 0xD78);
        if ((unsigned int)t2 < (unsigned int)(*(int *)(((int)stk + 8)))) continue;
        break;
    }
    return t54;
}


void playerPivotTurn(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float t0;
    float t1;
    int t2;
    int t21;
    int t30;
    int stk[42];

    stk[30] = a8;
    stk[31] = a9;
    stk[32] = a10;
    stk[33] = a11;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((0xAF4 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xAC4 + a4)); }
    t0 = vecDistXZ(*(Stk3 *)((0xAC4 + a4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((0xAF4 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xAB8 + a4)); }
    t1 = vecDistXZ(*(Stk3 *)((0xAB8 + a4)));
    t2 = 0x0;
    if (t1 > t0) {
        t2 = 0x1;
    }
    if ((*(short *)((a4 + 0xB06))) != (*(short *)((a4 + 0xB08)))) {
        nlSubVector3op((((int)stk + 52) + 0x18), ((((t2 << 1) + t2) << 2) + (0xAB8 + a4)), (0xAE8 + a4));
        nlPushUnitMatrix();
        nlTranslate((*(float *)(((int)stk + 76))), 0.0f, (*(float *)(((int)stk + 84))));
        nlRotateAY(((*(short *)((a4 + 0xB06))) - (*(short *)((a4 + 0xB08)))));
        nlTranslate((-(*(float *)(((int)stk + 76)))), 0.0f, (-(*(float *)(((int)stk + 84)))));
        mtxGetPos((((int)stk + 52) + 0x18), (((int)stk + 52) + 0x1C), (((int)stk + 52) + 0x20));
        *(float *)(((int)stk + 80)) = 0.0f;
        nlPopMatrix(0x1);
        *(unsigned short *)((a4 + 0xB08)) = (*(short *)((a4 + 0xB06)));
        nlAddVector((0xAE8 + a4), (((int)stk + 52) + 0x18));
        t21 = 0x0;
        for (;;) {
            nlAddVector(((0xAB8 + a4) + t21), (((int)stk + 52) + 0x18));
            nlAddVector(((0xAD0 + a4) + t21), (((int)stk + 52) + 0x18));
            t21 = (t21 + 0xC);
            if ((unsigned int)t21 >= (unsigned int)0x18) {
                break;
            }
        }
    }
    t30 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xAD0 + a4) + t30)) = *(struct mv3 *)(((0xAB8 + a4) + t30)); }
        t30 = (t30 + 0xC);
        if ((unsigned int)t30 >= (unsigned int)0x18) {
            break;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(((((int)stk + 52) + 0x44) + 0x0)))) = *(struct mv3 *)((((int)stk + 52) + 0x18)); }
}


int cpuDblSwingInput(int a4)
{
    int t0;
    int t23;
    int t48;
    int stk[2];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R14;
    int T_;
    R4 = a4;
    L_8C057A94:;
    t0 = *(int *)((R4 + 0xB5C));
    R5 = (((t0 * 0x160) + 0x8C2FC69C));
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xAC))) != 0)) goto L_8C057AB0;
    goto L_8C057AAC;
    L_8C057AAC:;
    goto L_8C057BA8;
    L_8C057BA8:;
    R0 = (0xB60);
    if ((((*(int *)((R4 + 0xB60))) & 0x400) != 0)) goto L_8C057BDA;
    goto L_8C057BB2;
    L_8C057BB2:;
    R0 = (0xAC);
    if (((*(signed char *)((R5 + 0xAC))) != 0)) goto L_8C057BDA;
    goto L_8C057BBA;
    L_8C057BBA:;
    R0 = (0xAD);
    if (((*(signed char *)((R5 + 0xAD))) != 0)) goto L_8C057BDA;
    goto L_8C057BC2;
    L_8C057BC2:;
    R0 = (0xC5C);
    if (((int)(*(int *)((R4 + 0xC5C))) < (int)0x9)) goto L_8C057BDA;
    goto L_8C057BCC;
    L_8C057BCC:;
    if (((int)(*(int *)((R4 + R0))) > (int)0xC)) goto L_8C057BDA;
    goto L_8C057BD4;
    L_8C057BD4:;
    *(unsigned char *)((R5 + 0xAC)) = 0x1;
    R0 = (0xAC);
    goto L_8C057BDA;
    L_8C057BDA:;
    return R0;
    L_8C057AB0:;
    *(unsigned short *)((R5 + 0x20)) = 0x0;
    R6 = (0x0);
    if ((((*(int *)((R4 + 0xB60))) & 0x100) != 0)) goto L_8C057B04;
    goto L_8C057AC0;
    L_8C057AC0:;
    *(unsigned char *)((R5 + 0xAC)) = R6;
    *(unsigned char *)((R5 + 0xAD)) = 0x1;
    goto L_8C057BA8;
    L_8C057B04:;
    t23 = *(int *)((0x8C287AE0 + ((*(int *)((R4 + 0xB5C))) << 2)));
    R0 = (t23);
    R6 = ((*(int *)0x8C20D19C));
    if ((t23 != 2)) goto L_8C057B6A;
    goto L_8C057B16;
    L_8C057B16:;
    if (((*(signed char *)((R5 + 0x141))) == 0)) goto L_8C057BA8;
    goto L_8C057B1E;
    L_8C057B1E:;
    if (((unsigned char)(*(signed char *)((R5 + 0x141))) != 1)) goto L_8C057B44;
    goto L_8C057B28;
    L_8C057B28:;
    R0 = (R6);
    if (((int)R6 < 0)) goto L_8C057B32;
    goto L_8C057B2E;
    L_8C057B2E:;
    R0 = ((R0 & 0x7));
    goto L_8C057B3C;
    L_8C057B3C:;
    if ((R0 == 0)) goto L_8C057B86;
    goto L_8C057B40;
    L_8C057B40:;
    goto L_8C057BA8;
    L_8C057B86:;
    R0 = (R6);
    if (((int)R6 < 0)) goto L_8C057B90;
    goto L_8C057B8C;
    L_8C057B8C:;
    R0 = ((R0 & 0x1));
    goto L_8C057B9A;
    L_8C057B9A:;
    *(unsigned short *)(((0x20 + R5) + 0x0)) = ((((R0 << 2) << 2) << 2) + 0x40);
    goto L_8C057BA8;
    L_8C057B90:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C057B9A;
    L_8C057B32:;
    R0 = (((~(((~R0) + 0x1) & 0x7)) + 0x1));
    goto L_8C057B3C;
    L_8C057B44:;
    if (((unsigned char)(*(signed char *)((R5 + 0x141))) != 2)) goto L_8C057B86;
    goto L_8C057B4E;
    L_8C057B4E:;
    R0 = (R6);
    if (((int)R6 < 0)) goto L_8C057B58;
    goto L_8C057B54;
    L_8C057B54:;
    R0 = ((R0 & 0x1));
    goto L_8C057B62;
    L_8C057B62:;
    if ((R0 != 0)) goto L_8C057BA8;
    goto L_8C057B66;
    L_8C057B66:;
    goto L_8C057B86;
    L_8C057B58:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C057B62;
    L_8C057B6A:;
    t48 = *(int *)0x8C2FCC1C;
    R7 = (((t48 << 2) + 0x8C15A058));
    if (((*(int *)((((t48 << 2) + 0x8C15A058) + 0x0))) == 0)) goto L_8C057BA8;
    goto L_8C057B7A;
    L_8C057B7A:;
    if ((((int)((int)R6 % (int)(*(int *)((R7 + 0x0))))) != 0)) goto L_8C057BA8;
    goto L_8C057B86;
}



int nlObjPutFreeTextureOnce_Sub(int a4, int a5, int a6)
{
    int t10;
    int t13;
    int t23;
    int t29;
    int t36;
    int t42;
    int t60;
    int t62;
    int stk[15];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C0F2010:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    *(unsigned int *)(((int)stk + 12)) = R6;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    if (((int)(*(int *)((R4 + 0x0))) < 0)) goto L_8C0F2038;
    goto L_8C0F2032;
    L_8C0F2032:;
    if (((*(int *)((R4 + 0x18))) != 0)) goto L_8C0F2060;
    goto L_8C0F2038;
    L_8C0F2038:;
    R0 = (0x0);
    goto L_8C0F2142;
    L_8C0F2142:;
    return R0;
    L_8C0F2060:;
    *(unsigned int *)(((int)stk + 16)) = (((((*(int *)(((int)stk + 8))) == 0)) ? 1 : 0) ^ 0x1);
    R10 = ((R4 + 0x18));
    R13 = ((int)gNlTextureSurfaces);
    R14 = (0x8C4241C0);
    R8 = (0xFFFFFFFF);
    goto L_8C0F2074;
    L_8C0F2074:;
    t10 = *(int *)((R10 + 0x20));
    t13 = R10;
    R10 = ((R10 + 0x50));
    R12 = t13;
    R4 = (t10);
    if (((int)t10 < 0)) goto L_8C0F2108;
    goto L_8C0F207E;
    L_8C0F207E:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0F2096;
    goto L_8C0F2084;
    L_8C0F2084:;
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_8C0F2096;
    goto L_8C0F208A;
    L_8C0F208A:;
    R4 = ((*(int *)(((((R4 << 2) << 2) + (*(int *)(((int)stk + 8)))) + 0xC))));
    goto L_8C0F2096;
    L_8C0F2096:;
    t23 = *(int *)(int)gNlCommonTextureOffset;
    R11 = ((((R4 + t23) << 2) << 1));
    R3 = ((*(int *)((R14 + 0x0))));
    R4 = ((R4 + t23));
    goto L_8C0F20A4;
    L_8C0F20A4:;
    if (((unsigned int)(*(int *)(((R3 + R11) + 0x0))) <= (unsigned int)0x0)) goto L_8C0F2108;
    goto L_8C0F20AE;
    L_8C0F20AE:;
    t29 = *(int *)((R14 + 0x0));
    *(unsigned int *)(((t29 + R11) + 0x0)) = ((*(int *)(((t29 + R11) + 0x0))) - 1);
    if (((*(int *)((((*(int *)((R14 + 0x0))) + R11) + 0x0))) != 0)) goto L_8C0F2108;
    goto L_8C0F20C2;
    L_8C0F20C2:;
    *(unsigned int *)(((int)stk + 4)) = (*(int *)((((*(int *)((R14 + 0x0))) + R11) + 0x4)));
    t36 = *(int *)(((int)stk + 4));
    R9 = ((t36 * 0x3C));
    if (((*(int *)((((*(int *)((R13 + 0x0))) + (t36 * 0x3C)) + 0x28))) != 0)) goto L_8C0F20EE;
    goto L_8C0F20DC;
    L_8C0F20DC:;
    t42 = kmFreeTexture(((*(int *)((R13 + 0x0))) + R9));
    R4 = (t42);
    if ((t42 == 0)) goto L_8C0F20EE;
    goto L_8C0F20EA;
    L_8C0F20EA:;
    *(unsigned int *)(((int)stk + 20)) = 0x1;
    goto L_8C0F20EE;
    L_8C0F20EE:;
    *(unsigned int *)((((*(int *)((R13 + 0x0))) + R9) + 0x2C)) = 0x0;
    *(unsigned int *)((((*(int *)((R13 + 0x0))) + R9) + 0x38)) = R8;
    nlCommonTextureClearTextureIndex((*(int *)(((int)stk + 4))), R5);
    *(unsigned int *)((((*(int *)((R14 + 0x0))) + R11) + 0x4)) = R8;
    goto L_8C0F2108;
    L_8C0F2108:;
    if (((*(int *)0x8C1DC888) != 0)) goto L_8C0F2134;
    goto L_8C0F2110;
    L_8C0F2110:;
    R4 = ((0x7 & ((unsigned int)(*(int *)((R12 + 0xC))) >> 27)));
    if (((*(int *)0x8C450BF8) == 0)) goto L_8C0F2134;
    goto L_8C0F2122;
    L_8C0F2122:;
    if ((R4 == 5)) goto L_8C0F212E;
    goto L_8C0F2128;
    L_8C0F2128:;
    if ((R4 != 6)) goto L_8C0F2134;
    goto L_8C0F212E;
    L_8C0F212E:;
    nlFreePalette((*(int *)((R12 + 0x3C))), R5, R6);
    goto L_8C0F2134;
    L_8C0F2134:;
    t60 = *(int *)((R12 + 0x4C));
    t62 = (*(int *)(((R10 + t60) + 0x0))) != 0;
    R10 = ((R10 + t60));
    if (t62) goto L_8C0F2074;
    goto L_8C0F2140;
    L_8C0F2140:;
    R0 = ((*(int *)(((int)stk + 20))));
    goto L_8C0F2142;
}


int padLcdLine(int a4, int a5, int a6, int a7)
{
    float u3;
    float u4;
    float u5;
    float u6;
    int t22;
    int t25;
    int t30;
    int t32;
    int t35;
    int t38;
    int t43;
    int t50;
    int t51;
    int t59;
    int t60;
    int t67;
    int t68;
    int t76;
    int t77;
    int stk[8];

    int R0;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int R14;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C02FCA4:;
    *(float *)(((int)stk + 12)) = F15;
    *(float *)(((int)stk + 8)) = F14;
    u3 = *(float *)((R5 + 0x0));
    u4 = *(float *)((R5 + 0x4));
    u5 = *(float *)((R6 + 0x0));
    u6 = *(float *)((R6 + 0x4));
    *(unsigned int *)(((int)stk + 20)) = (R13);
    *(unsigned int *)(((int)stk + 16)) = (R12);
    *(unsigned int *)(((int)stk + 12)) = (R11);
    *(float *)(((int)stk + 8)) = F15;
    *(float *)(((int)stk + 4)) = F14;
    R0 = (0x4);
    R11 = (R4);
    R12 = (R7);
    R13 = ((int)u5);
    R14 = ((int)u6);
    R4 = ((int)u4);
    R7 = ((int)u3);
    F3 = (0.0f);
    F4 = (u5);
    F5 = (u6);
    F6 = (u3);
    F7 = (u4);
    if ((!(0.0f > u3))) goto L_8C02FCDE;
    goto L_8C02FCD6;
    L_8C02FCD6:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if ((!(F3 > F4))) goto L_8C02FCDE;
    goto L_8C02FCDA;
    L_8C02FCDA:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_8C02FDD4;
    L_8C02FDD4:;
    return R0;
    L_8C02FCDE:;
    t22 = !(F6 > (*(float *)0x8C02FE88));
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (0x8C02FE88);
    if (t22) goto L_8C02FCEE;
    goto L_8C02FCE6;
    L_8C02FCE6:;
    t25 = F4 > (*(float *)0x8C02FE88);
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (0x8C02FE88);
    if (t25) goto L_8C02FDD4;
    goto L_8C02FCEE;
    L_8C02FCEE:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if ((!(0.0f > F7))) goto L_8C02FCFA;
    goto L_8C02FCF4;
    L_8C02FCF4:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if ((0.0f > F5)) goto L_8C02FDD4;
    goto L_8C02FCFA;
    L_8C02FCFA:;
    t30 = !(F7 > (*(float *)0x8C02FE8C));
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t30) goto L_8C02FD0A;
    goto L_8C02FD02;
    L_8C02FD02:;
    t32 = F5 > (*(float *)0x8C02FE8C);
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (0x8C02FE8C);
    if (t32) goto L_8C02FDD4;
    goto L_8C02FD0A;
    L_8C02FD0A:;
    t35 = !((*(float *)((R5 + 0x8))) > 0.0f);
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (0x8);
    if (t35) goto L_8C02FD1C;
    goto L_8C02FD14;
    L_8C02FD14:;
    t38 = (*(float *)((R6 + R0))) > 0.0f;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (t38) goto L_8C02FDD4;
    goto L_8C02FD1C;
    L_8C02FD1C:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R5 = ((R13 - R7));
    R6 = (R14);
    if (((int)(R13 - R7) < 0)) goto L_8C02FD2A;
    goto L_8C02FD26;
    L_8C02FD26:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R2 = (R5);
    goto L_8C02FD2E;
    L_8C02FD2E:;
    t43 = (int)(R6 - R4) < 0;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R6 = ((R6 - R4));
    if (t43) goto L_8C02FD38;
    goto L_8C02FD34;
    L_8C02FD34:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R3 = (R6);
    goto L_8C02FD3C;
    L_8C02FD3C:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (((int)R2 < (int)R3)) goto L_8C02FD8C;
    goto L_8C02FD40;
    L_8C02FD40:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (((int)R7 <= (int)R13)) goto L_8C02FD50;
    goto L_8C02FD44;
    L_8C02FD44:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    t50 = R14;
    t51 = R13;
    R13 = (R7);
    R14 = (R4);
    R4 = t50;
    R7 = t51;
    goto L_8C02FD50;
    L_8C02FD50:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R5 = ((R13 - R7));
    R6 = ((R14 - R4));
    if (((R13 - R7) == 0)) goto L_8C02FDD4;
    goto L_8C02FD5C;
    L_8C02FD5C:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R14 = (R7);
    F14 = (((float)R6 / (float)R5));
    F15 = ((float)R4);
    if (((int)R7 > (int)R13)) goto L_8C02FDD4;
    goto L_8C02FD74;
    L_8C02FD74:;
    t59 = padLcdPixel(R11, R14, (int)F15, R12);
    t60 = (int)(R14 + 0x1) <= (int)R13;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (t59);
    R14 = ((R14 + 0x1));
    F15 = ((F15 + F14));
    if (t60) goto L_8C02FD74;
    goto L_8C02FD88;
    L_8C02FD88:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    goto L_8C02FDD4;
    L_8C02FD8C:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    if (((int)R4 <= (int)R14)) goto L_8C02FD9C;
    goto L_8C02FD90;
    L_8C02FD90:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    t67 = R14;
    t68 = R13;
    R13 = (R7);
    R14 = (R4);
    R4 = t67;
    R7 = t68;
    goto L_8C02FD9C;
    L_8C02FD9C:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R5 = ((R14 - R4));
    R6 = ((R13 - R7));
    if (((R14 - R4) == 0)) goto L_8C02FDD4;
    goto L_8C02FDA8;
    L_8C02FDA8:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R13 = (R4);
    F14 = (((float)R6 / (float)R5));
    F15 = ((float)R7);
    if (((int)R4 > (int)R14)) goto L_8C02FDD4;
    goto L_8C02FDC0;
    L_8C02FDC0:;
    t76 = padLcdPixel(R11, (int)F15, R13, R12);
    t77 = (int)(R13 + 0x1) <= (int)R14;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R0 = (t76);
    R13 = ((R13 + 0x1));
    F15 = ((F15 + F14));
    if (t77) goto L_8C02FDC0;
    goto L_8C02FDD4;
    L_8C02FD38:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R3 = ((R4 - R14));
    goto L_8C02FD3C;
    L_8C02FD2A:;
    *(unsigned int *)(((int)stk + 20)) = *(int *)((int)stk + 20);
    *(unsigned int *)(((int)stk + 16)) = *(int *)((int)stk + 16);
    *(unsigned int *)(((int)stk + 12)) = *(int *)((int)stk + 12);
    *(float *)(((int)stk + 8)) = *(float *)((int)stk + 8);
    *(float *)(((int)stk + 4)) = *(float *)((int)stk + 4);
    R2 = ((R7 - R13));
    goto L_8C02FD2E;
}


void umpCallDeuce(int a4)
{
    register int t1;
    register int t5;
    register float u8;

    if ((*(int *)0x8C421F60) != 0) {
    } else {
        t1 = set_event2(0x90, 0x8C0837CC);
        *(unsigned int *)((t1 + 0x8C)) = 0x78;
        vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 292.0f, 380.0f, 0.100000001f);
        vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t1), 700.0f, 380.0f, 0.100000001f);
        *(float *)((t1 + 0x80)) = 1.0f;
        *(unsigned int *)((t1 + 0x88)) = 0x0;
        *(float *)((t1 + 0x80)) = 0.0f;
        if (a4 == 1) {
            vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t1), 315.0f, 380.0f, 0.100000001f);
        } else {
            t5 = set_event2(0x90, 0x8C08382C);
            *(unsigned int *)((t5 + 0x8C)) = 0x78;
            u8 = 362.0f;
            if ((int)a4 < (int)0xA) {
            } else {
                u8 = (*(float *)0x8C08401C);
            }
            vecMake(0x0, 0x0, 0x0, 0x0, (0x20 + t5), u8, 380.0f, 0.100000001f);
            vecMake(0x0, 0x0, 0x0, 0x0, (0x14 + t5), 700.0f, 380.0f, 0.100000001f);
            *(unsigned int *)((t5 + 0x84)) = a4;
            if ((int)a4 > (int)0x63) {
                *(unsigned int *)((t5 + 0x84)) = 0x63;
            }
            *(float *)((t5 + 0x80)) = 1.0f;
            *(unsigned int *)((t5 + 0x88)) = 0x0;
            *(float *)((t1 + 0x80)) = 0.0f;
        }
    }
}

void titleSprAnim(int a4)
{
    int t0;
    int t2;
    int t4;
    int t6;
    int t8;
    int t9;
    int t11;
    int t12;
    float u18;
    float u19;
    float u21;
    int t3;
    int t7;
    int stk[110];

    t0 = 0x8C1276B4;
    t2 = (0xA0 + ((int)stk + 16));
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C1276B4 + 216)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x94 + ((int)stk + 16))) = *(struct mv3 *)(0x8C12778C); }
    t4 = 0x8C127798;
    t6 = (((int)stk + 16) + 0x4C);
    for (;;) { t7 = *(int *)t4; t4 = (t4 + 4); if ((unsigned int)((0x8C127798 + 72)) < (unsigned int)t4) break; *(unsigned int *)t6 = t7; t6 = (t6 + 4); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 16) + 0x34)) = *(struct mv6 *)(0x8C1277E0); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 16) + 0x1C)) = *(struct mv6 *)(0x8C1277F8); }
    t8 = *(int *)0x8C1DC6BC;
    if ((int)a4 <= (int)t8) {
        t9 = *(int *)0x8C1DC6B4;
        *(float *)(((int)stk + 16)) = (nlSin((int)(((float)(a4 - t9) / (float)(t8 - t9)) * 16384.0f)));
        t11 = 0x0;
        t12 = (((int)stk + 16) + 0x4C);
        for (;;) {
            nlSubVector3op((((int)stk + 16) + 0x10), t12, (0x94 + ((int)stk + 16)));
            nlScaleVector((((int)stk + 16) + 0x10), (((int)stk + 16) + 0x10), (*(float *)(((int)stk + 16))));
            nlAddVector3op((((int)stk + 16) + 0x4), (0x94 + ((int)stk + 16)), (((int)stk + 16) + 0x10));
            u18 = *(float *)(((int)stk + 16));
            u19 = ((1.20000005f - (*(float *)(((((int)stk + 16) + 0x34) + t11)))) * u18);
            u21 = ((1.0f - (*(float *)(((((int)stk + 16) + 0x1C) + t11)))) * u18);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
            sprListPut((0xA0 + ((int)stk + 16)), 0x2, 0x0, *(Stk3 *)((((int)stk + 16) + 0x4)), ((u21 * (-1.0f)) + 1.0f), ((u19 * (-1.0f)) + 1.20000005f), ((u21 * (-1.0f)) + 1.0f));
            t12 = (t12 + 0xC);
            t11 = (t11 + 0x4);
            if ((unsigned int)t12 >= (unsigned int)((((int)stk + 16) + 0x4C) + 0x48)) {
                break;
            }
        }
    }
}


