/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int countryNameTagPut(int, Stk3, float);
int menuItemTextPut(int, int, int, int, Stk3, Stk3, float);
int nlDispStripTrnsl(int, int);
int primLineH(int, int, Stk3, Stk3);
int primLineV(int, int, Stk3, Stk3);
extern int sprListPut();
int sprPutCentered(int, int, int, int, int, float, float);
int sprRecInit(int, int, int, int, int);
int sprRecPutRotated(int, int, int, int);
int sprSet192PutB(int, int, int, int, Stk3, float);
Stk3 vecMake(float, float, float);
int shopDrawMenu(void);
void hudProfileDraw(int a4, Stk3 s);

int shopDrawMenu(void)
{
    int t2;
    int t3;
    int t4;
    int t5;
    int t9;
    float u13;
    int t15;
    int t19;
    int stk[196];

    { struct mv5 { int w[5]; }; *(struct mv5 *)((0x278 + ((int)stk + 84))) = *(struct mv5 *)(0x8C12706C); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((0x238 + ((int)stk + 84))) = *(struct mv16 *)(0x8C127080); }
    { struct mv16 { int w[16]; }; *(struct mv16 *)((0x1F8 + ((int)stk + 84))) = *(struct mv16 *)(0x8C1270C0); }
    { struct mv12 { int w[12]; }; *(struct mv12 *)((0x1C8 + ((int)stk + 84))) = *(struct mv12 *)(0x8C127100); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 84) + 0x68)) = *(struct mv8 *)(0x8C127130); }
    { struct mv8 { int w[8]; }; *(struct mv8 *)((((int)stk + 84) + 0x48)) = *(struct mv8 *)(0x8C127150); }
    { struct mv2 { int w[2]; }; *(struct mv2 *)((((int)stk + 84) + 0x40)) = *(struct mv2 *)(0x8C127170); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 84) + 0x28)) = *(struct mv6 *)(0x8C127178); }
    { struct mv6 { int w[6]; }; *(struct mv6 *)((((int)stk + 84) + 0x10)) = *(struct mv6 *)(0x8C127190); }
    nlDispStripTrnsl(0x4, (0x238 + ((int)stk + 84)));
    nlDispStripTrnsl(0x4, (0x1F8 + ((int)stk + 84)));
    *(Stk3 *)(((int)stk + 72)) = vecMake(296.0f, 0.0f, 70.0f);
    t2 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9CE4, 0x1, 0x0, 0.699999988f, 1.0f, 1.0f);
    *(Stk3 *)(((int)stk + 72)) = vecMake(30.0f, 30.0f, 65.0f);
    t3 = ((int (*)(int, int, int, float, float, float))(sprListPut))(0x8C1D9D50, 0x1, 0x0, 1.0f, 1.0f, 1.0f);
    *(unsigned int *)(((int)stk + 84)) = (0x88 + ((int)stk + 84));
    t4 = (0x128 + ((int)stk + 84));
    t5 = (((int)stk + 84) + 0x68);
    for (;;) {
        *(int *)((int)stk + 80) = 0x0;
        sprRecInit(t4, 0x107, t5, (((int)stk + 84) + 0x40), 0x0);
        t5 = (t5 + 0x10);
        t4 = (t4 + 0x50);
        if ((unsigned int)t5 >= (unsigned int)(*(int *)(((int)stk + 84)))) {
            break;
        }
    }
    sprRecPutRotated((0x128 + ((int)stk + 84)), 0x2, (((int)stk + 84) + 0x28), 0xFFFFFD00);
    *(int *)((int)stk + 80) = (((int)stk + 84) + 0x4);
    *(Stk3 *)((((int)stk + 84) + 0x4)) = vecMake(240.0f, 40.0f, 65.0f);
    t9 = *(int *)0x8C4220A4;
    *(unsigned int *)(((0x278 + ((int)stk + 84)) + (t9 << 2))) = ((*(int *)(((0x278 + ((int)stk + 84)) + (t9 << 2)))) + 0xD8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 84) + 0x4)); }
    u13 = *(float *)(((*(int *)(((0x278 + ((int)stk + 84)) + ((*(int *)0x8C4220A4) << 2)))) + 0x54));
    *(int *)((int)stk + 64) = (((int)stk + 84) + 0x4);
    sprPutCentered(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 64), u13, 0.0f);
    t15 = *(int *)0x8C4220A4;
    *(unsigned int *)(((0x278 + ((int)stk + 84)) + (t15 << 2))) = ((*(int *)(((0x278 + ((int)stk + 84)) + (t15 << 2)))) - 0xD8);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 84) + 0x4)); }
    t19 = ((int (*)(int, int, int, Stk3, float, float, float))(sprListPut))((*(int *)(((0x278 + ((int)stk + 84)) + ((*(int *)0x8C4220A4) << 2)))), 0x3, 0x0, *(Stk3 *)(((int)stk + 52)), 1.0f, 1.0f, 1.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((0x1C8 + ((int)stk + 84)) + 0xC)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((0x1C8 + ((int)stk + 84))); }
    primLineH(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 28)), *(Stk3 *)(((int)stk + 40)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((0x1C8 + ((int)stk + 84)) + 0x24)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((0x1C8 + ((int)stk + 84)) + 0x18)); }
    return (primLineV(0x2, 0xFFFFFFFF, *(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16))));
}

