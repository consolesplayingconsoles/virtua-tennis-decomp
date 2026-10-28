/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int charaTexFree(int);
int cpuAimPointSet(int, int, float, float);
int entryCountJoined(void);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyCopyToTextureRom(int, int, int, int);
int kmyMemCopy(int, int, int);
int ndbIsValid(void);
int ndbLoadStart(void);
int nlRand(void);
int padDirAny(int);
int padDirRepeat(int, int);
int selCellClear(int);
int selModelSpawn(int, int);
int selSlot0FlagSet(void);
int set_event(int, int);
int sndSe05_04(void);
int sndSeCursor(void);
int syG2AicaFifoWaitEmpty(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2FifoWaitEmpty(void);
int selCursorInputB(int a4, int a5, int a6, int a7);
int selCursorInput(int a4, int a5);
int ndbGetTargets(int a4, int a5, int a6);
int cpuMeterInput(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int resultTallyStart(int a4, int a5, int a6, int a7);
int kmSetUserClipping(int a4, int a5, int a6, int a7);
int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9);
int _pd_peripheral_set_data(int a4, int a5, int a6);
int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7);
int FUN_8c0f8590(int a4, int a5, int a6, int a7);
int cpuDblIsMyBall(int a4);

int selCursorInputB(int a4, int a5, int a6, int a7)
{
    int t1;
    int t6;
    int t8;
    int t15;
    int t21;
    int t25;
    int t27;
    int t43;
    int t50;
    int t64;
    int t66;
    int t68;
    int t69;
    int t70;
    int t83;
    int t94;
    int t103;
    int t105;
    int t113;
    int t119;
    int t133;
    int t137;
    int t152;
    int t155;
    int t160;
    int t164;
    int t170;
    int t177;
    int t181;
    int t185;
    int t199;
    int t214;
    int t230;
    int t233;
    int t240;
    int t245;
    int t250;
    int t257;
    int stk[21];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    *(unsigned int *)(((int)stk + 8)) = R4;
    *(unsigned int *)(((int)stk + 24)) = R5;
    *(unsigned int *)(((int)stk + 28)) = R6;
    *(unsigned int *)(((int)stk + 20)) = R7;
    *(unsigned int *)(((int)stk + 32)) = 0x0;
    *(unsigned int *)(((int)stk + 12)) = 0x0;
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t1 = (entryCountJoined()) != 2;
    R10 = (0x0);
    R11 = (0x0);
    R8 = (0x0);
    R9 = (0x1);
    if (t1) goto L_8C0AA93A;
    *(unsigned int *)(((int)stk + 20)) = R11;
    L_8C0AA93A:;
    t6 = *(int *)(((int)stk + 28));
    *(unsigned int *)(((int)stk + 16)) = (t6 << 2);
    t8 = *(int *)(((t6 << 2) + 0x8C343BE0));
    R0 = (t8);
    R13 = (0x8C343B4C);
    R14 = ((((*(int *)(((int)stk + 24))) << 2) << 1));
    if ((t8 != 1)) goto L_8C0AA9B2;
    t15 = (padDirRepeat((*(int *)(((int)stk + 8))), 0x10)) == 0;
    R12 = (0x8C0300E0);
    R5 = (0x20);
    if (t15) goto L_8C0AA960;
    R10 = (R9);
    L_8C0AA960:;
    t21 = (padDirRepeat((*(int *)(((int)stk + 8))), R5)) == 0;
    R5 = (0x40);
    if (t21) goto L_8C0AA96C;
    *(unsigned int *)(((int)stk + 32)) = R9;
    L_8C0AA96C:;
    t25 = (padDirRepeat((*(int *)(((int)stk + 8))), R5)) == 0;
    if (t25) goto L_8C0AA976;
    *(unsigned int *)(((int)stk + 12)) = R9;
    L_8C0AA976:;
    t27 = padDirRepeat((*(int *)(((int)stk + 8))), 0x80);
    R0 = (t27);
    if ((t27 == 0)) goto L_8C0AA982;
    *(unsigned int *)(((int)stk + 4)) = R9;
    L_8C0AA982:;
    if ((R10 != 0)) goto L_8C0AA99C;
    if (((*(int *)(((int)stk + 32))) != 0)) goto L_8C0AA99C;
    if (((*(int *)(((int)stk + 12))) != 0)) goto L_8C0AA99C;
    if (((*(int *)(((int)stk + 4))) != 0)) goto L_8C0AA99C;
    R8 = (0x0);
    L_8C0AA99E:;
    if ((R8 == 0)) goto L_8C0AA9B2;
    *(unsigned int *)(((0x8C343B6C + R14) + 0x0)) = (*(int *)(((R14 + R13) + 0x0)));
    *(unsigned int *)(((0x8C343B6C + R14) + 0x4)) = (*(int *)(((R14 + R13) + 0x4)));
    L_8C0AA9B2:;
    R12 = (0x8C1853C0);
    if ((R10 == 0)) goto L_8C0AAA38;
    t43 = *(int *)(((R14 + R13) + 0x4));
    R0 = ((t43 + 0x1));
    R4 = (R11);
    R5 = ((R14 + R13));
    if (((int)(t43 + 0x1) < 0)) goto L_8C0AA9CA;
    R0 = ((R0 & 0x1));
    L_8C0AA9D4:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    R10 = ((R14 + R13));
    L_8C0AAA1C:;
    t50 = *(int *)((R10 + 0x4));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t50 << 2) << 1) + t50) << 2) + R12)))) != 0)) goto L_8C0AA9DC;
    L_8C0AAC20:;
    if ((R8 == 0)) goto L_8C0AAC90;
    R4 = ((0x8C343B6C + R14));
    R5 = ((R14 + R13));
    if (((*(int *)(((R14 + R13) + 0x0))) != (*(int *)(((0x8C343B6C + R14) + 0x0))))) goto L_8C0AAC3C;
    if (((*(int *)((R5 + 0x4))) == (*(int *)((R4 + 0x4))))) goto L_8C0AAC58;
    L_8C0AAC3C:;
    sndSeCursor();
    L_8C0AAC5E:;
    t64 = *(int *)(((0x8C343B6C + R14) + 0x4));
    *(unsigned int *)((((*(int *)(((0x8C343B6C + R14) + 0x0))) << 2) + (((((t64 << 2) << 1) + t64) << 2) + R12))) = R11;
    t66 = *(int *)(((R14 + R13) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R13) + 0x0))) << 2) + (((((t66 << 2) << 1) + t66) << 2) + R12))) = 0x2;
    L_8C0AAC90:;
    t68 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 4)) = (t68 << 2);
    t69 = *(int *)(((R14 + R13) + 0x4));
    t70 = *(int *)(((R14 + R13) + 0x0));
    *(unsigned int *)(((t68 << 2) + 0x8C343ACC)) = (((t69 << 2) << 1) + t70);
    *(unsigned int *)0x8C343248 = (((t69 << 2) << 1) + t70);
    R4 = ((R14 + R13));
    if (((*(int *)(((R14 + R13) + 0x0))) != 8)) goto L_8C0AACC0;
    if (((*(int *)((R4 + 0x4))) != 0)) goto L_8C0AACC0;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC)) = 0x10;
    L_8C0AACC0:;
    R4 = ((R14 + R13));
    if (((*(int *)(((R14 + R13) + 0x0))) != 8)) goto L_8C0AACD8;
    if (((*(int *)((R4 + 0x4))) != 1)) goto L_8C0AACD8;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC)) = 0x11;
    L_8C0AACD8:;
    t83 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 12)) = (t83 << 2);
    R10 = (0x8C343258);
    R8 = (((*(int *)(((int)stk + 28))) * 0x38));
    if ((((*(int *)(((*(int *)(((t83 << 2) + 0x8C29B898))) + 0x10))) & 5) == 0)) goto L_8C0AAD78;
    if (((*(int *)((0x8C1AFA64 + ((*(int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC))) << 2)))) != 2)) goto L_8C0AAD78;
    t94 = *(int *)(((R14 + R13) + 0x4));
    if (((*(int *)(((((*(int *)(((R14 + R13) + 0x0))) << 2) + (0x8C185330 + ((((t94 << 2) << 1) + t94) << 2))) + 0x0))) != 0)) goto L_8C0AAD4C;
    sndSe05_04();
    L_8C0AAD78:;
    if ((((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x8C29B898))) + 0x10))) & 2) != 0)) goto L_8C0AAD88;
    L_8C0AAED2:;
    t103 = *(int *)(((int)stk + 28));
    t105 = *(int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC));
    *(unsigned int *)((((R10 + 0xC) + R8) + 0x0)) = t105;
    *(unsigned int *)(((0x8C2889DC + (t103 * 0xD78)) + 0x0)) = t105;
    return (unsigned short)(*(short *)((((R10 + 0xC) + R8) + 0x14)));
    L_8C0AAD88:;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_8C0AADF6;
    if (((*(short *)((R8 + 0x8C343278))) != 0)) goto L_8C0AADF6;
    t113 = (padDirAny((*(int *)(((int)stk + 8))))) != 0;
    if (t113) goto L_8C0AADF6;
    *(unsigned int *)(((int)stk + 24)) = (*(int *)(((*(int *)(((int)stk + 12))) + 0x8C343B0C)));
    charaTexFree((*(int *)((((R10 + 0xC) + R8) + 0x0))));
    *(unsigned int *)((((R10 + 0xC) + R8) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC)) = 0xFFFFFFFF;
    *(unsigned int *)((((R10 + 0xC) + R8) + 0x28)) = R9;
    t119 = *(int *)(((R14 + R13) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R13) + 0x0))) << 2) + (((((t119 << 2) << 1) + t119) << 2) + R12))) = R11;
    *(unsigned int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C343878)) = R9;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8C343BE0)) = R11;
    *(unsigned int *)0x8C343AB4 = R11;
    R4 = ((R14 + R13));
    L_8C0AADF6:;
    if ((((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x8C29B898))) + 0x10))) & 2) == 0)) goto L_8C0AAED2;
    if (((*(int *)(((int)stk + 20))) != 1)) goto L_8C0AAED2;
    if (((*(short *)((R8 + 0x8C343278))) != 0)) goto L_8C0AAED2;
    t133 = padDirAny((*(int *)(((int)stk + 8))));
    R0 = (t133);
    if ((t133 != 0)) goto L_8C0AAED2;
    { struct mv4 { int w[4]; }; *(struct mv4 *)((((int)stk + 4) + 0x20)) = *(struct mv4 *)(0x8C110D4C); }
    t137 = *(int *)(((((int)stk + 4) + 0x20) + (*(int *)(((int)stk + 16)))));
    *(unsigned int *)(((int)stk + 20)) = (t137 << 2);
    *(unsigned int *)(((int)stk + 8)) = (t137 * 0x38);
    *(unsigned int *)(((t137 << 2) + 0x8C1855D0)) = (*(int *)((((t137 * 0x38) + (R10 + 0xC)) + 0x0)));
    charaTexFree((*(int *)((((R10 + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0))));
    selCellClear((*(int *)((((R10 + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0))));
    *(unsigned int *)((((R10 + 0xC) + (*(int *)(((int)stk + 8)))) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)((((R10 + 0xC) + (*(int *)(((int)stk + 8)))) + 0x28)) = R9;
    *(unsigned short *)((((R10 + 0xC) + (*(int *)(((int)stk + 8)))) + 0x14)) = R11;
    *(unsigned int *)(((*(int *)(((int)stk + 20))) + 0x8C343BE0)) = R11;
    charaTexFree((*(int *)((((R10 + 0xC) + R8) + 0x0))));
    *(unsigned int *)((((R10 + 0xC) + R8) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8C343ACC)) = 0xFFFFFFFF;
    *(unsigned int *)((((R10 + 0xC) + R8) + 0x28)) = R9;
    t152 = *(int *)(((R14 + R13) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R13) + 0x0))) << 2) + (((((t152 << 2) << 1) + t152) << 2) + R12))) = R11;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8C343BE0)) = R11;
    *(unsigned int *)0x8C343AB4 = R11;
    goto L_8C0AAED2;
    L_8C0AAD4C:;
    *(unsigned short *)((((R10 + 0xC) + R8) + 0x14)) = R9;
    t155 = *(int *)(((R14 + R13) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R13) + 0x0))) << 2) + (((((t155 << 2) << 1) + t155) << 2) + R12))) = 0x3;
    *(unsigned int *)(((*(int *)(((int)stk + 16))) + 0x8C343BE0)) = 0x2;
    R4 = ((R14 + R13));
    goto L_8C0AAD78;
    L_8C0AAC58:;
    sndSe05_04();
    goto L_8C0AAC5E;
    L_8C0AA9DC:;
    t160 = *(int *)((R10 + 0x4));
    R0 = ((t160 + 0x1));
    if (((int)(t160 + 0x1) < 0)) goto L_8C0AAA04;
    R0 = ((R0 & 0x1));
    L_8C0AAA0E:;
    t164 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R10 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t164) goto L_8C0AAA1C;
    goto L_8C0AAC20;
    L_8C0AAA04:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AAA0E;
    L_8C0AA9CA:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AA9D4;
    L_8C0AAA38:;
    if (((*(int *)(((int)stk + 32))) == 0)) goto L_8C0AAAA2;
    t170 = *(int *)(((R14 + R13) + 0x4));
    R0 = ((t170 + 0x1));
    R4 = (R11);
    R5 = ((R14 + R13));
    if (((int)(t170 + 0x1) < 0)) goto L_8C0AAA50;
    R0 = ((R0 & 0x1));
    L_8C0AAA5A:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    R10 = ((R14 + R13));
    L_8C0AAA86:;
    t177 = *(int *)((R10 + 0x4));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t177 << 2) << 1) + t177) << 2) + R12)))) != 0)) goto L_8C0AAA62;
    goto L_8C0AAC20;
    L_8C0AAA62:;
    t181 = *(int *)((R10 + 0x4));
    R0 = ((t181 + 0x1));
    if (((int)(t181 + 0x1) < 0)) goto L_8C0AAA6E;
    R0 = ((R0 & 0x1));
    L_8C0AAA78:;
    t185 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R10 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t185) goto L_8C0AAA86;
    goto L_8C0AAC20;
    L_8C0AAA6E:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AAA78;
    L_8C0AAA50:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AAA5A;
    L_8C0AAAA2:;
    R6 = (0x8C185414);
    R7 = (0x8C185418);
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C0AAB5E;
    if (((*(int *)(((R14 + R13) + 0x4))) != 0)) goto L_8C0AAB0E;
    *(unsigned int *)(((R14 + R13) + 0x0)) = ((int)((int)((*(int *)(((R14 + R13) + 0x0))) + 0x1) % (int)(*(int *)((R6 + 0x0)))));
    *(unsigned int *)(((int)stk + 4)) = R5;
    R10 = ((R14 + R13));
    L_8C0AAAF2:;
    t199 = *(int *)((R10 + 0x4));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t199 << 2) << 1) + t199) << 2) + R12)))) != 0)) goto L_8C0AAAD4;
    goto L_8C0AAC20;
    L_8C0AAAD4:;
    *(unsigned int *)((R10 + 0x0)) = ((int)((int)((*(int *)((R10 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
    if (((int)(R4 + 0x1) < (int)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - 1))) goto L_8C0AAAF2;
    goto L_8C0AAC20;
    L_8C0AAB0E:;
    *(unsigned int *)(((R14 + R13) + 0x0)) = ((int)((int)((*(int *)(((R14 + R13) + 0x0))) + 0x1) % (int)(*(int *)((R7 + 0x0)))));
    *(unsigned int *)(((int)stk + 4)) = (R5 + 0x4);
    R10 = ((R14 + R13));
    L_8C0AAB42:;
    t214 = *(int *)((R10 + 0x4));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t214 << 2) << 1) + t214) << 2) + R12)))) != 0)) goto L_8C0AAB28;
    goto L_8C0AAC20;
    L_8C0AAB28:;
    *(unsigned int *)((R10 + 0x0)) = ((int)((int)((*(int *)((R10 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 4))) + 0x0)))));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - 1))) goto L_8C0AAC20;
    goto L_8C0AAB42;
    L_8C0AAB5E:;
    if (((*(int *)(((int)stk + 12))) == 0)) goto L_8C0AAC20;
    if (((*(int *)(((R14 + R13) + 0x4))) != 0)) goto L_8C0AABCA;
    *(unsigned int *)(((int)stk + 4)) = (R14 + R13);
    t230 = *(int *)((R6 + 0x0));
    *(unsigned int *)(((R14 + R13) + 0x0)) = ((int)((int)(((*(int *)(((R14 + R13) + 0x0))) + t230) - 1) % (int)t230));
    *(unsigned int *)(((int)stk + 4)) = R5;
    R10 = ((R14 + R13));
    L_8C0AABAE:;
    t233 = *(int *)((R10 + 0x4));
    R0 = ((((((t233 << 2) << 1) + t233) << 2) + R12));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t233 << 2) << 1) + t233) << 2) + R12)))) != 0)) goto L_8C0AAB90;
    goto L_8C0AAC20;
    L_8C0AAB90:;
    t240 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    *(unsigned int *)((R10 + 0x0)) = ((int)((int)(((*(int *)((R10 + 0x0))) + t240) - 1) % (int)t240));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - 1))) goto L_8C0AAC20;
    goto L_8C0AABAE;
    L_8C0AABCA:;
    t245 = *(int *)((R7 + 0x0));
    *(unsigned int *)(((int)stk + 4)) = t245;
    *(unsigned int *)(((R14 + R13) + 0x0)) = ((int)((int)((t245 + (*(int *)(((R14 + R13) + 0x0)))) - 1) % (int)(*(int *)(((int)stk + 4)))));
    *(unsigned int *)(((int)stk + 4)) = (R5 + 0x4);
    R10 = ((R14 + R13));
    L_8C0AAC08:;
    t250 = *(int *)((R10 + 0x4));
    R0 = ((((((t250 << 2) << 1) + t250) << 2) + R12));
    if (((*(int *)((((*(int *)((R10 + 0x0))) << 2) + (((((t250 << 2) << 1) + t250) << 2) + R12)))) != 0)) goto L_8C0AABEA;
    goto L_8C0AAC20;
    L_8C0AABEA:;
    t257 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
    *(unsigned int *)((R10 + 0x0)) = ((int)((int)(((*(int *)((R10 + 0x0))) + t257) - 1) % (int)t257));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 4))) + 0x0))) - 1))) goto L_8C0AAC20;
    goto L_8C0AAC08;
    L_8C0AA99C:;
    R8 = (0x1);
    goto L_8C0AA99E;
}

