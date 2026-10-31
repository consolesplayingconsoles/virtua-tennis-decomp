/* Straight-line functions with calls and guards (batch gen_nr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int crowdDrawMember(int, int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
extern int screenSegVisibleRaised();
int screenSphereVisibleRaised(Stk3, float);
int vecAdd(int, int, int, int, int);
int vecDiv(int, int, int, int, int, float);
int crowdDrawBlockAlt(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6);

int crowdDrawBlockAlt(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, float f4, float f5, float f6)
{
    int t4;
    int t9;
    int t10;
    int t24;
    int t28;
    int t39;
    int t64;
    int t72;
    int stk[44];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F4;
    float F5;
    float F6;
    float F15;
    int T_;
    int R1044;
    int R1048;
    int R1052;
    int R1056;
    int R1064;
    int R1128;
    R1044 = *(int *)((int)stk + 44);
    R1048 = *(int *)((int)stk + 48);
    R1052 = *(int *)((int)stk + 52);
    R1056 = *(int *)((int)stk + 56);
    R1064 = *(int *)((int)stk + 64);
    R1128 = *(int *)((int)stk + 128);
    R1128 = a8;
    stk[33] = a9;
    stk[34] = a10;
    stk[35] = a11;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    F4 = f4;
    F5 = f5;
    F6 = f6;
    R1048 = R5;
    *(unsigned short *)(((int)stk + 60)) = R6;
    R1052 = (R4 + 0xC);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((R4 + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(R4); }
    *(int *)((int)stk + 4) = (0x18 + ((int)stk + 8));
    vecAdd(R4, R5, R6, R7, *(int *)((int)stk + 4));
    *(int *)((int)stk + 28) = (((int)stk + 32) + 0x30);
    vecDiv(0x0, 0x0, 0x0, 0x0, (((int)stk + 32) + 0x30), (1.0f + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((R1052)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R4); }
    t4 = (((int (*)(int, Stk3, Stk3))(screenSegVisibleRaised))(0x14, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)))) != 0;
    R11 = (R7);
    R14 = (R4);
    R8 = (0x8C015F0C);
    if (t4) goto L_8C0B3D34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((R14 + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((R14 + 0x18)); }
    t9 = (((int (*)(int, int, int, int, Stk3, Stk3))(screenSegVisibleRaised))(0x14, R5, R6, R7, *(Stk3 *)(((int)stk + 20)), *(Stk3 *)(((int)stk + 32)))) != 0;
    if (t9) goto L_8C0B3D34;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x24)); }
    t10 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 32)), 5.0f);
    R0 = (t10);
    if ((t10 != 0)) goto L_8C0B3D34;
    L_8C0B3F3C:;
    return R0;
    L_8C0B3D34:;
    R1056 = (R11 - 1);
    R1064 = (R11 - 2);
    R0 = (0x8C0B3DDC);
    R10 = (0x1F4);
    R12 = (0x1E);
    R13 = (0x0);
    R14 = ((((int)stk + 44) + 0x18));
    R9 = (0x1D);
    F15 = (12.0f);
    if (((int)(R11 - 1) > 0)) goto L_8C0B3D58;
    goto L_8C0B3F3C;
    L_8C0B3D58:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)(((((R13 << 1) + R13) << 2) + (R1048))); }
    *(int *)((int)stk + 16) = (R14);
    vecAdd(R4, R5, R6, R7, *(int *)((int)stk + 16));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    t24 = screenSphereVisibleRaised(*(Stk3 *)(((int)stk + 4)), F15);
    R0 = (t24);
    if (!((t24 != 0))) goto L_8C0B3F30;
    *(unsigned int *)0x8C188FD4 = ((*(int *)0x8C188FD4) + 0x2);
    R0 = (0x54);
    if ((a8 == 0)) goto L_8C0B3DE8;
    R1044 = (R9 - ((int)((int)(R11 + R13) % (int)R12)));
    goto L_8C0B3DF4;
    L_8C0B3F30:;
    t28 = (int)(R13 + 0x1) >= (int)(R1056);
    R13 = ((R13 + 0x1));
    if (t28) goto L_8C0B3F3C;
    goto L_8C0B3D58;
    L_8C0B3DF4:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((R14 + 0x0))), (*(float *)((R14 + 0x4))), (*(float *)((R14 + 0x8))));
    t39 = *(short *)(((int)stk + 60));
    R1052 = (unsigned short)t39;
    nlRotateAY((unsigned short)t39);
    crowdDrawMember((*(int *)((((R1044) * R10) + 0x8C344BE8))), a12);
    nlPopMatrix(0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + (R1048))); }
    *(int *)((int)stk + 16) = (R14);
    vecAdd(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 16));
    R0 = (a8);
    R13 = ((R13 + 0x1));
    if ((a8 == 0)) goto L_8C0B3E72;
    R1044 = (R9 - ((int)((int)(R11 + R13) % (int)R12)));
    L_8C0B3E7E:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((R14 + 0x0))), (*(float *)((R14 + 0x4))), (*(float *)((R14 + 0x8))));
    nlRotateAY((R1052));
    crowdDrawMember((*(int *)((((R1044) * R10) + 0x8C344BE8))), a12);
    t64 = R13 != (R1064);
    R0 = ((nlPopMatrix(0x1)));
    if (t64) goto L_8C0B3F30;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 44) + 0x58)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + (R1048))); }
    *(int *)((int)stk + 16) = (R14);
    vecAdd(R4, R5, R6, R7, *(int *)((int)stk + 16));
    t72 = ((int)((int)(R11 + (R13 + 0x1)) % (int)R12));
    R13 = ((R13 + 0x1));
    R4 = t72;
    if ((a8 == 0)) goto L_8C0B3EFE;
    R1044 = (R9 - R4);
    L_8C0B3F00:;
    nlPushMatrix(0x0);
    nlTranslate((*(float *)((R14 + 0x0))), (*(float *)((R14 + 0x4))), (*(float *)((R14 + 0x8))));
    nlRotateAY((R1052));
    crowdDrawMember((*(int *)((((R1044) * R10) + 0x8C344BE8))), a12);
    R0 = ((nlPopMatrix(0x1)));
    goto L_8C0B3F30;
    L_8C0B3EFE:;
    R1044 = R4;
    goto L_8C0B3F00;
    L_8C0B3E72:;
    R1044 = ((int)((int)(R11 + R13) % (int)R12));
    goto L_8C0B3E7E;
    L_8C0B3DE8:;
    R1044 = ((int)((int)(R11 + R13) % (int)R12));
    goto L_8C0B3DF4;
}
