/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int btnGuideDrawB(int, float);
int camMoveBegin(float, float);
extern int camSetEye();
extern int camSetTarget();
int countryNamePutC(int, Stk3, float);
int decoSwingDraw(int, int, Stk3, float);
extern int entryGetColorId();
int getID_Color(int, float);
int hudFramePutNarrow(Stk3, float);
int hudNumPut(int, Stk3, float);
int iconSlotPut(int, Stk3);
int menuTextLetterPut(int, int, Stk3, float);
int nlAddVector3op(int, int, int);
int nlCalcPoint(int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlDispStripTrnsl(int, int);
int nlScaleVector(int, int, float);
int nlSubVector3op(int, int, int);
int primRectFrame(int, int, int, int, Stk3);
int primSprSetSize(int, float, float);
int primTexVertexSet(int, int, int, int, int, float, float);
int primVertexSet(int, int, int, int, int);
int set_event(int, int);
int sprInitPos(int, int, Stk3);
int sprListPut(int, int, int, float, float, float);
int sprPutAtAlpha(int, Stk3, float);
int stageSelNameDraw(int, int, Stk3);
int sunMatrixSet(int, int);
int thunk_FUN_8c0f41f0(int);
Stk3 vecMake(float, float, float);
int resultTeamsDrawAlt(float f4);
int sseleGridDraw(void);
int primSprDrawScaleOfs(int a4, int a5, int a6, int a7, float f4, float f5);
int primSprDrawOfs(int a4, int a5, int a6, int a7);
int endingCameraSet(void);
int decoHeaderDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int menuStatusDraw(void);
int primLineH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int hudValueDraw(int a4, float f4);
int fadeScreenStart(int a4, int a5, int a6);
int texPicPut(float f4);
int titleSprBlinkPut(float f4);
int mtxGetPos(int a4, int a5, int a6);



int primSprDrawScaleOfs(int a4, int a5, int a6, int a7, float f4, float f5)
{
    float u0;
    float u1;
    float u3;
    float u4;
    int t6;
    float u7;
    float u8;
    int t13;
    float u14;
    int stk[74];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 96)) = (int)(((f4 * (u0 - u1))) * (float)a5);
    u3 = *(float *)((a4 + 0x24));
    u4 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 84)) = (int)(((f5 * (u3 - u4))) * (float)a6);
    t6 = *(int *)(((int)stk + 96));
    u7 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    u8 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 88)) = (float)t6;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t6 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), u8, u7);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    t13 = *(int *)(((int)stk + 84));
    u14 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 92)) = (float)t13;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 88))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), ((float)t13 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), u14);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 92))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u4) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}

int primSprDrawOfs(int a4, int a5, int a6, int a7)
{
    float u0;
    float u1;
    float u2;
    float u3;
    int t4;
    float u5;
    float u6;
    int t11;
    float u12;
    int stk[74];

    u0 = *(float *)((a4 + 0x20));
    u1 = *(float *)((a4 + 0x18));
    *(unsigned int *)(((int)stk + 84)) = (int)((u0 - u1) * (float)a5);
    u2 = *(float *)((a4 + 0x24));
    u3 = *(float *)((a4 + 0x1C));
    *(unsigned int *)(((int)stk + 88)) = (int)((u2 - u3) * (float)a6);
    t4 = *(int *)(((int)stk + 84));
    u5 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    u6 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x4));
    *(float *)(((int)stk + 92)) = (float)t4;
    *(Stk3 *)((((int)stk + 84) + 0x34)) = vecMake(((float)t4 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), u6, u5);
    *(Stk3 *)((((int)stk + 80) + 0x2C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    t11 = *(int *)(((int)stk + 88));
    u12 = *(float *)(((0xD4 + ((int)stk + 84)) + 0x8));
    *(float *)(((int)stk + 96)) = (float)t11;
    *(Stk3 *)((((int)stk + 76) + 0x24)) = vecMake(((*(float *)(((int)stk + 92))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x0)))), ((float)t11 + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), u12);
    *(Stk3 *)((((int)stk + 72) + 0x1C)) = vecMake((*(float *)(((0xD4 + ((int)stk + 84)) + 0x0))), ((*(float *)(((int)stk + 96))) + (*(float *)(((0xD4 + ((int)stk + 84)) + 0x4)))), (*(float *)(((0xD4 + ((int)stk + 84)) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 56)) = *(struct mv3 *)((((int)stk + 68) + 0x44)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (((int)stk + 68) + 0x50), u0, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 52) + 0x48)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x1C + (((int)stk + 68) + 0x50)), u1, ((-u3) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 36) + 0x4C)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x38 + (((int)stk + 68) + 0x50)), u0, ((-u2) + 1.0f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 20) + 0x50)); }
    primTexVertexSet(0xFFFFFFFF, a7, 0x0, 0x0, (0x54 + (((int)stk + 68) + 0x50)), u1, ((-u2) + 1.0f));
    return (nlDispStripTexOfsTrnsl(0x4, (((int)stk + 68) + 0x50), (*(int *)((a4 + 0x0)))));
}

