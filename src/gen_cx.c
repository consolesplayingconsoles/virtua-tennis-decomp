/* Straight-line functions with calls and guards (batch gen_cx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int btnGuideDrawB(int, float);
int countryNamePutC(int, Stk3, float);
extern int entryGetColorId();
int getID_Color(int, float);
int iconSlotPut(int, Stk3);
int kmyiGetPALExtRatio(int);
int kmyiSetScreenSize(int);
int primRectFrame(int, int, int, int, Stk3);
int vecMake(int, int, int, int, int, float, float, float);
int resultTeamsDrawAlt(int a4, int a5, int a6, int a7, float f4);
int kmyInitializePAL(int a4);


int kmyInitializePAL(int a4)
{
    int t2;
    int t4;
    int t9;
    int t43;
    int t45;
    int t48;
    int t50;
    int t51;
    int t69;
    int t76;
    int t68;
    int stk[74];

    *(unsigned int *)0x8C45EE2C = a4;
    kmyiSetScreenSize(a4);
    if ((0x42 & a4) == 66) {
        t2 = *(int *)0x8C20AE28;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)0x8C20AE24);
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t2;
        t4 = *(int *)0x8C20AE30;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = (*(int *)0x8C20AE2C);
        *(unsigned int *)((((int)stk + 4) + 0xC)) = t4;
        *(unsigned int *)((((int)stk + 4) + 0x10)) = (*(int *)0x8C20AE34);
        *(unsigned int *)0x8C45EEEC = (kmyiGetPALExtRatio(a4));
        *(unsigned int *)0x8C45EEA0 = (*(int *)((((*(int *)0x8C45EEEC) << 2) + ((int)stk + 4))));
        if ((0x20 & a4) == 0) {
            t9 = *(int *)0x8C45EEA0;
            *(unsigned int *)0x8C45EEA0 = (((int)((unsigned int)((int)((unsigned int)t9 + (unsigned int)0x0)) + ((((int)0x0 > (int)t9)) ? 1u : 0u))) >> 1);
        }
    }
    *(unsigned int *)(((int)stk + 32)) = 0x35F;
    *(unsigned int *)(((int)stk + 24)) = 0x8D;
    *(unsigned int *)(((int)stk + 28)) = 0x34B;
    *(unsigned int *)(((int)stk + 48)) = 0x3F;
    if (((a4 & 0x1) != 1) && (((0x2C & a4) != 0) && (0x1 != 0))) {
        *(unsigned int *)(((int)stk + 44)) = 0x270;
    } else {
        *(unsigned int *)(((int)stk + 44)) = 0x138;
    }
    if ((0x42 & a4) == 66) {
        if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
            *(unsigned int *)(((int)stk + 36)) = 0x2C;
            *(unsigned int *)(((int)stk + 40)) = 0x26C;
        } else {
            *(unsigned int *)(((int)stk + 36)) = 0x16;
            *(unsigned int *)(((int)stk + 40)) = 0x134;
        }
        if ((0x20 & a4) != 0) {
            *(unsigned int *)(((int)stk + 140)) = 0x136;
        } else {
            *(unsigned int *)(((int)stk + 140)) = 0x134;
        }
    } else {
        if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
            *(unsigned int *)(((int)stk + 36)) = 0x2C;
            *(unsigned int *)(((int)stk + 40)) = 0x26C;
        } else {
            *(unsigned int *)(((int)stk + 36)) = 0x16;
            *(unsigned int *)(((int)stk + 40)) = 0x134;
        }
        if ((0x20 & a4) != 0) {
            *(unsigned int *)(((int)stk + 140)) = 0x136;
        } else {
            *(unsigned int *)(((int)stk + 140)) = 0x134;
        }
    }
    *(unsigned int *)(((int)stk + 144)) = 0x15;
    if (((a4 & 0x1) != 1) && ((0x2C & a4) != 0)) {
        *(unsigned int *)(((int)stk + 56)) = 0x16A;
        *(unsigned int *)(((int)stk + 60)) = 0x1F;
        *(unsigned int *)(((int)stk + 52)) = 0x5;
        *(unsigned int *)(((int)stk + 72)) = 0x1;
    } else {
        *(unsigned int *)(((int)stk + 56)) = 0x31F;
        *(unsigned int *)(((int)stk + 60)) = 0xF;
        *(unsigned int *)(((int)stk + 52)) = 0x3;
        *(unsigned int *)(((int)stk + 72)) = 0x0;
    }
    *(unsigned int *)(((int)stk + 76)) = 0x0;
    *(unsigned int *)(((int)stk + 80)) = 0x0;
    *(unsigned int *)(((int)stk + 84)) = 0x0;
    *(unsigned int *)(((int)stk + 88)) = 0x0;
    if ((a4 & 0x1) == 1) {
        if (0x0 != 0) {
            *(unsigned int *)(((int)stk + 92)) = 0x0;
        } else {
            *(unsigned int *)(((int)stk + 92)) = 0x2;
        }
    } else {
        if (((0x2C & a4) == 0) && (0x0 == 0)) {
            *(unsigned int *)(((int)stk + 92)) = 0x2;
        } else {
            *(unsigned int *)(((int)stk + 92)) = 0x0;
        }
    }
    *(unsigned int *)(((int)stk + 136)) = 0x16;
    if ((0x10 & a4) != 0) {
        *(unsigned int *)(((int)stk + 132)) = 0x0;
    } else {
        *(unsigned int *)(((int)stk + 132)) = 0x1;
    }
    *(unsigned int *)(((int)stk + 64)) = 0x0;
    *(unsigned int *)(((int)stk + 68)) = 0x1;
    *(unsigned int *)(((int)stk + 96)) = 0x1;
    *(unsigned int *)(((int)stk + 100)) = 0x0;
    *(unsigned int *)(((int)stk + 104)) = 0x0;
    *(unsigned int *)(((int)stk + 108)) = 0x0;
    *(unsigned int *)(((int)stk + 112)) = 0x0;
    *(unsigned int *)(((int)stk + 116)) = 0x0;
    *(unsigned int *)(((int)stk + 128)) = 0x0;
    *(unsigned int *)(((int)stk + 120)) = 0x0;
    *(unsigned int *)(((int)stk + 124)) = 0xF0;
    *(unsigned int *)(((int)stk + 272)) = 0xAE;
    if ((0x42 & a4) == 66) {
        t43 = *(int *)0x8C20AE3C;
        *(unsigned int *)((((int)stk + 4) + 0x0)) = (*(int *)0x8C20AE38);
        *(unsigned int *)((((int)stk + 4) + 0x4)) = t43;
        t45 = *(int *)0x8C20AE44;
        *(unsigned int *)((((int)stk + 4) + 0x8)) = (*(int *)0x8C20AE40);
        *(unsigned int *)((((int)stk + 4) + 0xC)) = t45;
        *(unsigned int *)((((int)stk + 4) + 0x10)) = (*(int *)0x8C20AE48);
        t48 = *(int *)((((int)stk + 4) + ((*(int *)0x8C45EEEC) << 2)));
        *(unsigned int *)(((int)stk + 268)) = t48;
        t50 = t48;
        if (((a4 & 0x1) != 1) && ((a4 & 0x2C) != 0)) {
            t50 = (t48 - 1);
        }
        *(unsigned int *)(((int)stk + 264)) = t50;
        if ((0x20 & a4) != 0) {
            t51 = *(int *)0x8C45EEA0;
            *(unsigned int *)0x8C45EEE0 = (((int)((unsigned int)((int)((unsigned int)t51 + (unsigned int)0x0)) + ((((int)0x0 > (int)t51)) ? 1u : 0u))) >> 1);
        } else {
            *(unsigned int *)0x8C45EEE0 = (*(int *)0x8C45EEA0);
        }
        t68 = 0x1;
    } else {
        if (((a4 & 0x1) != 1) && ((a4 & 0x2C) != 0)) {
            *(unsigned int *)(((int)stk + 264)) = 0x2D;
        } else {
            *(unsigned int *)(((int)stk + 264)) = 0x2E;
        }
        *(unsigned int *)(((int)stk + 268)) = 0x2E;
        *(unsigned int *)0x8C45EEE0 = 0xF0;
        t68 = 0x2E;
    }
    t69 = *(int *)(((int)stk + 36));
    *(unsigned int *)0x8C45EED8 = ((((int)((unsigned int)((int)((unsigned int)t69 + (unsigned int)0x0)) + ((((int)0x0 > (int)t69)) ? 1u : 0u))) >> 1) + (*(int *)0x8C45EEE0));
    *(unsigned int *)0x8C45EEDC = (*(int *)(((int)stk + 36)));
    t76 = ((int (*)(int, int, int, int))((*(int *)0x8C45EE34)))((((int)stk + 4) + 0x14), (a4 & 0x1), t68, 0x26C);
    return 0x0;
}

int resultTeamsDrawAlt(int a4, int a5, int a6, int a7, float f4)
{
    int t8;
    int t11;
    int t19;
    int t21;
    int t32;
    int t34;
    int t39;
    int t46;
    int t53;
    int t59;
    int t60;
    int t67;
    int t68;
    int t75;
    int t83;
    int t95;
    int t101;
    int t108;
    int t115;
    int t121;
    int t122;
    int t129;
    int t130;
    int stk[63];

    *(unsigned int *)(((int)stk + 128)) = 0x82;
    vecMake(a4, a5, a6, a7, (((int)stk + 124) + 0x20), 53.0f, 186.0f, 0.100000001f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 124) + 0x20) + 0x24), 527.0f, 186.0f, 0.100000001f);
    *(unsigned int *)(((int)stk + 124)) = ((((int)stk + 124) + 0x20) + 0x18);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 124) + 0x20) + 0x18), 118.0f, 186.0f, 0.100000001f);
    vecMake(0x0, 0x0, 0x0, 0x0, ((((int)stk + 124) + 0x20) + 0xC), 462.0f, 186.0f, 0.100000001f);
    *(unsigned int *)0x8C3417B4 = (((int (*)(int))(entryGetColorId))(0x0));
    *(unsigned int *)0x8C3417B8 = (((int (*)(int))(entryGetColorId))(0x1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 124) + 0x20)); }
    *(unsigned int *)(((int)stk + 140)) = 0x8C287D84;
    iconSlotPut((*(int *)0x8C2889DC), *(Stk3 *)((((int)stk + 124) + 0x20)));
    t8 = *(int *)(((int)stk + 124));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 84)) = *(struct mv3 *)(t8); }
    *(unsigned int *)(((int)stk + 132)) = 0x8C289874;
    iconSlotPut((*(int *)0x8C28A4CC), *(Stk3 *)(t8));
    t11 = ((int (*)(int))(entryGetColorId))(0x0);
    *(unsigned int *)(((int)stk + 136)) = (getID_Color(t11, f4));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 62.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + -2.0f), (*(float *)(((((int)stk + 124) + 0x20) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 68)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame(0x40, 0x50, 0x1, (*(int *)(((int)stk + 136))), *(Stk3 *)((((int)stk + 84) + 0x3C)));
    t19 = ((int (*)(int))(entryGetColorId))(0x2);
    *(unsigned int *)(((((int)stk + 68) + 0x44) + 0x0)) = (getID_Color(t19, f4));
    t21 = *(int *)(((int)stk + 124));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((t21 + 0x0))) + 62.0f), ((*(float *)((t21 + 0x4))) + -2.0f), (*(float *)((t21 + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame(0x40, 0x50, 0x1, (*(int *)(((int)stk + 136))), *(Stk3 *)((((int)stk + 84) + 0x3C)));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 29.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + -23.0f), (*(float *)(((((int)stk + 124) + 0x20) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 36)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    t32 = ((int (*)(int, Stk3))(entryGetColorId))(0x0, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    btnGuideDrawB(t32, f4);
    t34 = *(int *)(((int)stk + 124));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((t34 + 0x0))) + 29.0f), ((*(float *)((t34 + 0x4))) + -23.0f), (*(float *)((t34 + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 20)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    t39 = ((int (*)(int, Stk3))(entryGetColorId))(0x2, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    btnGuideDrawB(t39, f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 186.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + 8.0f), (*(float *)(((((int)stk + 124) + 0x20) + 0x8))));
    t46 = *(int *)(((*(int *)(((int)stk + 140))) + 0xC58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    countryNamePutC(t46, *(Stk3 *)((((int)stk + 84) + 0x3C)), f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 186.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + 49.0f), (*(float *)(((((int)stk + 124) + 0x20) + 0x8))));
    t53 = *(int *)(((*(int *)(((int)stk + 132))) + 0xC58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    countryNamePutC(t53, *(Stk3 *)((((int)stk + 84) + 0x3C)), f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 257.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + -2.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x8))) + 0.100000001f));
    t59 = ((int (*)(int))(entryGetColorId))(0x0);
    t60 = getID_Color(t59, f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame((*(int *)(((int)stk + 128))), 0x27, 0x1, t60, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)(((((int)stk + 124) + 0x20) + 0x0))) + 257.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x4))) + 39.0f), ((*(float *)(((((int)stk + 124) + 0x20) + 0x8))) + 0.100000001f));
    t67 = ((int (*)(int))(entryGetColorId))(0x2);
    t68 = getID_Color(t67, f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame((*(int *)(((int)stk + 128))), 0x27, 0x1, t68, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((((int)stk + 124) + 0x20) + 0xC)); }
    *(unsigned int *)(((int)stk + 124)) = 0x8C288AFC;
    iconSlotPut((*(int *)0x8C289754), *(Stk3 *)(((((int)stk + 124) + 0x20) + 0xC)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((((int)stk + 124) + 0x20) + 0x24)); }
    *(unsigned int *)(((int)stk + 140)) = 0x8C28A5EC;
    iconSlotPut((*(int *)0x8C28B244), *(Stk3 *)(((((int)stk + 124) + 0x20) + 0x24)));
    t75 = ((int (*)(int))(entryGetColorId))(0x1);
    *(unsigned int *)(((((int)stk + 40) + 0x5C) + 0x0)) = (getID_Color(t75, f4));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + 62.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + -2.0f), (*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 24)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame(0x40, 0x50, 0x1, (*(int *)(((int)stk + 132))), *(Stk3 *)((((int)stk + 84) + 0x3C)));
    t83 = ((int (*)(int))(entryGetColorId))(0x3);
    *(unsigned int *)(((((int)stk + 24) + 0x6C) + 0x0)) = (getID_Color(t83, f4));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x0))) + 62.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x4))) + -2.0f), (*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame(0x40, 0x50, 0x1, (*(int *)(((int)stk + 132))), *(Stk3 *)((((int)stk + 84) + 0x3C)));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + 29.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + -23.0f), (*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    t95 = ((int (*)(int, Stk3))(entryGetColorId))(0x1, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    btnGuideDrawB(t95, f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x0))) + 29.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x4))) + -23.0f), (*(float *)((((((int)stk + 124) + 0x20) + 0x24) + 0x8))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 96)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    t101 = ((int (*)(int, Stk3))(entryGetColorId))(0x3, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    btnGuideDrawB(t101, f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + -73.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + 8.0f), (*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))));
    t108 = *(int *)(((*(int *)(((int)stk + 124))) + 0xC58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 80)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    countryNamePutC(t108, *(Stk3 *)((((int)stk + 84) + 0x3C)), f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + -73.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + 49.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))) + 0.100000001f));
    t115 = *(int *)(((*(int *)(((int)stk + 140))) + 0xC58));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    countryNamePutC(t115, *(Stk3 *)((((int)stk + 84) + 0x3C)), f4);
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + -2.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + -2.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))) + 0.100000001f));
    t121 = ((int (*)(int))(entryGetColorId))(0x1);
    t122 = getID_Color(t121, f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 48)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    primRectFrame((*(int *)(((int)stk + 128))), 0x27, 0x1, t122, *(Stk3 *)((((int)stk + 84) + 0x3C)));
    vecMake(0x0, 0x0, 0x0, 0x0, (((int)stk + 84) + 0x3C), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x0))) + -2.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x4))) + 39.0f), ((*(float *)((((((int)stk + 124) + 0x20) + 0xC) + 0x8))) + 0.100000001f));
    t129 = ((int (*)(int))(entryGetColorId))(0x3);
    t130 = getID_Color(t129, f4);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 32)) = *(struct mv3 *)((((int)stk + 84) + 0x3C)); }
    return (primRectFrame((*(int *)(((int)stk + 128))), 0x27, 0x1, t130, *(Stk3 *)((((int)stk + 84) + 0x3C))));
}

