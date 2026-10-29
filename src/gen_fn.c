/* Straight-line functions with calls and guards (batch gen_fn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ballMarkCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int courtAusDraw(int, int, int, int, int, int, int, int, int, int, int, int);
int courtPropsDraw(void);
int fadeOverlayStart(void);
int hudChangeEnds(void);
int hudPlayerMarkers(int, int, int, int, int, int, int, int, int, int, int);
int matchPlayersXInside(void);
int menuResultExec(int, int, int, int, int, int);
int resultExec(void);
int resultTallyStart(void);
int scoreUpdate(void);
int texPicPut(float);
int matchSceneExec(int a4);

int matchSceneExec(int a4)
{
    register int t4;
    register int t33;
    register int t88;
    register int t80;
    register int t117;
    register int t197;
    register int t198;
    register int t199;
    register int t200;
    register int t202;
    register int t203;
    register int t204;
    register int t205;
    register int t206;
    register int t207;
    register int t208;
    register int t209;
    register int t210;
    register int t211;
    register int t212;
    register int t213;
    register int t214;
    register int t215;
    register int t216;
    register int t226;
    register int t252;
    register int t231;
    register int t248;
    register int t235;
    register int t243;
    register float u236;
    register int t237;
    register float u238;
    register float u240;
    register int t259;
    register int t7;
    register float u29;
    register int t30;
    register int t31;
    register int t32;
    register int t34;
    register int t68;
    register int t93;
    register int t125;
    register int t109;
    register int t136;
    register int t146;
    register int t154;
    register int t222;
    register int t232;
    int stk[9];

    if ((*(int *)0x8C181760) != 0) {
    } else {
        t4 = *(int *)0x8C34B148;
        if (t4 != (*(int *)0x8C18D2BC)) {
            *(unsigned int *)0x8C18D2C0 = 0x1;
        } else {
            *(unsigned int *)0x8C18D2C0 = 0x0;
        }
        *(unsigned int *)0x8C18D2BC = t4;
        if (((*(int *)0x8C20D14C) == 3) && (t7 = *(int *)0x8C402CAC, t7 == 0)) {
        } else {
            courtPropsDraw();
        }
        if ((*(int *)0x8C20D14C) == 3) {
            *(unsigned int *)0x8C18D2C0 = 0x1;
            if ((*(int *)0x8C407FD0) != 0) {
                *(unsigned int *)0x8C18D2C4 = 0x1;
            } else {
                *(unsigned int *)0x8C18D2C4 = 0x0;
            }
        } else {
            if ((*(int *)0x8C18D2C0) != 0) {
                if (((*(int *)0x8C287B6C) != 3) && ((u29 = *(float *)0x8C287A04, 4.0f > u29) && ((t30 = *(int *)0x8C287B3C, (t30 & 1) == 0) && ((t31 = *(int *)0x8C287B3C, (t31 & 64) == 0) && (t32 = *(int *)0x8C421F60, t32 == 0))))) {
                    t33 = matchPlayersXInside();
                    if ((t33 != 0) && (t34 = *(int *)0x8C18D2CC, t34 == 0)) {
                        *(unsigned int *)0x8C18D2C4 = 0x1;
                    } else {
                        *(unsigned int *)0x8C18D2C4 = 0x0;
                    }
                } else {
                    *(unsigned int *)0x8C18D2C4 = 0x0;
                }
            }
            if (!(5.0f > (*(float *)0x8C287A04))) {
                *(unsigned int *)0x8C18D2C4 = 0x0;
            }
        }
        *(unsigned int *)0x8C18D2C4 = ((*(int *)0x8C18D2C4) | (*(int *)0x8C34B4F0));
        if (t4 == 0) {
            *(unsigned int *)0x8C18D2B4 = ((*(int *)0x8C18D2B4) + 0x1);
        } else {
            *(unsigned int *)0x8C18D2B4 = 0x0;
        }
        if (((*(int *)0x8C18D2B4) == 1) && (t4 == 0)) {
            fadeOverlayStart();
        } else {
            t68 = 0x8C18D2B4;
        }
        t88 = t68;
        if ((*(int *)0x8C287B44) == 5) {
            t80 = t68;
            if ((*(int *)0x8C1846DC) != 0) {
                *(unsigned int *)0x8C1846DC = 0x0;
                hudChangeEnds();
                *(unsigned int *)0x8C18D2B8 = ((*(int *)0x8C18D2B8) + 0x1);
                t80 = 0x8C18D2B8;
            }
            t88 = t80;
        }
        if (((*(int *)0x8C421F60) == 0) && (t93 = *(int *)0x8C20D14C, t93 == 2)) {
            hudPlayerMarkers(t88, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            scoreUpdate();
        } else {
            t117 = t88;
            if ((*(int *)0x8C287D5C) == 2) {
                if ((*(int *)0x8C20D14C) == 6) {
                    hudPlayerMarkers(t88, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
                    scoreUpdate();
                } else {
                    t109 = t88;
                }
                t117 = t109;
            }
            t125 = t117;
        }
        if ((*(int *)0x8C181758) == 1) {
            if ((*(int *)0x8C287B4C) == 0x95) {
                resultExec();
            } else {
                t136 = t125;
            }
            if ((*(int *)0x8C287B4C) == 65) {
                resultTallyStart();
            } else {
                t146 = t136;
            }
            if ((*(int *)0x8C181758) == 1) {
                if (((*(int *)0x8C287D5C) == 1) && (t154 = *(int *)0x8C287B4C, t154 == 5)) {
                    menuResultExec(t146, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
                }
            }
        }
        if ((*(int *)0x8C181758) == 2) {
            if ((*(int *)0x8C287B2C) == 0x419) {
                resultExec();
            }
        }
        t197 = *(int *)0x8C18D2C4;
        t198 = *(int *)0x8C1891E8;
        if ((unsigned int)t198 >= (unsigned int)0x12) {
            t222 = t197;
        } else {
            switch ((t198 << 1)) {
                case 0:
                {
                    t199 = ((int (*)(int))(0x8C0B7070))(t197);
                }
                    break;
                case 2:
                {
                    t200 = ((int (*)(int))(0x8C0B7FBE))(t197);
                }
                    break;
                case 4:
                {
                    courtAusDraw(t197, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                }
                    break;
                case 6:
                {
                    t202 = ((int (*)(int))(0x8C0B8FE4))(t197);
                }
                    break;
                case 8:
                {
                    t203 = ((int (*)(int))(0x8C0BA302))(t197);
                }
                    break;
                case 10:
                {
                    t204 = ((int (*)(int))(0x8C0C2A7A))(t197);
                }
                    break;
                case 12:
                {
                    t205 = ((int (*)(int))(0x8C0C313E))(t197);
                }
                    break;
                case 14:
                {
                    t206 = ((int (*)(int))(0x8C0C37FE))(t197);
                }
                    break;
                case 16:
                {
                    t207 = ((int (*)(int))(0x8C0C3E62))(t197);
                }
                    break;
                case 18:
                {
                    t208 = ((int (*)(int))(0x8C0C44B6))(t197);
                }
                    break;
                case 20:
                {
                    t209 = ((int (*)(int))(0x8C0C46DA))(t197);
                }
                    break;
                case 22:
                {
                    t210 = ((int (*)(int))(0x8C0C4784))(t197);
                }
                    break;
                case 24:
                {
                    t211 = ((int (*)(int))(0x8C0C47F8))(t197);
                }
                    break;
                case 26:
                {
                    t212 = ((int (*)(int))(0x8C0C48C2))(t197);
                }
                    break;
                case 28:
                {
                    t213 = ((int (*)(int))(0x8C0C486C))(t197);
                }
                    break;
                case 30:
                {
                    t214 = ((int (*)(int))(0x8C0C4936))(t197);
                }
                    break;
                case 32:
                {
                    t215 = ((int (*)(int))(0x8C0C49F8))(t197);
                }
                    break;
                default:
                {
                    t216 = ((int (*)(int))(0x8C0C4A6C))(t197);
                }
                    break;
            }
        }
        ballMarkCheck(t222, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
        t226 = *(int *)0x8C20D14C;
        t252 = t226;
        if (t226 == 2) {
            t231 = *(int *)0x8C287B44;
            t248 = t231;
            if ((t231 == 6) && (t232 = *(int *)0x8C287B2C, (int)t232 < (int)0x11)) {
                t235 = *(int *)0x8C287D5C;
                t243 = t235;
                if (t235 != 1) {
                    u236 = *(float *)0x8C0BAB50;
                    t237 = *(int *)0x8C287B2C;
                    u238 = ((float)((-t237) + 0x14) / u236);
                    if (0.0f > ((float)((-t237) + 0x14) / u236)) {
                        u238 = 0.0f;
                    }
                    u240 = u238;
                    if (u238 > 1.0f) {
                        u240 = 1.0f;
                    }
                    t243 = (texPicPut(u240));
                }
                t248 = t243;
            }
            t252 = t248;
        }
        if (((*(int *)0x8C287B3C) & 0x1) != 0) {
            *(unsigned int *)0x8C18D2CC = 0x1;
        } else {
            *(unsigned int *)0x8C18D2CC = 0x0;
        }
        t259 = t252;
    }
    return t259;
}
