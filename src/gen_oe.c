/* Straight-line functions with calls and guards (batch gen_oe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuBallPredict(int, int, int, int, float, float, float);
int cpuDblMoodUpdate(float);
int cpuDblPartnerSignal(void);
int cpuDblThinkAll(float);
int cpuMeterInput(int);
int cpuPadHistory(int, int, int, int, int, int);
void cpuDblInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6);

void cpuDblInput(int a4, int a5, int a6, int a7, float f4, float f5, float f6)
{
    int stk[21];
    register int t2;
    register int t7;
    register int t8;
    register int t9;
    register float u11;
    register int t28;
    register int t29;
    register int t39;
    register int t43;
    register int t53;
    register int t51;
    register float u56;
    register float u71;
    register float u76;
    register float u82;
    register float u83;
    register float u88;
    register float u89;
    register int t4;
    register int t5;
    register int t12;
    register int t13;
    register float u22;
    register int t15;
    register float u19;
    register int t25;
    register int t61;
    int t81;

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        *(unsigned short *)((a4 + 0xD46)) = 0x0;
        *(unsigned short *)((a4 + 0xD44)) = 0x0;
        t2 = *(int *)0x8C20D19C;
        if ((*(int *)0x8C15A0C8) != t2) {
            *(unsigned int *)0x8C15A0C8 = t2;
            cpuBallPredict(t2, 0x8C15A0C8, a6, a7, f4, f5, f6);
            t7 = 0x8C28A5EC;
            t8 = 0x8C2FCABC;
            t9 = (((int)stk + 4) + 0x30);
            for (;;) {
                if ((unsigned int)t9 < (unsigned int)(((int)stk + 4) + 0xC)) {
                    break;
                }
                t5 = 0xB9C;
                t9 = (t9 - 12);
                t4 = t9;
                t5 = (t5 + t7);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)(t5); }
                t5 = 0x11C;
                t4 = 0xB9C;
                t5 = (t5 + t8);
                t4 = (t4 + t7);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t4) = *(struct mv3 *)(t5); }
                t7 = (t7 - 3448);
                t8 = (t8 - 352);
            }
            cpuPadHistory(t7, t8, t9, 0xFFFFFEA0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
            u11 = *(float *)0x8C291F54;
            if ((u11 == 0.0f) && ((t12 = *(int *)0x8C291F78, (t12 & 4) == 0) && (t13 = *(int *)0x8C291F78, (t13 & 2) == 0))) {
                cpuDblMoodUpdate(u11);
            } else {
                if ((u11 == (1.0f + 1.0f)) && (t15 = *(int *)0x8C291F78, (t15 & 4) != 0)) {
                    cpuDblMoodUpdate(u11);
                } else {
                    u19 = u11;
                }
                u22 = u19;
            }
            cpuDblThinkAll(u22);
            cpuDblPartnerSignal();
            t28 = 0x8C28A5EC;
            t29 = (((int)stk + 4) + 0x24);
            for (;;) {
                if ((unsigned int)t28 < (unsigned int)0x8C287D84) {
                    break;
                }
                t25 = 0xB9C;
                t25 = (t25 + t28);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(t25) = *(struct mv3 *)((t29)); }
                t28 = (t28 - 3448);
                t29 = (t29 - 12);
            }
        }
        if (!(0.0f > (*(float *)0x8C291F54))) {
            t39 = *(int *)((a4 + 0xB5C));
            *(unsigned short *)(((0xD44 + a4) + 0x0)) = (*(short *)((((t39 * 0x160) + 0x8C2FC69C) + 0x1E)));
            *(unsigned short *)((a4 + 0xD46)) = (*(short *)((((t39 * 0x160) + 0x8C2FC69C) + 0x20)));
            *(unsigned short *)((((t39 * 0x160) + 0x8C2FC69C) + 0x22)) = (*(short *)((((t39 * 0x160) + 0x8C2FC69C) + 0x20)));
        } else {
            t43 = *(int *)((a4 + 0xB5C));
            *(unsigned short *)((a4 + 0xD46)) = 0x0;
            *(unsigned short *)((a4 + 0xD44)) = 0x0;
            if ((*(int *)((0x8C287AE0 + ((*(int *)((a4 + 0xB5C))) << 2)))) == 2) {
                t53 = 0x1;
                if ((*(float *)0x8C291F50) > 0.0f) {
                } else {
                    t51 = 0x0;
                    if (0.0f > (*(float *)0x8C291F50)) {
                        t51 = 0xFFFFFFFF;
                    }
                    t53 = t51;
                }
                u56 = *(float *)((a4 + 0xB00));
                if ((t53 == (((-u56) > 0.0f) - (0.0f > (-u56)))) && (t61 = *(int *)((a4 + 0xB60)), (t61 & 0x100) != 0)) {
                    *(unsigned short *)((a4 + 0xD44)) = 0x3;
                }
            }
            u71 = *(float *)0x8C291F50;
            u76 = *(float *)((a4 + 0xB00));
            if ((((u71 > 0.0f) - (0.0f > u71)) == (((-u76) > 0.0f) - (0.0f > (-u76)))) && (t81 = *(short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)), (0xC0 & t81) != 0)) {
                u82 = *(float *)0x8C291F50;
                u83 = *(float *)0x8C291F48;
                u88 = ((*(float *)0x8C291F3C) - ((u83 / u82) * (*(float *)0x8C291F44)));
                u88 = u88 + (*(float *)((a4 + 0xAF0))) * (u83 / u82);
                u89 = *(float *)((a4 + 0xAE8));
                if (((float)((0xC0 & t81) - 96) / (-((*(float *)((a4 + 0xB00))) * 32.0f))) == (float)(((u88 - u89) > 0.0f) - (0.0f > (u88 - u89)))) {
                    *(unsigned short *)((a4 + 0xD46)) = (*(short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)));
                }
            }
            *(unsigned short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)) = (*(short *)((a4 + 0xD46)));
        }
        cpuMeterInput(a4);
    }
}
