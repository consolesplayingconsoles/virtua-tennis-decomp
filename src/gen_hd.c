/* Straight-line functions with calls and guards (batch gen_hd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawMember(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int screenSegVisibleRaised(int, Stk3, Stk3);
int screenSphereVisibleRaised(Stk3, float);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
int crowdDrawBlockAlt(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);

int crowdDrawBlockAlt(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t3;
    int t4;
    int t5;
    int t74;
    int t70;
    int t6;
    int t9;
    int t66;
    int t21;
    int t45;
    int t62;
    int t48;
    int t147;
    int t83;
    int t86;
    int t143;
    int t98;
    int t122;
    int t139;
    int t125;
    int t224;
    int t160;
    int t163;
    int t220;
    int t175;
    int t199;
    int t216;
    int t202;
    int t228;
    int t151;
    int stk[44];

    stk[32] = a8;
    stk[33] = a9;
    stk[34] = a10;
    stk[35] = a11;
    *(unsigned int *)(((int)stk + 48)) = a5;
    *(unsigned short *)(((int)stk + 60)) = a6;
    *(unsigned int *)(((int)stk + 52)) = (a4 + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((a4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(a4); }
    vecAdd(a4, a5, a6, a7, (0x18 + ((int)stk + 8)));
    vecDiv(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x30), (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((*(int *)(((int)stk + 52)))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(a4); }
    t3 = screenSegVisibleRaised(0x14, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)));
    if (t3 == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((a4 + 0x24)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((a4 + 0x18)); }
        t4 = screenSegVisibleRaised(0x14, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)));
        if (t4 == 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x24)); }
            t5 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 5.0f);
            t74 = t5;
            if (t5 != 0) {
                *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
                *(unsigned int *)(((int)stk + 64)) = (a7 - 2);
                t70 = 0x8C0B3DDC;
                if ((int)(a7 - 1) <= 0) {
                } else {
                    t6 = 0x0;
                    for (;;) {
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t6 << 1) + t6) << 2) + (*(int *)(((int)stk + 48))))); }
                        vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
                        t9 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 4)), 12.0f);
                        t66 = t9;
                        if (t9 == 0) {
                        } else {
                            *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t6) % (int)0x1E)));
                            } else {
                                *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t6) % (int)0x1E));
                            }
                            nlPushMatrix(0x0);
                            nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                            t21 = *(short *)(((int)stk + 60));
                            *(unsigned int *)(((int)stk + 52)) = (unsigned short)t21;
                            nlRotateAY((unsigned short)t21);
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                            nlPopMatrix(0x1);
                            t6 = (t6 + 0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t6 << 1) + t6) << 2) + (*(int *)(((int)stk + 48))))); }
                            vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t6) % (int)0x1E)));
                            } else {
                                *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t6) % (int)0x1E));
                            }
                            nlPushMatrix(0x0);
                            nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                            nlRotateAY((*(int *)(((int)stk + 52))));
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                            t45 = *(int *)(((int)stk + 64));
                            t62 = (nlPopMatrix(0x1));
                            if (t6 == t45) {
                                t6 = (t6 + 0x1);
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t6 << 1) + t6) << 2) + (*(int *)(((int)stk + 48))))); }
                                vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                                t48 = (int)((int)(a7 + t6) % (int)0x1E);
                                if (a8 != 0) {
                                    *(unsigned int *)(((int)stk + 44)) = (0x1D - t48);
                                } else {
                                    *(unsigned int *)(((int)stk + 44)) = t48;
                                }
                                nlPushMatrix(0x0);
                                nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                                nlRotateAY((*(int *)(((int)stk + 52))));
                                crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                                t62 = (nlPopMatrix(0x1));
                            }
                            t66 = t62;
                        }
                        t6 = (t6 + 0x1);
                        if ((int)t6 < (int)(*(int *)(((int)stk + 56)))) continue;
                        break;
                    }
                    t70 = t66;
                }
                t74 = t70;
            }
            t151 = t74;
        } else {
            *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
            *(unsigned int *)(((int)stk + 64)) = (a7 - 2);
            t147 = 0x8C0B3DDC;
            if ((int)(a7 - 1) <= 0) {
            } else {
                t83 = 0x0;
                for (;;) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t83 << 1) + t83) << 2) + (*(int *)(((int)stk + 48))))); }
                    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
                    t86 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 4)), 12.0f);
                    t143 = t86;
                    if (t86 == 0) {
                    } else {
                        *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t83) % (int)0x1E)));
                        } else {
                            *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t83) % (int)0x1E));
                        }
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                        t98 = *(short *)(((int)stk + 60));
                        *(unsigned int *)(((int)stk + 52)) = (unsigned short)t98;
                        nlRotateAY((unsigned short)t98);
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                        nlPopMatrix(0x1);
                        t83 = (t83 + 0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t83 << 1) + t83) << 2) + (*(int *)(((int)stk + 48))))); }
                        vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t83) % (int)0x1E)));
                        } else {
                            *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t83) % (int)0x1E));
                        }
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                        nlRotateAY((*(int *)(((int)stk + 52))));
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                        t122 = *(int *)(((int)stk + 64));
                        t139 = (nlPopMatrix(0x1));
                        if (t83 == t122) {
                            t83 = (t83 + 0x1);
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t83 << 1) + t83) << 2) + (*(int *)(((int)stk + 48))))); }
                            vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                            t125 = (int)((int)(a7 + t83) % (int)0x1E);
                            if (a8 != 0) {
                                *(unsigned int *)(((int)stk + 44)) = (0x1D - t125);
                            } else {
                                *(unsigned int *)(((int)stk + 44)) = t125;
                            }
                            nlPushMatrix(0x0);
                            nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                            nlRotateAY((*(int *)(((int)stk + 52))));
                            crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                            t139 = (nlPopMatrix(0x1));
                        }
                        t143 = t139;
                    }
                    t83 = (t83 + 0x1);
                    if ((int)t83 < (int)(*(int *)(((int)stk + 56)))) continue;
                    break;
                }
                t147 = t143;
            }
            t151 = t147;
        }
        t228 = t151;
    } else {
        *(unsigned int *)(((int)stk + 56)) = (a7 - 1);
        *(unsigned int *)(((int)stk + 64)) = (a7 - 2);
        t224 = 0x8C0B3DDC;
        if ((int)(a7 - 1) <= 0) {
        } else {
            t160 = 0x0;
            for (;;) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t160 << 1) + t160) << 2) + (*(int *)(((int)stk + 48))))); }
                vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 44) + 0x18)); }
                t163 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 4)), 12.0f);
                t220 = t163;
                if (t163 == 0) {
                } else {
                    *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
                    if (a8 != 0) {
                        *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t160) % (int)0x1E)));
                    } else {
                        *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t160) % (int)0x1E));
                    }
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                    t175 = *(short *)(((int)stk + 60));
                    *(unsigned int *)(((int)stk + 52)) = (unsigned short)t175;
                    nlRotateAY((unsigned short)t175);
                    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                    nlPopMatrix(0x1);
                    t160 = (t160 + 0x1);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t160 << 1) + t160) << 2) + (*(int *)(((int)stk + 48))))); }
                    vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                    if (a8 != 0) {
                        *(unsigned int *)(((int)stk + 44)) = (0x1D - ((int)((int)(a7 + t160) % (int)0x1E)));
                    } else {
                        *(unsigned int *)(((int)stk + 44)) = ((int)((int)(a7 + t160) % (int)0x1E));
                    }
                    nlPushMatrix(0x0);
                    nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                    nlRotateAY((*(int *)(((int)stk + 52))));
                    crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                    t199 = *(int *)(((int)stk + 64));
                    t216 = (nlPopMatrix(0x1));
                    if (t160 == t199) {
                        t160 = (t160 + 0x1);
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
                        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((t160 << 1) + t160) << 2) + (*(int *)(((int)stk + 48))))); }
                        vecAdd(0x0, 0x0, 0x0, 0x0, (((int)stk + 44) + 0x18));
                        t202 = (int)((int)(a7 + t160) % (int)0x1E);
                        if (a8 != 0) {
                            *(unsigned int *)(((int)stk + 44)) = (0x1D - t202);
                        } else {
                            *(unsigned int *)(((int)stk + 44)) = t202;
                        }
                        nlPushMatrix(0x0);
                        nlTranslate((*(float *)(((((int)stk + 44) + 0x18) + 0x0))), (*(float *)(((((int)stk + 44) + 0x18) + 0x4))), (*(float *)(((((int)stk + 44) + 0x18) + 0x8))));
                        nlRotateAY((*(int *)(((int)stk + 52))));
                        crowdDrawMember((*(int *)((((*(int *)(((int)stk + 44))) * 0x1F4) + 0x8C344BE8))), a12);
                        t216 = (nlPopMatrix(0x1));
                    }
                    t220 = t216;
                }
                t160 = (t160 + 0x1);
                if ((int)t160 < (int)(*(int *)(((int)stk + 56)))) continue;
                break;
            }
            t224 = t220;
        }
        t228 = t224;
    }
    return t228;
}