int endingCameraSet(void)
{
    int t0;
    int t4;
    int t5;
    float u6;
    int t11;
    int t13;
    int t14;
    int t15;
    int t22;
    int t25;
    int t27;
    int t31;
    int t38;
    int t35;
    int t28;
    int stk[33];

    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 28) + 0x20)) = *(struct mv7 *)(0x8C125D3C); }
    { struct mv7 { int w[7]; }; *(struct mv7 *)((((int)stk + 28) + 0x4)) = *(struct mv7 *)(0x8C125D58); }
    *(unsigned int *)0x8C40C1BC = 0x1;
    t0 = *(int *)0x8C402CAC;
    if (t0 == 3) {
        *(unsigned int *)0x8C40C1BC = 0x0;
        t4 = *(int *)0x8C402CAC;
        t5 = *(int *)((((*(int *)0x8C402CAC) << 2) + 0x8C1D34F4));
        u6 = *(float *)0x8C0D3DD8;
        *(unsigned int *)(((int)stk + 28)) = (((t4 << 1) + t4) << 2);
        nlSubVector3op((((int)stk + 28) + 0x3C), ((*(int *)(((int)stk + 28))) + 0x8C1D3494), ((((t4 << 1) + t4) << 2) + 0x8C1D3434));
        nlScaleVector((((int)stk + 28) + 0x3C), (((int)stk + 28) + 0x3C), ((float)(*(int *)0x8C402CA0) / ((float)t5 * u6)));
        t11 = *(int *)0x8C402CAC;
        nlAddVector3op((((int)stk + 28) + 0x48), ((((t11 << 1) + t11) << 2) + 0x8C1D3434), (((int)stk + 28) + 0x3C));
        t13 = *(int *)0x8C402CAC;
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t13 << 1) + t13) << 2) + 0x8C1D33D4)); }
        t14 = ((int (*)(Stk3))(camSetTarget))(*(Stk3 *)(((int)stk + 16)));
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x54)); }
        t15 = ((int (*)(Stk3))(camSetEye))(*(Stk3 *)(((int)stk + 4)));
        t38 = (camMoveBegin(1.0f, 1.0f));
    } else {
        if (t0 == 7) {
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C0D3E04), (*(float *)0x8C0D3E00), (*(float *)0x8C0D3DFC));
            t22 = ((int (*)(void))(camSetTarget))();
            *(Stk3 *)(((int)stk + 16)) = vecMake((*(float *)0x8C0D3E10), 0.0f, (*(float *)0x8C0D3E0C));
            t25 = ((int (*)(void))(camSetEye))();
            t35 = (camMoveBegin(1.0f, 1.0f));
        } else {
            t27 = *(int *)0x8C402CA0;
            t31 = ((t0 << 2) + (((int)stk + 28) + 0x4));
            if (((t0 != 4) && (t0 != 5)) || (t28 = *(int *)0x8C287ADC, t28 != 4)) {
                t31 = ((t0 << 2) + (((int)stk + 28) + 0x20));
            }
            t35 = (sunMatrixSet(((*(int *)0x8C2873EC) + (*(int *)((t31 + 0x0)))), t27));
        }
        t38 = t35;
    }
    return t38;
}

