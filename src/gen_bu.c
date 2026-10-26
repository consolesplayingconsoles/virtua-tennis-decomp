/* Straight-line functions with calls and guards (batch gen_bu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int courtAusDrawNumber(int);
extern int cursorBoxPut();
int entryAnyAtRound5(void);
int entryIsVersus(int, int, int, int);
int entryRecordResult(int);
int hudNumberDraw(int, Stk3, float);
int menuIconPut(int, Stk3);
float nlCos(int);
int nlDispStripTrnsl(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int phraseBigWordPut(int, Stk3);
int primSprDraw(int, int, int, int, Stk3);
int primVertexSet(int, int, int, int, int);
int resGetModelLoad(int);
int resGetTexLoad(int);
int resSpGetFree(int, int);
int resSpTexLoad(int);
int scorePressure(void);
int set_event2(int, int);
int shopItemTblInit(int, Stk3, float, float, float);
int sprListPut(int, int, int, Stk3, float, float, float);
int sprSet173Put(int, Stk3);
int strmCallMatchIntro(int, int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int menuItemDraw1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int hudCallWordsDrawB(int a4, int a5, int a6, int a7, float f4);
void hudScoreShow(int a4, int a5, int a6, int a7);
int courtAusDrawScoreboard(void);
int hudPanelDraw(int a4, int a5, int a6, int a7, float f4);
int standRowBarDraw(int a4, int a5, int a6, int a7);


int hudCallWordsDrawB(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    int t8;
    int t14;
    int t20;
    int t26;
    int t35;
    int t44;
    int t53;
    int t62;
    float u67;
    int t79;
    int t85;
    int t91;
    int t97;
    int t106;
    int t115;
    int t124;
    int t133;
    float u137;
    float u139;
    int t144;
    float u71;
    int stk[19];

    t1 = 0x0;
    if ((a5 != 4) && (a6 != 4)) {
        t1 = 0x26;
    }
    if (a4 != 0) {
        vecMake(a4, a5, a6, a7, ((int)stk + 20), (float)(t1 + 0x166), 270.0f, 0.0500000007f);
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 20)); }
        phraseBigWordPut(0x0, *(Stk3 *)(((int)stk + 20)));
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 103.0f);
        t8 = 0x0;
        if (a5 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x2, *(Stk3 *)(((int)stk + 20)));
            t8 = 0x1;
        }
        t14 = t8;
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x4, *(Stk3 *)(((int)stk + 20)));
            t14 = (t8 + 0x1);
        }
        t20 = t14;
        if (a5 == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x6, *(Stk3 *)(((int)stk + 20)));
            t20 = (t14 + 0x1);
        }
        t26 = t20;
        if (a5 == 3) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x8, *(Stk3 *)(((int)stk + 20)));
            t26 = (t20 + 0x1);
        }
        t35 = t26;
        if (a6 == 0) {
            if (t26 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x2, *(Stk3 *)(((int)stk + 20)));
            t35 = (t26 + 0x1);
        }
        t44 = t35;
        if (a6 == 1) {
            if (t35 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x4, *(Stk3 *)(((int)stk + 20)));
            t44 = (t35 + 0x1);
        }
        t53 = t44;
        if (a6 == 2) {
            if (t44 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x6, *(Stk3 *)(((int)stk + 20)));
            t53 = (t44 + 0x1);
        }
        t62 = t53;
        if (a6 == 3) {
            if (t53 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x8, *(Stk3 *)(((int)stk + 20)));
            t62 = (t53 + 0x1);
        }
        *(float *)((((int)stk + 20) + 0x4)) = ((*(float *)((((int)stk + 20) + 0x4))) + 1.0f);
        u67 = *(float *)((((int)stk + 20) + 0x0));
        if (t62 == 1) {
            u71 = (*(float *)0x8C0991FC);
        } else {
            u71 = (*(float *)0x8C099200);
        }
        *(float *)((((int)stk + 20) + 0x0)) = (u67 + u71);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
        t144 = 0xA;
    } else {
        vecMake(a4, a5, a6, a7, ((int)stk + 20), (float)(t1 + 0x16E), 270.0f, 0.0500000007f);
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 10.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 20)); }
        phraseBigWordPut(0x9, *(Stk3 *)(((int)stk + 20)));
        *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 90.0f);
        t79 = 0x0;
        if (a5 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x1, *(Stk3 *)(((int)stk + 20)));
            t79 = 0x1;
        }
        t85 = t79;
        if (a5 == 1) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x3, *(Stk3 *)(((int)stk + 20)));
            t85 = (t79 + 0x1);
        }
        t91 = t85;
        if (a5 == 2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x5, *(Stk3 *)(((int)stk + 20)));
            t91 = (t85 + 0x1);
        }
        t97 = t91;
        if (a5 == 3) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x7, *(Stk3 *)(((int)stk + 20)));
            t97 = (t91 + 0x1);
        }
        t106 = t97;
        if (a6 == 0) {
            if (t97 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x1, *(Stk3 *)(((int)stk + 20)));
            t106 = (t97 + 0x1);
        }
        t115 = t106;
        if (a6 == 1) {
            if (t106 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x3, *(Stk3 *)(((int)stk + 20)));
            t115 = (t106 + 0x1);
        }
        t124 = t115;
        if (a6 == 2) {
            if (t115 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x5, *(Stk3 *)(((int)stk + 20)));
            t124 = (t115 + 0x1);
        }
        t133 = t124;
        if (a6 == 3) {
            if (t124 == 1) {
                *(float *)((((int)stk + 20) + 0x0)) = ((*(float *)((((int)stk + 20) + 0x0))) - 80.0f);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
            phraseBigWordPut(0x7, *(Stk3 *)(((int)stk + 20)));
            t133 = (t124 + 0x1);
        }
        u137 = *(float *)((((int)stk + 20) + 0x0));
        u139 = 226.0f;
        if (t133 == 1) {
            u139 = 146.0f;
        }
        *(float *)((((int)stk + 20) + 0x0)) = (u137 + u139);
        *(float *)((((int)stk + 20) + 0x4)) = ((*(float *)((((int)stk + 20) + 0x4))) + 1.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((int)stk + 20)); }
        t144 = 0xB;
    }
    return (phraseBigWordPut(t144, *(Stk3 *)(((int)stk + 20))));
}

void hudScoreShow(int a4, int a5, int a6, int a7)
{
    int t4;
    int t8;
    int t9;
    int t10;
    int t12;
    int t28;
    int t39;
    int t44;
    int t50;
    int t53;
    int t62;
    int t70;
    int t74;
    int t77;
    int t81;
    int t89;
    int t96;
    int t99;
    int t126;
    int t136;
    int t145;
    int t148;
    int t157;
    int t163;
    int t166;
    int t174;
    int t177;
    int stk[17];

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
    float F3;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0874A8:;
    *(unsigned int *)(((int)stk + 28)) = R4;
    *(unsigned int *)(((int)stk + 32)) = R5;
    *(unsigned int *)(((int)stk + 24)) = R6;
    *(unsigned int *)0x8C181768 = ((*(int *)0x8C181768) + 0x1);
    R14 = (0x8C287ACC);
    if (((*(int *)0x8C421F60) == 0)) goto L_8C0874D6;
    goto L_8C0874D2;
    L_8C0874D2:;
    goto L_8C08784A;
    L_8C08784A:;
    return;
    L_8C0874D6:;
    t4 = *(int *)0x8C287D5C;
    R0 = (t4);
    if ((t4 != 3)) goto L_8C0874E2;
    goto L_8C0874DE;
    L_8C0874DE:;
    goto L_8C08784A;
    L_8C0874E2:;
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((R14 + 0x34) + 0x0)));
    t8 = *(int *)(((R14 + 0x34) + 0x4));
    *(unsigned int *)(((int)stk + 4)) = t8;
    t9 = *(int *)(((int)stk + 20));
    t10 = *(int *)0x8C185408;
    t12 = (entryAnyAtRound5()) == 0;
    R11 = (0x0);
    R13 = (0x1);
    R9 = (((t10 + (t9 + t8)) & 0x1));
    if (t12) goto L_8C087510;
    goto L_8C087506;
    L_8C087506:;
    if ((R9 == 0)) goto L_8C08750E;
    goto L_8C08750A;
    L_8C08750A:;
    R9 = (R11);
    goto L_8C087510;
    L_8C087510:;
    *(unsigned int *)(((int)stk + 8)) = 0x8C1852A0;
    *(unsigned int *)(((int)stk + 16)) = 0x8C185298;
    R10 = (0x8C287C64);
    R12 = (0x8C343258);
    R4 = (0x8C185298);
    R8 = (R11);
    goto L_8C08767E;
    L_8C08767E:;
    if (((int)R8 >= (int)0x2)) goto L_8C087688;
    goto L_8C087684;
    L_8C087684:;
    goto L_8C087522;
    L_8C087522:;
    *(unsigned int *)(((int)stk + 12)) = (R8 << 2);
    if (((*(int *)((((R14 + 0x34) + (R8 << 2)) + 0x0))) == (*(int *)((R10 + 0x0))))) goto L_8C08753C;
    goto L_8C087538;
    L_8C087538:;
    goto L_8C08767C;
    L_8C08767C:;
    R8 = ((R8 + 0x1));
    goto L_8C08767E;
    L_8C08753C:;
    strmCallMatchIntro(R8, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
    t28 = *(int *)0x8C287ADC;
    R0 = (t28);
    if ((t28 != 2)) goto L_8C0875D8;
    goto L_8C08754A;
    L_8C08754A:;
    *(unsigned int *)(((int)stk + 4)) = R11;
    R9 = ((*(int *)(((int)stk + 16))));
    goto L_8C087598;
    L_8C087598:;
    if (((unsigned int)R9 < (unsigned int)(*(int *)(((int)stk + 8))))) goto L_8C087550;
    goto L_8C08759E;
    L_8C08759E:;
    goto L_8C08763A;
    L_8C08763A:;
    R4 = (0x4);
    R5 = (((R8 << 1) + 0x8C185298));
    goto L_8C087674;
    L_8C087674:;
    if ((R4 != 0)) goto L_8C087646;
    goto L_8C087678;
    L_8C087678:;
    goto L_8C08784A;
    L_8C087646:;
    t39 = *(short *)((R12 + 0xA));
    R0 = ((unsigned short)t39);
    if ((((unsigned short)t39 & (unsigned short)(*(short *)((R5 + 0x0)))) == 0)) goto L_8C087672;
    goto L_8C087652;
    L_8C087652:;
    t44 = *(int *)0x8C287C64;
    R0 = (t44);
    if (((*(int *)(((((*(int *)((((0x56C + R12) + (*(int *)(((int)stk + 12)))) + 0x0))) << 2) + (R14 + 0x34)) + 0x0))) != t44)) goto L_8C087672;
    goto L_8C08766E;
    L_8C08766E:;
    *(unsigned int *)0x8C301970 = R13;
    goto L_8C087672;
    L_8C087672:;
    R4 = ((R4 - 1));
    goto L_8C087674;
    L_8C087550:;
    t50 = *(short *)((R12 + 0xA));
    R0 = ((unsigned short)t50);
    if ((((unsigned short)t50 & (unsigned short)(*(short *)((R9 + 0x0)))) == 0)) goto L_8C087590;
    goto L_8C08755C;
    L_8C08755C:;
    t53 = entryIsVersus(R4, R5, R6, R7);
    R0 = (t53);
    if ((t53 != 0)) goto L_8C087590;
    goto L_8C087566;
    L_8C087566:;
    if (((*(int *)((((0x56C + R12) + (*(int *)(((int)stk + 4)))) + 0x0))) != 0)) goto L_8C087578;
    goto L_8C087574;
    L_8C087574:;
    R4 = (R11);
    goto L_8C08757A;
    L_8C08757A:;
    t62 = (*(int *)((((R4 << 2) + (R14 + 0x34)) + 0x0))) != (*(int *)((R10 + 0x0)));
    R4 = (((R4 << 2) + (R14 + 0x34)));
    if (t62) goto L_8C087590;
    goto L_8C08758A;
    L_8C08758A:;
    R0 = ((entryRecordResult(0xFFFFFFFF)));
    goto L_8C087590;
    L_8C087590:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    R9 = ((R9 + 0x2));
    goto L_8C087598;
    L_8C087578:;
    R4 = (R13);
    goto L_8C08757A;
    L_8C0875D8:;
    *(unsigned int *)(((int)stk + 4)) = R11;
    t70 = *(int *)(((int)stk + 16));
    R9 = (t70);
    if (((unsigned int)t70 >= (unsigned int)(*(int *)(((int)stk + 8))))) goto L_8C08763A;
    goto L_8C0875E2;
    L_8C0875E2:;
    t74 = *(short *)((R12 + 0xA));
    R0 = ((unsigned short)t74);
    if ((((unsigned short)t74 & (unsigned short)(*(short *)((R9 + 0x0)))) == 0)) goto L_8C08762C;
    goto L_8C0875EE;
    L_8C0875EE:;
    t77 = entryIsVersus(R4, R5, R6, R7);
    R0 = (t77);
    if ((t77 != 0)) goto L_8C08762C;
    goto L_8C0875F8;
    L_8C0875F8:;
    t81 = *(int *)((((0x56C + R12) + (*(int *)(((int)stk + 4)))) + 0x0));
    R4 = (t81);
    if ((t81 == 0)) goto L_8C08760C;
    goto L_8C087606;
    L_8C087606:;
    R0 = (R4);
    if ((R4 != 2)) goto L_8C087610;
    goto L_8C08760C;
    L_8C08760C:;
    R4 = (R11);
    goto L_8C087612;
    L_8C087612:;
    t89 = (*(int *)((((R4 << 2) + (R14 + 0x34)) + 0x0))) != (*(int *)((R10 + 0x0)));
    R4 = (((R4 << 2) + (R14 + 0x34)));
    if (t89) goto L_8C08763A;
    goto L_8C087622;
    L_8C087622:;
    R0 = ((entryRecordResult(0xFFFFFFFF)));
    goto L_8C08763A;
    L_8C087610:;
    R4 = (R13);
    goto L_8C087612;
    L_8C08762C:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
    t96 = (unsigned int)(R9 + 0x2) < (unsigned int)(*(int *)(((int)stk + 8)));
    R9 = ((R9 + 0x2));
    if (t96) goto L_8C0875E2;
    goto L_8C08763A;
    L_8C087688:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) & R13);
    t99 = set_event2(0x48, 0x8C08726C);
    *(unsigned int *)((t99 + 0x14)) = ((*(int *)(((int)stk + 28))) + 0x78);
    *(float *)((t99 + 0x24)) = 1.0f;
    *(float *)((t99 + 0x20)) = 0.0f;
    *(unsigned int *)((t99 + 0x38)) = R11;
    R12 = (t99);
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_8C0876B6;
    goto L_8C0876B2;
    L_8C0876B2:;
    *(unsigned int *)((R12 + 0x18)) = R11;
    goto L_8C0876BA;
    L_8C0876BA:;
    if ((R9 == 0)) goto L_8C0876EC;
    goto L_8C0876BE;
    L_8C0876BE:;
    *(unsigned int *)((R12 + 0x28)) = (*(int *)(((R14 + 0x44) + 0x0)));
    R2 = ((*(int *)((R14 + 0x48))));
    goto L_8C0876F8;
    L_8C0876F8:;
    *(unsigned int *)((R12 + 0x2C)) = R2;
    *(unsigned int *)((R12 + 0x30)) = R11;
    *(unsigned int *)((R12 + 0x34)) = (R13 - (*(int *)(((int)stk + 24))));
    *(unsigned int *)((R12 + 0x40)) = R11;
    *(unsigned int *)((R12 + 0x3C)) = R11;
    *(unsigned int *)((R12 + 0x44)) = R13;
    R4 = ((R14 + 0x44));
    if (((*(int *)(((R14 + 0x44) + 0x0))) != 0)) goto L_8C087734;
    goto L_8C087718;
    L_8C087718:;
    if (((*(int *)((R4 + 0x4))) != 0)) goto L_8C087734;
    goto L_8C08771E;
    L_8C08771E:;
    *(unsigned int *)((R12 + 0x30)) = 0x4;
    R4 = ((R14 + 0x34));
    if (((*(int *)(((R14 + 0x34) + 0x0))) != 6)) goto L_8C087734;
    goto L_8C08772C;
    L_8C08772C:;
    if (((*(int *)((R4 + 0x4))) != 6)) goto L_8C087734;
    goto L_8C087732;
    L_8C087732:;
    *(unsigned int *)((R12 + 0x38)) = R13;
    goto L_8C087734;
    L_8C087734:;
    if (((*(int *)((R14 + 0x54))) == 0)) goto L_8C087764;
    goto L_8C08773C;
    L_8C08773C:;
    R4 = ((R14 + 0x44));
    if (((*(int *)(((R14 + 0x44) + 0x0))) != 2)) goto L_8C087750;
    goto L_8C087746;
    L_8C087746:;
    if (((*(int *)((R4 + 0x4))) != 2)) goto L_8C087750;
    goto L_8C08774C;
    L_8C08774C:;
    *(unsigned int *)((R12 + 0x30)) = R13;
    goto L_8C087764;
    L_8C087764:;
    t126 = scorePressure();
    R0 = (t126);
    if ((t126 != 60)) goto L_8C08784A;
    goto L_8C08776E;
    L_8C08776E:;
    R4 = (((*(int *)((R10 + 0x0))) - 1));
    R7 = (0x4000);
    if ((((*(int *)0x8C287B3C) & 0x4000) != 0)) goto L_8C0877A8;
    goto L_8C08777C;
    L_8C08777C:;
    if (((*(int *)(((int)stk + 20))) != R4)) goto L_8C0877CC;
    goto L_8C087782;
    L_8C087782:;
    t136 = *(int *)(((R14 + 0x44) + 0x0));
    R0 = (t136);
    if ((t136 != 3)) goto L_8C0877CC;
    goto L_8C08778C;
    L_8C08778C:;
    if (((int)((*(int *)(((R14 + 0x44) + 0x0))) - (*(int *)(((R14 + 0x44) + 0x4)))) >= (int)R13)) goto L_8C087818;
    goto L_8C08779A;
    L_8C08779A:;
    goto L_8C08784A;
    L_8C087818:;
    *(unsigned int *)((R12 + 0x40)) = R13;
    R0 = (0x40);
    goto L_8C08784A;
    L_8C0877CC:;
    if (((R7 & (*(int *)0x8C287B3C)) != 0)) goto L_8C0877F4;
    goto L_8C0877D4;
    L_8C0877D4:;
    t145 = *(int *)(((int)stk + 4));
    R0 = (t145);
    if ((t145 != R4)) goto L_8C08781E;
    goto L_8C0877DA;
    L_8C0877DA:;
    t148 = *(int *)((R14 + 0x48));
    R0 = (t148);
    if ((t148 != 3)) goto L_8C08781E;
    goto L_8C0877E2;
    L_8C0877E2:;
    if (((int)((*(int *)(((R14 + 0x44) + 0x4))) - (*(int *)(((R14 + 0x44) + 0x0)))) < (int)R13)) goto L_8C08784A;
    goto L_8C0877F0;
    L_8C0877F0:;
    goto L_8C087818;
    L_8C08781E:;
    if ((R9 != 0)) goto L_8C087836;
    goto L_8C087822;
    L_8C087822:;
    if (((int)(*(int *)(((int)stk + 20))) >= (int)R4)) goto L_8C08784A;
    goto L_8C087828;
    L_8C087828:;
    t157 = *(int *)(((R14 + 0x44) + 0x0));
    R0 = (t157);
    if ((t157 == 3)) goto L_8C087844;
    goto L_8C087832;
    L_8C087832:;
    goto L_8C08784A;
    L_8C087844:;
    *(unsigned int *)((R12 + 0x40)) = 0x2;
    R0 = (0x40);
    goto L_8C08784A;
    L_8C087836:;
    if (((int)(*(int *)(((int)stk + 4))) >= (int)R4)) goto L_8C08784A;
    goto L_8C08783C;
    L_8C08783C:;
    t163 = *(int *)((R14 + 0x48));
    R0 = (t163);
    if ((t163 != 3)) goto L_8C08784A;
    goto L_8C087844;
    L_8C0877F4:;
    t166 = *(int *)(((R14 + 0x44) + 0x4));
    R0 = (t166);
    R5 = ((R14 + 0x44));
    R6 = (t166);
    if ((t166 != 6)) goto L_8C087808;
    goto L_8C087800;
    L_8C087800:;
    if (((int)(*(int *)((R5 + 0x0))) < (int)0x6)) goto L_8C087818;
    goto L_8C087808;
    L_8C087808:;
    if (((int)R6 <= (int)0x6)) goto L_8C08781E;
    goto L_8C08780E;
    L_8C08780E:;
    t174 = *(int *)((R5 + 0x0));
    R0 = ((R6 - t174));
    if (((R6 - t174) != 1)) goto L_8C08781E;
    goto L_8C087818;
    L_8C0877A8:;
    t177 = *(int *)(((R14 + 0x44) + 0x0));
    R5 = (t177);
    R6 = ((R14 + 0x44));
    if ((t177 != 6)) goto L_8C0877BC;
    goto L_8C0877B4;
    L_8C0877B4:;
    if (((int)(*(int *)((R6 + 0x4))) < (int)0x6)) goto L_8C087818;
    goto L_8C0877BC;
    L_8C0877BC:;
    if (((int)R5 <= (int)0x6)) goto L_8C0877CC;
    goto L_8C0877C2;
    L_8C0877C2:;
    if (((R5 - (*(int *)((R6 + 0x4)))) == 1)) goto L_8C087818;
    goto L_8C0877CC;
    L_8C087750:;
    if (((*(int *)(((R14 + 0x44) + 0x0))) != 3)) goto L_8C087760;
    goto L_8C08775A;
    L_8C08775A:;
    *(unsigned int *)((R12 + 0x30)) = 0x2;
    goto L_8C087764;
    L_8C087760:;
    *(unsigned int *)((R12 + 0x30)) = 0x3;
    goto L_8C087764;
    L_8C0876EC:;
    *(unsigned int *)((R12 + 0x28)) = (*(int *)((R14 + 0x48)));
    R2 = ((*(int *)(((R14 + 0x44) + 0x0))));
    goto L_8C0876F8;
    L_8C0876B6:;
    *(unsigned int *)((R12 + 0x18)) = 0x3C;
    goto L_8C0876BA;
    L_8C08750E:;
    R9 = (R13);
    goto L_8C087510;
}

int courtAusDrawScoreboard(void)
{
    int t0;
    int t1;
    int t2;
    int t28;
    int t36;
    int t79;
    int t145;
    int t165;
    int t34;
    int t15;
    int t26;
    int t20;
    float u50;
    float u51;
    float u52;
    int t128;
    int t129;
    int stk[22];

    t0 = *(int *)0x8C287B08;
    t1 = *(int *)0x8C185408;
    t2 = *(int *)0x8C287B0C;
    *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 4)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 4) + 0x24) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x24) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    *(unsigned int *)(((int)stk + 24)) = 0x8C287B18;
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287B08);
    *(unsigned int *)(((int)stk + 36)) = (*(int *)0x8C287B0C);
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t15 = *(int *)0x8C287B1C, t15 == 2)) {
            *(unsigned int *)(((int)stk + 20)) = 0x3;
            t26 = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 20)) = 0x6;
                t20 = 0x5;
            } else {
                *(unsigned int *)(((int)stk + 20)) = 0x5;
                t20 = 0x6;
            }
            t26 = t20;
        }
        t34 = t26;
    } else {
        t28 = *(int *)0x8C287B18;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)0x8C287B1C);
        t34 = t28;
    }
    t36 = (int)((int)t34 % (int)0x64);
    *(unsigned int *)(((int)stk + 20)) = ((int)((int)(*(int *)(((int)stk + 20))) % (int)0x64));
    if ((*(int *)0x8C287D5C) != 0) {
        if ((0x1 & ((t1 + t0) + t2)) != 0) {
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x8C1218C4;
            u50 = (*(float *)0x8C1218C4);
            u51 = (*(float *)0x8C1218C8);
            u52 = (*(float *)0x8C1218CC);
        } else {
            nlPushMatrix(0x0);
            *(unsigned int *)(((int)stk + 12)) = 0x8C1218D0;
            u50 = (*(float *)0x8C1218D0);
            u51 = (*(float *)0x8C1218D4);
            u52 = (*(float *)0x8C1218D8);
        }
        nlTranslate(u50, u51, u52);
        nlRotateAY(0xE38);
        nlObjPut(0xC8830E8);
        nlPopMatrix(0x1);
    }
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C1218DC;
        nlTranslate((*(float *)0x8C1218DC), (*(float *)0x8C1218E0), (*(float *)0x8C1218E4));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18BAA4))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t79 = *(int *)(((int)stk + 16));
        *(unsigned int *)(((int)stk + 8)) = (t79 + 0xC);
        nlTranslate((*(float *)(((t79 + 0xC) + 0x0))), (*(float *)(((t79 + 0xC) + 0x4))), (*(float *)(((t79 + 0xC) + 0x8))));
        nlRotateAY(0xE38);
        t128 = 0x8C18BAA4;
        t129 = ((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C121924;
        nlTranslate((*(float *)0x8C121924), (*(float *)0x8C121928), (*(float *)0x8C12192C));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C121930;
        nlTranslate((*(float *)0x8C121930), (*(float *)0x8C121934), (*(float *)0x8C121938));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C12193C;
        nlTranslate((*(float *)0x8C12193C), (*(float *)0x8C121940), (*(float *)0x8C121944));
        nlRotateAY(0xE38);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) << 2) + 0x8C18BAEC))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121948;
        nlTranslate((*(float *)0x8C121948), (*(float *)0x8C12194C), (*(float *)0x8C121950));
        nlRotateAY(0xE38);
        t128 = 0x8C18BAEC;
        t129 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t129 + t128))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 4)) = 0x8C12190C;
    nlTranslate((*(float *)0x8C12190C), (*(float *)0x8C121910), (*(float *)0x8C121914));
    nlRotateAY(0xE38);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 32))) << 2) + 0x8C18BB50))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t145 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = (t145 + 0xC);
    nlTranslate((*(float *)(((t145 + 0xC) + 0x0))), (*(float *)(((t145 + 0xC) + 0x4))), (*(float *)(((t145 + 0xC) + 0x8))));
    nlRotateAY(0xE38);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 36))) << 2) + 0x8C18BB50))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1218F4;
        nlTranslate((*(float *)0x8C1218F4), (*(float *)0x8C1218F8), (*(float *)0x8C1218FC));
        nlRotateAY(0xE38);
        courtAusDrawNumber(t36);
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t165 = *(int *)(((int)stk + 4));
        nlTranslate((*(float *)(((t165 + 0xC) + 0x0))), (*(float *)(((t165 + 0xC) + 0x4))), (*(float *)(((t165 + 0xC) + 0x8))));
        nlRotateAY(0xE38);
        courtAusDrawNumber((*(int *)(((int)stk + 20))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1218F4;
        nlTranslate((*(float *)0x8C1218F4), (*(float *)0x8C1218F8), (*(float *)0x8C1218FC));
        nlRotateAY(0xE38);
        if ((int)t36 < (int)0x6) {
            nlObjPut((*(int *)(((t36 << 2) + 0x8C18BB34))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        nlTranslate((*(float *)0x8C121900), (*(float *)0x8C121904), (*(float *)0x8C121908));
        nlRotateAY(0xE38);
        if ((int)(*(int *)(((int)stk + 20))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 20))) << 2) + 0x8C18BB34))));
        }
    }
    return (nlPopMatrix(0x1));
}

int hudPanelDraw(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    int t2;
    int t5;
    int t6;
    int t9;
    int t18;
    float u19;
    int t21;
    int t60;
    int t45;
    int t3;
    int t125;
    int t107;
    int t10;
    int t90;
    int t13;
    int t14;
    int t73;
    int t52;
    int stk[69];

    { struct mv2 { int w[2]; }; *(struct mv2 *)((0x88 + ((int)stk + 84))) = *(struct mv2 *)(0x8C125A60); }
    t0 = 0x8C125A68;
    t2 = (((int)stk + 84) + 0x1C);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0x8C125A68 + 108)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    if (a4 == 2) {
        t5 = a4;
        t6 = 0x0;
        for (;;) {
            if ((int)t6 >= (int)0x2) {
                break;
            }
            t5 = (resSpGetFree(t6, a5));
            t6 = (t6 + 0x1);
        }
        *(unsigned int *)0x8C1D173C = 0x0;
        t125 = t5;
    } else {
        if ((*(int *)(((a4 << 2) + 0x8C1DC64C))) == 0) {
            t9 = resSpTexLoad(a4);
            *(unsigned int *)0x8C1D173C = 0x0;
            t107 = t9;
        } else {
            *(unsigned int *)(((int)stk + 84)) = (a5 - 21);
            if ((a4 == 0) && (t10 = *(int *)((((a5 - 21) << 2) + 0x8C1DC654)), t10 == 0)) {
                t90 = (resGetTexLoad((*(int *)(((int)stk + 84)))));
            } else {
                *(unsigned int *)(((int)stk + 88)) = (a5 << 2);
                if ((a4 == 1) && (t13 = *(int *)((((a5 << 2) + (0x88 + ((int)stk + 84))) + 0x0)), t14 = *(int *)((0x8C1AED70 + (t13 << 2))), t14 == 0)) {
                    t73 = (resGetModelLoad((*(int *)((((*(int *)(((int)stk + 88))) + (0x88 + ((int)stk + 84))) + 0x0)))));
                } else {
                    t18 = *(int *)0x8C1D173C;
                    u19 = ((float)t18 * 0.100000001f);
                    if (((float)t18 * 0.100000001f) > 1.0f) {
                        u19 = 1.0f;
                    }
                    if (a4 != 0) {
                    } else {
                        t21 = 0x8C1D1370;
                        for (;;) {
                            if ((unsigned int)t21 >= (unsigned int)0x8C1D173C) {
                                break;
                            }
                            *(unsigned int *)((t21 + 0x0)) = 0xEE;
                            t21 = (t21 + 0x6C);
                        }
                        vecMake(t21, 0xEE, 0x8C1D173C, a7, (((int)stk + 84) + 0x10), 325.0f, f4, 0.550000012f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        shopItemTblInit(0x8C1D1370, *(Stk3 *)((((int)stk + 84) + 0x10)), 514.0f, 96.0f, u19);
                        *(float *)(((int)stk + 96)) = (f4 + -20.0f);
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 80.0f, (f4 + -20.0f), 0.50999999f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        sprListPut(0x8C1D1980, 0x1, 0x0, *(Stk3 *)((((int)stk + 84) + 0x10)), u19, 1.0f, 1.0f);
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 490.0f, (f4 + -40.0f), 0.529999971f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        sprListPut(0x8C1D19EC, 0x9, 0x0, *(Stk3 *)((((int)stk + 84) + 0x10)), (u19 * 0.699999988f), 1.0f, 1.0f);
                        *(unsigned int *)(((int)stk + 112)) = (*(int *)((((*(int *)(((int)stk + 84))) << 2) + 0x8C1DC68C)));
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 498.0f, (f4 + -32.0f), 0.50999999f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        sprListPut((((int)stk + 20) + 0x5C), 0x1, 0x0, *(Stk3 *)((((int)stk + 84) + 0x10)), u19, 1.0f, 1.0f);
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 425.0f, (*(float *)(((int)stk + 96))), 0.50999999f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        hudNumberDraw(a5, *(Stk3 *)((((int)stk + 84) + 0x10)), u19);
                    }
                    t60 = a4;
                    if (a4 != 1) {
                    } else {
                        t45 = 0x8C1D1370;
                        for (;;) {
                            if ((unsigned int)t45 >= (unsigned int)0x8C1D173C) {
                                break;
                            }
                            *(unsigned int *)((t45 + 0x0)) = 0xEC;
                            t45 = (t45 + 0x6C);
                        }
                        vecMake(t45, 0x8C1D173C, 0xEC, 0x0, (((int)stk + 84) + 0x10), 320.0f, f4, 0.0500000007f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        shopItemTblInit(0x8C1D1370, *(Stk3 *)((((int)stk + 84) + 0x10)), 594.0f, 126.0f, u19);
                        *(float *)(((int)stk + 92)) = (f4 + -30.0f);
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 35.0f, (f4 + -30.0f), 0.00999999978f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        sprListPut(0x8C1D225C, 0x2, 0x0, *(Stk3 *)((((int)stk + 84) + 0x10)), u19, 1.0f, 1.0f);
                        vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x10), 400.0f, (*(float *)(((int)stk + 92))), 0.00999999978f);
                        if (a5 == 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                            t52 = 0x8C1D2334;
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 72)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                            t52 = 0x8C1D240C;
                        }
                        sprListPut(t52, 0x2, 0x0, *(Stk3 *)((((int)stk + 84) + 0x10)), u19, 1.0f, 1.0f);
                        *(float *)(((((int)stk + 84) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 84) + 0x10) + 0x0))) + 200.0f);
                        *(float *)(((((int)stk + 84) + 0x10) + 0x4)) = ((*(float *)(((((int)stk + 84) + 0x10) + 0x4))) + 89.0f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 60)) = *(struct mv3 *)((((int)stk + 84) + 0x10)); }
                        t60 = (sprSet173Put((*(int *)((((*(int *)(((int)stk + 88))) + (0xA0 + ((int)stk + 60))) + 0x0))), *(Stk3 *)((((int)stk + 84) + 0x10))));
                    }
                    *(unsigned int *)0x8C1D173C = ((*(int *)0x8C1D173C) + 0x1);
                    t73 = t60;
                }
                t90 = t73;
            }
            t107 = t90;
        }
        t125 = t107;
    }
    return t125;
}

int standRowBarDraw(int a4, int a5, int a6, int a7)
{
    int t4;
    int t115;
    int t196;
    float u135;
    int t150;
    float u158;
    int stk[44];

    *(unsigned int *)(((int)stk + 24)) = a4;
    *(unsigned int *)(((int)stk + 44)) = a5;
    *(unsigned int *)(((((int)stk + 20) + 0x5C) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0)) = 0xFFFFFF96;
    *(unsigned int *)((((((int)stk + 20) + 0x5C) + 0x8) + 0x0)) = 0x64FFFF00;
    *(unsigned int *)(((int)stk + 40)) = ((((int)stk + 20) + 0x5C) + 0xC);
    *(unsigned int *)((((((int)stk + 20) + 0x5C) + 0xC) + 0x0)) = 0xFFFF00;
    if ((*(int *)(((int)stk + 44))) != 0) {
        *(unsigned int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0)) = (*(int *)(((((int)stk + 20) + 0x5C) + 0x0)));
    }
    *(unsigned int *)(((int)stk + 36)) = (((int)stk + 20) + 0x1C);
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 20) + 0x1C);
    t4 = *(int *)(((int)stk + 24));
    vecMake(((((int)stk + 20) + 0x5C) + 0xC), a5, a6, a7, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)(((((int)stk + 20) + 0x5C) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 32)) = ((((int)stk + 20) + 0x1C) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x1C) + 0x10);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)(((((int)stk + 20) + 0x5C) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 28)) = ((((int)stk + 20) + 0x1C) + 0x20);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x1C) + 0x20);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)(((((int)stk + 20) + 0x5C) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x1C) + 0x30);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x1C) + 0x30);
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)(((((int)stk + 20) + 0x5C) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x1C));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + 1.0f), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (1.0f + 1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (1.0f + 1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x1C));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x4))), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
    primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x4) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
    *(volatile int *)(((int)stk + 20));
    t115 = *(int *)(((int)stk + 44));
    t196 = (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x1C)));
    if (t115 == 0) {
    } else {
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (1.0f + 1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x8) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (1.0f + 1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x8) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        u135 = *(float *)0x8C0A3498;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + u135), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)(((*(int *)(((int)stk + 40))) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + u135), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        t150 = *(int *)(((int)stk + 40));
        primVertexSet((*(int *)((t150 + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(volatile int *)(((int)stk + 20));
        nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x1C));
        u158 = *(float *)0x8C0A349C;
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 36)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + u158), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((t150 + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 32)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + u158), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((t150 + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 28)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x0))) + (float)t4), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x8) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), (*(float *)(((0x9C + ((int)stk + 20)) + 0x0))), ((*(float *)(((0x9C + ((int)stk + 20)) + 0x4))) + (-1.0f)), (*(float *)(((0x9C + ((int)stk + 20)) + 0x8))));
        primVertexSet((*(int *)((((((int)stk + 20) + 0x5C) + 0x8) + 0x0))), 0x0, 0x0, 0x0, ((*(int *)(((int)stk + 20)))));
        *(volatile int *)(((int)stk + 20));
        t196 = (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x1C)));
    }
    return t196;
}

int menuItemDraw1(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float t2;
    float u14;
    int t21;
    int t26;
    float t33;
    float t41;
    int t42;
    int t43;
    int t68;
    int t73;
    float u83;
    float u95;
    int t107;
    int t52;
    int t62;
    int stk[36];

    stk[24] = a8;
    stk[25] = a9;
    stk[26] = a10;
    stk[27] = a11;
    *(unsigned int *)(((int)stk + 32)) = a4;
    *(unsigned short *)0x8C334D96 = ((*(short *)0x8C334D96) + 0x200);
    t2 = nlCos((unsigned short)(*(short *)0x8C334D96));
    if (!(0.0f > t2)) {
        nlCos((unsigned short)(*(short *)0x8C334D96));
    } else {
        nlCos((unsigned short)(*(short *)0x8C334D96));
    }
    u14 = 0.5f;
    if (a5 != 0) {
        u14 = 1.0f;
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x4), ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 46.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 5.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
    menuIconPut(0x1, *(Stk3 *)((((int)stk + 32) + 0x4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    t21 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)((((int)stk + 32) + 0x40)));
    if (a5 != 0) {
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), (*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        t26 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    *(float *)(((((int)stk + 32) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 21.0f);
    *(float *)(((((int)stk + 32) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + -7.0f);
    *(float *)(((((int)stk + 32) + 0x40) + 0x8)) = ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) - 0.00100000005f);
    t33 = nlCos((unsigned short)(*(short *)0x8C1846B2));
    if (t33 > 0.0f) {
        *(unsigned short *)0x8C1846B2 = ((*(short *)0x8C1846B2) + 0x1400);
    } else {
        *(unsigned short *)0x8C1846B2 = ((*(short *)0x8C1846B2) + 0x600);
    }
    t41 = nlCos((unsigned short)(*(short *)0x8C1846B4));
    t42 = *(short *)0x8C1846B4;
    t43 = 0x600;
    if (0.0f > t41) {
        t43 = 0x1400;
    }
    *(unsigned short *)0x8C1846B4 = (t42 + t43);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x4), ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 39.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 6.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if ((*(int *)(((int)stk + 32))) != 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t52 = ((((0xFF & (int)(u14 * 255.0f)) << 16) << 8) | 0xFFFF00);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t52 = ((((0xFF & (int)(u14 * 128.0f)) << 16) << 8) | 0xFFFFFF);
    }
    primSprDraw(0x8C3344D4, 0x80, 0x80, t52, *(Stk3 *)((((int)stk + 32) + 0x4)));
    *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 32) + 0x4) + 0x0))) + 44.0f);
    if ((*(int *)(((int)stk + 32))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t62 = ((((0xFF & (int)(u14 * 255.0f)) << 16) << 8) | 0xFFFF00);
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x4)); }
        t62 = ((((0xFF & (int)(u14 * 128.0f)) << 16) << 8) | 0xFFFFFF);
    }
    primSprDraw(0x8C334524, 0x80, 0x80, t62, *(Stk3 *)((((int)stk + 32) + 0x4)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    t68 = ((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)((((int)stk + 32) + 0x40)));
    if (a5 != 0) {
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), (*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        t73 = ((int (*)(int))(cursorBoxPut))(0x1);
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x4), ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 10.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u83 = (*(float *)(((((int)stk + 32) + 0x4) + 0x0)));
        u83 = u83 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B4)));
        *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = u83;
    }
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x4), ((*(float *)(((((int)stk + 32) + 0x40) + 0x0))) + 122.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x4))) + 4.0f), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -0.00100000005f));
    if (a5 != 0) {
        u95 = (*(float *)(((((int)stk + 32) + 0x4) + 0x0)));
        u95 = u95 + 1.0f * (nlCos((unsigned short)(*(short *)0x8C1846B2)));
        *(float *)(((((int)stk + 32) + 0x4) + 0x0)) = u95;
    }
    *(float *)(((((int)stk + 32) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 32) + 0x4) + 0x4))) + 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 32) + 0x40)); }
    t107 = (((int (*)(int, Stk3))(cursorBoxPut))(0x0, *(Stk3 *)((((int)stk + 32) + 0x40))));
    if (a5 != 0) {
        vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 20), (*(float *)(((((int)stk + 32) + 0x40) + 0x0))), (*(float *)(((((int)stk + 32) + 0x40) + 0x4))), ((*(float *)(((((int)stk + 32) + 0x40) + 0x8))) + -9.99999975e-05f));
        t107 = (((int (*)(int))(cursorBoxPut))(0x1));
    }
    return t107;
}

