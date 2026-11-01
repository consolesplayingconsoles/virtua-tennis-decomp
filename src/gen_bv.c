/* Straight-line functions with calls and guards (batch gen_bv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int afsPartition7Load(int);
int circuitDrawGameInfo(void);
int circuitDrawMatchInfo(void);
int circuitDrawPicture(void);
int courtWinDrawNumber(int);
int cpuAimPointSet(int, int, float, float);
int cpuShotRange(int, int, int, int, int, float, float);
int fileLoadClose(void);
int invitationSpriteLoad(void);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int sprSet280Free(int);
int sprSet280Load(int);
int sprSet322Free(int);
int sprSet330Load(void);
int sprSet331Free(void);
int stageGerScoreDigits(int);
int stageJpnScoreDigits(int);
int stageSweScoreDigits(int);
int trainingSpriteLoad(int);
int trialLoadSpriteLoad(void);
int circuitPanelDraw(void);
int entryAssignSelecters(void);
int cpuSglAimAddOpen(int a4, int a5);
int courtWinDrawScoreboard(void);
int stageSweScoreboardDraw(void);
int stageJpnScoreboardDraw(void);
int stageGerScoreboardDraw(void);

int circuitPanelDraw(void)
{
    int t18;
    int t28;
    int t47;
    int t57;
    int t62;
    int t63;
    int t65;
    int t79;
    int t84;
    int t87;
    int t99;
    int t105;
    int t125;
    int t141;
    int t142;
    int stk[13];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F15;
    int T_;
    int R1004;
    int R1008;
    int R1012;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    L_8C033A9A:;
    R10 = (0x8C2FBE7C);
    R11 = (0x8C2FBE80);
    R13 = (0x8C2FBE6C);
    R8 = (0x8C2FBE70);
    R9 = (0x0);
    if (((*(int *)0x8C2FBE70) != 0)) goto L_8C033AD2;
    goto L_8C033ABE;
    L_8C033ABE:;
    R3 = (0x8C2FBE74);
    if (((*(int *)0x8C2FBE74) == -1)) goto L_8C033AD2;
    goto L_8C033AC6;
    L_8C033AC6:;
    if (((*(int *)((R3 + 0x0))) == (*(int *)0x8C2FBE1C))) goto L_8C033AD2;
    goto L_8C033AD0;
    L_8C033AD0:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033AD2;
    L_8C033AD2:;
    if (((*(int *)((R8 + 0x0))) != 1)) goto L_8C033AFE;
    goto L_8C033AD8;
    L_8C033AD8:;
    R2 = (0x8C2FBE74);
    if (((*(int *)0x8C2FBE74) == -1)) goto L_8C033AFE;
    goto L_8C033AE0;
    L_8C033AE0:;
    t18 = *(int *)0x8C2FBE1C;
    if (((*(int *)((R2 + 0x0))) == (*(int *)(((((((t18 << 2) + t18) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))))) goto L_8C033AFE;
    goto L_8C033AFC;
    L_8C033AFC:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033AFE;
    L_8C033AFE:;
    if (((*(int *)((R8 + 0x0))) != 2)) goto L_8C033B34;
    goto L_8C033B04;
    L_8C033B04:;
    R2 = (0x8C2FBE74);
    if (((*(int *)0x8C2FBE74) == -1)) goto L_8C033B34;
    goto L_8C033B0C;
    L_8C033B0C:;
    t28 = *(int *)0x8C2FBE1C;
    if (((*(int *)((R2 + 0x0))) == (*(int *)((((*(int *)(((((((t28 << 2) + t28) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) * 0x64) + 0x8C10BB48))))) goto L_8C033B34;
    goto L_8C033B32;
    L_8C033B32:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033B34;
    L_8C033B34:;
    R14 = (0x8C2FBE74);
    if (((*(int *)0x8C2FBE74) != -1)) goto L_8C033BB6;
    goto L_8C033B3C;
    L_8C033B3C:;
    R2 = (0x8C2FBE78);
    if (((*(int *)0x8C2FBE78) == -1)) goto L_8C033B50;
    goto L_8C033B44;
    L_8C033B44:;
    if (((*(int *)0x8C2FBE1C) == (*(int *)((R2 + 0x0))))) goto L_8C033B50;
    goto L_8C033B4E;
    L_8C033B4E:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033B50;
    L_8C033B50:;
    if (((*(int *)((R14 + 0x0))) != -1)) goto L_8C033BB6;
    goto L_8C033B56;
    L_8C033B56:;
    if (((*(int *)0x8C2FBE80) == -1)) goto L_8C033B88;
    goto L_8C033B5E;
    L_8C033B5E:;
    t47 = *(int *)0x8C2FBE1C;
    if (((*(int *)((((*(int *)(((((((t47 << 2) + t47) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) * 0x64) + 0x8C10BB48))) == (*(int *)0x8C2FBE80))) goto L_8C033B88;
    goto L_8C033B86;
    L_8C033B86:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033B88;
    L_8C033B88:;
    if (((*(int *)((R14 + 0x0))) != -1)) goto L_8C033BB6;
    goto L_8C033B8E;
    L_8C033B8E:;
    if (((*(int *)0x8C2FBE7C) == -1)) goto L_8C033BB6;
    goto L_8C033B96;
    L_8C033B96:;
    t57 = *(int *)0x8C2FBE1C;
    if (((*(int *)(((((((t57 << 2) + t57) << 2) << 1) + (*(int *)0x8C2FBC50)) + 0x4))) == (*(int *)0x8C2FBE7C))) goto L_8C033BB6;
    goto L_8C033BB4;
    L_8C033BB4:;
    *(unsigned int *)((R13 + 0x0)) = R9;
    goto L_8C033BB6;
    L_8C033BB6:;
    t62 = *(int *)0x8C2FBE1C;
    t63 = *(int *)0x8C2FBC50;
    R1008 = (*(int *)(((((((t62 << 2) + t62) << 2) << 1) + t63) + 0x0)));
    t65 = *(int *)(((((((t62 << 2) + t62) << 2) << 1) + t63) + 0x4));
    R1004 = t65;
    R1012 = (*(int *)(((t65 * 0x64) + 0x8C10BB48)));
    if (((*(int *)0x8C2FBE60) == 0)) goto L_8C033BEC;
    goto L_8C033BE8;
    L_8C033BE8:;
    goto L_8C033DBE;
    L_8C033DBE:;
    if (((*(int *)0x8C2FBE78) == -1)) goto L_8C033DCA;
    goto L_8C033DC6;
    L_8C033DC6:;
    circuitDrawPicture();
    goto L_8C033DCA;
    L_8C033DCA:;
    if (((*(int *)((R11 + 0x0))) == -1)) goto L_8C033DE8;
    goto L_8C033DD0;
    L_8C033DD0:;
    if (((int)(*(int *)0x8C2FBE40) < (int)0x2)) goto L_8C033DE8;
    goto L_8C033DDA;
    L_8C033DDA:;
    if (((int)(*(int *)0x8C2FBE40) > (int)0xC)) goto L_8C033DE8;
    goto L_8C033DE4;
    L_8C033DE4:;
    circuitDrawGameInfo();
    goto L_8C033DE8;
    L_8C033DE8:;
    t79 = *(int *)((R10 + 0x0));
    R0 = (t79);
    if ((t79 == -1)) goto L_8C033E18;
    goto L_8C033DEE;
    L_8C033DEE:;
    if (((int)(*(int *)0x8C2FBE40) < (int)0x2)) goto L_8C033E18;
    goto L_8C033DF8;
    L_8C033DF8:;
    t84 = *(int *)0x8C2FBE40;
    R0 = (t84);
    if (((int)t84 > (int)0xC)) goto L_8C033E18;
    goto L_8C033E02;
    L_8C033E02:;
    return circuitDrawMatchInfo();
    L_8C033E18:;
    return R0;
    L_8C033BEC:;
    t87 = *(int *)((R13 + 0x0));
    R0 = (t87);
    R12 = (0xFFFFFFFF);
    R4 = ((*(int *)((R14 + 0x0))));
    F15 = (0.0f);
    if ((t87 == 0)) goto L_8C033C2C;
    goto L_8C033BF8;
    L_8C033BF8:;
    if ((R0 == 1)) goto L_8C033CB4;
    goto L_8C033BFC;
    L_8C033BFC:;
    if ((R0 == 2)) goto L_8C033CF8;
    goto L_8C033C00;
    L_8C033C00:;
    if ((R0 != 3)) goto L_8C033C08;
    goto L_8C033C04;
    L_8C033C04:;
    goto L_8C033D30;
    L_8C033D30:;
    if ((R4 == -1)) goto L_8C033DBE;
    goto L_8C033D36;
    L_8C033D36:;
    t99 = (trainingSpriteLoad(R4)) != 1;
    if (t99) goto L_8C033DBE;
    goto L_8C033D40;
    L_8C033D40:;
    *(unsigned int *)((R11 + 0x0)) = (*(int *)((R14 + 0x0)));
    goto L_8C033DB8;
    L_8C033DB8:;
    *(unsigned int *)((R14 + 0x0)) = R12;
    *(float *)0x8C2FBE90 = F15;
    goto L_8C033DBE;
    L_8C033C08:;
    if ((R0 != 4)) goto L_8C033C10;
    goto L_8C033C0C;
    L_8C033C0C:;
    goto L_8C033D46;
    L_8C033D46:;
    *(unsigned int *)((R13 + 0x0)) = 0x5;
    *(unsigned int *)((R14 + 0x0)) = R9;
    goto L_8C033DBE;
    L_8C033C10:;
    if ((R0 != 5)) goto L_8C033C18;
    goto L_8C033C14;
    L_8C033C14:;
    goto L_8C033D4E;
    L_8C033D4E:;
    if ((R4 == -1)) goto L_8C033DBE;
    goto L_8C033D54;
    L_8C033D54:;
    t105 = (invitationSpriteLoad()) != 1;
    if (t105) goto L_8C033DBE;
    goto L_8C033D5E;
    L_8C033D5E:;
    *(unsigned int *)0x8C2FBE88 = (*(int *)((R14 + 0x0)));
    sprSet330Load();
    *(unsigned int *)((R14 + 0x0)) = R12;
    goto L_8C033DBE;
    L_8C033C18:;
    if ((R0 != 6)) goto L_8C033C20;
    goto L_8C033C1C;
    L_8C033C1C:;
    goto L_8C033D6C;
    L_8C033D6C:;
    if (((*(int *)((R11 + 0x0))) == -1)) goto L_8C033D78;
    goto L_8C033D72;
    L_8C033D72:;
    sprSet322Free((*(int *)((R11 + 0x0))));
    goto L_8C033D78;
    L_8C033D78:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    if (((*(int *)((R10 + 0x0))) == -1)) goto L_8C033D86;
    goto L_8C033D80;
    L_8C033D80:;
    *(volatile int *)((R10 + 0x0));
    sprSet331Free();
    goto L_8C033D86;
    L_8C033D86:;
    *(unsigned int *)((R10 + 0x0)) = R12;
    if (((*(int *)((R14 + 0x0))) == -1)) goto L_8C033D94;
    goto L_8C033D8E;
    L_8C033D8E:;
    fileLoadClose();
    goto L_8C033D94;
    L_8C033D94:;
    *(unsigned int *)((R13 + 0x0)) = 0x7;
    *(unsigned int *)((R8 + 0x0)) = 0x1;
    *(unsigned int *)((R10 + 0x0)) = R12;
    R2 = ((R1004));
    goto L_8C033DA0;
    L_8C033DA0:;
    *(unsigned int *)((R14 + 0x0)) = R2;
    goto L_8C033DBE;
    L_8C033C20:;
    if ((R0 != 7)) goto L_8C033C28;
    goto L_8C033C24;
    L_8C033C24:;
    goto L_8C033DA4;
    L_8C033DA4:;
    if ((R4 == -1)) goto L_8C033DBE;
    goto L_8C033DAA;
    L_8C033DAA:;
    t125 = (trialLoadSpriteLoad()) != 1;
    if (t125) goto L_8C033DBE;
    goto L_8C033DB4;
    L_8C033DB4:;
    *(unsigned int *)((R10 + 0x0)) = (*(int *)((R14 + 0x0)));
    goto L_8C033DB8;
    L_8C033C28:;
    goto L_8C033DBE;
    L_8C033CF8:;
    if (((*(int *)((R11 + 0x0))) == -1)) goto L_8C033D04;
    goto L_8C033CFE;
    L_8C033CFE:;
    sprSet322Free((*(int *)((R11 + 0x0))));
    goto L_8C033D04;
    L_8C033D04:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    if (((*(int *)((R10 + 0x0))) == -1)) goto L_8C033D12;
    goto L_8C033D0C;
    L_8C033D0C:;
    *(volatile int *)((R10 + 0x0));
    sprSet331Free();
    goto L_8C033D12;
    L_8C033D12:;
    *(unsigned int *)((R10 + 0x0)) = R12;
    if (((*(int *)((R14 + 0x0))) == -1)) goto L_8C033D20;
    goto L_8C033D1A;
    L_8C033D1A:;
    fileLoadClose();
    goto L_8C033D20;
    L_8C033D20:;
    *(unsigned int *)((R13 + 0x0)) = 0x3;
    *(unsigned int *)((R8 + 0x0)) = 0x2;
    *(unsigned int *)((R11 + 0x0)) = R12;
    *(unsigned int *)((R14 + 0x0)) = (R1012);
    goto L_8C033DBE;
    L_8C033CB4:;
    if ((R4 != -1)) goto L_8C033CBE;
    goto L_8C033CBA;
    L_8C033CBA:;
    goto L_8C033DBE;
    L_8C033CBE:;
    t141 = (afsPartition7Load(R4)) == 1;
    if (t141) goto L_8C033CCC;
    goto L_8C033CC8;
    L_8C033CC8:;
    goto L_8C033DBE;
    L_8C033CCC:;
    t142 = *(int *)((R14 + 0x0));
    *(unsigned int *)0x8C2FBE78 = t142;
    sprSet280Load(t142);
    *(unsigned int *)((R14 + 0x0)) = R12;
    *(float *)0x8C2FBE8C = F15;
    if (((R1008) != 1)) goto L_8C033CEC;
    goto L_8C033CE6;
    L_8C033CE6:;
    *(unsigned int *)((R13 + 0x0)) = 0x2;
    goto L_8C033BEC;
    L_8C033CEC:;
    if (((R1008) != 0)) goto L_8C033DBE;
    goto L_8C033CF2;
    L_8C033CF2:;
    *(unsigned int *)((R13 + 0x0)) = 0x6;
    goto L_8C033BEC;
    L_8C033C2C:;
    R3 = (0x8C2FBE78);
    if (((*(int *)0x8C2FBE78) == -1)) goto L_8C033C3A;
    goto L_8C033C34;
    L_8C033C34:;
    sprSet280Free((*(int *)((R3 + 0x0))));
    goto L_8C033C3A;
    L_8C033C3A:;
    *(unsigned int *)0x8C2FBE78 = R12;
    if (((*(int *)((R11 + 0x0))) == -1)) goto L_8C033C4A;
    goto L_8C033C44;
    L_8C033C44:;
    sprSet322Free((*(int *)((R11 + 0x0))));
    goto L_8C033C4A;
    L_8C033C4A:;
    *(unsigned int *)((R11 + 0x0)) = R12;
    if (((*(int *)((R10 + 0x0))) == -1)) goto L_8C033C58;
    goto L_8C033C52;
    L_8C033C52:;
    *(volatile int *)((R10 + 0x0));
    sprSet331Free();
    goto L_8C033C58;
    L_8C033C58:;
    *(unsigned int *)((R10 + 0x0)) = R12;
    if (((*(int *)((R14 + 0x0))) == -1)) goto L_8C033C66;
    goto L_8C033C60;
    L_8C033C60:;
    fileLoadClose();
    goto L_8C033C66;
    L_8C033C66:;
    *(unsigned int *)((R13 + 0x0)) = 0x1;
    *(unsigned int *)((R8 + 0x0)) = R9;
    R2 = ((*(int *)0x8C2FBE1C));
    goto L_8C033DA0;
}



int courtWinDrawScoreboard(void)
{
    int t0;
    int t1;
    int t2;
    int t34;
    int t68;
    int t134;
    int t155;
    int t30;
    int t13;
    int t23;
    int t18;
    float u47;
    float u48;
    float u49;
    int t117;
    int t118;
    int stk[21];

    t0 = *(int *)0x8C287B08;
    t1 = *(int *)0x8C185408;
    t2 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 12)) = 0x3;
            t23 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 12)) = 0x5;
                t18 = 0x6;
            } else {
                *(unsigned int *)(((int)stk + 12)) = 0x6;
                t18 = 0x5;
            }
            t23 = t18;
        }
        t30 = t23;
    } else {
        *(unsigned int *)(((int)stk + 12)) = (*(int *)0x8C287B18);
        t30 = (*(int *)0x8C287B1C);
    }
    *(unsigned int *)(((int)stk + 12)) = ((int)((int)(*(int *)(((int)stk + 12))) % (int)0x64));
    t34 = (int)((int)t30 % (int)0x64);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287B08);
    *(unsigned int *)(((int)stk + 28)) = (*(int *)0x8C287B0C);
    if ((0x1 & ((t1 + t0) + t2)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C121F84;
        u47 = (*(float *)0x8C121F84);
        u48 = (*(float *)0x8C121F88);
        u49 = (*(float *)0x8C121F8C);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C121F90;
        u47 = (*(float *)0x8C121F90);
        u48 = (*(float *)0x8C121F94);
        u49 = (*(float *)0x8C121F98);
    }
    nlTranslate(u47, u48, u49);
    nlRotateAY(0x1555);
    nlObjPut(0xC8E9618);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C121F9C;
        nlTranslate((*(float *)0x8C121F9C), (*(float *)0x8C121FA0), (*(float *)0x8C121FA4));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18C218))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t68 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 8)) = (t68 + 0xC);
        nlTranslate((*(float *)(((t68 + 0xC) + 0x0))), (*(float *)(((t68 + 0xC) + 0x4))), (*(float *)(((t68 + 0xC) + 0x8))));
        nlRotateAY(0x1555);
        t117 = 0x8C18C218;
        t118 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C121FE4;
        nlTranslate((*(float *)0x8C121FE4), (*(float *)0x8C121FE8), (*(float *)0x8C121FEC));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18C260))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C121FF0;
        nlTranslate((*(float *)0x8C121FF0), (*(float *)0x8C121FF4), (*(float *)0x8C121FF8));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 24))) + 0x0))) << 2) + 0x8C18C260))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C121FFC;
        nlTranslate((*(float *)0x8C121FFC), (*(float *)0x8C122000), (*(float *)0x8C122004));
        nlRotateAY(0x1555);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C18C260))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C122008;
        nlTranslate((*(float *)0x8C122008), (*(float *)0x8C12200C), (*(float *)0x8C122010));
        nlRotateAY(0x1555);
        t117 = 0x8C18C260;
        t118 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t118 + t117))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C121FCC;
    nlTranslate((*(float *)0x8C121FCC), (*(float *)0x8C121FD0), (*(float *)0x8C121FD4));
    nlRotateAY(0x1555);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 32))) << 2) + 0x8C18C2C4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t134 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t134 + 0xC);
    nlTranslate((*(float *)(((t134 + 0xC) + 0x0))), (*(float *)(((t134 + 0xC) + 0x4))), (*(float *)(((t134 + 0xC) + 0x8))));
    nlRotateAY(0x1555);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C18C2C4))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121FB4;
        nlTranslate((*(float *)0x8C121FB4), (*(float *)0x8C121FB8), (*(float *)0x8C121FBC));
        nlRotateAY(0x1555);
        courtWinDrawNumber((*(int *)(((int)stk + 12))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t155 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = (t155 + 0xC);
        nlTranslate((*(float *)(((t155 + 0xC) + 0x0))), (*(float *)(((t155 + 0xC) + 0x4))), (*(float *)(((t155 + 0xC) + 0x8))));
        nlRotateAY(0x1555);
        courtWinDrawNumber(t34);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121FB4;
        nlTranslate((*(float *)0x8C121FB4), (*(float *)0x8C121FB8), (*(float *)0x8C121FBC));
        nlRotateAY(0x1555);
        if ((int)(*(int *)(((int)stk + 12))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 12))) << 2) + 0x8C18C2A8))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C121FC0;
        nlTranslate((*(float *)0x8C121FC0), (*(float *)0x8C121FC4), (*(float *)0x8C121FC8));
        nlRotateAY(0x1555);
        if ((int)t34 < (int)0x6) {
            nlObjPut((*(int *)(((t34 << 2) + 0x8C18C2A8))));
        }
    }
    return (nlPopMatrix(0x1));
}

int stageSweScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t26;
    int t33;
    int t67;
    int t133;
    int t153;
    int t31;
    int t13;
    int t24;
    int t18;
    float u46;
    float u47;
    float u48;
    int t116;
    int t117;
    int stk[21];

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 28)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 24)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t24 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t18 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t18 = 0x6;
            }
            t24 = t18;
        }
        t31 = t24;
    } else {
        t26 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t31 = t26;
    }
    t33 = (int)((int)t31 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C1237B0;
        u46 = (*(float *)0x8C1237B0);
        u47 = (*(float *)0x8C1237B4);
        u48 = (*(float *)0x8C1237B8);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C1237BC;
        u46 = (*(float *)0x8C1237BC);
        u47 = (*(float *)0x8C1237C0);
        u48 = (*(float *)0x8C1237C4);
    }
    nlTranslate(u46, u47, u48);
    nlRotateAY(0x8000);
    nlObjPut(0xC88CE20);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C1237C8;
        nlTranslate((*(float *)0x8C1237C8), (*(float *)0x8C1237CC), (*(float *)0x8C1237D0));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AC908))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t67 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t67 + 0xC);
        nlTranslate((*(float *)(((t67 + 0xC) + 0x0))), (*(float *)(((t67 + 0xC) + 0x4))), (*(float *)(((t67 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        t116 = 0x8C1AC908;
        t117 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C123810;
        nlTranslate((*(float *)0x8C123810), (*(float *)0x8C123814), (*(float *)0x8C123818));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AC950))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C12381C;
        nlTranslate((*(float *)0x8C12381C), (*(float *)0x8C123820), (*(float *)0x8C123824));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C1AC950))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C123828;
        nlTranslate((*(float *)0x8C123828), (*(float *)0x8C12382C), (*(float *)0x8C123830));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C1AC950))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C123834;
        nlTranslate((*(float *)0x8C123834), (*(float *)0x8C123838), (*(float *)0x8C12383C));
        nlRotateAY(0x8000);
        t116 = 0x8C1AC950;
        t117 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t117 + t116))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C1237F8;
    nlTranslate((*(float *)0x8C1237F8), (*(float *)0x8C1237FC), (*(float *)0x8C123800));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C1AC9B4))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t133 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t133 + 0xC);
    nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C1AC9B4))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1237E0;
        nlTranslate((*(float *)0x8C1237E0), (*(float *)0x8C1237E4), (*(float *)0x8C1237E8));
        nlRotateAY(0x8000);
        stageSweScoreDigits(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t153 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t153 + 0xC) + 0x0))), (*(float *)(((t153 + 0xC) + 0x4))), (*(float *)(((t153 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        stageSweScoreDigits((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1237E0;
        nlTranslate((*(float *)0x8C1237E0), (*(float *)0x8C1237E4), (*(float *)0x8C1237E8));
        nlRotateAY(0x8000);
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C1AC998))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C1237EC), (*(float *)0x8C1237F0), (*(float *)0x8C1237F4));
        nlRotateAY(0x8000);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C1AC998))));
        }
    }
    return (nlPopMatrix(0x1));
}

int stageJpnScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t26;
    int t33;
    int t67;
    int t133;
    int t153;
    int t31;
    int t13;
    int t24;
    int t18;
    float u46;
    float u47;
    float u48;
    int t116;
    int t117;
    int stk[21];

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 28)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 24)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t24 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t18 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t18 = 0x6;
            }
            t24 = t18;
        }
        t31 = t24;
    } else {
        t26 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t31 = t26;
    }
    t33 = (int)((int)t31 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124120;
        u46 = (*(float *)0x8C124120);
        u47 = (*(float *)0x8C124124);
        u48 = (*(float *)0x8C124128);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C12412C;
        u46 = (*(float *)0x8C12412C);
        u47 = (*(float *)0x8C124130);
        u48 = (*(float *)0x8C124134);
    }
    nlTranslate(u46, u47, u48);
    nlRotateAY(0x8000);
    nlObjPut(0xC88CCC8);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C124138;
        nlTranslate((*(float *)0x8C124138), (*(float *)0x8C12413C), (*(float *)0x8C124140));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1ADC88))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t67 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t67 + 0xC);
        nlTranslate((*(float *)(((t67 + 0xC) + 0x0))), (*(float *)(((t67 + 0xC) + 0x4))), (*(float *)(((t67 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        t116 = 0x8C1ADC88;
        t117 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C124180;
        nlTranslate((*(float *)0x8C124180), (*(float *)0x8C124184), (*(float *)0x8C124188));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1ADCD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C12418C;
        nlTranslate((*(float *)0x8C12418C), (*(float *)0x8C124190), (*(float *)0x8C124194));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C1ADCD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C124198;
        nlTranslate((*(float *)0x8C124198), (*(float *)0x8C12419C), (*(float *)0x8C1241A0));
        nlRotateAY(0x8000);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C1ADCD0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1241A4;
        nlTranslate((*(float *)0x8C1241A4), (*(float *)0x8C1241A8), (*(float *)0x8C1241AC));
        nlRotateAY(0x8000);
        t116 = 0x8C1ADCD0;
        t117 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t117 + t116))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C124168;
    nlTranslate((*(float *)0x8C124168), (*(float *)0x8C12416C), (*(float *)0x8C124170));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C1ADD34))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t133 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t133 + 0xC);
    nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C1ADD34))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124150;
        nlTranslate((*(float *)0x8C124150), (*(float *)0x8C124154), (*(float *)0x8C124158));
        nlRotateAY(0x8000);
        stageJpnScoreDigits(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t153 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t153 + 0xC) + 0x0))), (*(float *)(((t153 + 0xC) + 0x4))), (*(float *)(((t153 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        stageJpnScoreDigits((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C124150;
        nlTranslate((*(float *)0x8C124150), (*(float *)0x8C124154), (*(float *)0x8C124158));
        nlRotateAY(0x8000);
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C1ADD18))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C12415C), (*(float *)0x8C124160), (*(float *)0x8C124164));
        nlRotateAY(0x8000);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C1ADD18))));
        }
    }
    return (nlPopMatrix(0x1));
}

int stageGerScoreboardDraw(void)
{
    int t4;
    int t5;
    int t6;
    int t26;
    int t33;
    int t67;
    int t133;
    int t153;
    int t31;
    int t13;
    int t24;
    int t18;
    float u46;
    float u47;
    float u48;
    int t116;
    int t117;
    int stk[21];

    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x20);
    *(unsigned int *)(((((int)stk + 4) + 0x20) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x20) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x20) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 4) + 0x20) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x20) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C287B08;
    *(unsigned int *)(((int)stk + 28)) = t4;
    t5 = *(int *)0x8C185408;
    t6 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 24)) = t6;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t24 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t18 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t18 = 0x6;
            }
            t24 = t18;
        }
        t31 = t24;
    } else {
        t26 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t31 = t26;
    }
    t33 = (int)((int)t31 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C123C78;
        u46 = (*(float *)0x8C123C78);
        u47 = (*(float *)0x8C123C7C);
        u48 = (*(float *)0x8C123C80);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C123C84;
        u46 = (*(float *)0x8C123C84);
        u47 = (*(float *)0x8C123C88);
        u48 = (*(float *)0x8C123C8C);
    }
    nlTranslate(u46, u47, u48);
    nlRotateAY(0xFFFFEAAB);
    nlObjPut(0xC88CDE0);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C123C90;
        nlTranslate((*(float *)0x8C123C90), (*(float *)0x8C123C94), (*(float *)0x8C123C98));
        nlRotateAY(0xFFFFEAAB);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AD280))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t67 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t67 + 0xC);
        nlTranslate((*(float *)(((t67 + 0xC) + 0x0))), (*(float *)(((t67 + 0xC) + 0x4))), (*(float *)(((t67 + 0xC) + 0x8))));
        nlRotateAY(0xFFFFEAAB);
        t116 = 0x8C1AD280;
        t117 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C123CD8;
        nlTranslate((*(float *)0x8C123CD8), (*(float *)0x8C123CDC), (*(float *)0x8C123CE0));
        nlRotateAY(0xFFFFEAAB);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C1AD2C8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C123CE4;
        nlTranslate((*(float *)0x8C123CE4), (*(float *)0x8C123CE8), (*(float *)0x8C123CEC));
        nlRotateAY(0xFFFFEAAB);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C1AD2C8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C123CF0;
        nlTranslate((*(float *)0x8C123CF0), (*(float *)0x8C123CF4), (*(float *)0x8C123CF8));
        nlRotateAY(0xFFFFEAAB);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C1AD2C8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C123CFC;
        nlTranslate((*(float *)0x8C123CFC), (*(float *)0x8C123D00), (*(float *)0x8C123D04));
        nlRotateAY(0xFFFFEAAB);
        t116 = 0x8C1AD2C8;
        t117 = ((*(int *)(((*(int *)(((int)stk + 32))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t117 + t116))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C123CC0;
    nlTranslate((*(float *)0x8C123CC0), (*(float *)0x8C123CC4), (*(float *)0x8C123CC8));
    nlRotateAY(0xFFFFEAAB);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 28))) << 2) + 0x8C1AD32C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t133 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t133 + 0xC);
    nlTranslate((*(float *)(((t133 + 0xC) + 0x0))), (*(float *)(((t133 + 0xC) + 0x4))), (*(float *)(((t133 + 0xC) + 0x8))));
    nlRotateAY(0xFFFFEAAB);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C1AD32C))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C123CA8;
        nlTranslate((*(float *)0x8C123CA8), (*(float *)0x8C123CAC), (*(float *)0x8C123CB0));
        nlRotateAY(0xFFFFEAAB);
        stageGerScoreDigits(t33);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t153 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t153 + 0xC) + 0x0))), (*(float *)(((t153 + 0xC) + 0x4))), (*(float *)(((t153 + 0xC) + 0x8))));
        nlRotateAY(0xFFFFEAAB);
        stageGerScoreDigits((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C123CA8;
        nlTranslate((*(float *)0x8C123CA8), (*(float *)0x8C123CAC), (*(float *)0x8C123CB0));
        nlRotateAY(0xFFFFEAAB);
        if ((int)t33 < (int)0x6) {
            nlObjPut((*(int *)(((t33 << 2) + 0x8C1AD310))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C123CB4), (*(float *)0x8C123CB8), (*(float *)0x8C123CBC));
        nlRotateAY(0xFFFFEAAB);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C1AD310))));
        }
    }
    return (nlPopMatrix(0x1));
}