int decoHeaderDrawB(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[50];

    stk[39] = a8;
    stk[40] = a9;
    stk[41] = a10;
    *(unsigned int *)(((int)stk + 108)) = a4;
    *(unsigned int *)(((int)stk + 112)) = a5;
    *(Stk3 *)((((int)stk + 104) + 0xC)) = vecMake(((*(float *)(((((int)stk + 104) + 0x34) + 0x0))) + -17.0f), ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 21.0f), ((*(float *)(((((int)stk + 104) + 0x34) + 0x8))) + -0.00100000005f));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((((int)stk + 100) + 0x10)); }
    sprPutAtAlpha(0x8C341D58, *(Stk3 *)(((int)stk + 88)), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C342028, *(Stk3 *)(((int)stk + 76)), 0.349999994f);
    *(unsigned int *)(((int)stk + 104)) = 0x8C342078;
    primSprSetSize(0x8C342078, 1.0f, 20.0f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 20.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha((*(int *)(((int)stk + 104))), *(Stk3 *)(((int)stk + 64)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C3420C8, *(Stk3 *)(((int)stk + 52)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C342118, *(Stk3 *)(((int)stk + 40)), 0.349999994f);
    *(unsigned int *)(((int)stk + 104)) = 0x8C342168;
    primSprSetSize(0x8C342168, 1.0f, 46.0f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 46.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha((*(int *)(((int)stk + 104))), *(Stk3 *)(((int)stk + 28)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x4)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x4))) + 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    sprPutAtAlpha(0x8C3421B8, *(Stk3 *)(((int)stk + 16)), 0.349999994f);
    *(float *)(((((int)stk + 104) + 0x34) + 0x8)) = ((*(float *)(((((int)stk + 104) + 0x34) + 0x8))) - 0.00999999978f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 104) + 0x34)); }
    return (decoSwingDraw((*(int *)(((int)stk + 108))), (*(int *)(((int)stk + 112))), *(Stk3 *)(((int)stk + 4)), 1.0f));
}

