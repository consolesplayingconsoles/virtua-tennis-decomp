/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int, float);
int entryAnyAtRound5(void);
int entryCountJoined(void);
int entryFirstPortFlag(void);
int entryIsVersus(int, int, int, int);
int lightOverrideAmbient(int, int);
int lineJudgeIdleAll(void);
int matchCheckTiebreak(int);
int matchExec(void);
int matchSetupPlayers(void);
int motionSet(int, int, int, int, int, int, float);
int nlInitEvent(void);
float nlRandom(void);
int playerHumanPressed(int);
int playerInit(int, int, int, int);
int selRestart(void);
int stageTexFree(void);
int strmBgmFadeOut(int, int);
int unlockCountW0(void);
int unlockTestW0(int);
int vecMake(int, int, int, int, int, float, float, float);
int selInitB(void);
int replaySnapshot(int a4, int a5);

int selInitB(void)
{
    int t1;
    int t4;
    int t9;
    int t14;
    int t35;
    int t46;
    int t52;
    int t57;
    int t61;
    int t65;
    int t76;
    int t79;
    int t90;
    int t93;
    int t108;
    int t122;
    int t133;
    int stk[23];

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
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    L_8C0A6F86:;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x18)) = *(struct mv4 *)(0x8C110AB4); }
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 16) + 0x8)) = *(struct mv4 *)(0x8C110AC4); }
    t1 = (entryIsVersus(R4, R5, R6, R7)) == 0;
    R8 = (0x8C287ACC);
    if (t1) goto L_8C0A7014;
    goto L_8C0A6FBE;
    L_8C0A6FBE:;
    *(unsigned int *)((R8 + 0x0)) = (*(int *)0x8C1854A0);
    t4 = *(int *)0x8C1854A0;
    *(unsigned int *)0x8C1854A0 = (t4 + 0x1);
    R0 = ((t4 + 0x1));
    R4 = (0x8C1854A0);
    if (((int)(t4 + 0x1) < 0)) goto L_8C0A6FD4;
    goto L_8C0A6FD0;
    L_8C0A6FD0:;
    R0 = ((R0 & 0x3));
    goto L_8C0A6FDE;
    L_8C0A6FDE:;
    *(unsigned int *)((R4 + 0x0)) = R0;
    t9 = *(int *)((R8 + 0x0));
    R0 = (t9);
    if (((int)t9 < 0)) goto L_8C0A7008;
    goto L_8C0A6FE6;
    L_8C0A6FE6:;
    R0 = ((R0 & 0x3));
    goto L_8C0A7012;
    L_8C0A7012:;
    *(unsigned int *)((R8 + 0x0)) = R0;
    goto L_8C0A7014;
    L_8C0A7014:;
    t14 = (entryFirstPortFlag()) == 0;
    R10 = (0x4);
    if (t14) goto L_8C0A7028;
    goto L_8C0A701E;
    L_8C0A701E:;
    if (((*(int *)0x8C287ADC) != 4)) goto L_8C0A7028;
    goto L_8C0A7026;
    L_8C0A7026:;
    *(unsigned int *)((R8 + 0x0)) = R10;
    goto L_8C0A7028;
    L_8C0A7028:;
    *(unsigned int *)0x8C34390C = 0x0;
    R14 = (0x0);
    R5 = (0x8C287D5C);
    if (((*(int *)0x8C287D5C) != 1)) goto L_8C0A703A;
    goto L_8C0A7036;
    L_8C0A7036:;
    *(unsigned int *)0x8C185410 = R14;
    goto L_8C0A703A;
    L_8C0A703A:;
    R12 = (0x1);
    R4 = (0x8C18528C);
    if (((*(int *)0x8C185350) == 0)) goto L_8C0A704C;
    goto L_8C0A7046;
    L_8C0A7046:;
    *(unsigned int *)0x8C1852C0 = R12;
    *(unsigned int *)((R4 + 0x0)) = R12;
    goto L_8C0A704C;
    L_8C0A704C:;
    if (((*(int *)0x8C185374) == 0)) goto L_8C0A705A;
    goto L_8C0A7054;
    L_8C0A7054:;
    *(unsigned int *)0x8C1852E4 = R12;
    *(unsigned int *)((R4 + 0x4)) = R12;
    goto L_8C0A705A;
    L_8C0A705A:;
    if (((*(int *)((R5 + 0x0))) != 2)) goto L_8C0A7064;
    goto L_8C0A7060;
    L_8C0A7060:;
    *(unsigned int *)((R4 + 0x4)) = R14;
    *(unsigned int *)((R4 + 0x0)) = R14;
    goto L_8C0A7064;
    L_8C0A7064:;
    *(unsigned int *)0x8C185418 = 0x8;
    *(unsigned int *)0x8C185414 = 0x8;
    R5 = (0x8C185414);
    R7 = ((R4 + 0x8));
    goto L_8C0A7072;
    L_8C0A7072:;
    if (((*(int *)((R4 + 0x0))) != 1)) goto L_8C0A707E;
    goto L_8C0A7078;
    L_8C0A7078:;
    *(unsigned int *)((R5 + 0x0)) = ((*(int *)((R5 + 0x0))) + 0x1);
    goto L_8C0A707E;
    L_8C0A707E:;
    t35 = (unsigned int)(R4 + 0x4) < (unsigned int)R7;
    R4 = ((R4 + 0x4));
    R5 = ((R5 + 0x4));
    if (t35) goto L_8C0A7072;
    goto L_8C0A7086;
    L_8C0A7086:;
    R11 = (0x8C3438C8);
    R13 = (0x8C3438B8);
    R4 = (R14);
    R5 = (0x10);
    R6 = (0x8C343888);
    R7 = (0x8C343878);
    R9 = (0x8C343898);
    F15 = (0.0f);
    goto L_8C0A7096;
    L_8C0A7096:;
    *(unsigned int *)((R7 + R4)) = R14;
    *(unsigned int *)((R6 + R4)) = R14;
    *(unsigned int *)((R9 + R4)) = R14;
    *(float *)((R11 + R4)) = F15;
    t46 = (unsigned int)(R4 + 0x4) < (unsigned int)R5;
    *(unsigned int *)((R13 + R4)) = R14;
    R4 = ((R4 + 0x4));
    if (t46) goto L_8C0A7096;
    goto L_8C0A70A8;
    L_8C0A70A8:;
    R11 = (0x28);
    R13 = (0x8C343910);
    R9 = (R14);
    goto L_8C0A70AE;
    L_8C0A70AE:;
    t52 = (int)(R9 + 0x1) < (int)R11;
    *(unsigned int *)((((R9 << 2) + R13) + 0x0)) = (unlockTestW0(R9));
    R9 = ((R9 + 0x1));
    if (t52) goto L_8C0A70AE;
    goto L_8C0A70C6;
    L_8C0A70C6:;
    R4 = (0x8C3439D8);
    R5 = (0x8C343A78);
    R9 = (0xFFFFFFFF);
    goto L_8C0A70CC;
    L_8C0A70CC:;
    *(unsigned int *)((R4 + 0x0)) = R9;
    t57 = (unsigned int)(R4 + 0x4) < (unsigned int)R5;
    R4 = ((R4 + 0x4));
    if (t57) goto L_8C0A70CC;
    goto L_8C0A70D4;
    L_8C0A70D4:;
    *(unsigned int *)0x8C3439D8 = R9;
    *(unsigned int *)(((int)stk + 16)) = R12;
    goto L_8C0A7106;
    L_8C0A7106:;
    t61 = (int)(*(int *)(((int)stk + 16))) < (int)((unlockCountW0()) + 0x1);
    if (t61) goto L_8C0A70DC;
    goto L_8C0A7114;
    L_8C0A7114:;
    nlInitEvent();
    *(unsigned int *)0x8C30196C = R14;
    *(unsigned int *)0x8C185488 = R14;
    stageTexFree();
    t65 = (entryCountJoined()) != 1;
    R13 = (0x9);
    if (t65) goto L_8C0A7160;
    goto L_8C0A7130;
    L_8C0A7130:;
    *(unsigned int *)(((int)stk + 16)) = 0x8C1853C0;
    *(unsigned int *)(((int)stk + 20)) = 0x8C1852A0;
    R6 = (R14);
    R7 = (0x8C1852E8);
    goto L_8C0A713E;
    L_8C0A713E:;
    R11 = ((R6 << 2));
    R4 = ((*(int *)(((int)stk + 20))));
    R5 = ((*(int *)(((int)stk + 16))));
    goto L_8C0A7146;
    L_8C0A7146:;
    if (((*(int *)((R4 + R11))) != 0)) goto L_8C0A7152;
    goto L_8C0A714E;
    L_8C0A714E:;
    *(unsigned int *)((R5 + R11)) = R12;
    goto L_8C0A7152;
    L_8C0A7152:;
    t76 = (unsigned int)(R4 + 0x24) < (unsigned int)R7;
    R4 = ((R4 + 0x24));
    R5 = ((R5 + 0x24));
    if (t76) goto L_8C0A7146;
    goto L_8C0A715A;
    L_8C0A715A:;
    t79 = (int)(R6 + 0x1) < (int)R13;
    R6 = ((R6 + 0x1));
    if (t79) goto L_8C0A713E;
    goto L_8C0A7160;
    L_8C0A7160:;
    *(unsigned int *)(((int)stk + 16)) = 0x8C185330;
    R6 = (R14);
    R7 = (0x8C185378);
    goto L_8C0A716A;
    L_8C0A716A:;
    R11 = ((R6 << 2));
    R4 = ((*(int *)(((int)stk + 16))));
    R5 = (R14);
    goto L_8C0A7172;
    L_8C0A7172:;
    if (((*(int *)((R4 + R11))) != 1)) goto L_8C0A718A;
    goto L_8C0A717A;
    L_8C0A717A:;
    *(unsigned int *)((((0x8C185378 + R5) + R11) + 0x0)) = (*(int *)((((0x8C1109D4 + R5) + R11) + 0x0)));
    goto L_8C0A718A;
    L_8C0A718A:;
    t90 = (unsigned int)(R4 + 0x24) < (unsigned int)R7;
    R4 = ((R4 + 0x24));
    R5 = ((R5 + 0x24));
    if (t90) goto L_8C0A7172;
    goto L_8C0A7192;
    L_8C0A7192:;
    t93 = (int)(R6 + 0x1) < (int)R13;
    R6 = ((R6 + 0x1));
    if (t93) goto L_8C0A716A;
    goto L_8C0A7198;
    L_8C0A7198:;
    goto L_8C0A723A;
    L_8C0A723A:;
    matchSetupPlayers();
    *(unsigned int *)(((int)stk + 16)) = 0x8C2873D0;
    R11 = (R14);
    goto L_8C0A7246;
    L_8C0A7246:;
    playerInit(((R11 * 0xD78) + 0x8C287D84), R11, R6, R7);
    *(unsigned int *)0x8C29466C = R14;
    *(unsigned int *)0x8C294668 = R14;
    *(unsigned int *)((((R11 * 0xD78) + 0x8C287D84) + 0xC58)) = R14;
    motionSet(((R11 * 0xD78) + 0x8C287D84), 0x29DE0, 0x1, 0x12755C, ((*(int *)((0x8C102424 + ((*(int *)((((R11 * 0xD78) + 0x8C287D84) + 0xC58))) * 0x6C))))), ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0)))), (*(float *)0x8C23D204));
    vecMake(0x0, 0x0, 0x0, 0x0, (0xAF4 + ((R11 * 0xD78) + 0x8C287D84)), F15, F15, F15);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAE8 + ((R11 * 0xD78) + 0x8C287D84))) = *(struct mv3 *)((0xAF4 + ((R11 * 0xD78) + 0x8C287D84))); }
    *(float *)((((R11 * 0xD78) + 0x8C287D84) + 0xC90)) = F15;
    *(float *)((((R11 * 0xD78) + 0x8C287D84) + 0xB18)) = F15;
    lightOverrideAmbient(R11, 0x64);
    t108 = (int)(R11 + 0x1) < (int)R10;
    R11 = ((R11 + 0x1));
    if (t108) goto L_8C0A7246;
    goto L_8C0A72C0;
    L_8C0A72C0:;
    *(unsigned int *)0x8C287C60 = R14;
    *(unsigned int *)0x8C18D2B4 = R14;
    *(unsigned int *)0x8C343A50 = R14;
    *(unsigned int *)0x8C343A54 = R14;
    *(unsigned int *)0x8C343874 = R14;
    *(unsigned int *)0x8C38BA78 = R12;
    *(unsigned int *)0x8C38BA74 = R12;
    *(unsigned int *)0x8C38BA70 = R12;
    *(unsigned short *)0x8C343AAC = R14;
    *(unsigned int *)0x8C343AC8 = R14;
    *(unsigned int *)0x8C30196C = R14;
    *(unsigned int *)0x8C343AB8 = 0x64;
    *(unsigned int *)0x8C343ABC = 0x64;
    *(float *)0x8C343AC0 = 1.0f;
    *(float *)0x8C343AC4 = 1.0f;
    *(unsigned int *)0x8C185424 = R14;
    *(unsigned int *)0x8C343248 = R9;
    *(unsigned int *)0x8C343AB0 = R14;
    *(unsigned int *)0x8C343AB4 = R14;
    R14 = (0x8C20D150);
    R4 = (0x64);
    F4 = (1.0f);
    if (((*(int *)((R8 + 0x10))) != 2)) goto L_8C0A73BE;
    goto L_8C0A7318;
    L_8C0A7318:;
    goto L_8C0A73B0;
    L_8C0A73B0:;
    R1 = (0x8C287D5C);
    if (((*(int *)0x8C287D5C) == 0)) goto L_8C0A73C6;
    goto L_8C0A73B8;
    L_8C0A73B8:;
    if (((*(int *)((R1 + 0x0))) == 2)) goto L_8C0A73C6;
    goto L_8C0A73BE;
    L_8C0A73BE:;
    if (((*(int *)0x8C34384C) != 9)) goto L_8C0A73D2;
    goto L_8C0A73C6;
    L_8C0A73C6:;
    t122 = selRestart();
    *(unsigned int *)((R14 + 0x0)) = ((*(int *)((R14 + 0x0))) + 0x1);
    R0 = (t122);
    goto L_8C0A73DE;
    L_8C0A73DE:;
    return R0;
    L_8C0A73D2:;
    *(unsigned int *)((R14 + 0x0)) = R10;
    R0 = ((FUN_8c0eaf00(0x0, 0x0, 0x0, F4)));
    goto L_8C0A73DE;
    L_8C0A70DC:;
    R4 = (R14);
    R5 = ((((*(int *)(((int)stk + 16))) << 2) + 0x8C3439D8));
    goto L_8C0A70E6;
    L_8C0A70E6:;
    if (((*(int *)((R13 + (R4 << 2)))) == 0)) goto L_8C0A70FA;
    goto L_8C0A70F0;
    L_8C0A70F0:;
    *(unsigned int *)((R5 + 0x0)) = R4;
    *(unsigned int *)((R13 + (R4 << 2))) = R14;
    goto L_8C0A7100;
    L_8C0A7100:;
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
    goto L_8C0A7106;
    L_8C0A70FA:;
    t133 = (int)(R4 + 0x1) < (int)R11;
    R4 = ((R4 + 0x1));
    if (t133) goto L_8C0A70E6;
    goto L_8C0A7100;
    L_8C0A7008:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_8C0A7012;
    L_8C0A6FD4:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_8C0A6FDE;
}