int selCursorInput(int a4, int a5)
{
    int t11;
    int t18;
    int t24;
    int t29;
    int t33;
    int t50;
    int t57;
    int t71;
    int t73;
    int t75;
    int t76;
    int t77;
    int t98;
    int t103;
    int t106;
    int t112;
    int t115;
    int t130;
    int t133;
    int t137;
    int t143;
    int t150;
    int t154;
    int t158;
    int t172;
    int t187;
    int t203;
    int t206;
    int t213;
    int t218;
    int t222;
    int t229;
    int stk[14];

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
    int T_;
    R4 = a4;
    R5 = a5;
    *(unsigned int *)(((int)stk + 12)) = R5;
    *(unsigned int *)(((int)stk + 8)) = 0x0;
    *(unsigned int *)(((int)stk + 16)) = 0x0;
    *(unsigned int *)(((int)stk + 20)) = 0x0;
    R10 = (0x0);
    R11 = (R4);
    R12 = (0x8C343B4C);
    R14 = ((((*(int *)(((int)stk + 12))) << 2) << 1));
    R6 = (0x0);
    R8 = (0x1);
    R9 = (0x0);
    if (((*(int *)0x8C185424) != 0)) goto L_8C0AA3C6;
    t11 = (padDirRepeat(R11, 0x10)) != 0;
    R13 = (0x8C0300E0);
    R5 = (0x20);
    if (t11) goto L_8C0AA348;
    if ((((*(int *)(((*(int *)((0x8C29B898 + (R11 << 2)))) + 0x10))) & 16) == 0)) goto L_8C0AA34A;
    L_8C0AA348:;
    *(unsigned int *)(((int)stk + 8)) = R8;
    L_8C0AA34A:;
    t18 = (padDirRepeat(R11, R5)) != 0;
    R5 = (0x40);
    if (t18) goto L_8C0AA362;
    if ((((*(int *)(((*(int *)((0x8C29B898 + (R11 << 2)))) + 0x10))) & 32) == 0)) goto L_8C0AA364;
    L_8C0AA362:;
    *(unsigned int *)(((int)stk + 16)) = R8;
    L_8C0AA364:;
    t24 = (padDirRepeat(R11, R5)) != 0;
    if (t24) goto L_8C0AA37A;
    if ((((*(int *)(((*(int *)((0x8C29B898 + (R11 << 2)))) + 0x10))) & 64) == 0)) goto L_8C0AA37C;
    L_8C0AA37A:;
    R9 = (R8);
    L_8C0AA37C:;
    t29 = padDirRepeat(R11, 0x80);
    R0 = (t29);
    if ((t29 != 0)) goto L_8C0AA394;
    t33 = *(int *)(((*(int *)((0x8C29B898 + (R11 << 2)))) + 0x10));
    R0 = (t33);
    if (((t33 & 128) == 0)) goto L_8C0AA396;
    L_8C0AA394:;
    *(unsigned int *)(((int)stk + 20)) = R8;
    L_8C0AA396:;
    if (((*(int *)(((int)stk + 8))) != 0)) goto L_8C0AA3B0;
    if (((*(int *)(((int)stk + 16))) != 0)) goto L_8C0AA3B0;
    if ((R9 != 0)) goto L_8C0AA3B0;
    if (((*(int *)(((int)stk + 20))) != 0)) goto L_8C0AA3B0;
    R6 = (0x0);
    L_8C0AA3B2:;
    if ((R6 == 0)) goto L_8C0AA3C6;
    *(unsigned int *)(((0x8C343B6C + R14) + 0x0)) = (*(int *)(((R14 + R12) + 0x0)));
    *(unsigned int *)(((0x8C343B6C + R14) + 0x4)) = (*(int *)(((R14 + R12) + 0x4)));
    L_8C0AA3C6:;
    R13 = (0x8C1853C0);
    if (((*(int *)(((int)stk + 8))) == 0)) goto L_8C0AA44E;
    t50 = *(int *)(((R14 + R12) + 0x4));
    R0 = ((t50 + 0x1));
    R4 = (R10);
    R5 = ((R14 + R12));
    if (((int)(t50 + 0x1) < 0)) goto L_8C0AA3FC;
    R0 = ((R0 & 0x1));
    L_8C0AA406:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    R9 = ((R14 + R12));
    L_8C0AA432:;
    t57 = *(int *)((R9 + 0x4));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t57 << 2) << 1) + t57) << 2) + R13)))) != 0)) goto L_8C0AA40E;
    L_8C0AA64A:;
    if ((R6 == 0)) goto L_8C0AA6A8;
    R4 = ((R14 + R12));
    R5 = ((0x8C343B6C + R14));
    if (((*(int *)(((R14 + R12) + 0x0))) != (*(int *)(((0x8C343B6C + R14) + 0x0))))) goto L_8C0AA666;
    if (((*(int *)((R4 + 0x4))) == (*(int *)((R5 + 0x4))))) goto L_8C0AA670;
    L_8C0AA666:;
    sndSeCursor();
    L_8C0AA676:;
    t71 = *(int *)(((0x8C343B6C + R14) + 0x4));
    *(unsigned int *)((((*(int *)(((0x8C343B6C + R14) + 0x0))) << 2) + (((((t71 << 2) << 1) + t71) << 2) + R13))) = R10;
    t73 = *(int *)(((R14 + R12) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R12) + 0x0))) << 2) + (((((t73 << 2) << 1) + t73) << 2) + R13))) = 0x2;
    L_8C0AA6A8:;
    t75 = *(int *)(((int)stk + 12));
    *(unsigned int *)(((int)stk + 8)) = (t75 << 2);
    t76 = *(int *)(((R14 + R12) + 0x4));
    t77 = *(int *)(((R14 + R12) + 0x0));
    *(unsigned int *)(((t75 << 2) + 0x8C343ACC)) = (((t76 << 2) << 1) + t77);
    *(unsigned int *)0x8C343248 = (((t76 << 2) << 1) + t77);
    R4 = ((R14 + R12));
    if (((*(int *)(((R14 + R12) + 0x0))) != 8)) goto L_8C0AA6D8;
    if (((*(int *)((R4 + 0x4))) != 0)) goto L_8C0AA6D8;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8C343ACC)) = 0x10;
    L_8C0AA6D8:;
    R4 = ((R14 + R12));
    if (((*(int *)(((R14 + R12) + 0x0))) != 8)) goto L_8C0AA6F0;
    if (((*(int *)((R4 + 0x4))) != 1)) goto L_8C0AA6F0;
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x8C343ACC)) = 0x11;
    L_8C0AA6F0:;
    *(unsigned int *)(((int)stk + 12)) = (R11 << 2);
    R9 = (0x8C343258);
    if ((((*(int *)(((*(int *)(((R11 << 2) + 0x8C29B898))) + 0x10))) & 5) == 0)) goto L_8C0AA7A0;
    if (((*(int *)((0x8C1AFA64 + ((*(int *)(((*(int *)(((int)stk + 8))) + 0x8C343ACC))) << 2)))) != 2)) goto L_8C0AA7A0;
    t98 = *(int *)(((R14 + R12) + 0x4));
    if (((*(int *)(((((*(int *)(((R14 + R12) + 0x0))) << 2) + (0x8C185330 + ((((t98 << 2) << 1) + t98) << 2))) + 0x0))) != 0)) goto L_8C0AA764;
    sndSe05_04();
    L_8C0AA7A0:;
    t103 = selSlot0FlagSet();
    *(int *)((int)stk + 4) = (0x8C2889DC + (((-t103) + 0x1) * 0xD78));
    t106 = *(int *)(((0x8C343ACC + (*(int *)(((int)stk + 8)))) + 0x0));
    *(unsigned int *)((((((-(selSlot0FlagSet())) + 0x1) * 0x38) + (R9 + 0xC)) + 0x0)) = t106;
    *(unsigned int *)(((0x8C2889DC + (((-t103) + 0x1) * 0xD78)) + 0x0)) = t106;
    *(unsigned int *)0x8C343248 = t106;
    if ((((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x8C29B898))) + 0x10))) & 2) == 0)) goto L_8C0AA8A0;
    t112 = (padDirAny(R11)) != 0;
    if (t112) goto L_8C0AA8A0;
    *(unsigned int *)(((((*(int *)((((0x56C + R9) + (*(int *)(((int)stk + 12)))) + 0x0))) * 0x38) + (R9 + 0xC)) + 0x30)) = 0xFFFFFFFF;
    t115 = *(int *)(((int)stk + 12));
    *(unsigned short *)(((((*(int *)((((0x56C + R9) + t115) + 0x0))) * 0x38) + (R9 + 0xC)) + 0x14)) = R10;
    *(unsigned int *)(((((*(int *)((((0x56C + R9) + t115) + 0x0))) * 0x38) + (R9 + 0xC)) + 0x28)) = R8;
    selModelSpawn((*(int *)((((0x56C + R9) + t115) + 0x0))), 0x0);
    *(unsigned int *)((t115 + 0x8C343878)) = 0x0;
    *(unsigned int *)((t115 + 0x8C343898)) = 0x0;
    *(unsigned short *)((R9 + 0x8)) = ((*(short *)((R9 + 0x8))) | (*(short *)(((R11 << 1) + 0x8C185298))));
    *(unsigned int *)0x8C343AB4 = 0x0;
    *(unsigned int *)0x8C343AB0 = 0x0;
    selCellClear((*(int *)0x8C343248));
    *(unsigned int *)((((((-(selSlot0FlagSet())) + 0x1) * 0x38) + (R9 + 0xC)) + 0x28)) = R8;
    *(unsigned int *)((((((-(selSlot0FlagSet())) + 0x1) * 0x38) + (R9 + 0xC)) + 0x0)) = 0xFFFFFFFF;
    *(unsigned int *)0x8C343248 = 0xFFFFFFFF;
    R14 = (0xFFFFFFFF);
    L_8C0AA8A0:;
    return (unsigned short)(*(short *)((((((-(selSlot0FlagSet())) + 0x1) * 0x38) + (R9 + 0xC)) + 0x14)));
    L_8C0AA764:;
    *(unsigned short *)(((0x14 + ((((-(selSlot0FlagSet())) + 0x1) * 0x38) + (R9 + 0xC))) + 0x0)) = R8;
    t130 = *(int *)(((R14 + R12) + 0x4));
    *(unsigned int *)((((*(int *)(((R14 + R12) + 0x0))) << 2) + (((((t130 << 2) << 1) + t130) << 2) + R13))) = 0x3;
    *(unsigned int *)0x8C185424 = 0x1;
    goto L_8C0AA7A0;
    L_8C0AA670:;
    sndSe05_04();
    goto L_8C0AA676;
    L_8C0AA40E:;
    t133 = *(int *)((R9 + 0x4));
    R0 = ((t133 + 0x1));
    if (((int)(t133 + 0x1) < 0)) goto L_8C0AA41A;
    R0 = ((R0 & 0x1));
    L_8C0AA424:;
    t137 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R9 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t137) goto L_8C0AA432;
    goto L_8C0AA64A;
    L_8C0AA41A:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AA424;
    L_8C0AA3FC:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AA406;
    L_8C0AA44E:;
    if (((*(int *)(((int)stk + 16))) == 0)) goto L_8C0AA4B8;
    t143 = *(int *)(((R14 + R12) + 0x4));
    R0 = ((t143 + 0x1));
    R4 = (R10);
    R5 = ((R14 + R12));
    if (((int)(t143 + 0x1) < 0)) goto L_8C0AA466;
    R0 = ((R0 & 0x1));
    L_8C0AA470:;
    *(unsigned int *)((R5 + 0x4)) = R0;
    R9 = ((R14 + R12));
    L_8C0AA49C:;
    t150 = *(int *)((R9 + 0x4));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t150 << 2) << 1) + t150) << 2) + R13)))) != 0)) goto L_8C0AA478;
    goto L_8C0AA64A;
    L_8C0AA478:;
    t154 = *(int *)((R9 + 0x4));
    R0 = ((t154 + 0x1));
    if (((int)(t154 + 0x1) < 0)) goto L_8C0AA484;
    R0 = ((R0 & 0x1));
    L_8C0AA48E:;
    t158 = (int)(R4 + 0x1) < (int)0x1;
    *(unsigned int *)((R9 + 0x4)) = R0;
    R4 = ((R4 + 0x1));
    if (t158) goto L_8C0AA49C;
    goto L_8C0AA64A;
    L_8C0AA484:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AA48E;
    L_8C0AA466:;
    R0 = (((~(((~R0) + 0x1) & 0x1)) + 0x1));
    goto L_8C0AA470;
    L_8C0AA4B8:;
    *(unsigned int *)(((int)stk + 8)) = 0x8C185414;
    R7 = (0x8C185418);
    if (((*(int *)(((int)stk + 20))) == 0)) goto L_8C0AA57C;
    if (((*(int *)(((R14 + R12) + 0x4))) != 0)) goto L_8C0AA528;
    *(unsigned int *)(((R14 + R12) + 0x0)) = ((int)((int)((*(int *)(((R14 + R12) + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
    *(unsigned int *)(((int)stk + 8)) = R5;
    R9 = ((R14 + R12));
    L_8C0AA50C:;
    t172 = *(int *)((R9 + 0x4));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t172 << 2) << 1) + t172) << 2) + R13)))) != 0)) goto L_8C0AA4EE;
    goto L_8C0AA64A;
    L_8C0AA4EE:;
    *(unsigned int *)((R9 + 0x0)) = ((int)((int)((*(int *)((R9 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
    if (((int)(R4 + 0x1) < (int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - 1))) goto L_8C0AA50C;
    goto L_8C0AA64A;
    L_8C0AA528:;
    *(unsigned int *)(((int)stk + 8)) = (R14 + R12);
    *(unsigned int *)(((R14 + R12) + 0x0)) = ((int)((int)((*(int *)(((R14 + R12) + 0x0))) + 0x1) % (int)(*(int *)((R7 + 0x0)))));
    *(unsigned int *)(((int)stk + 8)) = (R5 + 0x4);
    R9 = ((R14 + R12));
    L_8C0AA560:;
    t187 = *(int *)((R9 + 0x4));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t187 << 2) << 1) + t187) << 2) + R13)))) != 0)) goto L_8C0AA546;
    goto L_8C0AA64A;
    L_8C0AA546:;
    *(unsigned int *)((R9 + 0x0)) = ((int)((int)((*(int *)((R9 + 0x0))) + 0x1) % (int)(*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - 1))) goto L_8C0AA64A;
    goto L_8C0AA560;
    L_8C0AA57C:;
    if ((R9 == 0)) goto L_8C0AA64A;
    if (((*(int *)(((R14 + R12) + 0x4))) != 0)) goto L_8C0AA5E8;
    *(unsigned int *)(((int)stk + 16)) = (R14 + R12);
    t203 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    *(unsigned int *)(((R14 + R12) + 0x0)) = ((int)((int)(((*(int *)(((R14 + R12) + 0x0))) + t203) - 1) % (int)t203));
    *(unsigned int *)(((int)stk + 8)) = R5;
    R9 = ((R14 + R12));
    L_8C0AA5CC:;
    t206 = *(int *)((R9 + 0x4));
    R0 = ((((((t206 << 2) << 1) + t206) << 2) + R13));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t206 << 2) << 1) + t206) << 2) + R13)))) != 0)) goto L_8C0AA5AE;
    goto L_8C0AA64A;
    L_8C0AA5AE:;
    t213 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    *(unsigned int *)((R9 + 0x0)) = ((int)((int)(((*(int *)((R9 + 0x0))) + t213) - 1) % (int)t213));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - 1))) goto L_8C0AA64A;
    goto L_8C0AA5CC;
    L_8C0AA5E8:;
    *(unsigned int *)(((int)stk + 16)) = (R14 + R12);
    t218 = *(int *)((R7 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t218;
    *(unsigned int *)(((R14 + R12) + 0x0)) = ((int)((int)(((*(int *)(((R14 + R12) + 0x0))) + t218) - 1) % (int)t218));
    *(unsigned int *)(((int)stk + 8)) = (R5 + 0x4);
    R9 = ((R14 + R12));
    L_8C0AA632:;
    t222 = *(int *)((R9 + 0x4));
    R0 = ((((((t222 << 2) << 1) + t222) << 2) + R13));
    if (((*(int *)((((*(int *)((R9 + 0x0))) << 2) + (((((t222 << 2) << 1) + t222) << 2) + R13)))) != 0)) goto L_8C0AA614;
    goto L_8C0AA64A;
    L_8C0AA614:;
    t229 = *(int *)(((*(int *)(((int)stk + 8))) + 0x0));
    *(unsigned int *)((R9 + 0x0)) = ((int)((int)(((*(int *)((R9 + 0x0))) + t229) - 1) % (int)t229));
    if (((int)(R4 + 0x1) >= (int)((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) - 1))) goto L_8C0AA64A;
    goto L_8C0AA632;
    L_8C0AA3B0:;
    R6 = (0x1);
    goto L_8C0AA3B2;
}

int ndbGetTargets(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t15;
    int t3;
    int t11;
    float u5;
    int t6;
    int t7;
    float u22;
    float u23;
    int t44;
    int t45;
    float u26;
    float u27;
    int t35;
    float u30;
    float u31;
    int t33;
    float u39;
    int t42;
    int t40;
    float u49;
    float u50;
    int t66;
    float u53;
    float u54;
    int t62;
    float u57;
    float u58;
    int t60;
    float u70;
    float u71;
    int t111;
    float u114;
    float u74;
    float u75;
    float u79;
    int t82;
    int t80;
    float u84;
    float u85;
    float u89;
    int t92;
    int t90;
    float u94;
    int t97;
    int t95;
    float u117;
    float u118;
    int t134;
    float u121;
    float u122;
    int t130;
    float u125;
    float u126;
    int t128;
    float u138;
    float u139;
    int t180;
    float u181;
    float u182;
    float u183;
    float u142;
    float u143;
    float u147;
    int t150;
    int t148;
    float u152;
    float u153;
    float u157;
    int t160;
    int t158;
    float u162;
    int t165;
    int t163;
    int t186;
    int t187;
    int t189;
    int t190;
    int t191;
    int t192;
    int t193;
    int t194;
    int t195;
    int t196;
    int t197;
    int t198;
    int t199;
    int t200;
    float u201;
    float u202;
    float u203;
    float u204;
    float u205;
    float u206;
    float u207;
    int t213;
    int t215;
    int t14;
    int t105;
    float u107;
    int t100;
    int t173;
    float u174;
    float u175;
    int t168;
    float u169;
    int t217;
    int t220;
    int t221;
    int t222;
    int t223;
    float u224;
    float u225;
    float u226;
    float u227;
    float u228;
    float u229;
    float u230;
    int stk[17];

    *(unsigned int *)(((int)stk + 8)) = a6;
    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xB5C));
    *(unsigned int *)(((int)stk + 16)) = a5;
    t15 = a5;
    if ((*(int *)0x8C421F60) == 0) {
        t3 = ndbIsValid();
        t11 = a5;
        if (t3 == 0) {
            ndbLoadStart();
            u5 = *(float *)((a4 + 0xB00));
            *(float *)(((int)stk + 4)) = (u5 * 118.849998f);
            t6 = nlRand();
            t7 = ((~(((~t6) + 0x1) & 0x1)) + 0x1);
            if ((int)t6 >= 0) {
                t7 = (t6 & 0x1);
            }
            cpuAimPointSet(a5, 0x1, ((float)((t7 << 1) - 1) * 41.1500015f), (u5 * 118.849998f));
            t11 = (a5 + 0x1);
        }
        t15 = t11;
    } else {
        t14 = 0x160;
    }
    u22 = *(float *)((a4 + 0xB9C));
    u23 = (-u22);
    if (!(0.0f > u22)) {
        u23 = u22;
    }
    t44 = 0x1;
    t45 = 0x0;
    if (10.0f > u23) {
    } else {
        u26 = *(float *)((a4 + 0xB9C));
        u27 = (-u26);
        if (!(0.0f > u26)) {
            u27 = u26;
        }
        t35 = 0x1;
        if (25.0f > u27) {
        } else {
            u30 = *(float *)((a4 + 0xB9C));
            u31 = (-u30);
            if (!(0.0f > u30)) {
                u31 = u30;
            }
            t33 = 0x3;
            if (40.0f > u31) {
                t33 = 0x2;
            }
            t35 = t33;
        }
        u39 = *(float *)((a4 + 0xB9C));
        t42 = 0x1;
        if (u39 > 0.0f) {
        } else {
            t40 = 0x0;
            if (0.0f > u39) {
                t40 = 0xFFFFFFFF;
            }
            t42 = t40;
        }
        t44 = t42;
        t45 = t35;
    }
    u49 = *(float *)((a4 + 0xAF0));
    u50 = (-u49);
    if (!(0.0f > u49)) {
        u50 = u49;
    }
    t66 = 0x0;
    if (25.0f > u50) {
    } else {
        u53 = *(float *)((a4 + 0xAF0));
        u54 = (-u53);
        if (!(0.0f > u53)) {
            u54 = u53;
        }
        t62 = 0x1;
        if (50.0f > u54) {
        } else {
            u57 = *(float *)((a4 + 0xAF0));
            u58 = (-u57);
            if (!(0.0f > u57)) {
                u58 = u57;
            }
            t60 = 0x3;
            if (90.0f > u58) {
                t60 = 0x2;
            }
            t62 = t60;
        }
        t66 = t62;
    }
    u70 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
    u71 = (-u70);
    if (!(0.0f > u70)) {
        u71 = u70;
    }
    t111 = 0x0;
    u114 = u70;
    if (10.0f > u71) {
    } else {
        u74 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
        u75 = (-u74);
        if (!(0.0f > u74)) {
            u75 = u74;
        }
        if (25.0f > u75) {
            u79 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t82 = 0x1;
            if (u79 > 0.0f) {
            } else {
                t80 = 0x0;
                if (0.0f > u79) {
                    t80 = 0xFFFFFFFF;
                }
                t82 = t80;
            }
            t105 = (t44 * t82);
            u107 = u74;
        } else {
            u84 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
            u85 = (-u84);
            if (!(0.0f > u84)) {
                u85 = u84;
            }
            if (40.0f > u85) {
                u89 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                t92 = 0x1;
                if (u89 > 0.0f) {
                } else {
                    t90 = 0x0;
                    if (0.0f > u89) {
                        t90 = 0xFFFFFFFF;
                    }
                    t92 = t90;
                }
                t100 = ((t44 * t92) << 1);
            } else {
                u94 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAE8));
                t97 = 0x1;
                if (u94 > 0.0f) {
                } else {
                    t95 = 0x0;
                    if (0.0f > u94) {
                        t95 = 0xFFFFFFFF;
                    }
                    t97 = t95;
                }
                t100 = (((t44 * t97) << 1) + (t44 * t97));
            }
            t105 = t100;
            u107 = u84;
        }
        t111 = t105;
        u114 = u107;
    }
    u117 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
    u118 = (-u117);
    if (!(0.0f > u117)) {
        u118 = u117;
    }
    t134 = 0x0;
    if (25.0f > u118) {
    } else {
        u121 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
        u122 = (-u121);
        if (!(0.0f > u121)) {
            u122 = u121;
        }
        t130 = 0x1;
        if (50.0f > u122) {
        } else {
            u125 = *(float *)(((((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84) + 0xAF0));
            u126 = (-u125);
            if (!(0.0f > u125)) {
                u126 = u125;
            }
            t128 = 0x3;
            if (90.0f > u126) {
                t128 = 0x2;
            }
            t130 = t128;
        }
        t134 = t130;
    }
    u138 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u139 = (-u138);
    if (!(0.0f > u138)) {
        u139 = u138;
    }
    t180 = 0x0;
    u181 = 0.200000003f;
    u182 = u139;
    u183 = u138;
    if (0.200000003f > u139) {
    } else {
        u142 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        u143 = (-u142);
        if (!(0.0f > u142)) {
            u143 = u142;
        }
        if (0.5f > u143) {
            u147 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            t150 = 0x1;
            if (u147 > 0.0f) {
            } else {
                t148 = 0x0;
                if (0.0f > u147) {
                    t148 = 0xFFFFFFFF;
                }
                t150 = t148;
            }
            t173 = (t44 * t150);
            u174 = 0.5f;
            u175 = u147;
        } else {
            u152 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u153 = (-u152);
            if (!(0.0f > u152)) {
                u153 = u152;
            }
            if (0.800000012f > u153) {
                u157 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                t160 = 0x1;
                if (u157 > 0.0f) {
                } else {
                    t158 = 0x0;
                    if (0.0f > u157) {
                        t158 = 0xFFFFFFFF;
                    }
                    t160 = t158;
                }
                t168 = ((t44 * t160) << 1);
                u169 = u157;
            } else {
                u162 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
                t165 = 0x1;
                if (u162 > 0.0f) {
                } else {
                    t163 = 0x0;
                    if (0.0f > u162) {
                        t163 = 0xFFFFFFFF;
                    }
                    t165 = t163;
                }
                t168 = (((t44 * t165) << 1) + (t44 * t165));
                u169 = u162;
            }
            t173 = t168;
            u174 = 0.800000012f;
            u175 = u169;
        }
        t180 = t173;
        u181 = u174;
        u182 = 0.0f;
        u183 = u175;
    }
    t186 = *(int *)(((int)stk + 8));
    t187 = *(int *)((((t186 << 2) + 0x8C1815A4) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = (t187 + 0x8CA80000);
    t189 = *(short *)(((((((((0x0 | ((t45 << 8) << 2)) | (t66 << 8)) | ((((t111 + 0x3) << 2) << 2) << 1)) | ((t134 << 2) << 1)) | (t180 + 0x3)) << 1) + (t187 + 0x8CA80000)) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = ((unsigned short)(*(short *)(((((((((0x0 | ((t45 << 8) << 2)) | (t66 << 8)) | ((((t111 + 0x3) << 2) << 2) << 1)) | ((t134 << 2) << 1)) | (t180 + 0x3)) << 1) + (t187 + 0x8CA80000)) + 0x2))) - (unsigned short)t189);
    t190 = *(int *)((((t186 << 2) + 0x8C1815A4) + 0x28));
    *(unsigned int *)(((int)stk + 12)) = (0x8CA80000 + t190);
    t191 = 0x8C081C74;
    t192 = t14;
    t193 = t190;
    t194 = (((((0x0 | ((t45 << 8) << 2)) | (t66 << 8)) | ((((t111 + 0x3) << 2) << 2) << 1)) | ((t134 << 2) << 1)) | (t180 + 0x3));
    t195 = ((t186 << 2) + 0x8C1815A4);
    t196 = (((((((0x0 | ((t45 << 8) << 2)) | (t66 << 8)) | ((((t111 + 0x3) << 2) << 2) << 1)) | ((t134 << 2) << 1)) | (t180 + 0x3)) << 1) + (t187 + 0x8CA80000));
    t197 = (0x8CA80000 + t190);
    t198 = (unsigned short)t189;
    t199 = t15;
    t200 = (((0x1 & (t0 + 0x1)) * 0xD78) + 0x8C287D84);
    u201 = u181;
    u202 = u182;
    u203 = u183;
    u204 = u117;
    u205 = 90.0f;
    u206 = 50.0f;
    u207 = u114;
    for (;;) {
        if ((*(int *)(((int)stk + 8))) == 0) {
            break;
        }
        t191 = (*(int *)(((int)stk + 12)));
        t194 = (*(signed char *)((t198 + t191)));
        t200 = (unsigned char)t194;
        t194 = t200;
        t194 = (t194 & 0xF);
        if (t194 != 0) {
            t193 = 0xFFFFFFFC;
            t191 = t200;
            t191 = (((int)t193 >= 0) ? (t191 << (t193 & 31)) : ((-(int)t193 & 31) ? ((int)t191 >> (-(int)t193 & 31)) : ((int)t191 >> 31)));
            t193 = t200;
            t191 = (t191 & 0x7);
            t195 = t200;
            t193 = (t193 & 0xF);
            t213 = t191;
            t191 = 0xB00;
            t193 = (t193 - 8);
            t194 = t199;
            u202 = (float)t213;
            u204 = (*(float *)((a4 + t191)));
            t215 = t193;
            t193 = 0xFFFFFFF9;
            t195 = (((int)t193 >= 0) ? (t195 << (t193 & 31)) : ((-(int)t193 & 31) ? ((int)t195 >> (-(int)t193 & 31)) : ((int)t195 >> 31)));
            t195 = (t195 & 0x1);
            t195 = (t195 << 1);
            u202 = (u202 * 108.849998f);
            t195 = (t195 + 0x1);
            u202 = (u202 / 7.0f);
            u202 = (u202 + 10.0f);
            u204 = (u204 * u202);
            u202 = (float)t215;
            u201 = (float)t44;
            u202 = (u202 * u201);
            u203 = u202;
            u203 = (u203 * 5.87857151f);
            t199 = (t199 + 0x1);
            t191 = (cpuAimPointSet(t194, t195, u203, u204));
        } else {
            t217 = t192;
            t220 = t194;
            t221 = t195;
            t222 = t196;
            t223 = t197;
            u224 = u201;
            u225 = u202;
            u226 = u203;
            u227 = u204;
            u228 = u205;
            u229 = u206;
            u230 = u207;
        }
        u201 = u224;
        u202 = u225;
        u203 = u226;
        u204 = u227;
        u205 = u228;
        u206 = u229;
        u207 = u230;
        t192 = t217;
        t193 = 0x5F;
        t194 = t220;
        t195 = t221;
        t196 = t222;
        t197 = t223;
        if ((int)t199 <= (int)t193) {
            t193 = (*(int *)(((int)stk + 8)));
            t198 = (t198 + 0x1);
            t193 = (t193 - 1);
            *(unsigned int *)(((int)stk + 8)) = t193;
            continue;
        }
        break;
    }
    return (t199 - (*(int *)(((int)stk + 16))));
}

int cpuMeterInput(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int t0;
    int t171;
    int t2;
    int t3;
    int t157;
    int t5;
    float u10;
    int t12;
    int t16;
    int t18;
    int t21;
    int t63;
    float u28;
    float u29;
    int t52;
    float u32;
    int t35;
    int t33;
    int t37;
    int t38;
    float u40;
    int t43;
    int t41;
    int t46;
    int t106;
    float u72;
    float u73;
    int t95;
    float u76;
    int t79;
    int t77;
    int t81;
    int t82;
    float u84;
    int t87;
    int t85;
    int t89;
    int t116;
    int t114;
    float u119;
    float u149;

    t0 = *(int *)0x8C291F78;
    t171 = t0;
    if ((t0 & 2) != 0) {
    } else {
        t2 = *(int *)0x8C20D19C;
        t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x1);
        }
        t157 = t3;
        if (t3 == 0) {
        } else {
            t5 = *(int *)((a4 + 0xB5C));
            if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
            } else {
                u10 = *(float *)0x8C23D204;
                if ((*(short *)((((t5 * 0x160) + 0x8C2FC69C) + 0x22))) == 0) {
                    t12 = *(int *)(((0xC58 + a4) + 0x0));
                    *(float *)(((0x10 + ((t5 * 0x160) + 0x8C2FC69C)) + 0x0)) = ((*(float *)(((0x10 + ((t5 * 0x160) + 0x8C2FC69C)) + 0x0))) - ((float)(unsigned char)(*(signed char *)(((0x8C10D380 + ((t12 << 2) + t12)) + 0x2))) * u10));
                    if (0.0f > (*(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10)))) {
                        *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10)) = 0.0f;
                    }
                } else {
                    t16 = *(int *)((a4 + 0xC58));
                    t18 = *(signed char *)(((0x8C10D380 + ((t16 << 2) + t16)) + 0x0));
                    t21 = (int)((float)(unsigned char)t18 * u10);
                    if ((*(int *)0x8C287ADC) == 2) {
                        t21 = (int)(((float)(int)((float)(unsigned char)t18 * u10)) * 0.5f);
                    }
                    t63 = t21;
                    if (((*(short *)((((t5 * 0x160) + 0x8C2FC69C) + 0x22))) & 0xC0) == 0) {
                        u28 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x28));
                        u29 = (-u28);
                        if (!(0.0f > u28)) {
                            u29 = u28;
                        }
                        t52 = (t21 + t21);
                        if (0.150000006f > u29) {
                        } else {
                            u32 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x28));
                            t35 = 0x1;
                            if (u32 > 0.0f) {
                            } else {
                                t33 = 0x0;
                                if (0.0f > u32) {
                                    t33 = 0xFFFFFFFF;
                                }
                                t35 = t33;
                            }
                            t37 = *(short *)((((t5 * 0x160) + 0x8C2FC69C) + 0x22));
                            t38 = ((t37 & 0xC0) - 96);
                            if ((int)((t37 & 0xC0) - 96) < 0) {
                                t38 = (((t37 & 0xC0) - 96) + 0x1F);
                            }
                            u40 = *(float *)((a4 + 0xB00));
                            t43 = 0x1;
                            if ((-(u40 * (float)((int)t38 >> 5))) > 0.0f) {
                            } else {
                                t41 = 0x0;
                                if (0.0f > (-(u40 * (float)((int)t38 >> 5)))) {
                                    t41 = 0xFFFFFFFF;
                                }
                                t43 = t41;
                            }
                            t46 = t21;
                            if (t35 != t43) {
                                t46 = (((t21 << 2) << 1) - t21);
                            }
                            t52 = t46;
                        }
                        t63 = t52;
                    }
                    t106 = t63;
                    if (((*(short *)((((t5 * 0x160) + 0x8C2FC69C) + 0x22))) & 0x30) == 0) {
                        u72 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x30));
                        u73 = (-u72);
                        if (!(0.0f > u72)) {
                            u73 = u72;
                        }
                        t95 = (t63 + t63);
                        if (0.150000006f > u73) {
                        } else {
                            u76 = *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x30));
                            t79 = 0x1;
                            if (u76 > 0.0f) {
                            } else {
                                t77 = 0x0;
                                if (0.0f > u76) {
                                    t77 = 0xFFFFFFFF;
                                }
                                t79 = t77;
                            }
                            t81 = *(short *)((((t5 * 0x160) + 0x8C2FC69C) + 0x22));
                            t82 = ((t81 & 0x30) - 24);
                            if ((int)((t81 & 0x30) - 24) < 0) {
                                t82 = (((t81 & 0x30) - 24) + 0x7);
                            }
                            u84 = *(float *)((a4 + 0xB00));
                            t87 = 0x1;
                            if ((-(u84 * (float)(((t82 >> 1) >> 1) >> 1))) > 0.0f) {
                            } else {
                                t85 = 0x0;
                                if (0.0f > (-(u84 * (float)(((t82 >> 1) >> 1) >> 1)))) {
                                    t85 = 0xFFFFFFFF;
                                }
                                t87 = t85;
                            }
                            t89 = t63;
                            if (t79 != t87) {
                                t89 = ((t63 << 2) << 1);
                            }
                            t95 = t89;
                        }
                        t106 = t95;
                    }
                    t116 = t106;
                    if ((*(int *)((a4 + 0xA24))) == 2) {
                    } else {
                        t114 = t106;
                        if ((int)t106 < 0) {
                            t114 = (t106 + 0x3);
                        }
                        t116 = ((t114 >> 1) >> 1);
                    }
                    *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10)) = ((*(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10))) + (float)t116);
                    u119 = *(float *)0x8C03E234;
                    if ((*(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10))) > u119) {
                        *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x10)) = u119;
                    }
                }
            }
            *(float *)(((0x14 + ((t5 * 0x160) + 0x8C2FC69C)) + 0x0)) = ((*(float *)(((0x14 + ((t5 * 0x160) + 0x8C2FC69C)) + 0x0))) + (float)(((int)((int)(*(int *)0x8C20D19C) % (int)0xA)) - 5));
            u149 = *(float *)0x8C03E240;
            if ((*(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x14))) > u149) {
                *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x14)) = u149;
            } else {
                if (0.0f > (*(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x14)))) {
                    *(float *)((((t5 * 0x160) + 0x8C2FC69C) + 0x14)) = 0.0f;
                }
            }
            t157 = 0x14;
        }
        t171 = t157;
    }
    return t171;
}