int menuStatusDraw(void)
{
    int t0;
    int t3;
    int t17;
    int t37;
    int t18;
    int t19;
    int t20;
    int t34;
    int stk[29];

    *(unsigned int *)(((int)stk + 24)) = 0x8C1853C0;
    t0 = 0x0;
    for (;;) {
        t3 = 0x0;
        if ((*(int *)(((*(int *)(((int)stk + 24))) + (t0 << 2)))) == 1) {
            t3 = 0x1;
        }
        *(unsigned int *)(((int)stk + 28)) = t0;
        *(Stk3 *)((((int)stk + 24) + 0x20)) = vecMake(51.0f, 385.0f, 0.00999999978f);
        *(Stk3 *)((((int)stk + 24) + 0x20)) = vecMake(((*(float *)(((((int)stk + 24) + 0x20) + 0x0))) + (float)(t0 * 0x4B)), (*(float *)(((((int)stk + 24) + 0x20) + 0x4))), (*(float *)(((((int)stk + 24) + 0x20) + 0x8))));
        if ((*(int *)0x8C287D5C) == 2) {
            *(float *)(((((int)stk + 24) + 0x20) + 0x4)) = ((*(float *)(((((int)stk + 24) + 0x20) + 0x4))) + 20.0f);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 12)) = *(struct mv3 *)((((int)stk + 24) + 0x20)); }
        menuTextLetterPut((*(int *)(((int)stk + 28))), t3, *(Stk3 *)(((int)stk + 12)), 1.0f);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    t17 = *(int *)0x8C287D5C;
    t37 = t17;
    if (t17 != 2) {
        *(unsigned int *)(((int)stk + 24)) = 0x8;
        *(unsigned int *)(((int)stk + 28)) = 0x8C185354;
        *(unsigned int *)(((int)stk + 32)) = 0x8C1853C0;
        t18 = 0x8C1853C0;
        t19 = 0x0;
        t20 = 0x0;
        for (;;) {
            if ((*(int *)((((t20 << 2) + (*(int *)(((int)stk + 32)))) + 0x24))) == 1) {
                *(unsigned int *)(((int)stk + 36)) = 0x1;
            } else {
                *(unsigned int *)(((int)stk + 36)) = 0x0;
            }
            if ((*(int *)(((*(int *)(((int)stk + 28))) + 0x0))) == 1) {
                t18 = (*(int *)(((int)stk + 24)));
                *(unsigned int *)(((int)stk + 40)) = t18;
            } else {
                *(unsigned int *)(((int)stk + 40)) = 0xFFFFFFFF;
            }
            *(Stk3 *)((((int)stk + 24) + 0x20)) = vecMake(51.0f, 418.0f, 0.00999999978f);
            *(Stk3 *)((((int)stk + 24) + 0x20)) = vecMake(((*(float *)(((((int)stk + 24) + 0x20) + 0x0))) + (float)t19), (*(float *)(((((int)stk + 24) + 0x20) + 0x4))), (*(float *)(((((int)stk + 24) + 0x20) + 0x8))));
            t18 = (((int)stk + 24) + 0x20);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t18); }
            t34 = menuTextLetterPut((*(int *)(((int)stk + 40))), (*(int *)(((int)stk + 36))), *(Stk3 *)(((int)stk + 4)), 1.0f);
            t18 = (*(int *)(((int)stk + 24)));
            t20 = (t20 + 0x1);
            t19 = (t19 + 0x4B);
            t18 = (t18 + 0x1);
            *(unsigned int *)(((int)stk + 24)) = t18;
            *(unsigned int *)(((int)stk + 28)) = ((*(int *)(((int)stk + 28))) + 0x4);
            if ((int)t20 >= (int)0x8) {
                break;
            }
        }
        t37 = t34;
    }
    return t37;
}

int primLineH(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t15;
    int stk[46];

    stk[32] = a8;
    stk[33] = a9;
    stk[34] = a10;
    stk[35] = a11;
    stk[36] = a12;
    stk[37] = a13;
    *(unsigned int *)(((int)stk + 20)) = a4;
    if ((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))) > (*(float *)(((((int)stk + 20) + 0x78) + 0x0)))) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x4)) = *(struct mv3 *)((((int)stk + 20) + 0x6C)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x6C)) = *(struct mv3 *)((((int)stk + 20) + 0x78)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 20) + 0x78)) = *(struct mv3 *)((((int)stk + 20) + 0x4)); }
    }
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x78) + 0x0))), (*(float *)(((((int)stk + 20) + 0x78) + 0x4))), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x10));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x4))), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x10 + (((int)stk + 20) + 0x10)));
    t15 = *(int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x78) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x78) + 0x4))) + (float)t15), (*(float *)(((((int)stk + 20) + 0x78) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x20 + (((int)stk + 20) + 0x10)));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)(((((int)stk + 20) + 0x6C) + 0x0))), ((*(float *)(((((int)stk + 20) + 0x6C) + 0x4))) + (float)t15), (*(float *)(((((int)stk + 20) + 0x6C) + 0x8))));
    primVertexSet(a5, 0x0, 0x0, 0x0, (0x30 + (((int)stk + 20) + 0x10)));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x10)));
}

int hudValueDraw(int a4, float f4)
{
    int stk[18];

    *(unsigned int *)(((int)stk + 44)) = a4;
    *(Stk3 *)((((int)stk + 44) + 0x4)) = vecMake((*(float *)0x8C0986B0), (*(float *)0x8C0986AC), 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    hudFramePutNarrow(*(Stk3 *)(((int)stk + 28)), (f4 * (*(float *)0x8C0986BC)));
    *(float *)(((((int)stk + 44) + 0x4) + 0x8)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x8))) - 0.0500000007f);
    *(float *)(((((int)stk + 44) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x0))) + (*(float *)0x8C0986C8));
    *(float *)(((((int)stk + 44) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x4))) - 7.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    sprPutAtAlpha(0x8C33BC60, *(Stk3 *)(((int)stk + 16)), f4);
    *(float *)(((((int)stk + 44) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 44) + 0x4) + 0x0))) - (*(float *)0x8C0986D8));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 44) + 0x4)); }
    return (hudNumPut((*(int *)(((int)stk + 44))), *(Stk3 *)(((int)stk + 4)), f4));
}

