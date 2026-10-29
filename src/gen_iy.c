/* Straight-line functions with calls and guards (batch gen_iy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuDblChase(int);
int cpuDblHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblIsMyBall(int);
int cpuDblMove(int);
int cpuDblNetmanPos(int);
int cpuDblReceivePos(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblServe(int);
int cpuDblShot(int);
int cpuDblSwingInput(int);
int cpuGiveUpCheck(int);
int cpuPointOverInput(int);
int cpuStickNudge(int);
int serveGetReceiver(void);
int cpuDblThink(int a4, int a5, int a6, int a7);

int cpuDblThink(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t2;
    register float u5;
    register float u12;
    register float u13;
    register float u21;
    register float u22;
    register int t39;
    register float u47;
    register int t54;
    register int t56;
    register int t60;
    register int t69;
    register int t82;
    register int t16;
    register int t20;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)0x8C20D19C;
    t2 = ((~(((~t1) + 0x1) & 0x1)) + 0x1);
    if ((int)t1 >= 0) {
        t2 = (t1 & 0x1);
    }
    if (t2 != 0) {
        u5 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC));
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = (u5 + (*(float *)0x8C23D204));
    }
    if ((*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC))) > 100.0f) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0xC)) = 100.0f;
    }
    u12 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0));
    u13 = *(float *)0x8C23D204;
    *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = (u12 - u13);
    if (0.0f > (u12 - u13)) {
        *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x0)) = 0.0f;
    }
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) == 0) && (t16 = *(int *)((a4 + 0xB60)), (t16 & 0x100) != 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x1;
    }
    if (((*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2))) != 0) && (t20 = *(int *)((a4 + 0xB60)), (t20 & 0x100) == 0)) {
        *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB2)) = 0x0;
        u21 = *(float *)((a4 + 0xCF4));
        u22 = (-u21);
        if (!(0.0f > u21)) {
            u22 = u21;
        }
        if (u22 > 0.75f) {
            *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0xB7)) = 0x1;
        }
        if ((*(int *)((a4 + 0xA24))) != 2) {
            *(unsigned int *)((a4 + 0xA24)) = 0x4;
        }
    }
    if (((*(int *)0x8C291F78) & 2) != 0) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            cpuDblServe(a4);
        } else {
            t39 = serveGetReceiver();
            if ((*(int *)(((0xB5C + a4) + 0x0))) != t39) {
                cpuDblNetmanPos(a4);
            } else {
                cpuDblReceivePos(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            }
        }
    } else {
        u47 = *(float *)0x8C291F50;
        if ((float)((u47 > 0.0f) - (0.0f > u47)) == (-(*(float *)((a4 + 0xB00))))) {
            t54 = cpuDblHitCheck(a4, 0x4, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t54 != 0) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                cpuDblShot(a4);
            } else {
                t56 = cpuDblIsMyBall(a4);
                if (t56 != 0) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    cpuDblChase(a4);
                } else {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t60 = ((int (*)(int))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D798)))))(a4);
                }
            }
        } else {
            if ((0x4 & (*(int *)0x8C291F78)) != 0) {
                if (!((1.0f + 1.0f) > (*(float *)0x8C291F54))) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t69 = ((int (*)(int, int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D71C)))))(a4, 0x4, u47);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                t82 = ((int (*)(int, int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D71C)))))(a4, 0x4, u47);
            }
        }
    }
    cpuDblMove(a4);
    cpuDblSwingInput(a4);
    cpuStickNudge(a4);
    cpuGiveUpCheck(a4);
    cpuPointOverInput(a4);
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x128)) = 0x1;
    return 0x128;
}