int resultTallyStart(int a4, int a5, int a6, int a7)
{
    int t0;
    int t87;
    int t1;
    int t2;
    int t35;
    int t37;
    int t38;
    int t39;
    int t41;
    int t50;
    int t51;
    int t62;
    int t63;
    int t84;

    t0 = *(int *)0x8C287D5C;
    t87 = t0;
    if (t0 == 2) {
    } else {
        t1 = set_event(0x50, 0x8C085C24);
        *(float *)((t1 + 0x18)) = 0.0f;
        *(unsigned int *)((t1 + 0x20)) = 0x0;
        *(unsigned int *)((t1 + 0x40)) = 0x0;
        *(unsigned int *)((t1 + 0x48)) = 0x0;
        *(unsigned int *)((t1 + 0x3C)) = 0x0;
        *(unsigned int *)((t1 + 0x4C)) = 0x0;
        t2 = *(int *)0x8C301BC4;
        if (t2 == 4) {
            *(unsigned int *)((t1 + 0x20)) = 0x1;
            *(unsigned int *)((t1 + 0x24)) = 0xFFFFFFFF;
            if ((*(int *)0x8C287B00) == (*(int *)0x8C287C64)) {
                *(unsigned int *)((t1 + 0x1C)) = (*(int *)0x8C343268);
            } else {
                *(unsigned int *)((t1 + 0x1C)) = (*(int *)0x8C3432A0);
            }
        } else {
            if (t2 == 0) {
                *(unsigned int *)((t1 + 0x20)) = 0x0;
                *(unsigned int *)((t1 + 0x24)) = (*(int *)0x8C287AD0);
                if ((*(int *)0x8C287B00) != (*(int *)0x8C287C64)) {
                    *(unsigned int *)((t1 + 0x1C)) = 0x1;
                } else {
                    *(unsigned int *)((t1 + 0x1C)) = 0x0;
                }
            } else {
                if (t2 == 1) {
                    *(unsigned int *)((t1 + 0x20)) = 0x0;
                    *(unsigned int *)((t1 + 0x24)) = (*(int *)0x8C287AD4);
                    if ((*(int *)0x8C287B04) == (*(int *)0x8C287C64)) {
                        *(unsigned int *)((t1 + 0x1C)) = 0x1;
                    } else {
                        *(unsigned int *)((t1 + 0x1C)) = 0x0;
                    }
                }
            }
        }
        *(unsigned int *)((t1 + 0x44)) = (*(int *)0x8C287B88);
        *(unsigned int *)((t1 + 0x38)) = 0x1E;
        *(unsigned int *)((t1 + 0x14)) = 0xC8;
        if ((*(int *)0x8C287ADC) == 2) {
            t35 = *(int *)((t1 + 0x1C));
            *(unsigned int *)((t1 + 0x28)) = (*(int *)(((((((t35 << 2) << 1) + t35) << 2) + 0x8C287B8C) + 0x4)));
            t37 = *(int *)((t1 + 0x1C));
            t38 = *(int *)(((((((t37 << 2) << 1) + t37) << 2) + 0x8C287B8C) + 0x0));
            *(unsigned int *)((t1 + 0x2C)) = t38;
            if (t38 == 0) {
                t39 = *(int *)((t1 + 0x1C));
                *(unsigned int *)((t1 + 0x28)) = (*(int *)(((((((((-t39) + 0x1) << 2) << 1) + ((-t39) + 0x1)) << 2) + 0x8C287B8C) + 0x4)));
                t41 = *(int *)((t1 + 0x1C));
                *(unsigned int *)((t1 + 0x2C)) = (*(int *)(((((((((-t41) + 0x1) << 2) << 1) + ((-t41) + 0x1)) << 2) + 0x8C287B8C) + 0x0)));
            }
        } else {
            if ((*(int *)0x8C287B00) == (*(int *)0x8C287C64)) {
                *(unsigned int *)((t1 + 0x28)) = ((*(int *)0x8C287B90) + (*(int *)0x8C287BD8));
                t50 = *(int *)0x8C287B8C;
                t51 = *(int *)0x8C287BD4;
                *(unsigned int *)((t1 + 0x2C)) = (t50 + t51);
                if ((t50 + t51) == 0) {
                    *(unsigned int *)((t1 + 0x28)) = ((*(int *)0x8C287BB4) + (*(int *)0x8C287BFC));
                    *(unsigned int *)((t1 + 0x2C)) = ((*(int *)0x8C287BB0) + (*(int *)0x8C287BF8));
                }
            } else {
                *(unsigned int *)((t1 + 0x28)) = ((*(int *)0x8C287BB4) + (*(int *)0x8C287BFC));
                t62 = *(int *)0x8C287BB0;
                t63 = *(int *)0x8C287BF8;
                *(unsigned int *)((t1 + 0x2C)) = (t62 + t63);
                if ((t62 + t63) == 0) {
                    *(unsigned int *)((t1 + 0x28)) = ((*(int *)0x8C287B90) + (*(int *)0x8C287BD8));
                    *(unsigned int *)((t1 + 0x2C)) = ((*(int *)0x8C287B8C) + (*(int *)0x8C287BD4));
                }
            }
        }
        t84 = (int)((int)((*(int *)((t1 + 0x2C))) - (*(int *)((t1 + 0x28)))) / (int)0x1E);
        *(unsigned int *)((t1 + 0x30)) = t84;
        *(unsigned int *)((t1 + 0x34)) = ((*(int *)((t1 + 0x2C))) - (*(int *)((t1 + 0x28))));
        t87 = t84;
    }
    return t87;
}

