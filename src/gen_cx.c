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