int replaySnapshot(int a4, int a5)
{
    int t0;
    int t17;
    int t18;
    int t19;
    int t22;
    int t23;
    int t25;
    int t27;
    int t28;
    int t30;
    int t53;
    int t80;
    int t54;
    int t55;
    int t56;
    int t57;
    int t61;
    int t63;
    int t67;
    int t69;
    int t75;
    int t79;
    int t177;
    int t88;
    int t169;
    int t90;
    int t163;
    int t100;
    int t133;
    int t190;
    int t16;
    int t26;
    int t31;
    int t64;
    int t70;
    int t91;
    int t92;
    int t129;

    t0 = *(int *)0x8C287B3C;
    if ((t0 & 0x1) != 0) {
        if (((t0 & 2) != 0) && ((t0 & 1) != 0)) {
            *(unsigned int *)0x8C294650 = (*(int *)((((0x1 - (*(int *)0x8C287C20)) << 2) + 0x8C287C34)));
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFD);
        }
    } else {
        if ((t0 & 4) == 0) {
            if (((t0 & 2) != 0) && ((t0 & 1) != 0)) {
                *(unsigned int *)0x8C294650 = (*(int *)((((0x1 - (*(int *)0x8C287C20)) << 2) + 0x8C287C34)));
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFD);
            }
        } else {
            *(unsigned int *)0x8C287C20 = (*(int *)0x8C287C24);
            t17 = 0x8C287C24;
            t18 = 0x0;
            t19 = a5;
            for (;;) {
                if ((int)t18 >= (int)(*(int *)0x8C287ADC)) {
                    break;
                }
                t17 = 0x8C28B364;
                t19 = (t18 * 0xD78);
                t16 = 0x8C287D84;
                t22 = (((*(int *)0x8C287C20) * 0x35E0) + t17);
                t17 = 0x8C0F7CF0;
                t16 = (t16 + t19);
                t23 = (t22 + t19);
                t25 = t16;
                for (;;) { t26 = *(int *)t23; t23 = (t23 + 4); if ((unsigned int)(((t22 + t19) + 3448)) < (unsigned int)t23) break; *(unsigned int *)t25 = t26; t25 = (t25 + 4); }
                t18 = (t18 + 0x1);
            }
            t27 = *(int *)0x8C287C20;
            t28 = ((t27 * 0x8C) + 0x8C291FB0);
            t30 = 0x8C291F24;
            for (;;) { t31 = *(int *)t28; t28 = (t28 + 4); if ((unsigned int)((((t27 * 0x8C) + 0x8C291FB0) + 140)) < (unsigned int)t28) break; *(unsigned int *)t30 = t31; t30 = (t30 + 4); }
            *(unsigned int *)0x8C287D68 = (*(int *)0x8C287AF8);
            *(unsigned int *)0x8C287AF8 = (*(int *)((((*(int *)0x8C287C20) << 2) + 0x8C287D6C)));
            *(unsigned int *)0x8C287B2C = 0xFFFFFFFF;
            *(unsigned int *)0x8C294650 = (*(int *)((((*(int *)0x8C287C20) << 2) + 0x8C287C34)));
            *(unsigned int *)0x8C287B3C = ((((*(int *)0x8C287B3C) & 0xFFFFFFFB) | 0x1) | 0x8);
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFD);
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x800);
            *(unsigned int *)0x8C287C30 = (*(int *)0x8C287C1C);
            *(unsigned int *)0x8C287C1C = (*(int *)((((*(int *)0x8C287C20) << 2) + 0x8C287C28)));
            *(unsigned int *)0x8C287B44 = 0x2;
            *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x200000);
            *(float *)0x8C287C3C = 1.0f;
            *(float *)0x8C287C40 = 0.0399999991f;
            *(float *)0x8C287C44 = 0.5f;
            lineJudgeIdleAll();
        }
    }
    t53 = *(int *)0x8C287B3C;
    t80 = 0x70;
    if (((0x2 & t53) != 0) && ((0x1 & t53) == 0)) {
        t54 = 0x1;
        t55 = 0x2;
        t56 = 0x0;
        t57 = a5;
        for (;;) {
            if ((int)t56 >= (int)(*(int *)0x8C287ADC)) {
                break;
            }
            t54 = (*(int *)0x8C287C20);
            t55 = 0x8C28B364;
            t54 = (t54 * 0x35E0);
            t54 = (t54 + t55);
            t57 = (t56 * 0xD78);
            t54 = (t54 + t57);
            t61 = (0x8C287D84 + t57);
            t63 = t54;
            for (;;) { t64 = *(int *)t61; t61 = (t61 + 4); if ((unsigned int)(((0x8C287D84 + t57) + 3448)) < (unsigned int)t61) break; *(unsigned int *)t63 = t64; t63 = (t63 + 4); }
            t56 = (t56 + 0x1);
        }
        t67 = 0x8C291F24;
        t69 = (((*(int *)0x8C287C20) * 0x8C) + 0x8C291FB0);
        for (;;) { t70 = *(int *)t67; t67 = (t67 + 4); if ((unsigned int)((0x8C291F24 + 140)) < (unsigned int)t67) break; *(unsigned int *)t69 = t70; t69 = (t69 + 4); }
        *(unsigned int *)((((*(int *)0x8C287C20) << 2) + 0x8C287D6C)) = (*(int *)0x8C287AF8);
        *(unsigned int *)(((0x8C287C34 + ((*(int *)0x8C287C20) << 2)) + 0x0)) = (int)((nlRandom()) * 256.0f);
        t75 = *(int *)0x8C287C20;
        *(unsigned int *)0x8C294650 = (*(int *)(((t75 << 2) + 0x8C287C34)));
        *(unsigned int *)(((t75 << 2) + 0x8C287C28)) = (*(int *)0x8C287C1C);
        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFD);
        t79 = *(int *)0x8C287C20;
        *(unsigned int *)0x8C287C20 = (0x1 - t79);
        *(unsigned int *)0x8C287C24 = (0x1 - t79);
        t80 = 0x8C287C24;
    }
    t177 = t80;
    if ((*(int *)0x8C287C60) != 0) {
    } else {
        t88 = *(int *)0x8C287B3C;
        t169 = t88;
        if ((t88 & 8) == 0) {
        } else {
            t90 = playerHumanPressed((*(int *)0x8C287AF0));
            t163 = 0x8C287C1C;
            if ((t90 == 0) && (t91 = *(int *)0x8C287C1C, t92 = *(int *)0x8C287C30, t91 != t92)) {
            } else {
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFB);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFFE);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFFFF7);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFDFFFFF);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) & 0xFFFFF7FF);
                *(unsigned int *)0x8C291F78 = ((*(int *)0x8C291F78) & 0xFFFFFFFD);
                *(unsigned int *)0x8C287B2C = 0x1;
                *(unsigned int *)0x8C287B44 = 0x2;
                *(unsigned int *)0x8C287AF8 = (*(int *)0x8C287D68);
                t100 = 0x0;
                for (;;) {
                    *(unsigned int *)(((0x8C287B18 + t100) + 0x0)) = (*(int *)(((0x8C287B10 + t100) + 0x0)));
                    *(unsigned int *)(((0x8C287B08 + t100) + 0x0)) = (*(int *)(((0x8C287B00 + t100) + 0x0)));
                    t100 = (t100 + 0x4);
                    if ((unsigned int)t100 >= (unsigned int)0x8) {
                        break;
                    }
                }
                *(unsigned int *)0x8C287B24 = (*(int *)0x8C287B20);
                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x40000);
                matchCheckTiebreak(t100);
                if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
                    if (((int)((int)((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) % (int)0x6)) == 0) {
                        *(unsigned int *)0x8C287B80 = 0x3;
                    }
                }
                if ((*(int *)((((((*(int *)0x8C287AF0) & 0x1) << 2) + 0x8C287B00) + 0x0))) == (*(int *)0x8C287C64)) {
                    if (((*(int *)((0x8C287AE0 + ((*(int *)0x8C287AF0) << 2)))) == 1) && (t129 = *(int *)0x8C287D5C, t129 != 1)) {
                        if ((*(int *)0x8C287D5C) == 0) {
                            t133 = entryAnyAtRound5();
                            if (t133 == 0) {
                                strmBgmFadeOut(0x2, 0x0);
                                *(unsigned int *)0x8C287B80 = 0x5;
                            } else {
                                *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20);
                                *(unsigned int *)0x8C287B80 = 0x4;
                            }
                        } else {
                            strmBgmFadeOut(0x2, 0x0);
                            *(unsigned int *)0x8C287B80 = 0x5;
                        }
                    } else {
                        *(unsigned int *)0x8C287B3C = ((*(int *)0x8C287B3C) | 0x20);
                        *(unsigned int *)0x8C287B80 = 0x4;
                    }
                } else {
                    if ((*(int *)(((((0x1 & (*(int *)0x8C287AF0)) << 2) + 0x8C287B10) + 0x0))) == (*(int *)0x8C287C68)) {
                        *(unsigned int *)0x8C287B80 = 0x3;
                    }
                }
                matchExec();
                *(float *)0x8C287C40 = 0.0199999996f;
                t163 = 0x8C018F64;
            }
            t169 = t163;
        }
        t177 = t169;
    }
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)0x8C287C1C = ((*(int *)0x8C287C1C) + 0x1);
    }
    t190 = t177;
    if ((*(int *)0x8C287C1C) == 0x258) {
        *(unsigned int *)0x8C287C1C = 0x0;
        t190 = 0x0;
    }
    return t190;
}