int kmSetUserClipping(int a4, int a5, int a6, int a7)
{
    int t1;
    int t3;
    int t5;
    int t7;
    int t9;
    int t10;
    int t12;
    int t14;
    int t17;
    int t19;
    int t21;
    int t23;
    int t25;
    int t27;
    int t29;
    int t31;
    int t32;
    int t37;
    int t41;
    int t43;
    int t44;
    int t45;
    int t47;
    int t49;
    int t58;
    int t59;
    int t60;
    int t62;
    int stk[43];

    *(unsigned int *)(((int)stk + 8)) = a7;
    t1 = *(int *)0x8C20A2E8;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x0)) = (*(int *)0x8C20A2E4);
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x4)) = t1;
    t3 = *(int *)0x8C20A2F0;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x8)) = (*(int *)0x8C20A2EC);
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0xC)) = t3;
    t5 = *(int *)0x8C20A2F8;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x10)) = (*(int *)0x8C20A2F4);
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x14)) = t5;
    t7 = *(int *)0x8C20A300;
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x18)) = (*(int *)0x8C20A2FC);
    *(unsigned int *)(((((int)stk + 4) + 0x68) + 0x1C)) = t7;
    t9 = *(int *)0x8C20A308;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = (*(int *)0x8C20A304);
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x4)) = t9;
    t10 = *(int *)0x8C20A310;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x8)) = (*(int *)0x8C20A30C);
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0xC)) = t10;
    t12 = *(int *)0x8C20A318;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x10)) = (*(int *)0x8C20A314);
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x14)) = t12;
    t14 = *(int *)0x8C20A320;
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x18)) = (*(int *)0x8C20A31C);
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x1C)) = t14;
    t17 = *(int *)0x8C20A328;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x0)) = (*(int *)0x8C20A324);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x4)) = t17;
    t19 = *(int *)0x8C20A330;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x8)) = (*(int *)0x8C20A32C);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0xC)) = t19;
    t21 = *(int *)0x8C20A338;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x10)) = (*(int *)0x8C20A334);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x14)) = t21;
    t23 = *(int *)0x8C20A340;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x18)) = (*(int *)0x8C20A33C);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x1C)) = t23;
    t25 = *(int *)0x8C20A348;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x20)) = (*(int *)0x8C20A344);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x24)) = t25;
    t27 = *(int *)0x8C20A350;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x28)) = (*(int *)0x8C20A34C);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x2C)) = t27;
    t29 = *(int *)0x8C20A358;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x30)) = (*(int *)0x8C20A354);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x34)) = t29;
    t31 = *(int *)0x8C20A360;
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x38)) = (*(int *)0x8C20A35C);
    *(unsigned int *)(((((int)stk + 4) + 0x8) + 0x3C)) = t31;
    t32 = 0xA0000000;
    if ((0x1 & a6) != 0) {
        t32 = 0x81000040;
    }
    *(unsigned int *)(((((int)stk + 4) + 0x48) + 0x0)) = (((a5 << 16) | 0x800000) | t32);
    *(unsigned int *)(((int)stk + 4)) = (((*(int *)(((a6 << 2) + (*(int *)((a4 + 0x0)))))) & 0x3FFFFFF) | 0xE0000000);
    t37 = *(int *)(((a6 << 2) + (*(int *)((a4 + 0x0)))));
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t37 >> 16) >> 8);
    kmyMemCopy((*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x48), 0x20);
    _builtin_prefetch((void *)(*(int *)(((int)stk + 4))));
    t41 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a6 << 2) + t41)) = ((*(int *)(((a6 << 2) + t41))) + 0x20);
    *(unsigned int *)(((int)stk + 4)) = 0x2;
    for (;;) {
        t43 = *(int *)((a4 + 0x0));
        t44 = *(int *)(((a6 << 2) + t43));
        t45 = *(int *)(((a6 << 2) + t43));
        *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t44 >> 16) >> 8);
        *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t44 >> 16) >> 8);
        kmyMemCopy(((t45 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x8), 0x40);
        _builtin_prefetch((void *)((t45 & 0x3FFFFFF) | 0xE0000000));
        _builtin_prefetch((void *)(((t45 & 0x3FFFFFF) | 0xE0000000) + 0x20));
        t47 = *(int *)((a4 + 0x0));
        *(unsigned int *)(((a6 << 2) + t47)) = ((*(int *)(((a6 << 2) + t47))) + 0x40);
        t49 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 4)) = (t49 - 1);
        if ((t49 - 1) == 0) {
            break;
        }
    }
    *(unsigned int *)(((int)stk + 124)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)));
    *(unsigned int *)(((int)stk + 128)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x4)));
    *(unsigned int *)(((int)stk + 132)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0x8)));
    *(unsigned int *)(((int)stk + 136)) = (*(int *)(((*(int *)(((int)stk + 8))) + 0xC)));
    t58 = *(int *)((a4 + 0x0));
    t59 = *(int *)(((a6 << 2) + t58));
    t60 = *(int *)(((a6 << 2) + t58));
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t59 >> 16) >> 8);
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t59 >> 16) >> 8);
    kmyMemCopy(((t60 & 0x3FFFFFF) | 0xE0000000), (((int)stk + 4) + 0x68), 0x20);
    _builtin_prefetch((void *)((t60 & 0x3FFFFFF) | 0xE0000000));
    t62 = *(int *)((a4 + 0x0));
    *(unsigned int *)(((a6 << 2) + t62)) = ((*(int *)(((a6 << 2) + t62))) + 0x20);
    return 0x0;
}

