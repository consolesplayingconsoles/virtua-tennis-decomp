/* Straight-line functions with calls and guards (batch gen_hv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuBallPredict(int, int);
int cpuDblMoodUpdate(float);
int cpuDblPartnerSignal(void);
int cpuDblThinkAll(void);
int cpuMeterInput(int);
int cpuPadHistory(int, int, int, int, int, int);
void cpuDblInput(int a4, int a5, int a6);

void cpuDblInput(int a4, int a5, int a6)
{
    int t2;
    int t7;
    int t8;
    int t9;
    float u11;
    int t28;
    int t29;
    int t39;
    int t43;
    int t53;
    int t51;
    float u56;
    int t59;
    int t57;
    float u71;
    int t74;
    int t72;
    float u76;
    int t79;
    int t77;
    float u82;
    float u83;
    float u87;
    float u88;
    float u89;
    int t92;
    int t90;
    int t4;
    int t5;
    int t12;
    int t13;
    int t15;
    int t25;
    int t61;
    int t81;
    int stk[21];

    if ((*(int *)0x8C287C60) != 0) {
    } else {
        *(unsigned short *)((a4 + 0xD46)) = 0x0;
        *(unsigned short *)((a4 + 0xD44)) = 0x0;
        t2 = *(int *)0x8C20D19C;
        if ((*(int *)0x8C15A0C8) != t2) {
            *(unsigned int *)0x8C15A0C8 = t2;
            cpuBallPredict(t2, 0x8C15A0C8);
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
                }
            }
            cpuDblThinkAll();
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
                t59 = 0x1;
                if ((-u56) > 0.0f) {
                } else {
                    t57 = 0x0;
                    if (0.0f > (-u56)) {
                        t57 = 0xFFFFFFFF;
                    }
                    t59 = t57;
                }
                if ((t53 == t59) && (t61 = *(int *)((a4 + 0xB60)), (t61 & 0x100) != 0)) {
                    *(unsigned short *)((a4 + 0xD44)) = 0x3;
                }
            }
            u71 = *(float *)0x8C291F50;
            t74 = 0x1;
            if (u71 > 0.0f) {
            } else {
                t72 = 0x0;
                if (0.0f > u71) {
                    t72 = 0xFFFFFFFF;
                }
                t74 = t72;
            }
            u76 = *(float *)((a4 + 0xB00));
            t79 = 0x1;
            if ((-u76) > 0.0f) {
            } else {
                t77 = 0x0;
                if (0.0f > (-u76)) {
                    t77 = 0xFFFFFFFF;
                }
                t79 = t77;
            }
            if ((t74 == t79) && (t81 = *(short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)), (0xC0 & t81) != 0)) {
                u82 = *(float *)0x8C291F50;
                u83 = *(float *)0x8C291F48;
                u87 = *(float *)((a4 + 0xB00));
                u88 = ((*(float *)0x8C291F3C) - ((u83 / u82) * (*(float *)0x8C291F44)));
                u88 = u88 + (*(float *)((a4 + 0xAF0))) * (u83 / u82);
                u89 = *(float *)((a4 + 0xAE8));
                t92 = 0x1;
                if ((u88 - u89) > 0.0f) {
                } else {
                    t90 = 0x0;
                    if (0.0f > (u88 - u89)) {
                        t90 = 0xFFFFFFFF;
                    }
                    t92 = t90;
                }
                if (((float)((0xC0 & t81) - 96) / (-(u87 * 32.0f))) == (float)t92) {
                    *(unsigned short *)((a4 + 0xD46)) = (*(short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)));
                }
            }
            *(unsigned short *)((((t43 * 0x160) + 0x8C2FC69C) + 0x22)) = (*(short *)((a4 + 0xD46)));
        }
        cpuMeterInput(a4);
    }
}
