/* Straight-line functions with calls and guards (batch gen_tr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuGiveUpCheck(int);
int cpuPointOverInput(int);
int cpuSglChase(int);
int cpuSglHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglMove(int);
int cpuSglReceivePos(int, float, float);
int cpuSglServe(int);
int cpuSglShot(int);
int cpuSglSwingInput(int);
int cpuStickNudge(int);
int cpuSglThink(int a4, int a5, int a6, int a7, float f4, float f5);

int cpuSglThink(int a4, int a5, int a6, int a7, float f4, float f5)
{
    int stk[7];
    int t0;
    int t1;
    int t2;
    float u5;
    float u12;
    float u13;
    float u34;
    float u21;
    float u22;
    float u42;
    int t49;
    int t54;
    int t64;
    int t76;
    int t16;
    int t20;

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
    u34 = 100.0f;
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
        u34 = u21;
    }
    if (((*(int *)0x8C291F78) & 2) != 0) {
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
        *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            cpuSglServe(a4);
        } else {
            cpuSglReceivePos(a4, u34, f5);
        }
    } else {
        u42 = *(float *)0x8C291F50;
        if ((float)((u42 > 0.0f) - (0.0f > u42)) == (-(*(float *)((a4 + 0xB00))))) {
            t49 = cpuSglHitCheck(a4, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            if (t49 != 0) {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                if ((*(int *)((a4 + 0xA24))) != 1) {
                    cpuSglShot(a4);
                } else {
                    t54 = ((int (*)(int))((*(int *)((((unsigned char)(*(signed char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x129))) << 2) + 0x8C10D574)))))(a4);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                cpuSglChase(a4);
            }
        } else {
            if ((0x4 & (*(int *)0x8C291F78)) != 0) {
                if (!((1.0f + 1.0f) > (*(float *)0x8C291F54))) {
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                    *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                    t64 = ((int (*)(int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D510)))))(a4, u42);
                }
            } else {
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = 0x0;
                *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x1E)) = 0x0;
                t76 = ((int (*)(int, float))((*(int *)((((*(int *)0x8C2FCC1C) << 2) + 0x8C10D510)))))(a4, u42);
            }
        }
    }
    cpuSglMove(a4);
    cpuSglSwingInput(a4);
    cpuStickNudge(a4);
    cpuGiveUpCheck(a4);
    cpuPointOverInput(a4);
    if (((*(int *)0x8C291F78) & 2) == 0) {
        if ((int)(*(short *)((0x8C2FC7B4 + ((((*(int *)((a4 + 0xB5C))) + 0x1) & 0x1) * 0x160)))) < (int)0x14) {
            *(unsigned short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20)) = ((*(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x20))) & 0xFFFFFFDF);
        }
    }
    *(unsigned char *)((((t0 * 0x160) + 0x8C2FC69C) + 0x128)) = 0x1;
    return 0x128;
}
