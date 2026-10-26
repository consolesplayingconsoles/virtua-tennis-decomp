/* Straight-line functions with calls and guards (batch gen_fk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuAimPointSet(int, int, float, float);
float cpuLineXAtZ(Stk3, float);
int hudFont2DigitPut(int, Stk3, float);
int hudSignLastPut(float);
int hudSignPut(int, Stk3, float);
int markerShowStart(int, Stk3);
int primRectIncGradX(int, int, int, int, Stk3);
int sprPutAtAlpha(int, Stk3, float);
int standBarDraw(int, int, int);
int standBoxesDraw(int, int, int, int, int, int, int, int, int, int, int, int);
Stk3 vecMake(float, float, float);
void cpuDblAimAddLv16(int a4, int a5);
int standPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

void cpuDblAimAddLv16(int a4, int a5)
{
    int t0;
    float u1;
    float u15;
    int t21;
    int t22;
    float u23;
    float u30;
    float t38;
    float t40;
    float u41;
    float u51;
    float u57;
    float u63;
    float u69;
    float u70;
    float u80;
    float u89;
    int t94;
    float u103;
    float u114;
    float u126;
    float u138;
    float u143;
    float u176;
    float u177;
    float u187;
    float u188;
    float u194;
    float u195;
    float u203;
    int t208;
    float u217;
    float u228;
    float u240;
    float u252;
    float u257;
    float u300;
    float u307;
    float u308;
    float u318;
    float u319;
    float u325;
    float u326;
    float u334;
    float u339;
    float u340;
    float u347;
    int t352;
    float u361;
    float u372;
    float u384;
    float u396;
    float u401;
    int stk[34];

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
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F5;
    float F12;
    float F13;
    float F14;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C078C3E:;
    t0 = *(int *)((R4 + 0xB5C));
    *(unsigned int *)(((int)stk + 52)) = ((((t0 + 0x2) & 0x3) * 0xD78) + 0x8C287D84);
    u1 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    R0 = (0xAF0);
    R10 = (R5);
    R11 = (((t0 * 0x160) + 0x8C2FC69C));
    R12 = (((((t0 + 0x1) & 0x3) * 0xD78) + 0x8C287D84));
    R13 = (R4);
    R14 = (((((t0 + 0x3) & 0x3) * 0xD78) + 0x8C287D84));
    R4 = (t0);
    R5 = (0x8C287D84);
    R6 = (0xD78);
    R7 = (0x3);
    F5 = (u1);
    if ((0.0f > u1)) goto L_8C078CD4;
    goto L_8C078CA0;
    L_8C078CA0:;
    F3 = (F5);
    goto L_8C078CD8;
    L_8C078CD8:;
    u15 = *(float *)((R14 + R0));
    F4 = (u15);
    if ((0.0f > u15)) goto L_8C078CE4;
    goto L_8C078CE0;
    L_8C078CE0:;
    F2 = (F4);
    goto L_8C078CE8;
    L_8C078CE8:;
    if ((!(F3 > F2))) goto L_8C078CF2;
    goto L_8C078CEC;
    L_8C078CEC:;
    t21 = R12;
    t22 = R12;
    R12 = (R14);
    R14 = t21;
    R4 = t22;
    goto L_8C078CF2;
    L_8C078CF2:;
    u23 = *(float *)((R13 + 0xB9C));
    R9 = ((((int)stk + 52) + 0x18));
    F13 = (54.8499985f);
    F3 = (0.0f);
    F4 = (u23);
    if ((!(u23 > 0.0f))) goto L_8C078D08;
    goto L_8C078D04;
    L_8C078D04:;
    R3 = (0x1);
    goto L_8C078D12;
    L_8C078D12:;
    *(float *)((R9 + 0x0)) = (((float)R3 * F13) - F4);
    *(float *)((R9 + 0x4)) = 0.0f;
    u30 = *(float *)((R13 + 0xB00));
    F12 = (118.849998f);
    F3 = (0.0f);
    F4 = (u30);
    if ((!(u30 > 0.0f))) goto L_8C078D34;
    goto L_8C078D30;
    L_8C078D30:;
    R3 = (0x1);
    goto L_8C078D3E;
    L_8C078D3E:;
    *(float *)((R9 + 0x8)) = (((float)R3 * F12) - (*(float *)((R13 + 0xBA4))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(R9); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + R13)); }
    t38 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), (*(float *)((R12 + 0xAF0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R9); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + R13)); }
    t40 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), (*(float *)((R14 + 0xAF0))));
    u41 = *(float *)((R13 + 0xB9C));
    R8 = (0x8C041C58);
    R9 = (0x100);
    F0 = (t40);
    F14 = (t38);
    F15 = (t40);
    F3 = (0.0f);
    F4 = (u41);
    if ((!(u41 > 0.0f))) goto L_8C078DAA;
    goto L_8C078DA6;
    L_8C078DA6:;
    R2 = (0x1);
    goto L_8C078DB4;
    L_8C078DB4:;
    u51 = *(float *)((R12 + 0xAE8));
    F3 = (0.0f);
    F5 = (u51);
    if ((!(u51 > 0.0f))) goto L_8C078DC2;
    goto L_8C078DBE;
    L_8C078DBE:;
    R3 = (0x1);
    goto L_8C078DEE;
    L_8C078DEE:;
    if ((R2 != R3)) goto L_8C078DF6;
    goto L_8C078DF2;
    L_8C078DF2:;
    goto L_8C07908E;
    L_8C07908E:;
    u57 = *(float *)((R12 + 0xAE8));
    R0 = (0xAE8);
    F3 = (0.0f);
    F4 = (u57);
    if ((!(u57 > 0.0f))) goto L_8C07909C;
    goto L_8C079098;
    L_8C079098:;
    R2 = (0x1);
    goto L_8C0790BE;
    L_8C0790BE:;
    u63 = *(float *)((R14 + R0));
    F3 = (0.0f);
    F5 = (u63);
    if ((!(u63 > 0.0f))) goto L_8C0790CA;
    goto L_8C0790C6;
    L_8C0790C6:;
    R3 = (0x1);
    goto L_8C0790D4;
    L_8C0790D4:;
    if ((R2 == R3)) goto L_8C0790DC;
    goto L_8C0790D8;
    L_8C0790D8:;
    goto L_8C0792FA;
    L_8C0792FA:;
    u69 = *(float *)((R13 + 0xB9C));
    u70 = *(float *)((R12 + 0xAE8));
    F3 = (0.0f);
    F4 = (u69);
    F5 = ((u69 - u70));
    if ((!((u69 - u70) > 0.0f))) goto L_8C079310;
    goto L_8C07930C;
    L_8C07930C:;
    R2 = (0x1);
    goto L_8C07931A;
    L_8C07931A:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C079324;
    goto L_8C079320;
    L_8C079320:;
    R3 = (0x1);
    goto L_8C07932E;
    L_8C07932E:;
    if ((R2 == R3)) goto L_8C079336;
    goto L_8C079332;
    L_8C079332:;
    goto L_8C0794C8;
    L_8C0794C8:;
    return;
    L_8C079336:;
    u80 = *(float *)((R14 + 0xAE8));
    F2 = ((F4 - u80));
    F3 = (0.0f);
    if ((!((F4 - u80) > 0.0f))) goto L_8C079348;
    goto L_8C079344;
    L_8C079344:;
    R2 = (0x1);
    goto L_8C079352;
    L_8C079352:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C07935C;
    goto L_8C079358;
    L_8C079358:;
    R1 = (0x1);
    goto L_8C079376;
    L_8C079376:;
    if ((R2 == R1)) goto L_8C07937E;
    goto L_8C07937A;
    L_8C07937A:;
    goto L_8C0794C8;
    L_8C07937E:;
    u89 = *(float *)((R13 + 0xB9C));
    F4 = (u89);
    if ((0.0f > u89)) goto L_8C07938C;
    goto L_8C079388;
    L_8C079388:;
    F3 = (F4);
    goto L_8C079390;
    L_8C079390:;
    if ((F3 > 27.4249992f)) goto L_8C07939C;
    goto L_8C079398;
    L_8C079398:;
    goto L_8C0794C8;
    L_8C07939C:;
    t94 = *(int *)((R12 + 0xB60));
    R4 = ((t94 & R9));
    if (((t94 & R9) == 0)) goto L_8C0793D8;
    goto L_8C0793A6;
    L_8C0793A6:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C0793B8;
    goto L_8C0793B2;
    L_8C0793B2:;
    F3 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C0793C0;
    L_8C0793C0:;
    u103 = 13.0f;
    u103 = u103 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F3);
    if ((F3 > u103)) goto L_8C07940E;
    goto L_8C0793D8;
    L_8C0793D8:;
    if ((R4 != 0)) goto L_8C0794C8;
    goto L_8C0793DC;
    L_8C0793DC:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C0793EE;
    goto L_8C0793E8;
    L_8C0793E8:;
    F3 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C0793F6;
    L_8C0793F6:;
    u114 = 13.0f;
    u114 = u114 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((!(F3 > u114))) goto L_8C0794C8;
    goto L_8C07940E;
    L_8C07940E:;
    if ((((*(int *)((R14 + 0xB60))) & R9) == 0)) goto L_8C079460;
    goto L_8C079416;
    L_8C079416:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C079440;
    goto L_8C079422;
    L_8C079422:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C079448;
    L_8C079448:;
    u126 = 14.0f;
    u126 = u126 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F3);
    if ((F3 > u126)) goto L_8C07949A;
    goto L_8C079460;
    L_8C079460:;
    if ((((*(int *)((R14 + 0xB60))) & R9) != 0)) goto L_8C0794C8;
    goto L_8C079468;
    L_8C079468:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C07947A;
    goto L_8C079474;
    L_8C079474:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C079482;
    L_8C079482:;
    u138 = 14.0f;
    u138 = u138 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((!(F3 > u138))) goto L_8C0794C8;
    goto L_8C07949A;
    L_8C07949A:;
    u143 = *(float *)((R13 + 0xB9C));
    F15 = (u143);
    F3 = (0.0f);
    F5 = (((*(float *)((R13 + 0xB00))) * F12));
    if ((!(u143 > 0.0f))) goto L_8C0794AE;
    goto L_8C0794AA;
    L_8C0794AA:;
    R3 = (0x1);
    goto L_8C0794B8;
    L_8C0794B8:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C0794C8;
    L_8C0794AE:;
    if ((!(F3 > F15))) goto L_8C0794B6;
    goto L_8C0794B2;
    L_8C0794B2:;
    R3 = (0xFFFFFFFF);
    goto L_8C0794B8;
    L_8C0794B6:;
    R3 = (0x0);
    goto L_8C0794B8;
    L_8C07947A:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C079482;
    L_8C079440:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C079448;
    L_8C0793EE:;
    F3 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C0793F6;
    L_8C0793B8:;
    F3 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C0793C0;
    L_8C07938C:;
    F3 = ((-F4));
    goto L_8C079390;
    L_8C07935C:;
    if ((!(F3 > F4))) goto L_8C079374;
    goto L_8C079360;
    L_8C079360:;
    R1 = (0xFFFFFFFF);
    goto L_8C079376;
    L_8C079374:;
    R1 = (0x0);
    goto L_8C079376;
    L_8C079348:;
    if ((!(F3 > F2))) goto L_8C079350;
    goto L_8C07934C;
    L_8C07934C:;
    R2 = (0xFFFFFFFF);
    goto L_8C079352;
    L_8C079350:;
    R2 = (0x0);
    goto L_8C079352;
    L_8C079324:;
    if ((!(F3 > F4))) goto L_8C07932C;
    goto L_8C079328;
    L_8C079328:;
    R3 = (0xFFFFFFFF);
    goto L_8C07932E;
    L_8C07932C:;
    R3 = (0x0);
    goto L_8C07932E;
    L_8C079310:;
    if ((!(F3 > F5))) goto L_8C079318;
    goto L_8C079314;
    L_8C079314:;
    R2 = (0xFFFFFFFF);
    goto L_8C07931A;
    L_8C079318:;
    R2 = (0x0);
    goto L_8C07931A;
    L_8C0790DC:;
    u176 = *(float *)((R13 + 0xB9C));
    u177 = *(float *)(((*(int *)(((int)stk + 52))) + 0xAE8));
    F3 = (0.0f);
    F4 = (u176);
    F5 = ((u177 - u176));
    if ((!((u177 - u176) > 0.0f))) goto L_8C0790F2;
    goto L_8C0790EE;
    L_8C0790EE:;
    R2 = (0x1);
    goto L_8C0790FC;
    L_8C0790FC:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C079106;
    goto L_8C079102;
    L_8C079102:;
    R3 = (0x1);
    goto L_8C079110;
    L_8C079110:;
    if ((R2 != (-R3))) goto L_8C07918E;
    goto L_8C079116;
    L_8C079116:;
    u187 = *(float *)((R13 + 0xB00));
    u188 = *(float *)((R13 + 0xB9C));
    *(float *)(((int)stk + 68)) = u188;
    F1 = (0.0f);
    F5 = ((u187 * 59.4249992f));
    if ((!(u188 > 0.0f))) goto L_8C079132;
    goto L_8C07912E;
    L_8C07912E:;
    R3 = (0x1);
    goto L_8C079140;
    L_8C079140:;
    cpuAimPointSet(R10, 0x1, ((float)(-R3) * F13), F5);
    u194 = *(float *)((R13 + 0xB00));
    u195 = *(float *)((R13 + 0xB9C));
    *(float *)(((int)stk + 56)) = u195;
    R10 = ((R10 + 0x1));
    F1 = (0.0f);
    F5 = ((u194 * 11.8850002f));
    if ((!(u195 > 0.0f))) goto L_8C07916E;
    goto L_8C07916A;
    L_8C07916A:;
    R3 = (0x1);
    goto L_8C07917C;
    L_8C07917C:;
    cpuAimPointSet(R10, 0x1, ((float)(-R3) * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C07918E;
    L_8C07918E:;
    u203 = *(float *)((R13 + 0xB9C));
    F4 = (u203);
    if ((0.0f > u203)) goto L_8C0791AC;
    goto L_8C079198;
    L_8C079198:;
    F2 = (F4);
    goto L_8C0791B0;
    L_8C0791B0:;
    if ((F2 > 38.3949966f)) goto L_8C0791BC;
    goto L_8C0791B8;
    L_8C0791B8:;
    goto L_8C0794C8;
    L_8C0791BC:;
    t208 = *(int *)((R12 + 0xB60));
    R4 = ((t208 & R9));
    if (((t208 & R9) == 0)) goto L_8C0791F8;
    goto L_8C0791C6;
    L_8C0791C6:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C0791D8;
    goto L_8C0791D2;
    L_8C0791D2:;
    F2 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C0791E0;
    L_8C0791E0:;
    u217 = 10.0f;
    u217 = u217 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F2);
    if ((F2 > u217)) goto L_8C079236;
    goto L_8C0791F8;
    L_8C0791F8:;
    if ((R4 == 0)) goto L_8C079200;
    goto L_8C0791FC;
    L_8C0791FC:;
    goto L_8C0794C8;
    L_8C079200:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C079212;
    goto L_8C07920C;
    L_8C07920C:;
    F3 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C07921A;
    L_8C07921A:;
    u228 = 10.0f;
    u228 = u228 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((F3 > u228)) goto L_8C079236;
    goto L_8C079232;
    L_8C079232:;
    goto L_8C0794C8;
    L_8C079236:;
    if ((((*(int *)((R14 + 0xB60))) & R9) == 0)) goto L_8C079270;
    goto L_8C07923E;
    L_8C07923E:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C079250;
    goto L_8C07924A;
    L_8C07924A:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C079258;
    L_8C079258:;
    u240 = 10.0f;
    u240 = u240 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F3);
    if ((F3 > u240)) goto L_8C0792C8;
    goto L_8C079270;
    L_8C079270:;
    if ((((*(int *)((R14 + 0xB60))) & R9) == 0)) goto L_8C07927C;
    goto L_8C079278;
    L_8C079278:;
    goto L_8C0794C8;
    L_8C07927C:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C0792A4;
    goto L_8C079288;
    L_8C079288:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C0792AC;
    L_8C0792AC:;
    u252 = 10.0f;
    u252 = u252 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((F3 > u252)) goto L_8C0792C8;
    goto L_8C0792C4;
    L_8C0792C4:;
    goto L_8C0794C8;
    L_8C0792C8:;
    u257 = *(float *)((R13 + 0xB9C));
    F15 = (u257);
    F3 = (0.0f);
    F5 = (((*(float *)((R13 + 0xB00))) * F12));
    if ((!(u257 > 0.0f))) goto L_8C0792DC;
    goto L_8C0792D8;
    L_8C0792D8:;
    R3 = (0x1);
    goto L_8C0792E6;
    L_8C0792E6:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C0794C8;
    L_8C0792DC:;
    if ((!(F3 > F15))) goto L_8C0792E4;
    goto L_8C0792E0;
    L_8C0792E0:;
    R3 = (0xFFFFFFFF);
    goto L_8C0792E6;
    L_8C0792E4:;
    R3 = (0x0);
    goto L_8C0792E6;
    L_8C0792A4:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C0792AC;
    L_8C079250:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C079258;
    L_8C079212:;
    F3 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C07921A;
    L_8C0791D8:;
    F2 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C0791E0;
    L_8C0791AC:;
    F2 = ((-F4));
    goto L_8C0791B0;
    L_8C07916E:;
    if ((!(F1 > (*(float *)(((int)stk + 56)))))) goto L_8C07917A;
    goto L_8C079176;
    L_8C079176:;
    R3 = (0xFFFFFFFF);
    goto L_8C07917C;
    L_8C07917A:;
    R3 = (0x0);
    goto L_8C07917C;
    L_8C079132:;
    if ((!(F1 > (*(float *)(((int)stk + 68)))))) goto L_8C07913E;
    goto L_8C07913A;
    L_8C07913A:;
    R3 = (0xFFFFFFFF);
    goto L_8C079140;
    L_8C07913E:;
    R3 = (0x0);
    goto L_8C079140;
    L_8C079106:;
    if ((!(F3 > F4))) goto L_8C07910E;
    goto L_8C07910A;
    L_8C07910A:;
    R3 = (0xFFFFFFFF);
    goto L_8C079110;
    L_8C07910E:;
    R3 = (0x0);
    goto L_8C079110;
    L_8C0790F2:;
    if ((!(F3 > F5))) goto L_8C0790FA;
    goto L_8C0790F6;
    L_8C0790F6:;
    R2 = (0xFFFFFFFF);
    goto L_8C0790FC;
    L_8C0790FA:;
    R2 = (0x0);
    goto L_8C0790FC;
    L_8C0790CA:;
    if ((!(F3 > F5))) goto L_8C0790D2;
    goto L_8C0790CE;
    L_8C0790CE:;
    R3 = (0xFFFFFFFF);
    goto L_8C0790D4;
    L_8C0790D2:;
    R3 = (0x0);
    goto L_8C0790D4;
    L_8C07909C:;
    if ((!(F3 > F4))) goto L_8C0790BC;
    goto L_8C0790A0;
    L_8C0790A0:;
    R2 = (0xFFFFFFFF);
    goto L_8C0790BE;
    L_8C0790BC:;
    R2 = (0x0);
    goto L_8C0790BE;
    L_8C078DF6:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C078E00;
    goto L_8C078DFC;
    L_8C078DFC:;
    R2 = (0x1);
    goto L_8C078E0A;
    L_8C078E0A:;
    u300 = *(float *)((R14 + 0xAE8));
    F2 = (u300);
    F3 = (0.0f);
    if ((!(u300 > 0.0f))) goto L_8C078E18;
    goto L_8C078E14;
    L_8C078E14:;
    R1 = (0x1);
    goto L_8C078E22;
    L_8C078E22:;
    if ((R2 != R1)) goto L_8C078E2A;
    goto L_8C078E26;
    L_8C078E26:;
    goto L_8C07908E;
    L_8C078E2A:;
    u307 = *(float *)((R13 + 0xB9C));
    u308 = *(float *)(((*(int *)(((int)stk + 52))) + 0xB9C));
    F3 = (0.0f);
    F4 = (u307);
    F5 = ((u308 - u307));
    if ((!((u308 - u307) > 0.0f))) goto L_8C078E3E;
    goto L_8C078E3A;
    L_8C078E3A:;
    R3 = (0x1);
    goto L_8C078E48;
    L_8C078E48:;
    F3 = (0.0f);
    if ((!(F4 > 0.0f))) goto L_8C078E52;
    goto L_8C078E4E;
    L_8C078E4E:;
    R1 = (0x1);
    goto L_8C078E5C;
    L_8C078E5C:;
    if ((R3 != R1)) goto L_8C078EDA;
    goto L_8C078E60;
    L_8C078E60:;
    u318 = *(float *)((R13 + 0xB00));
    u319 = *(float *)((R13 + 0xB9C));
    *(float *)(((int)stk + 72)) = u319;
    F2 = (0.0f);
    F5 = ((u318 * F12));
    if ((!(u319 > 0.0f))) goto L_8C078E78;
    goto L_8C078E74;
    L_8C078E74:;
    R3 = (0x1);
    goto L_8C078E86;
    L_8C078E86:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    u325 = *(float *)((R13 + 0xB00));
    u326 = *(float *)((R13 + 0xB9C));
    *(float *)(((int)stk + 64)) = u326;
    R10 = ((R10 + 0x1));
    F1 = (0.0f);
    F5 = ((u325 * 11.8850002f));
    if ((!(u326 > 0.0f))) goto L_8C078EBC;
    goto L_8C078EAE;
    L_8C078EAE:;
    R3 = (0x1);
    goto L_8C078ECA;
    L_8C078ECA:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C078EDA;
    L_8C078EDA:;
    u334 = *(float *)((R13 + 0xB9C));
    F4 = (u334);
    if ((0.0f > u334)) goto L_8C078EE8;
    goto L_8C078EE4;
    L_8C078EE4:;
    F2 = (F4);
    goto L_8C078EEC;
    L_8C078EEC:;
    if ((!(F2 > 21.9400005f))) goto L_8C078F2A;
    goto L_8C078EF4;
    L_8C078EF4:;
    u339 = *(float *)((R13 + 0xB00));
    u340 = *(float *)((R13 + 0xB9C));
    *(float *)(((int)stk + 60)) = u340;
    F1 = (0.0f);
    F5 = ((u339 * F12));
    if ((!(u340 > 0.0f))) goto L_8C078F0C;
    goto L_8C078F08;
    L_8C078F08:;
    R3 = (0x1);
    goto L_8C078F1A;
    L_8C078F1A:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C078F2A;
    L_8C078F2A:;
    u347 = *(float *)((R13 + 0xAF0));
    F4 = (u347);
    if ((0.0f > u347)) goto L_8C078F38;
    goto L_8C078F34;
    L_8C078F34:;
    F2 = (F4);
    goto L_8C078F3C;
    L_8C078F3C:;
    if ((59.4249992f > F2)) goto L_8C078F48;
    goto L_8C078F44;
    L_8C078F44:;
    goto L_8C0794C8;
    L_8C078F48:;
    t352 = *(int *)((R12 + 0xB60));
    R4 = ((t352 & R9));
    if (((t352 & R9) == 0)) goto L_8C078F84;
    goto L_8C078F52;
    L_8C078F52:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C078F64;
    goto L_8C078F5E;
    L_8C078F5E:;
    F2 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C078F6C;
    L_8C078F6C:;
    u361 = 20.0f;
    u361 = u361 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F2);
    if ((F2 > u361)) goto L_8C078FE0;
    goto L_8C078F84;
    L_8C078F84:;
    if ((R4 == 0)) goto L_8C078F8C;
    goto L_8C078F88;
    L_8C078F88:;
    goto L_8C0794C8;
    L_8C078F8C:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R12 + 0xAE8))) - F14))) goto L_8C078FBC;
    goto L_8C078F98;
    L_8C078F98:;
    F3 = (((*(float *)((R12 + R0))) - F14));
    goto L_8C078FC4;
    L_8C078FC4:;
    u372 = 20.0f;
    u372 = u372 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((F3 > u372)) goto L_8C078FE0;
    goto L_8C078FDC;
    L_8C078FDC:;
    goto L_8C0794C8;
    L_8C078FE0:;
    if ((((*(int *)((R14 + 0xB60))) & R9) == 0)) goto L_8C07901A;
    goto L_8C078FE8;
    L_8C078FE8:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C078FFA;
    goto L_8C078FF4;
    L_8C078FF4:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C079002;
    L_8C079002:;
    u384 = 20.0f;
    u384 = u384 + 0.100000001f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.100000001f);
    F1 = (F3);
    if ((F3 > u384)) goto L_8C07905C;
    goto L_8C07901A;
    L_8C07901A:;
    if ((((*(int *)((R14 + 0xB60))) & R9) == 0)) goto L_8C079026;
    goto L_8C079022;
    L_8C079022:;
    goto L_8C0794C8;
    L_8C079026:;
    R0 = (0xAE8);
    if ((0.0f > ((*(float *)((R14 + 0xAE8))) - F15))) goto L_8C079038;
    goto L_8C079032;
    L_8C079032:;
    F3 = (((*(float *)((R14 + R0))) - F15));
    goto L_8C079040;
    L_8C079040:;
    u396 = 20.0f;
    u396 = u396 + 0.5f * (float)(*(short *)((R11 + 0x118)));
    F0 = (0.5f);
    F1 = (F3);
    if ((F3 > u396)) goto L_8C07905C;
    goto L_8C079058;
    L_8C079058:;
    goto L_8C0794C8;
    L_8C07905C:;
    u401 = *(float *)((R13 + 0xB9C));
    F15 = (u401);
    F3 = (0.0f);
    F5 = (((*(float *)((R13 + 0xB00))) * F12));
    if ((!(u401 > 0.0f))) goto L_8C079070;
    goto L_8C07906C;
    L_8C07906C:;
    R3 = (0x1);
    goto L_8C07907A;
    L_8C07907A:;
    cpuAimPointSet(R10, 0x1, ((float)R3 * F13), F5);
    R10 = ((R10 + 0x1));
    goto L_8C0794C8;
    L_8C079070:;
    if ((!(F3 > F15))) goto L_8C079078;
    goto L_8C079074;
    L_8C079074:;
    R3 = (0xFFFFFFFF);
    goto L_8C07907A;
    L_8C079078:;
    R3 = (0x0);
    goto L_8C07907A;
    L_8C079038:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C079040;
    L_8C078FFA:;
    F3 = (((-(*(float *)((R14 + R0)))) + F15));
    goto L_8C079002;
    L_8C078FBC:;
    F3 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C078FC4;
    L_8C078F64:;
    F2 = (((-(*(float *)((R12 + R0)))) + F14));
    goto L_8C078F6C;
    L_8C078F38:;
    F2 = ((-F4));
    goto L_8C078F3C;
    L_8C078F0C:;
    if ((!(F1 > (*(float *)(((int)stk + 60)))))) goto L_8C078F18;
    goto L_8C078F14;
    L_8C078F14:;
    R3 = (0xFFFFFFFF);
    goto L_8C078F1A;
    L_8C078F18:;
    R3 = (0x0);
    goto L_8C078F1A;
    L_8C078EE8:;
    F2 = ((-F4));
    goto L_8C078EEC;
    L_8C078EBC:;
    if ((!(F1 > (*(float *)(((int)stk + 64)))))) goto L_8C078EC8;
    goto L_8C078EC4;
    L_8C078EC4:;
    R3 = (0xFFFFFFFF);
    goto L_8C078ECA;
    L_8C078EC8:;
    R3 = (0x0);
    goto L_8C078ECA;
    L_8C078E78:;
    if ((!(F2 > (*(float *)(((int)stk + 72)))))) goto L_8C078E84;
    goto L_8C078E80;
    L_8C078E80:;
    R3 = (0xFFFFFFFF);
    goto L_8C078E86;
    L_8C078E84:;
    R3 = (0x0);
    goto L_8C078E86;
    L_8C078E52:;
    if ((!(F3 > F4))) goto L_8C078E5A;
    goto L_8C078E56;
    L_8C078E56:;
    R1 = (0xFFFFFFFF);
    goto L_8C078E5C;
    L_8C078E5A:;
    R1 = (0x0);
    goto L_8C078E5C;
    L_8C078E3E:;
    if ((!(F3 > F5))) goto L_8C078E46;
    goto L_8C078E42;
    L_8C078E42:;
    R3 = (0xFFFFFFFF);
    goto L_8C078E48;
    L_8C078E46:;
    R3 = (0x0);
    goto L_8C078E48;
    L_8C078E18:;
    if ((!(F3 > F2))) goto L_8C078E20;
    goto L_8C078E1C;
    L_8C078E1C:;
    R1 = (0xFFFFFFFF);
    goto L_8C078E22;
    L_8C078E20:;
    R1 = (0x0);
    goto L_8C078E22;
    L_8C078E00:;
    if ((!(F3 > F4))) goto L_8C078E08;
    goto L_8C078E04;
    L_8C078E04:;
    R2 = (0xFFFFFFFF);
    goto L_8C078E0A;
    L_8C078E08:;
    R2 = (0x0);
    goto L_8C078E0A;
    L_8C078DC2:;
    if ((!(F3 > F5))) goto L_8C078DEC;
    goto L_8C078DC6;
    L_8C078DC6:;
    R3 = (0xFFFFFFFF);
    goto L_8C078DEE;
    L_8C078DEC:;
    R3 = (0x0);
    goto L_8C078DEE;
    L_8C078DAA:;
    if ((!(F3 > F4))) goto L_8C078DB2;
    goto L_8C078DAE;
    L_8C078DAE:;
    R2 = (0xFFFFFFFF);
    goto L_8C078DB4;
    L_8C078DB2:;
    R2 = (0x0);
    goto L_8C078DB4;
    L_8C078D34:;
    if ((!(F3 > F4))) goto L_8C078D3C;
    goto L_8C078D38;
    L_8C078D38:;
    R3 = (0xFFFFFFFF);
    goto L_8C078D3E;
    L_8C078D3C:;
    R3 = (0x0);
    goto L_8C078D3E;
    L_8C078D08:;
    if ((!(F3 > F4))) goto L_8C078D10;
    goto L_8C078D0C;
    L_8C078D0C:;
    R3 = (0xFFFFFFFF);
    goto L_8C078D12;
    L_8C078D10:;
    R3 = (0x0);
    goto L_8C078D12;
    L_8C078CE4:;
    F2 = ((-F4));
    goto L_8C078CE8;
    L_8C078CD4:;
    F3 = ((-F5));
    goto L_8C078CD8;
}

int standPanelDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    float u1;
    float u45;
    float u46;
    float u47;
    int t48;
    int t51;
    float u80;
    float u84;
    int t85;
    int t94;
    int t135;
    int t149;
    int t196;
    int t189;
    int t237;
    int t249;
    int t258;
    int t280;
    int t75;
    int t67;
    int t59;
    int t271;
    int t220;
    int t112;
    int t212;
    int t140;
    int t204;
    int t167;
    int t194;
    int t263;
    int stk[54];

    *(unsigned int *)(((int)stk + 84)) = a4;
    *(unsigned int *)(((int)stk + 96)) = a5;
    *(unsigned int *)(((int)stk + 92)) = a6;
    u1 = 1.0f;
    if (a7 != 0) {
        u1 = 0.5f;
    }
    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + -15.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + 7.0f), (*(float *)(((0x88 + ((int)stk + 80)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
    sprPutAtAlpha(0x8C33EE10, *(Stk3 *)(((int)stk + 64)), u1);
    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 103.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + 7.0f), (*(float *)(((0x88 + ((int)stk + 80)) + 0x8))));
    *(float *)0x8C33EE70 = (((*(float *)0x8C33EE80) - (*(float *)0x8C33EE78)) * 231.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
    sprPutAtAlpha(0x8C33EE60, *(Stk3 *)(((int)stk + 48)), u1);
    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 221.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + 7.0f), (*(float *)(((0x88 + ((int)stk + 80)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
    sprPutAtAlpha(0x8C33EEB0, *(Stk3 *)(((int)stk + 32)), u1);
    *(unsigned int *)(((int)stk + 80)) = 0x96FFFFFF;
    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 103.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + 0.100000001f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
    primRectIncGradX(0x76, 0x27, 0x1EFFFFFF, (*(int *)(((int)stk + 80))), *(Stk3 *)(((int)stk + 16)));
    *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) + 117.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
    primRectIncGradX(0x76, 0x27, (*(int *)(((int)stk + 80))), 0x1EFFFFFF, *(Stk3 *)(((int)stk + 4)));
    if (a7 != 0) {
        *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 223.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -23.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.00999999978f));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
        primRectIncGradX(0xF1, 0x2F, 0xAA000000, 0xAA000000, *(Stk3 *)(((int)stk + 64)));
        *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 41.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -13.0f), 0.00499999989f);
        hudSignLastPut(1.0f);
        *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 97.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -42.0f), 0.100000001f);
        standBarDraw(0x1F, 0x16, 0x1);
    }
    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 8.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -21.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + 0.100000001f));
    *(Stk3 *)((((int)stk + 76) + 0x2C)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + -26.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -13.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
    if ((*(int *)(((int)stk + 92))) == 0) {
        u45 = *(float *)(((0x88 + ((int)stk + 80)) + 0x0));
        u46 = *(float *)(((0x88 + ((int)stk + 80)) + 0x8));
        u47 = *(float *)(((0x88 + ((int)stk + 80)) + 0x4));
        t48 = *(int *)(((int)stk + 84));
        if ((t48 != 0) && (t48 != 1)) {
            if (t48 != 2) {
                if (t48 != 3) {
                    t51 = t48;
                    if (t48 != 4) {
                    } else {
                        *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake((u45 + -26.0f), (u47 + -13.0f), (u46 + -0.0500000007f));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                        t51 = (hudSignPut((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 68)), 1.0f));
                    }
                    t59 = t51;
                } else {
                    *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake((u45 + -26.0f), (u47 + -13.0f), (u46 + -0.0500000007f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                    t59 = (hudSignPut((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 68)), 1.0f));
                }
                t67 = t59;
            } else {
                *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake((u45 + -26.0f), (u47 + -13.0f), (u46 + -0.0500000007f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                t67 = (hudSignPut((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 68)), 1.0f));
            }
            t75 = t67;
        } else {
            *(Stk3 *)((((int)stk + 80) + 0x4C)) = vecMake((u45 + -26.0f), (u47 + -13.0f), (u46 + -0.0500000007f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
            t75 = (hudSignPut((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 68)), 1.0f));
        }
        t280 = t75;
    } else {
        { struct mv5 { int w[5]; }; *(struct mv5 *)((((int)stk + 80) + 0x14)) = *(struct mv5 *)(0x8C110710); }
        u80 = 1.0f;
        if (a7 != 0) {
            u80 = 0.5f;
        }
        *(float *)(((int)stk + 88)) = ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -15.0f);
        *(unsigned int *)(((int)stk + 80)) = ((*(int *)(((int)stk + 84))) << 2);
        u84 = *(float *)(((0x88 + ((int)stk + 80)) + 0x4));
        t85 = *(int *)(((int)stk + 84));
        if (t85 != 0) {
            if (t85 == 1) {
                *(Stk3 *)((((int)stk + 80) + 0x34)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 38.0f), (*(float *)(((int)stk + 88))), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x40)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x4C)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) - 67.0f);
                *(float *)(((((int)stk + 80) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x4))) - 17.0f);
                *(float *)(((((int)stk + 80) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x0))) - 37.0f);
                *(float *)(((((int)stk + 80) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x4))) - -13.0f);
                if (a7 != 0) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x40)); }
                    t94 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
                    sprPutAtAlpha((((((t94 << 2) + t94) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 68)), 0.509803951f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                    t112 = (hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), u80));
                } else {
                    if (a11 != 1) {
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                        markerShowStart((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 44)));
                    }
                    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 220.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), 0.0799999982f);
                    t112 = (standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28)));
                }
                t220 = t112;
            } else {
                if (t85 == 2) {
                    *(Stk3 *)((((int)stk + 80) + 0x34)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 40.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -12.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x40)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x4C)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                    *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) - 81.0f);
                    *(float *)(((((int)stk + 80) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x4))) - 24.0f);
                    *(float *)(((((int)stk + 80) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x0))) - 38.0f);
                    *(float *)(((((int)stk + 80) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x4))) - -6.0f);
                    if (a7 == 0) {
                        if (a11 != 1) {
                        } else {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                            markerShowStart((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 44)));
                        }
                        *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 220.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), 0.0799999982f);
                        t140 = (standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28)));
                    } else {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x40)); }
                        t135 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
                        sprPutAtAlpha((((((t135 << 2) + t135) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 68)), 0.509803951f);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                        t140 = (hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), u80));
                    }
                    t212 = t140;
                } else {
                    if (t85 == 3) {
                        *(Stk3 *)((((int)stk + 80) + 0x34)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 28.0f), (u84 + -14.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x40)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x4C)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                        *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) - 63.0f);
                        *(float *)(((((int)stk + 80) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x4))) - 18.0f);
                        *(float *)(((((int)stk + 80) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x0))) - 33.0f);
                        *(float *)(((((int)stk + 80) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x4))) - -12.0f);
                        if (a7 != 0) {
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x40)); }
                            t149 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
                            sprPutAtAlpha((((((t149 << 2) + t149) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 68)), 0.509803951f);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                            t167 = (hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), u80));
                        } else {
                            if (a11 == 1) {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                                markerShowStart((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 44)));
                            }
                            *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 220.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), 0.0799999982f);
                            t167 = (standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28)));
                        }
                        t204 = t167;
                    } else {
                        t196 = t85;
                        if (t85 == 4) {
                            *(Stk3 *)((((int)stk + 80) + 0x34)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 29.0f), (u84 + -14.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x40)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x4C)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                            *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) - 61.0f);
                            *(float *)(((((int)stk + 80) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x4))) - 20.0f);
                            *(float *)(((((int)stk + 80) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x0))) - 31.0f);
                            *(float *)(((((int)stk + 80) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x4))) - -10.0f);
                            if (a7 == 0) {
                                if (a11 == 1) {
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                                    markerShowStart((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 44)));
                                }
                                *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 220.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), 0.0799999982f);
                                t194 = (standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28)));
                            } else {
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x40)); }
                                t189 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
                                sprPutAtAlpha((((((t189 << 2) + t189) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 68)), 0.509803951f);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                                t194 = (hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), u80));
                            }
                            t196 = t194;
                        }
                        t204 = t196;
                    }
                    t212 = t204;
                }
                t220 = t212;
            }
            t271 = t220;
        } else {
            *(Stk3 *)((((int)stk + 80) + 0x34)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 49.0f), (*(float *)(((int)stk + 88))), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x8))) + -0.0500000007f));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x40)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 80) + 0x4C)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
            *(float *)(((((int)stk + 80) + 0x4C) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x0))) - 71.0f);
            *(float *)(((((int)stk + 80) + 0x4C) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x4C) + 0x4))) - 17.0f);
            *(float *)(((((int)stk + 80) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x0))) - 41.0f);
            *(float *)(((((int)stk + 80) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 80) + 0x40) + 0x4))) - -13.0f);
            if (a7 == 0) {
                t237 = a11;
                if (a11 == 1) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x28)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 44)) = *(struct mv3 *)((((int)stk + 80) + 0x4C)); }
                    t237 = (markerShowStart((*(int *)(((int)stk + 84))), *(Stk3 *)(((int)stk + 44))));
                }
                t249 = t237;
                if ((*(int *)(((int)stk + 96))) != 0) {
                    *(Stk3 *)(((int)stk + 68)) = vecMake(((*(float *)(((0x88 + ((int)stk + 80)) + 0x0))) + 220.0f), ((*(float *)(((0x88 + ((int)stk + 80)) + 0x4))) + -19.0f), 0.0799999982f);
                    t249 = (standBoxesDraw(0xE9, 0x27, 0x0, 0x0, *(int *)((int)stk + 68), *(int *)((int)stk + 68 + 4), *(int *)((int)stk + 68 + 8), *(int *)((int)stk + 68 + 12), *(int *)((int)stk + 68 + 16), *(int *)((int)stk + 68 + 20), *(int *)((int)stk + 68 + 24), *(int *)((int)stk + 68 + 28)));
                }
                t263 = t249;
            } else {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 80) + 0x40)); }
                t258 = *(int *)(((*(int *)(((int)stk + 80))) + 0x8C1106B4));
                sprPutAtAlpha((((((t258 << 2) + t258) << 2) << 2) + 0x8C33ECD0), *(Stk3 *)(((int)stk + 68)), 0.509803951f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 80) + 0x34)); }
                t263 = (hudFont2DigitPut((*(int *)((((*(int *)(((int)stk + 80))) + (((int)stk + 56) + 0x2C)) + 0x0))), *(Stk3 *)(((int)stk + 56)), u80));
            }
            t271 = t263;
        }
        t280 = t271;
    }
    return t280;
}