int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t9;
    int t7;
    int t15;
    int t13;
    int t19;
    int t24;
    int t53;
    int t78;
    int t81;
    int t82;
    int t5;
    int t11;
    int t22;
    int t23;
    int t27;
    int t51;
    int t52;
    int t56;
    int t80;
    int t85;
    int stk[13];

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 8)) = a6;
    if ((*(int *)((0xD4 + (*(int *)0x8C20CA24)))) == 1) {
        *(unsigned int *)(((int)stk + 16)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
    }
    t9 = 0x0;
    if (a8 != 0) {
        t7 = 0x1;
        if (a8 != 1) {
            if (a8 != 2) {
            } else {
                t5 = 0xFFFFFFFF;
            }
            t7 = t5;
        }
        t9 = t7;
    }
    t15 = 0x0;
    if (a9 != 0) {
        t13 = 0x1;
        if (a9 != 1) {
            if (a9 != 2) {
            } else {
                t11 = 0xFFFFFFFF;
            }
            t13 = t11;
        }
        t15 = t13;
    }
    syG2DmaSuspendAll();
    syG2FifoWaitEmpty();
    t19 = *(int *)(((int)stk + 8));
    if (t19 != 1) {
        if (t19 != 2) {
            if (t19 == 4) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                *(unsigned int *)(((int)stk + 4)) = a4;
                *(unsigned int *)(((int)stk + 12)) = (t9 << 2);
                if ((int)a7 > 0) {
                    t24 = 0x0;
                    for (;;) {
                        if ((t24 & 0x7) == 0) {
                            syG2FifoWaitEmpty();
                            syG2AicaFifoWaitEmpty();
                        } else {
                            t27 = t22;
                        }
                        t22 = t27;
                        t23 = (*(int *)(((int)stk + 4)));
                        t24 = (t24 + 0x1);
                        t22 = (*(int *)(((int)stk + 8)));
                        *(unsigned int *)((t22 + 0x0)) = (*(int *)((t23 + 0x0)));
                        t22 = (*(int *)(((int)stk + 4)));
                        t23 = (*(int *)(((int)stk + 12)));
                        t22 = (t22 + t23);
                        *(unsigned int *)(((int)stk + 4)) = t22;
                        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + (t15 << 2));
                        if ((int)t24 >= (int)a7) {
                            break;
                        }
                    }
                }
            }
        } else {
            *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
            *(unsigned int *)(((int)stk + 4)) = a4;
            if ((int)a7 > 0) {
                t53 = 0x0;
                for (;;) {
                    if ((t53 & 0x7) == 0) {
                        syG2FifoWaitEmpty();
                        syG2AicaFifoWaitEmpty();
                    } else {
                        t56 = t51;
                    }
                    t51 = t56;
                    t52 = (*(int *)(((int)stk + 4)));
                    t53 = (t53 + 0x1);
                    t51 = (*(int *)(((int)stk + 8)));
                    *(unsigned short *)((t51 + 0x0)) = (*(short *)((t52 + 0x0)));
                    t52 = (*(int *)(((int)stk + 4)));
                    t52 = (t52 + (t9 << 1));
                    *(unsigned int *)(((int)stk + 4)) = t52;
                    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + (t15 << 1));
                    if ((int)t53 >= (int)a7) {
                        break;
                    }
                }
            }
        }
    } else {
        t78 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = t78;
        *(unsigned int *)(((int)stk + 4)) = a4;
        if ((int)a7 > 0) {
            t81 = t78;
            t82 = 0x0;
            for (;;) {
                if ((t82 & 0x7) == 0) {
                    syG2FifoWaitEmpty();
                    syG2AicaFifoWaitEmpty();
                } else {
                    t85 = t80;
                }
                t80 = t85;
                t81 = (*(int *)(((int)stk + 4)));
                t82 = (t82 + 0x1);
                t80 = (*(int *)(((int)stk + 8)));
                *(unsigned char *)((t80 + 0x0)) = (*(signed char *)((t81 + 0x0)));
                t81 = (*(int *)(((int)stk + 4)));
                t81 = (t81 + t9);
                *(unsigned int *)(((int)stk + 4)) = t81;
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + t15);
                if ((int)t82 >= (int)a7) {
                    break;
                }
            }
        }
    }
    syG2DmaResumeAll();
    if ((*(int *)((0xD4 + (*(int *)0x8C20CA24)))) == 1) {
        _builtin_set_imask(((unsigned int)((((*(int *)(((int)stk + 16))) & 0xF) << 2) << 2) >> 4));
    }
    return 0x0;
}

