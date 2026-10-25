/* Straight-line functions with calls and guards (batch gen_db): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int cpuSglMoodUpdate(int, int, int, int);
int eepromGetDiff(void);
int ndbLoadRequest(void);
int nlRand(void);
int cpuSglInit(int a4, int a5, int a6, float f4, float f5, float f6, float f7);

int cpuSglInit(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int t7;
    int t8;
    int t20;
    int t24;
    int t25;
    int t26;
    int t62;
    int t63;
    int t64;
    int t65;
    float u68;
    float u69;
    float u70;
    float u71;
    int t84;
    int t91;
    int t94;
    int t105;
    int t107;
    int t138;
    int t139;
    int t140;
    int t141;
    int t142;
    int t160;
    int t161;
    int t162;
    int t172;
    float u173;
    int t174;
    int t53;
    int t56;
    int t45;
    int t48;
    int t12;
    int t13;
    int t14;
    int t17;
    int t37;
    int t40;
    int t29;
    int t32;
    float u66;
    float u67;
    int t124;
    int t109;
    int t102;
    int t98;
    int t154;
    int t155;
    float u171;
    float u166;
    int t183;
    int t184;
    int t196;
    int t197;
    int t198;
    int t199;

    *(unsigned int *)0x8C30195C = 0xFFFFFFFF;
    *(unsigned int *)0x8C301958 = 0x0;
    if ((*(int *)0x8C421F60) != 0) {
        *(unsigned int *)0x8C2FCC1C = 0x18;
        t53 = 0x8C421F60;
        t56 = 0x8C301958;
    } else {
        if ((*(int *)0x8C20D14C) == 6) {
            t7 = *(int *)0x8C2FBE20;
            t8 = *(int *)((((((t7 << 2) << 2) + t7) << 2) + 0x8C108E7C));
            *(unsigned int *)0x8C2FCC20 = t8;
            *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)((t8 + (((*(int *)0x8C1891E8) << 2) + 0x8C10D358))));
            if (((*(int *)0x8C40C308) == 0xFFFFFFF) && ((t12 = *(int *)0x8C40C30C, t12 == 0x3FFFF) && (t13 = *(int *)0x8C40C310, t13 == 0x3FF))) {
                *(unsigned int *)0x8C2FCC28 = 0x5;
                t14 = 0x5;
                t17 = 0x3FFFF;
            } else {
                *(unsigned int *)0x8C2FCC28 = 0x4;
                t14 = 0xFFFFFFF;
                t17 = 0x8C10D358;
            }
            *(unsigned int *)0x8C2FCC28 = 0x4;
            t45 = t14;
            t48 = t17;
        } else {
            if ((*(int *)0x8C287D5C) == 0) {
                t20 = eepromGetDiff();
                *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)((0x8C10D4E8 + ((t20 << 1) + (t20 << 2)))));
                t37 = ((t20 << 1) + (t20 << 2));
                t40 = (t20 << 2);
            } else {
                if ((*(int *)0x8C1D136C) == 0) {
                    t24 = *(signed char *)((0x8C10D50C + (eepromGetDiff())));
                    t25 = nlRand();
                    t26 = ((~(((~t25) + 0x1) & 0x1)) + 0x1);
                    if ((int)t25 >= 0) {
                        t26 = (t25 & 0x1);
                    }
                    *(unsigned int *)0x8C2FCC24 = ((unsigned char)t24 + t26);
                    *(unsigned int *)0x8C2FCC1C = ((unsigned char)t24 + t26);
                    t29 = t26;
                    t32 = 0x8C2FCC24;
                } else {
                    *(unsigned int *)0x8C2FCC1C = (*(int *)0x8C2FCC24);
                    *(unsigned int *)0x8C1D136C = 0x0;
                    t29 = 0x8C2FCC24;
                    t32 = 0x8C301958;
                }
                t37 = t29;
                t40 = t32;
            }
            t45 = t37;
            t48 = t40;
        }
        t53 = t45;
        t56 = t48;
    }
    t62 = t53;
    t63 = t56;
    t64 = 0x1;
    t65 = 0x8C2FC69C;
    u68 = f4;
    u69 = f5;
    u70 = f6;
    u71 = f7;
    for (;;) {
        if ((int)t64 < 0) {
            break;
        }
        t62 = (*(int *)0x8C20D14C);
        u68 = 0.0f;
        if (t62 == 6) {
            t63 = (*(int *)0x8C2FCC20);
            t62 = 0x8C042078;
            u71 = (*(float *)((t62 + 0x0)));
            t62 = 0x8C04207C;
            u70 = (*(float *)((t62 + 0x0)));
            t62 = 0x10;
            u69 = 1.0f;
            u67 = (float)t63;
            u66 = u69;
            u67 = (u67 / u70);
            u66 = (u66 - u67);
            u66 = (u66 * u71);
            *(float *)((t65 + t62)) = u66;
        } else {
            t62 = 0x10;
            *(float *)((t65 + t62)) = u68;
        }
        t63 = 0x160;
        t62 = 0x14;
        *(float *)((t65 + t62)) = u68;
        t64 = (t64 - 1);
        t65 = (t65 + t63);
    }
    if ((*(int *)0x8C20D14C) == 6) {
        t84 = *(int *)0x8C2FBE20;
        *(unsigned int *)0x8C2FCC20 = (*(int *)((((((t84 << 2) << 2) + t84) << 2) + 0x8C108E7C)));
        *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)(((*(int *)0x8C2FCC20) + (((*(int *)0x8C1891E8) << 2) + 0x8C10D358))));
        t124 = 0x8C10D358;
    } else {
        if ((*(int *)0x8C287D5C) == 0) {
            t91 = *(short *)0x8C343262;
            if ((0x1 & (unsigned short)t91) != 0) {
                t102 = (*(int *)0x8C343724);
            } else {
                if ((0x10 & (unsigned short)t91) != 0) {
                    t98 = (*(int *)0x8C343728);
                } else {
                    t94 = 0x4D8;
                    if (((unsigned short)t91 & 0x100) != 0) {
                        t94 = 0x4D4;
                    }
                    t98 = (*(int *)((0x8C343258 + t94)));
                }
                t102 = t98;
            }
            t105 = eepromGetDiff();
            *(unsigned int *)0x8C2FCC1C = (unsigned char)(*(signed char *)(((t102 + (0x8C10D4E8 + ((t105 << 1) + (t105 << 2)))) + 0x0)));
        } else {
            t107 = *(int *)0x8C2FCC24;
            *(unsigned int *)0x8C2FCC1C = t107;
            t109 = t107;
        }
        t124 = t109;
    }
    t138 = t124;
    t139 = 0x1;
    t140 = 0x8C287D84;
    t141 = 0x8C2FC69C;
    for (;;) {
        *(float *)((t141 + 0x8)) = 0.0f;
        *(float *)((t141 + 0x0)) = 0.0f;
        *(float *)((t141 + 0x18)) = 1.0f;
        *(unsigned char *)((t141 + 0x1C)) = 0x0;
        *(float *)((t141 + 0x4)) = 0.0f;
        *(unsigned char *)((t141 + 0xAC)) = 0x0;
        *(unsigned char *)((t141 + 0xAD)) = 0x0;
        *(unsigned char *)((t141 + 0xAE)) = 0x0;
        *(unsigned char *)((t141 + 0xAF)) = 0x0;
        *(unsigned char *)((t141 + 0xB0)) = 0x0;
        *(unsigned char *)((t141 + 0xB1)) = 0x0;
        *(unsigned char *)((t141 + 0xB2)) = 0x0;
        *(unsigned short *)((t141 + 0xB4)) = 0x0;
        *(float *)((t141 + 0xC)) = 100.0f;
        *(unsigned char *)((t141 + 0xB6)) = 0x0;
        *(unsigned char *)((t141 + 0xB7)) = 0x0;
        *(unsigned char *)((t141 + 0x12A)) = 0x0;
        *(float *)((t141 + 0x30)) = 0.0f;
        *(float *)((t141 + 0x28)) = 0.0f;
        *(unsigned char *)((t141 + 0x142)) = 0x0;
        *(unsigned short *)((t141 + 0x1E)) = 0x0;
        *(unsigned short *)((t141 + 0x22)) = 0x0;
        *(unsigned short *)((t141 + 0x20)) = 0x0;
        t142 = ((t141 + 0x34) + 0x54);
        for (;;) {
            *(float *)((t142 + 0x8)) = 0.0f;
            *(float *)((t142 + 0x0)) = 0.0f;
            t142 = (t142 - 12);
            if ((unsigned int)t142 < (unsigned int)(t141 + 0x34)) {
                break;
            }
        }
        if ((((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) == 0) && (t154 = *(int *)0x8C287B00, t138 = t154, t155 = *(int *)0x8C287B04, t138 = (t138 + t155), (int)t138 > (int)0x2)) {
            t160 = *(int *)0x8C287B00;
            t161 = *(int *)0x8C287B04;
            t162 = ((~(((~(t160 + t161)) + 0x1) & 0x1)) + 0x1);
            if ((int)(t160 + t161) >= 0) {
                t162 = ((t160 + t161) & 0x1);
            }
            if (t162 == 1) {
                u166 = ((*(float *)((t141 + 0x10))) / 4.0f);
            } else {
                u166 = ((*(float *)((t141 + 0x10))) / (1.0f + 1.0f));
            }
            u171 = u166;
        } else {
            u171 = ((*(float *)((t141 + 0x10))) / (1.0f + 1.0f));
        }
        t138 = 0x8C10D384;
        *(float *)((t141 + 0x10)) = u171;
        t172 = *(int *)(((0xC58 + t140) + 0x0));
        u173 = *(float *)((t141 + 0x14));
        t138 = (t138 + ((t172 << 2) + t172));
        t174 = *(signed char *)((t138 + 0x0));
        *(float *)((t141 + 0x14)) = (u173 - ((float)(unsigned char)t174 * 5.0f));
        if (0.0f > (u173 - ((float)(unsigned char)t174 * 5.0f))) {
            *(float *)((t141 + 0x14)) = 0.0f;
        }
        *(unsigned int *)((t140 + 0xA24)) = 0x4;
        if ((*(int *)0x8C20D14C) == 6) {
            *(unsigned char *)((t141 + 0x12B)) = 0x0;
        } else {
            *(unsigned char *)((t141 + 0x12B)) = 0x0;
            if ((int)(*(int *)0x8C2FCC1C) >= (int)0x4) {
                t138 = (*(int *)((t140 + 0xC58)));
                t138 = (t138 << 2);
                *(unsigned char *)((t141 + 0x12B)) = (*(int *)((t138 + 0x8C159F50)));
            }
            if (((*(int *)0x8C287D5C) == 0) && ((t183 = *(int *)((t140 + 0xC58)), t183 == 16) && (t184 = *(int *)0x8C2FCC1C, t184 == 9))) {
                *(unsigned char *)((t141 + 0x12B)) = 0x2;
            }
        }
        t139 = (t139 - 1);
        t140 = (t140 + 0xD78);
        t141 = (t141 + 0x160);
        if ((int)t139 >= 0) continue;
        break;
    }
    if (((((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + (*(int *)0x8C287B00)) + (*(int *)0x8C287B04)) == 0) {
        ndbLoadRequest();
    } else {
        t196 = 0x8C287B00;
        t197 = 0x8C287B10;
        t198 = t139;
        t199 = 0x2;
    }
    cpuSglMoodUpdate(t196, t197, t198, t199);
    *(unsigned int *)0x8C2FCC60 = 0x0;
    return 0x8C2FCC60;
}
