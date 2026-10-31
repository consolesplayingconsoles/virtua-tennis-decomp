/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];

typedef struct { int w[3]; } Stk3;
int cpuAimPointSet(int, int, float, float);
float cpuDistXZ(int, int);
float cpuLineXAtZ(Stk3, Stk3, float);
int cpuShotRange(int, int, int, int, int);
int cpuDblAimAddCross(int a4, int a5);

int cpuDblAimAddCross(int a4, int a5)
{
    int stk[46];
    int t0;
    float u2;
    float u3;
    float u8;
    int t80;
    float u13;
    float u14;
    float u16;
    float u18;
    float u19;
    float u21;
    int t63;
    int t46;
    float u37;
    float t94;
    int t197;
    float u95;
    float u96;
    float u97;
    float u98;
    float t105;
    float u106;
    float u111;
    float u116;
    float u117;
    float u118;
    float u120;
    float t136;
    float t138;
    float u139;
    float u141;
    float u143;
    float u144;
    float u146;
    int t180;
    int t166;
    float u28;
    float u34;
    float u153;
    float u160;

    *(unsigned int *)(((int)stk + 52)) = a5;
    t0 = *(int *)((a4 + 0xB5C));
    *(int *)((int)stk + 48) = (((int)stk + 52) + 0x28);
    cpuShotRange(a4, (((int)stk + 48) + 0x50), (((int)stk + 48) + 0x44), (((int)stk + 48) + 0x38), (((int)stk + 52) + 0x28));
    u2 = *(float *)((a4 + 0xB9C));
    u3 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    u8 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
    t80 = a5;
    if ((((u2 - u3) > 0.0f) - (0.0f > (u2 - u3))) == (((u2 - u8) > 0.0f) - (0.0f > (u2 - u8)))) {
        u13 = *(float *)((a4 + 0xB9C));
        u14 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        u16 = ((-u13) + u14);
        if (!(0.0f > (u13 - u14))) {
            u16 = (u13 - u14);
        }
        u18 = *(float *)((a4 + 0xAF0));
        u19 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAF0));
        u21 = ((-u18) + u19);
        if (!(0.0f > (u18 - u19))) {
            u21 = (u18 - u19);
        }
        t63 = a5;
        if (u16 > (((u21 * 45.0f) / 237.699997f) + 10.0f)) {
            if (!(0.0f > (u13 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8)))))) {
                u28 = (u13 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8))));
            } else {
                u28 = ((-u13) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8))));
            }
            if (!(0.0f > (u18 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0)))))) {
                u34 = (u18 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
            } else {
                u34 = ((-u18) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
            }
            t46 = a5;
            if (u28 > (((u34 * 45.0f) / 237.699997f) + 10.0f)) {
                u37 = *(float *)((a4 + 0xB9C));
                cpuAimPointSet(a5, 0x1, ((float)((u37 > 0.0f) - (0.0f > u37)) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t46 = (a5 + 0x1);
            }
            t63 = t46;
        }
        t80 = t63;
    }
    t94 = cpuDistXZ((0xAE8 + ((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player)), (0xAE8 + ((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player)));
    t197 = t80;
    if (!(t94 > 30.0f)) {
    } else {
        u95 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        u96 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        *(float *)(((((int)stk + 52) + 0x1C) + 0x0)) = ((u95 + u96) * 0.5f);
        *(float *)(((((int)stk + 52) + 0x1C) + 0x4)) = 0.0f;
        u97 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAF0));
        u98 = *(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0));
        *(float *)(((((int)stk + 52) + 0x1C) + 0x8)) = ((u97 + u98) * 0.5f);
        *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x1C) + 0x0))));
        *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x1C) + 0x8))));
        *(float *)(((((int)stk + 52) + 0x10) + 0x8)) = (*(float *)(((int)stk + 124)));
        *(float *)(((((int)stk + 52) + 0x10) + 0x4)) = 0.0f;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
        t105 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
        *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = t105;
        u106 = *(float *)(((int)stk + 128));
        u111 = *(float *)(((int)stk + 116));
        if ((((t105 - u106) > 0.0f) - (0.0f > (t105 - u106))) == (((t105 - u111) > 0.0f) - (0.0f > (t105 - u111)))) {
            u116 = *(float *)(((((int)stk + 52) + 0x10) + 0x0));
            u117 = *(float *)(((int)stk + 116));
            u118 = ((-u116) + u106);
            if (!(0.0f > (u116 - u106))) {
                u118 = (u116 - u106);
            }
            u120 = ((-u116) + u117);
            if (!(0.0f > (u116 - u117))) {
                u120 = (u116 - u117);
            }
            if (u120 > u118) {
                *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = u106;
            } else {
                *(float *)(((((int)stk + 52) + 0x10) + 0x0)) = u117;
            }
        }
        *(float *)(((((int)stk + 52) + 0x4) + 0x0)) = ((*(float *)((a4 + 0xB9C))) - (*(float *)(((((int)stk + 52) + 0x10) + 0x0))));
        *(float *)(((((int)stk + 52) + 0x4) + 0x4)) = 0.0f;
        *(float *)(((((int)stk + 52) + 0x4) + 0x8)) = ((*(float *)((a4 + 0xBA4))) - (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0xB9C + a4)); }
        t136 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)), (*(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 52) + 0x4)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((0xB9C + a4)); }
        t138 = cpuLineXAtZ(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
        u139 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAE8));
        u141 = ((-t136) + u139);
        if (!(0.0f > (t136 - u139))) {
            u141 = (t136 - u139);
        }
        u143 = *(float *)((a4 + 0xAF0));
        u144 = *(float *)((((((t0 + 0x1) & 0x3) * 0xD78) + (int)Player) + 0xAF0));
        u146 = ((-u143) + u144);
        if (!(0.0f > (u143 - u144))) {
            u146 = (u143 - u144);
        }
        t180 = t80;
        if (u141 > (((u146 * 35.0f) / 237.699997f) + 5.0f)) {
            if (!(0.0f > (t138 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8)))))) {
                u153 = (t138 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8))));
            } else {
                u153 = ((-t138) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAE8))));
            }
            if (!(0.0f > (u143 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0)))))) {
                u160 = (u143 - (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
            } else {
                u160 = ((-u143) + (*(float *)((((((t0 + 0x3) & 0x3) * 0xD78) + (int)Player) + 0xAF0))));
            }
            t166 = t80;
            if (u153 > (((u160 * 35.0f) / 237.699997f) + 5.0f)) {
                cpuAimPointSet(t80, 0x1, (*(float *)(((((int)stk + 52) + 0x10) + 0x0))), (*(float *)(((((int)stk + 52) + 0x10) + 0x8))));
                t166 = (t80 + 0x1);
            }
            t180 = t166;
        }
        t197 = t180;
    }
    return (t197 - (*(int *)(((int)stk + 52))));
}
