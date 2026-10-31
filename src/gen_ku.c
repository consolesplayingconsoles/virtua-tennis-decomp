/* Straight-line functions with calls and guards (batch gen_ku): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char charaTbl[];

int miniPlacePlayers(void);
int motionSet(int, int, int, int, int, int, float);
float nlRandom(void);
int miniRoundStart(int a4, int a5, int a6, int a7);

int miniRoundStart(int a4, int a5, int a6, int a7)
{
    int t0;
    int t4;
    int t6;
    int t9;
    int t12;
    float u21;
    int t27;
    int t31;
    int t40;
    int t115;
    int t117;
    int t119;
    int t123;
    int t133;
    int t142;
    int t144;
    int t146;
    int t148;
    int t207;
    int t208;
    int t116;
    int t137;
    int t143;

    t0 = *(int *)0x8C2FBEF0;
    if ((*(int *)((t0 + 0x20))) == 2) {
        *(unsigned int *)((t0 + 0x20)) = 0x1;
    }
    *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x18)) = 0x0;
    t4 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t4 + 0x8)) = ((*(int *)((t4 + 0x8))) & 0xFFFFFFDF);
    t6 = *(int *)0x8C2FBEF0;
    *(unsigned int *)((t6 + 0x8)) = ((*(int *)((t6 + 0x8))) | 0x10);
    *(unsigned int *)0x8C2FC0C8 = 0x0;
    t9 = *(int *)(((*(int *)0x8C2FBEF0) + 0x0));
    if (t9 != 3) {
        if (t9 != 1) {
            if (t9 != 2) {
                if (t9 == 4) {
                    *(float *)0x8C2895E4 = 0.0f;
                    *(float *)0x8C28886C = 0.0f;
                    *(float *)0x8C2895EC = -50.0f;
                    *(unsigned int *)0x8C287B14 = 0x0;
                    *(unsigned int *)0x8C287B10 = 0x0;
                } else {
                    if (t9 == 0) {
                        *(float *)0x8C2895E4 = 0.0f;
                        *(float *)0x8C28886C = 0.0f;
                        *(float *)0x8C288874 = 64.0f;
                        *(float *)0x8C2895EC = -79.2333298f;
                        *(unsigned int *)0x8C287B14 = 0x0;
                        *(unsigned int *)0x8C287B10 = 0x0;
                        if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) != 0) {
                        } else {
                            t12 = *(int *)0x8C2FBEF0;
                            *(unsigned int *)((t12 + 0x8)) = (0xFFFFFFEF & (*(int *)((t12 + 0x8))));
                        }
                    } else {
                        if (t9 == 5) {
                            *(unsigned int *)(((0x24 + (*(int *)0x8C2FBEF0)) + 0x0)) = (int)((nlRandom()) * 10.0f);
                            u21 = *(float *)0x8C2895E4;
                            t27 = *(int *)(((*(int *)0x8C2FBEF0) + 0x24));
                            *(float *)0x8C2895E4 = ((float)((u21 > 0.0f) - (0.0f > u21)) * (*(float *)(((((t27 << 2) + t27) << 2) + 0x8C10B980))));
                            *(unsigned int *)0x8C287B14 = 0x0;
                            *(unsigned int *)0x8C287B10 = 0x0;
                            if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) == 0) {
                                t31 = *(int *)0x8C2FBEF0;
                                *(unsigned int *)((t31 + 0x8)) = (0xFFFFFFEF & (*(int *)((t31 + 0x8))));
                            }
                        } else {
                            if (t9 == 6) {
                                *(float *)0x8C2895E4 = 0.0f;
                                *(float *)0x8C2895EC = -118.849998f;
                                *(unsigned int *)0x8C287B14 = 0x0;
                                *(unsigned int *)0x8C287B10 = 0x0;
                                if ((0x800 & (*(int *)(((*(int *)0x8C2FBEF0) + 0x8)))) == 0) {
                                    t40 = *(int *)0x8C2FBEF0;
                                    *(unsigned int *)((t40 + 0x8)) = (0xFFFFFFEF & (*(int *)((t40 + 0x8))));
                                }
                            } else {
                                if (t9 == 7) {
                                    *(float *)0x8C2895E4 = 0.0f;
                                    *(float *)0x8C28886C = 0.0f;
                                    *(unsigned int *)0x8C287B14 = 0x0;
                                    *(unsigned int *)0x8C287B10 = 0x0;
                                    motionSet(0x8C288AFC, 0x29DE0, 0x1, 0x12755C, ((*(int *)((((*(int *)0x8C289754) * 0x6C) + (int)charaTbl)))), ((*(int *)0x8C2873D0)), 1.0f);
                                    *(unsigned int *)0x8C28983C = 0x8C01DE1A;
                                }
                            }
                        }
                    }
                }
            } else {
                *(float *)0x8C2895E4 = 0.0f;
                *(unsigned int *)0x8C287B14 = 0x0;
                *(unsigned int *)0x8C287B10 = 0x0;
                if ((*(int *)(((*(int *)0x8C2FBEF0) + 0x10))) == 1) {
                    t115 = *(int *)0x8C2FC158;
                    if ((t115 != 10) && (t116 = *(int *)0x8C2FC154, (t116 + t115) != 10)) {
                        t117 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t117 + 0x8)) = (0xFFFFFFEF & (*(int *)((t117 + 0x8))));
                        t119 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t119 + 0x8)) = (0x200 | (*(int *)((t119 + 0x8))));
                        *(float *)0x8C28886C = ((*(float *)0x8C28886C) * (-1.0f));
                    } else {
                        *(unsigned int *)(((*(int *)0x8C2FBEF0) + 0x28)) = 0xFFFFFFFF;
                        t123 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t123 + 0x8)) = ((*(int *)((t123 + 0x8))) & 0xFFFFFDFF);
                    }
                } else {
                    t133 = *(int *)(((*(int *)0x8C2FBEF0) + 0x10));
                    if ((((((int)((unsigned int)((int)((unsigned int)(t133 - 1) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t133 - 1))) ? 1u : 0u))) >> 1) & 0x1) == 0) && ((t133 != 2) || (t137 = *(int *)0x8C2FC154, t137 != 10))) {
                        *(float *)0x8C28886C = ((*(float *)0x8C28886C) * (-1.0f));
                    }
                    t142 = *(int *)(((*(int *)0x8C2FBEF0) + 0x10));
                    if (((0x1 & t142) == 0) && ((t142 != 2) || (t143 = *(int *)0x8C2FC154, t143 != 10))) {
                        t144 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t144 + 0x8)) = (0xFFFFFFEF & (*(int *)((t144 + 0x8))));
                        t146 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t146 + 0x8)) = (0x200 | (*(int *)((t146 + 0x8))));
                    } else {
                        t148 = *(int *)0x8C2FBEF0;
                        *(unsigned int *)((t148 + 0x8)) = ((*(int *)((t148 + 0x8))) & 0xFFFFFDFF);
                    }
                }
            }
        } else {
            *(float *)0x8C28886C = 0.0f;
            *(unsigned int *)0x8C287B14 = 0x0;
            *(unsigned int *)0x8C287B10 = 0x0;
        }
    } else {
        *(float *)0x8C2895E4 = 0.0f;
        *(float *)0x8C28886C = 0.0f;
        *(unsigned int *)0x8C287B14 = 0x0;
        *(unsigned int *)0x8C287B10 = 0x0;
    }
    miniPlacePlayers();
    t207 = *(int *)0x8C2FBEF0;
    t208 = *(int *)((t207 + 0x8));
    *(unsigned int *)((t207 + 0x8)) = (t208 & 0xFFFFF7FF);
    return (t208 & 0xFFFFF7FF);
}
