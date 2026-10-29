/* Straight-line functions with calls and guards (batch gen_ok): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuDistXZ(int, int);
float cpuAimDistRate(int a4, int a5, int a6, int a7, int a8);

float cpuAimDistRate(int a4, int a5, int a6, int a7, int a8)
{
    int stk[31];
    register float u10;
    register float t26;
    register float t29;
    register float u34;
    register float u35;
    register float u36;
    register float u37;
    register float u39;
    register float u40;
    register float u45;
    register int t51;
    register int t52;
    register float u56;
    register float u57;
    register float u62;
    register int t68;
    register int t69;
    register float u72;
    register float u73;
    register float u78;
    register int t84;
    register int t85;
    register float u88;
    register float u89;
    register float u94;
    register int t100;
    register float t103;
    register float t104;
    register int t105;
    register float t111;
    register float t114;
    register int t115;
    register float u116;
    register float t120;
    register int t121;
    register float u122;
    register float t126;
    register int t127;
    register float u128;
    register float u151;
    register float u11;
    register float u21;
    register float u138;

    if ((*(float *)((a5 + 0x0))) == (*(float *)((a4 + 0x0)))) {
        u10 = *(float *)((a5 + 0x0));
        if ((u10 > (*(float *)((a6 + 0x0)))) && (u11 = *(float *)((a7 + 0x0)), u11 > u10)) {
            *(float *)((a8 + 0x0)) = (*(float *)((a5 + 0x0)));
        } else {
            if ((*(float *)((a6 + 0x0))) > (*(float *)((a5 + 0x0)))) {
                u21 = (*(float *)((a6 + 0x0)));
            } else {
                u21 = (*(float *)((a7 + 0x0)));
            }
            *(float *)((a8 + 0x0)) = u21;
        }
        *(float *)((a8 + 0x8)) = (*(float *)((a6 + 0x8)));
        t26 = cpuDistXZ(a5, a8);
        *(float *)(((int)stk + 76)) = (*(float *)((a8 + 0x0)));
        *(float *)(((int)stk + 84)) = (*(float *)((a7 + 0x8)));
        t29 = cpuDistXZ(a5, (((int)stk + 4) + 0x48));
        if (!(t26 > t29)) {
        } else {
            *(float *)((a8 + 0x8)) = (*(float *)((a7 + 0x8)));
        }
        u151 = 0.0f;
    } else {
        u34 = *(float *)((a5 + 0x0));
        u35 = *(float *)((a5 + 0x8));
        u36 = *(float *)((a4 + 0x8));
        u37 = *(float *)((a4 + 0x0));
        u39 = *(float *)((a6 + 0x8));
        u40 = (u36 - (((u35 - u36) / (u34 - u37)) * u37));
        u40 = u40 + (*(float *)((a6 + 0x0))) * ((u35 - u36) / (u34 - u37));
        u45 = *(float *)((a7 + 0x8));
        t51 = 0x0;
        t52 = ((int)stk + 4);
        if ((((u39 - u40) > 0.0f) - (0.0f > (u39 - u40))) != (((u45 - u40) > 0.0f) - (0.0f > (u45 - u40)))) {
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((((int)stk + 4) + 0x8)) = u40;
            t51 = 0x1;
            t52 = (((int)stk + 4) + 0xC);
        }
        u56 = (u36 - (((u35 - u36) / (u34 - u37)) * u37));
        u56 = u56 + (*(float *)((a7 + 0x0))) * ((u35 - u36) / (u34 - u37));
        u57 = *(float *)((a6 + 0x8));
        u62 = *(float *)((a7 + 0x8));
        t68 = t51;
        t69 = t52;
        if ((((u57 - u56) > 0.0f) - (0.0f > (u57 - u56))) != (((u62 - u56) > 0.0f) - (0.0f > (u62 - u56)))) {
            *(float *)((t52 + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)((t52 + 0x8)) = u56;
            t68 = (t51 + 0x1);
            t69 = (t52 + 0xC);
        }
        u72 = *(float *)((a6 + 0x0));
        u73 = *(float *)((a6 + 0x8));
        u78 = *(float *)((a7 + 0x0));
        t84 = t68;
        t85 = t69;
        if ((((u72 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) - (0.0f > (u72 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))))) != (((u78 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) - (0.0f > (u78 - ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))))) {
            *(float *)((t69 + 0x0)) = ((u73 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t69 + 0x8)) = (*(float *)((a6 + 0x8)));
            t84 = (t68 + 0x1);
            t85 = (t69 + 0xC);
        }
        u88 = *(float *)((a7 + 0x8));
        u89 = *(float *)((a6 + 0x0));
        u94 = *(float *)((a7 + 0x0));
        t100 = t84;
        if ((((u89 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) - (0.0f > (u89 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))))) != (((u94 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)))) > 0.0f) - (0.0f > (u94 - ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37))))))) {
            *(float *)((t85 + 0x0)) = ((u88 - (u36 - (((u35 - u36) / (u34 - u37)) * u37))) / ((u35 - u36) / (u34 - u37)));
            *(float *)((t85 + 0x8)) = (*(float *)((a7 + 0x8)));
            t100 = (t84 + 0x1);
        }
        if (t100 != 0) {
            t103 = cpuDistXZ(a5, ((int)stk + 4));
            t104 = cpuDistXZ(a5, (((int)stk + 4) + 0xC));
            t105 = ((int)stk + 4);
            if (t103 > t104) {
                t105 = (((int)stk + 4) + 0xC);
            }
            *(float *)((a8 + 0x0)) = (*(float *)((t105 + 0x0)));
            *(float *)((a8 + 0x8)) = (*(float *)((t105 + 0x8)));
            u138 = 0.0f;
        } else {
            *(float *)((((int)stk + 4) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)((((int)stk + 4) + 0x8)) = (*(float *)((a6 + 0x8)));
            t111 = cpuDistXZ(((int)stk + 4), a5);
            *(float *)(((((int)stk + 4) + 0xC) + 0x0)) = (*(float *)((a6 + 0x0)));
            *(float *)(((((int)stk + 4) + 0xC) + 0x8)) = (*(float *)((a7 + 0x8)));
            t114 = cpuDistXZ((((int)stk + 4) + 0xC), a5);
            t115 = 0x0;
            u116 = t111;
            if (t111 > t114) {
                t115 = 0x1;
                u116 = t114;
            }
            *(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)((((((int)stk + 4) + 0xC) + 0xC) + 0x8)) = (*(float *)((a6 + 0x8)));
            t120 = cpuDistXZ(((((int)stk + 4) + 0xC) + 0xC), a5);
            t121 = t115;
            u122 = u116;
            if (u116 > t120) {
                t121 = 0x2;
                u122 = t120;
            }
            *(float *)(((((((int)stk + 4) + 0xC) + 0xC) + 0xC) + 0x0)) = (*(float *)((a7 + 0x0)));
            *(float *)(((((((int)stk + 4) + 0xC) + 0xC) + 0xC) + 0x8)) = (*(float *)((a7 + 0x8)));
            t126 = cpuDistXZ((((((int)stk + 4) + 0xC) + 0xC) + 0xC), a5);
            t127 = t121;
            u128 = u122;
            if (u122 > t126) {
                t127 = 0x3;
                u128 = t126;
            }
            *(float *)(((int)stk + 76)) = (*(float *)((((((t127 << 1) + t127) << 2) + ((int)stk + 4)) + 0x0)));
            *(float *)(((int)stk + 80)) = 0.0f;
            *(float *)(((int)stk + 84)) = (*(float *)((((((t127 << 1) + t127) << 2) + ((int)stk + 4)) + 0x8)));
            u138 = u128;
        }
        u151 = u138;
    }
    return u151;
}