int _pd_peripheral_set_data(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t13;
    int t34;
    int t47;
    int t51;
    int t55;
    int t59;
    int t63;
    int t68;
    int t73;
    int t22;
    int t17;
    int t43;
    int t38;

    t0 = *(int *)((a5 + 0x8));
    t1 = *(signed char *)(((t0 + 0x8) + 0x1));
    t2 = *(signed char *)(((t0 + 0x8) + 0x0));
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) >= (unsigned int)(*(signed char *)0x8C45A6B0)) {
        *(unsigned char *)(((0x8C45A6B2 + a6) + 0x0)) = 0x1;
        t22 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0))) <= (unsigned int)(*(signed char *)0x8C45A6B1)) {
            *(unsigned char *)(((0x8C45A6B2 + a6) + 0x0)) = 0x0;
            t17 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) | 0x20000);
        } else {
            t13 = (((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000);
            if ((*(signed char *)(((0x8C45A6B2 + a6) + 0x0))) != 0) {
                t13 = ((((unsigned char)t2 | ((unsigned char)t1 << 8)) | 0xFFFF0000) & 0xFFFDFFFF);
            }
            t17 = t13;
        }
        t22 = t17;
    }
    if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) >= (unsigned int)(*(signed char *)0x8C45A6B0)) {
        *(unsigned char *)(((0x8C45A6CA + a6) + 0x0)) = 0x1;
        t43 = (t22 & 0xFFFEFFFF);
    } else {
        if ((unsigned int)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0))) <= (unsigned int)(*(signed char *)0x8C45A6B1)) {
            *(unsigned char *)(((0x8C45A6CA + a6) + 0x0)) = 0x0;
            t38 = (t22 | 0x10000);
        } else {
            t34 = t22;
            if ((*(signed char *)(((0x8C45A6CA + a6) + 0x0))) != 0) {
                t34 = (t22 & 0xFFFEFFFF);
            }
            t38 = t34;
        }
        t43 = t38;
    }
    t47 = t43;
    if ((*(int *)0x8C45A6AC) == 0) {
        t47 = (t43 ^ 0xFFFFFFFF);
    }
    *(unsigned int *)((a4 + 0x8)) = t47;
    t51 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x10000) != 0) {
        t51 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x2) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x18)) = t51;
    t55 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x20000) != 0) {
        t55 = (unsigned char)(*(signed char *)((((t0 + 0x8) + 0x3) + 0x0)));
    }
    *(unsigned short *)((a4 + 0x1A)) = t55;
    t59 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x40000) != 0) {
        t59 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x4))) - 128);
    }
    *(unsigned short *)((a4 + 0x1C)) = t59;
    t63 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x80000) != 0) {
        t63 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x5))) - 128);
    }
    *(unsigned short *)((a4 + 0x1E)) = t63;
    t68 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x100000) != 0) {
        t68 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x6))) - 128);
    }
    *(unsigned short *)((a4 + 0x20)) = t68;
    t73 = 0x0;
    if (((*(int *)((a4 + 0x4))) & 0x200000) != 0) {
        t73 = ((unsigned char)(*(signed char *)(((t0 + 0x8) + 0x7))) - 128);
    }
    *(unsigned short *)((a4 + 0x22)) = t73;
    return 0x22;
}