int fadeScreenStart(int a4, int a5, int a6)
{
    int t0;
    float u6;
    int t9;
    int stk[13];

    *(unsigned int *)(((int)stk + 16)) = a4;
    *(unsigned int *)(((int)stk + 20)) = a5;
    *(unsigned int *)(((int)stk + 24)) = a6;
    *(Stk3 *)((((int)stk + 16) + 0xC)) = vecMake(320.0f, 240.0f, 9.99999975e-06f);
    t0 = set_event(0x78, 0x8C084BCE);
    *(unsigned int *)((t0 + 0x14)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)((t0 + 0x18)) = (*(int *)(((int)stk + 24)));
    *(unsigned int *)((t0 + 0x24)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)((t0 + 0x20)) = (*(int *)(((int)stk + 20)));
    u6 = 0.0f;
    if ((*(int *)(((int)stk + 16))) == 2) {
        u6 = 1.0f;
    }
    *(float *)((t0 + 0x1C)) = u6;
    if ((*(int *)(((int)stk + 20))) == 0) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t9 = 0x22;
    } else {
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0xC)); }
        t9 = 0x21;
    }
    sprInitPos((t0 + 0x28), t9, *(Stk3 *)(((int)stk + 4)));
    *(float *)((t0 + 0x38)) = 40.0f;
    *(float *)((t0 + 0x3C)) = 30.0f;
    return 0x3C;
}

int texPicPut(float f4)
{
    int stk[10];

    *(float *)(((int)stk + 20)) = f4;
    *(Stk3 *)((((int)stk + 20) + 0x4)) = vecMake(320.0f, 240.0f, 9.99999975e-05f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x8)); }
    sprInitPos(0x8C340714, 0x21, *(Stk3 *)(((int)stk + 4)));
    *(float *)0x8C340740 = (*(float *)(((int)stk + 20)));
    *(float *)0x8C340724 = 40.0f;
    *(float *)0x8C340728 = 30.0f;
    return (thunk_FUN_8c0f41f0(0x8C340714));
}

int titleSprBlinkPut(float f4)
{
    int t1;
    int t6;
    int stk[8];

    *(float *)(((int)stk + 20)) = f4;
    t1 = (int)((int)(*(int *)0x8C20D124) % (int)0x28);
    t6 = t1;
    if ((int)t1 < (int)0x1E) {
        *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0E6440), (*(float *)(((int)stk + 20))), (*(float *)0x8C0E643C));
        t6 = (sprListPut(0x8C1D8658, 0x3, 0xFF000000, 1.0f, 1.0f, 1.0f));
    }
    return t6;
}

int mtxGetPos(int a4, int a5, int a6)
{
    int stk[9];

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(Stk3 *)((((int)stk + 8) + 0xC)) = vecMake((*(float *)(((*(int *)(((int)stk + 8))) + 0x0))), (*(float *)(((*(int *)(((int)stk + 12))) + 0x0))), (*(float *)((a6 + 0x0))));
    nlCalcPoint(0x8C1016D4, (((int)stk + 4) + 0x10));
    *(float *)(((*(int *)(((int)stk + 8))) + 0x0)) = (*(float *)(((int)stk + 20)));
    *(float *)(((*(int *)(((int)stk + 12))) + 0x0)) = (*(float *)(((int)stk + 24)));
    *(float *)(((*(int *)(((int)stk + 16))) + 0x0)) = (*(float *)(((int)stk + 28)));
    return 0x18;
}
