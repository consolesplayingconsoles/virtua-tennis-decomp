/* Straight-line functions with calls and guards (batch gen_cz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmProcessVertexRenderState(void);
int kmSetVertexRenderState(int, int, int);
int motionBone(int, int, int, int, int, int);
int motionRootBone(int, int, int, int, int);
int motionSetCurrent(int);
int nlGetMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int read_dir(int);
int read_fat(int);
int read_sys(int);
int sklDrawNodeOne(int);
int staffShadowFlat(int, int, int, int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
extern int vmsfs_isformat();
int advDrawFigure(int a4);
int nlstripSetVertexContextTex(int a4, int a5);
int check_cache(int a4);

int advDrawFigure(int a4)
{
    int t69;
    int t71;
    int stk[254];

    motionSetCurrent(a4);
    motionRootBone(0x0, 0x2, 0x0, 0x0, *(int *)((int)stk + 20));
    nlGetMatrix(((*(int *)0x8C158BAC) + 0xC0));
    nlGetMatrix((0x80 + ((int)stk + 20)));
    nlPushMatrix(0x0);
    motionBone(0x6, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BBC) + 0xC0));
    nlGetMatrix((0x180 + ((int)stk + 20)));
    motionBone(0x4, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB4) + 0xC0));
    nlGetMatrix((0x100 + ((int)stk + 20)));
    motionBone(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BA4) + 0xC0));
    nlGetMatrix(((int)stk + 20));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC0) + 0xC0));
    nlGetMatrix((0x1C0 + ((int)stk + 20)));
    motionBone(0x5, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB8) + 0xC0));
    nlGetMatrix((0x140 + ((int)stk + 20)));
    motionBone(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BA8) + 0xC0));
    nlGetMatrix((((int)stk + 20) + 0x40));
    nlPopMatrix(0x1);
    motionBone(0x8, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC4) + 0xC0));
    nlGetMatrix((0x200 + ((int)stk + 20)));
    nlPushMatrix(0x0);
    motionBone(0xB, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD0) + 0xC0));
    nlGetMatrix((0x2C0 + ((int)stk + 20)));
    motionBone(0xC, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD4) + 0xC0));
    nlGetMatrix((0x300 + ((int)stk + 20)));
    motionBone(0x9, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BC8) + 0xC0));
    nlGetMatrix((0x240 + ((int)stk + 20)));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    motionBone(0xD, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BD8) + 0xC0));
    nlGetMatrix((0x340 + ((int)stk + 20)));
    motionBone(0xE, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BDC) + 0xC0));
    nlGetMatrix((0x380 + ((int)stk + 20)));
    motionBone(0xA, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BCC) + 0xC0));
    nlGetMatrix((0x280 + ((int)stk + 20)));
    nlPopMatrix(0x1);
    motionBone(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 20), *(int *)((int)stk + 20 + 4));
    nlGetMatrix(((*(int *)0x8C158BB0) + 0xC0));
    nlGetMatrix((0xC0 + ((int)stk + 20)));
    t69 = 0x8C158BA4;
    for (;;) {
        nlPushMatrix(0x0);
        t71 = *(int *)((t69 + 0x0));
        t69 = (t69 + 0x4);
        sklDrawNodeOne(t71);
        nlPopMatrix(0x1);
        if ((unsigned int)t69 >= (unsigned int)0x8C158BE0) {
            break;
        }
    }
    vecMake(0x0, 0x0, 0x0, 0x0, ((int)stk + 8), 0.0f, 0.0f, 0.0f);
    return (staffShadowFlat(((int)stk + 20), 0x0, 0x0, 0x0, *(int *)((int)stk + 8), *(int *)((int)stk + 8 + 4), *(int *)((int)stk + 8 + 8), *(int *)((int)stk + 8 + 12)));
}

int nlstripSetVertexContextTex(int a4, int a5)
{
    int t0;
    int t80;
    int t2;
    int t17;
    int t42;
    int t18;
    int t49;
    int t51;
    int t54;
    int t57;
    int t58;
    int t67;
    int t69;
    int t26;
    int t27;
    int t28;

    t0 = *(int *)0x8C4241C0;
    t80 = 0x1;
    if ((*(int *)(((((a5 << 2) << 1) + t0) + 0x0))) == 0) {
    } else {
        t2 = *(int *)(((((a5 << 2) << 1) + t0) + 0x4));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x6C)) = ((*(int *)0x8C458608) + (t2 * 0x3C));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x0)) = 0x600608;
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0xC)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x20)) = (*(int *)((a4 + 0x8)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x44)) = (*(int *)((a4 + 0xC)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x40)) = (*(int *)((a4 + 0x10)));
        t17 = *(int *)((((*(int *)0x8C458608) + (t2 * 0x3C)) + 0x34));
        t42 = 0x0;
        if (((((int)t17 >> 27) & 0x7) == 5) || ((((int)t17 >> 27) & 0x7) == 6)) {
            t18 = *(int *)0x8C458C10;
            *(unsigned int *)((t18 + 0x0)) = ((*(int *)((t18 + 0x0))) | 0x80000);
            if ((*(int *)0x8C1DC888) != 0) {
                *(unsigned int *)(((0x68 + (*(int *)0x8C458C10)) + 0x0)) = (*(int *)0x8C454F38);
            } else {
                *(unsigned int *)(((*(int *)0x8C458C10) + 0x68)) = 0x0;
                if (((int)(*(int *)0x8C454F38) < (int)(*(short *)0x8C458E24)) && (t26 = *(int *)0x8C454F38, t27 = *(int *)0x8C458E38, t28 = *(short *)(((t27 + ((t26 << 2) << 1)) + 0x4)), t28 != 0)) {
                    *(unsigned int *)(((*(int *)0x8C458C10) + 0x68)) = (*(short *)(((t27 + ((t26 << 2) << 1)) + 0x0)));
                }
            }
            t42 = 0x1;
        }
        *(volatile int *)0x8C458C10;
        kmProcessVertexRenderState();
        t49 = *(int *)0x8C458C10;
        *(unsigned int *)((t49 + 0x90)) = ((*(int *)((t49 + 0x90))) & 0xFFFCFF3F);
        t51 = *(int *)0x8C458C10;
        *(unsigned int *)((t51 + 0x90)) = ((*(int *)((t51 + 0x90))) | (*(int *)0x8C458E04));
        t54 = *(int *)0x8C458C10;
        *(unsigned int *)((t54 + 0x98)) = ((*(int *)((t54 + 0x98))) & 0x31FF0FF);
        t57 = *(int *)0x8C458C10;
        t58 = *(int *)0x8C458E08;
        if ((*(int *)((a4 + 0x0))) == 0) {
            *(unsigned int *)((t57 + 0x98)) = ((*(int *)((t57 + 0x98))) | (t58 | 0x20000000));
        } else {
            *(unsigned int *)(((0x98 + t57) + 0x0)) = ((*(int *)(((0x98 + t57) + 0x0))) | (t58 | ((((*(int *)0x8C424418) ^ 0xFC) << 16) << 8)));
        }
        if (t42 != 0) {
            t67 = *(int *)0x8C458C10;
            *(unsigned int *)((t67 + 0x9C)) = ((*(int *)((t67 + 0x9C))) & 0xF81FFFFF);
            t69 = *(int *)0x8C458C10;
            *(unsigned int *)((t69 + 0x9C)) = ((*(int *)((t69 + 0x9C))) | ((*(int *)(((0x68 + t69) + 0x0))) << 21));
        }
        kmSetVertexRenderState(0x8C454FC0, (*(int *)0x8C458C10), 0x8C458E04);
        t80 = 0x0;
    }
    return t80;
}

int check_cache(int a4)
{
    int t5;
    int t9;
    int t12;
    int t17;
    int stk[6];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1EE574:;
    *(unsigned int *)(((int)stk + 4)) = (R4 << 2);
    *(unsigned int *)(((R4 << 2) + 0x8C464FD8)) = 0x0;
    R12 = (0x1);
    R13 = (R4);
    R14 = (((R4 * 0x148) + 0x8C464598));
    if (((*(signed char *)((((R4 * 0x148) + 0x8C464598) + 0xA))) != 0)) goto L_8C1EE5A8;
    goto L_8C1EE59E;
    L_8C1EE59E:;
    t5 = read_sys(R13);
    R4 = (t5);
    if (((int)t5 < 0)) goto L_8C1EE5DE;
    goto L_8C1EE5A8;
    L_8C1EE5A8:;
    t9 = (int)(((int (*)(int))(vmsfs_isformat))(R13)) < 0;
    if (t9) goto L_8C1EE5EA;
    goto L_8C1EE5B0;
    L_8C1EE5B0:;
    if (((*(signed char *)((R14 + 0xB))) != 0)) goto L_8C1EE5C0;
    goto L_8C1EE5B6;
    L_8C1EE5B6:;
    t12 = read_fat(R13);
    R4 = (t12);
    if (((int)t12 < 0)) goto L_8C1EE5D0;
    goto L_8C1EE5C0;
    L_8C1EE5C0:;
    if (((*(signed char *)((R14 + 0xC))) != 0)) goto L_8C1EE5E2;
    goto L_8C1EE5C6;
    L_8C1EE5C6:;
    t17 = read_dir(R13);
    R4 = (t17);
    if (((int)t17 >= 0)) goto L_8C1EE5E2;
    goto L_8C1EE5D0;
    L_8C1EE5D0:;
    if ((R4 != 0xFFFF0000)) goto L_8C1EE5DE;
    goto L_8C1EE5D6;
    L_8C1EE5D6:;
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x8C464FD8)) = R12;
    goto L_8C1EE5EA;
    L_8C1EE5EA:;
    R0 = (0x0);
    goto L_8C1EE5EC;
    L_8C1EE5EC:;
    return R0;
    L_8C1EE5DE:;
    R0 = (R4);
    goto L_8C1EE5EC;
    L_8C1EE5E2:;
    *(unsigned char *)((R14 + 0xA)) = R12;
    *(unsigned char *)((R14 + 0xB)) = R12;
    *(unsigned char *)((R14 + 0xC)) = R12;
    goto L_8C1EE5EA;
}
