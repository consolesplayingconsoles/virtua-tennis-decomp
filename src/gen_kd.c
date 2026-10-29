/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float cpuDblCoverPos(int a4);

float cpuDblCoverPos(int a4)
{
    int t0;
    int t1;
    int t2;
    float u5;
    float u6;
    float u7;
    float u8;
    float u10;
    float u12;
    float u24;
    float u25;
    float u27;
    float u72;
    float u30;
    int t33;
    int t31;
    float u36;
    int t41;
    float u38;
    int t39;
    float u46;
    float u48;
    float u51;
    float u52;
    float u54;
    float u57;
    int t75;
    int t78;
    int t76;
    float u81;
    int t86;
    float u83;
    int t84;
    float u92;
    int t93;
    int t96;
    int t94;
    float u99;
    int t104;
    float u101;
    int t102;
    float u112;
    float u125;
    float u127;
    float u172;
    float u130;
    int t133;
    int t131;
    int t141;
    int t139;
    float u146;
    float u148;
    float u151;
    float u152;
    float u154;
    float u157;
    float u180;
    float u190;
    float u185;
    float u193;
    float u194;
    int t197;
    int t195;
    float u200;
    float u203;
    int t209;
    int t207;
    float u213;
    float u215;
    int t22;
    float u63;
    float u122;
    float u163;

    t0 = *(int *)((a4 + 0xB5C));
    t1 = *(int *)((a4 + 0xB5C));
    t2 = *(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C));
    u5 = *(float *)((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102450));
    u6 = ((float)(*(signed char *)0x8C2FD924) * 0.00999999978f);
    u6 = u6 + 0.0500000007f * (((u5 / 1.04999995f) + (-1.0f)) / 0.0500000007f);
    u7 = *(float *)((a4 + 0xAF0));
    u8 = *(float *)0x8C291F84;
    u10 = (-u7);
    if (!(0.0f > u7)) {
        u10 = (*(float *)((a4 + 0xAF0)));
    }
    u12 = (-u8);
    if (!(0.0f > u8)) {
        u12 = u8;
    }
    if (u12 > u10) {
        t22 = (*(signed char *)(((0x8C15A0D0 + ((*(int *)((a4 + 0xC58))) << 1)) + 0x0)));
    } else {
        t22 = (*(signed char *)(((0x8C15A0D0 + ((*(int *)((a4 + 0xC58))) << 1)) + 0x1)));
    }
    u24 = u6;
    u24 = u24 + 0.0199999996f * (float)t22;
    u25 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
    u27 = (-u25);
    if (!(0.0f > u25)) {
        u27 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
    }
    u72 = u24;
    if (u27 > 0.25f) {
        u30 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
        t33 = 0x1;
        if (u30 > 0.0f) {
        } else {
            t31 = 0x0;
            if (0.0f > u30) {
                t31 = 0xFFFFFFFF;
            }
            t33 = t31;
        }
        u36 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t41 = 0x1;
        if ((u36 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
        } else {
            u38 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t39 = 0x0;
            if (0.0f > (u38 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
                t39 = 0xFFFFFFFF;
            }
            t41 = t39;
        }
        if (t33 == t41) {
            u46 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
            u48 = (-u46);
            if (!(0.0f > u46)) {
                u48 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
            }
            u51 = u24;
            u51 = u51 + 0.00999999978f * (u48 * (float)(*(signed char *)0x8C2FD92A));
            u63 = u51;
        } else {
            u52 = *(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28));
            u54 = (-u52);
            if (!(0.0f > u52)) {
                u54 = (*(float *)(((0x8C2FC69C + (t2 * 0x160)) + 0x28)));
            }
            u57 = (u54 * (float)(*(signed char *)0x8C2FD92B));
            u63 = (u24 - (u57 * 0.00999999978f));
        }
        u72 = u63;
    }
    t75 = *(int *)(((0x8C2FC69C + (t2 * 0x160)) + 0x158));
    t78 = 0x1;
    if ((int)t75 > 0) {
    } else {
        t76 = 0x0;
        if ((int)t75 < 0) {
            t76 = 0xFFFFFFFF;
        }
        t78 = t76;
    }
    u81 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    t86 = 0x1;
    if ((u81 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
    } else {
        u83 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t84 = 0x0;
        if (0.0f > (u83 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
            t84 = 0xFFFFFFFF;
        }
        t86 = t84;
    }
    if (t78 == t86) {
        u92 = u72;
        u92 = u92 + 0.00999999978f * (float)(*(signed char *)0x8C2FD92C);
        u122 = u92;
    } else {
        t93 = *(int *)(((0x8C2FC69C + (t2 * 0x160)) + 0x158));
        t96 = 0x1;
        if ((int)t93 > 0) {
        } else {
            t94 = 0x0;
            if ((int)t93 < 0) {
                t94 = 0xFFFFFFFF;
            }
            t96 = t94;
        }
        u99 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
        t104 = 0x1;
        if ((u99 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C)))) > 0.0f) {
        } else {
            u101 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
            t102 = 0x0;
            if (0.0f > (u101 - (*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C))))) {
                t102 = 0xFFFFFFFF;
            }
            t104 = t102;
        }
        u112 = u72;
        if (t96 == (-t104)) {
            u112 = (u72 - ((float)(*(signed char *)0x8C2FD92D) * 0.00999999978f));
        }
        u122 = u112;
    }
    u125 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
    u127 = (-u125);
    if (!(0.0f > u125)) {
        u127 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
    }
    u172 = u122;
    if (u127 > 0.25f) {
        u130 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
        t133 = 0x1;
        if (u130 > 0.0f) {
        } else {
            t131 = 0x0;
            if (0.0f > u130) {
                t131 = 0xFFFFFFFF;
            }
            t133 = t131;
        }
        t141 = 0x1;
        if (((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C)))) > 0.0f) {
        } else {
            t139 = 0x0;
            if (0.0f > ((*(float *)((a4 + 0xAE8))) - (*(float *)((a4 + 0xB9C))))) {
                t139 = 0xFFFFFFFF;
            }
            t141 = t139;
        }
        if (t133 == (-t141)) {
            u146 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u148 = (-u146);
            if (!(0.0f > u146)) {
                u148 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
            }
            u151 = u122;
            u151 = u151 + 0.00999999978f * (u148 * (float)(*(signed char *)0x8C2FD926));
            u163 = u151;
        } else {
            u152 = *(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28));
            u154 = (-u152);
            if (!(0.0f > u152)) {
                u154 = (*(float *)((((t1 * 0x160) + 0x8C2FC69C) + 0x28)));
            }
            u157 = (u154 * (float)(*(signed char *)0x8C2FD927));
            u163 = (u122 - (u157 * 0.00999999978f));
        }
        u172 = u163;
    }
    u180 = u172;
    if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
        u180 = (u172 - ((float)(*(signed char *)0x8C2FD928) * 0.00999999978f));
    }
    u190 = u180;
    if ((0x100 & (*(int *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB60)))) != 0) {
        u185 = u180;
        u185 = u185 + 0.00999999978f * (float)(*(signed char *)0x8C2FD92E);
        u190 = u185;
    }
    u193 = *(float *)((a4 + 0xAE8));
    u194 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8));
    t197 = 0x1;
    if ((u193 - u194) > 0.0f) {
    } else {
        t195 = 0x0;
        if (0.0f > (u193 - u194)) {
            t195 = 0xFFFFFFFF;
        }
        t197 = t195;
    }
    u200 = *(float *)0x8C287B40;
    u203 = u190;
    u203 = u203 + (float)(*(signed char *)0x8C2FD929) * (((float)t197 * (*(float *)((a4 + 0xB9C)))) / u200);
    t209 = 0x1;
    if (((*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8))) - (*(float *)((a4 + 0xAE8)))) > 0.0f) {
    } else {
        t207 = 0x0;
        if (0.0f > ((*(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xAE8))) - (*(float *)((a4 + 0xAE8))))) {
            t207 = 0xFFFFFFFF;
        }
        t209 = t207;
    }
    u213 = *(float *)(((((0x3 & (t0 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB9C));
    u215 = (((float)t209 * u213) / u200);
    return (u203 - (u215 * (float)(*(signed char *)0x8C2FD92F)));
}