int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 0x80000000) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0x8C20AF34))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEC0)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0x8C20AF08)));
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEA4)));
    }
    kmyCopyToTexture(a4, a5, t7, 0x0);
    return kmyCopyToTexture((a4 + 0x800), (a5 + t7), t6, 0x0);
}

int FUN_8c0f8590(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 0x80000000) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0x8C20AF34))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEC0)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0x8C20AF08)));
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEA4)));
    }
    kmyCopyToTextureRom(a4, a5, t7, 0x0);
    return kmyCopyToTextureRom((a4 + 0x800), (a5 + t7), t6, 0x0);
}

int cpuDblIsMyBall(int a4)
{
    int t0;
    float u3;
    int t6;
    int t4;
    int t13;
    int t14;

    t0 = *(int *)((a4 + 0xB5C));
    if (((*(int *)((a4 + 0xB60))) & 8) == 0) {
        u3 = *(float *)0x8C291F50;
        t6 = 0x1;
        if (u3 > 0.0f) {
        } else {
            t4 = 0x0;
            if (0.0f > u3) {
                t4 = 0xFFFFFFFF;
            }
            t6 = t4;
        }
        if ((float)t6 != (*(float *)((a4 + 0xB00)))) {
            if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E))) == 0) && ((t13 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12F)), t13 == 0) && (t14 = *(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x12E)), t14 == 0))) {
                return 0x0;
            }
            return 0x1;
        }
        return 0x0;
    }
    return 0x0;
}