void hudProfileDraw(int a4, Stk3 s)
{
    float u20;
    int stk[31];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R8;
    int R10;
    int R12;
    int R13;
    int R14;
    float F0;
    float F1;
    float F2;
    float F3;
    float F4;
    float F13;
    float F14;
    float F15;
    int T_;
    stk[20] = s.w[0];
    stk[21] = s.w[1];
    stk[22] = s.w[2];
    R4 = a4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 28) + 0x34)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 28) + 0xC)) = *(struct mv3 *)((((int)stk + 28) + 0x34)); }
    *(float *)(((((int)stk + 28) + 0xC) + 0x0)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x0))) + 0.0f);
    *(float *)(((((int)stk + 28) + 0xC) + 0x4)) = ((*(float *)(((((int)stk + 28) + 0xC) + 0x4))) + 17.0f);
    R12 = (((int)stk + 28));
    R13 = (R4);
    R14 = ((((int)stk + 28) + 0x34));
    R2 = ((((int)stk + 28) + 0x34));
    R3 = (0x8C287ADC);
    R4 = ((((int)stk + 28) + 0xC));
    F14 = (17.0f);
    F15 = (4.0f);
    if (((*(int *)0x8C287ADC) != 2)) goto L_8C094FA2;
    *(float *)((R12 + 0x0)) = ((*(float *)((R12 + 0x0))) + 24.0f);
    *(float *)((R12 + 0x4)) = ((*(float *)((R12 + 0x4))) + 88.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R12); }
    menuItemTextPut(R13, R5, R6, R7, *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)), 1.0f);
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 7.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(R14); }
    countryNameTagPut(R13, *(Stk3 *)(((int)stk + 4)), 1.0f);
    F13 = (1.0f);
    L_8C094FA2:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + 10.0f);
    u20 = *(float *)((R14 + 0x4));
    *(float *)((R14 + 0x4)) = (u20 + 100.0f);
    R0 = (R13);
    F1 = ((u20 + 100.0f));
    F2 = (100.0f);
    F3 = (10.0f);
    F4 = (5.0f);
    if (((unsigned int)R13 < (unsigned int)0x12)) goto L_8C094FCA;
    L_8C0950CC:;
    return;
    L_8C094FCA:;
    R1 = ((R0 << 1));
    switch (((R0 << 1))) { case 0: goto L_8C09502C; case 2: goto L_8C095032; case 4: goto L_8C09503A; case 6: goto L_8C09503E; case 8: goto L_8C095042; case 10: goto L_8C095046; case 12: goto L_8C09504A; case 14: goto L_8C09504E; case 16: goto L_8C095052; case 18: goto L_8C095056; case 20: goto L_8C09505A; case 22: goto L_8C09505E; case 24: goto L_8C095066; case 26: goto L_8C09506E; case 28: goto L_8C095076; case 30: goto L_8C095082; case 32: goto L_8C09508E; case 34: goto L_8C0950A2; }
    L_8C0950A2:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F4);
    L_8C0950A8:;
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + 15.0f);
    R1 = (0x41700000);
    L_8C0950B6:;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(R14); }
    R0 = ((sprSet192PutB(R13, 0x1, R6, R7, *(Stk3 *)(((int)stk + 16)), F4)));
    goto L_8C0950CC;
    L_8C09508E:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C09512C));
    *(float *)((R14 + 0x4)) = ((*(float *)((R14 + 0x4))) + F14);
    goto L_8C0950B6;
    L_8C095082:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C095128));
    goto L_8C0950A8;
    L_8C095076:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (*(float *)0x8C095124));
    goto L_8C0950A8;
    L_8C09506E:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    goto L_8C0950A8;
    L_8C095066:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    goto L_8C0950A8;
    L_8C09505E:;
    F1 = (((*(float *)((R14 + 0x0))) + F15));
    L_8C095062:;
    *(float *)((R14 + 0x0)) = F1;
    goto L_8C0950A8;
    L_8C09505A:;
    L_8C095032:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + F15);
    goto L_8C0950A8;
    L_8C095056:;
    goto L_8C095032;
    L_8C095052:;
    goto L_8C095032;
    L_8C09504E:;
    goto L_8C095032;
    L_8C09504A:;
    goto L_8C095032;
    L_8C095046:;
    goto L_8C095032;
    L_8C095042:;
    goto L_8C095032;
    L_8C09503E:;
    goto L_8C095032;
    L_8C09503A:;
    goto L_8C095032;
    L_8C09502C:;
    F1 = (((*(float *)((R14 + 0x0))) + F4));
    goto L_8C095062;
}
