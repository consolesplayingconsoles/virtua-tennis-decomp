/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int angBlend(int, int, float);
int angLerp(int, int, float);
float easeSin(int, float, float, float);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushUnitMatrix(void);
int nlRotateAX(int);
int nlRotateAY(int);
float nlSin(int);
int nlTranslate(float, float, float);
int vecAnglesTo(int, int, Stk3, Stk3);
int vecOrbit(int, int, int, int, int, int, int, int, float);
void camExec(void);

void camExec(void)
{
    int t0;
    float u3;
    float t9;
    float u18;
    float u21;
    float u22;
    int t23;
    int t24;
    float u28;
    float u29;
    float u32;
    float u33;
    float u36;
    int t44;
    float u57;
    float u74;
    float u79;
    float u84;
    float u110;
    float u112;
    float u113;
    int t115;
    float u118;
    int t119;
    float u122;
    int t123;
    float u126;
    float t131;
    float u134;
    float u135;
    float u138;
    float u139;
    float u142;
    float u146;
    float u151;
    float u156;
    float u196;
    float u197;
    int t198;
    float u200;
    float u201;
    int t63;
    int t64;
    float u68;
    int stk[39];

    t0 = *(int *)0x8C287634;
    if (t0 == -1) {
        { struct mv16 { int w[16]; }; *(struct mv16 *)(0x8C2878F8) = *(struct mv16 *)(0x8C2879B8); }
    } else {
        u3 = *(float *)0x8C287614;
        if (u3 > 1.0f) {
            *(unsigned int *)0x8C287638 = ((*(int *)0x8C287638) + 0x1);
            t9 = easeSin((*(int *)0x8C287638), (*(float *)0x8C28761C), 1.0f, (*(float *)0x8C287614));
            *(float *)0x8C28761C = t9;
            if ((*(int *)0x8C287634) == 0) {
                *(unsigned short *)0x8C287648 = (angBlend((*(short *)0x8C287644), (*(short *)0x8C28764E), t9));
                *(unsigned short *)0x8C28764A = (angBlend((*(short *)0x8C287646), (*(short *)0x8C287650), (*(float *)0x8C28761C)));
                u18 = *(float *)0x8C28761C;
                u21 = ((*(float *)0x8C28762C) * u18);
                u21 = u21 + ((-u18) + 1.0f) * (*(float *)0x8C287624);
                *(float *)0x8C287628 = u21;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C2875CC); }
                u22 = *(float *)0x8C287628;
                t23 = *(short *)0x8C28764A;
                t24 = *(short *)0x8C287648;
                *(int *)((int)stk + 12) = 0x8C2875C0;
                vecOrbit(t24, t23, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), (-u22));
            } else {
                u28 = ((*(float *)0x8C2875F0) * t9);
                u28 = u28 + ((-t9) + 1.0f) * (*(float *)0x8C2875D8);
                *(float *)0x8C2875C0 = u28;
                u29 = *(float *)0x8C28761C;
                u32 = ((*(float *)0x8C2875F4) * u29);
                u32 = u32 + ((-u29) + 1.0f) * (*(float *)0x8C2875DC);
                *(float *)0x8C2875C4 = u32;
                u33 = *(float *)0x8C28761C;
                u36 = ((*(float *)0x8C2875F8) * u33);
                u36 = u36 + ((-u33) + 1.0f) * (*(float *)0x8C2875E0);
                *(float *)0x8C2875C8 = u36;
            }
        } else {
            if (t0 == 0) {
                t44 = *(short *)0x8C28764E;
                if (u3 == 1.0f) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C2875FC); }
                    t63 = t44;
                    t64 = (*(short *)0x8C287650);
                    u68 = (-(*(float *)0x8C28762C));
                } else {
                    *(unsigned short *)0x8C287648 = (angLerp((*(short *)0x8C287648), t44, u3));
                    *(unsigned short *)0x8C28764A = (angLerp((*(short *)0x8C28764A), (*(short *)0x8C287650), (*(float *)0x8C287614)));
                    u57 = (*(float *)0x8C287628);
                    u57 = u57 + (*(float *)0x8C287614) * ((*(float *)0x8C28762C) - (*(float *)0x8C287628));
                    *(float *)0x8C287628 = u57;
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C2875CC); }
                    t63 = (*(short *)0x8C287648);
                    t64 = (*(short *)0x8C28764A);
                    u68 = (-(*(float *)0x8C287628));
                }
                *(int *)((int)stk + 12) = 0x8C2875C0;
                vecOrbit(t63, t64, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), u68);
            } else {
                if (u3 == 1.0f) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875C0) = *(struct mv3 *)(0x8C2875F0); }
                } else {
                    u74 = (*(float *)0x8C2875C0);
                    u74 = u74 + u3 * ((*(float *)0x8C2875F0) - (*(float *)0x8C2875C0));
                    *(float *)0x8C2875C0 = u74;
                    u79 = (*(float *)0x8C2875C4);
                    u79 = u79 + (*(float *)0x8C287614) * ((*(float *)0x8C2875F4) - (*(float *)0x8C2875C4));
                    *(float *)0x8C2875C4 = u79;
                    u84 = (*(float *)0x8C2875C8);
                    u84 = u84 + (*(float *)0x8C287614) * ((*(float *)0x8C2875F8) - (*(float *)0x8C2875C8));
                    *(float *)0x8C2875C8 = u84;
                }
            }
        }
        u110 = *(float *)0x8C287618;
        if (!(10000.0f > u110)) {
            *(unsigned int *)0x8C28763C = ((*(int *)0x8C28763C) + 0x1);
            u112 = *(float *)0x8C287618;
            u113 = (u112 + -10000.0f);
            if (1.0f > (u112 + -10000.0f)) {
                u113 = 1.0f;
            }
            t115 = *(int *)0x8C28763C;
            u118 = ((*(float *)0x8C2875FC) * (float)t115);
            u118 = u118 + (u113 - (float)t115) * (*(float *)0x8C2875E4);
            *(float *)0x8C2875CC = (u118 / u113);
            t119 = *(int *)0x8C28763C;
            u122 = ((*(float *)0x8C287600) * (float)t119);
            u122 = u122 + (u113 - (float)t119) * (*(float *)0x8C2875E8);
            *(float *)0x8C2875D0 = (u122 / u113);
            t123 = *(int *)0x8C28763C;
            u126 = ((*(float *)0x8C287604) * (float)t123);
            u126 = u126 + (u113 - (float)t123) * (*(float *)0x8C2875EC);
            *(float *)0x8C2875D4 = (u126 / u113);
        } else {
            if (u110 > 1.0f) {
                *(unsigned int *)0x8C28763C = ((*(int *)0x8C28763C) + 0x1);
                t131 = easeSin((*(int *)0x8C28763C), (*(float *)0x8C287620), 1.0f, (*(float *)0x8C287618));
                *(float *)0x8C287620 = t131;
                u134 = ((*(float *)0x8C2875FC) * t131);
                u134 = u134 + ((-t131) + 1.0f) * (*(float *)0x8C2875E4);
                *(float *)0x8C2875CC = u134;
                u135 = *(float *)0x8C287620;
                u138 = ((*(float *)0x8C287600) * u135);
                u138 = u138 + ((-u135) + 1.0f) * (*(float *)0x8C2875E8);
                *(float *)0x8C2875D0 = u138;
                u139 = *(float *)0x8C287620;
                u142 = ((*(float *)0x8C287604) * u139);
                u142 = u142 + ((-u139) + 1.0f) * (*(float *)0x8C2875EC);
                *(float *)0x8C2875D4 = u142;
            } else {
                if (u110 == 1.0f) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875CC) = *(struct mv3 *)(0x8C2875FC); }
                } else {
                    u146 = (*(float *)0x8C2875CC);
                    u146 = u146 + u110 * ((*(float *)0x8C2875FC) - (*(float *)0x8C2875CC));
                    *(float *)0x8C2875CC = u146;
                    u151 = (*(float *)0x8C2875D0);
                    u151 = u151 + (*(float *)0x8C287618) * ((*(float *)0x8C287600) - (*(float *)0x8C2875D0));
                    *(float *)0x8C2875D0 = u151;
                    u156 = (*(float *)0x8C2875D4);
                    u156 = u156 + (*(float *)0x8C287618) * ((*(float *)0x8C287604) - (*(float *)0x8C2875D4));
                    *(float *)0x8C2875D4 = u156;
                }
            }
        }
        if ((int)(*(int *)0x8C287630) > 0) {
            *(unsigned int *)0x8C287630 = ((*(int *)0x8C287630) - 1);
        }
        nlPushUnitMatrix();
        nlTranslate((*(float *)0x8C287608), (*(float *)0x8C28760C), (*(float *)0x8C287610));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C2875C0); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C2875CC); }
        vecAnglesTo((((int)stk + 4) + 0x18), (((int)stk + 4) + 0x1C), *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
        nlRotateAX((-(unsigned short)(*(short *)(((int)stk + 28)))));
        nlRotateAY((-(unsigned short)(*(short *)(((int)stk + 32)))));
        u196 = *(float *)0x8C2875C8;
        *(float *)(((int)stk + 24)) = (-u196);
        u197 = *(float *)0x8C2875C4;
        t198 = *(int *)0x8C287630;
        *(unsigned int *)(((int)stk + 36)) = t198;
        u200 = *(float *)0x8C2875C0;
        u201 = ((float)t198 * (nlSin(((((t198 << 8) << 2) << 2) << 2))));
        nlTranslate((-u200), ((-u197) - (u201 * 0.100000001f)), (-u196));
        nlGetMatrix(0x8C2878F8);
        nlPopMatrix(0x1);
    }
}
