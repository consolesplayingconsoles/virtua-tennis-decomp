/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern float _builtin_sqrtf(float);
int courtUsaDrawNumber(int);
int menuItemDraw0(int, int, Stk3);
int menuItemDraw1(int, int, Stk3);
int menuItemDraw2(int, int, Stk3);
int nlArcTan2(float, float);
int nlLocate(int, int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRand(void);
int nlRotateAX(int);
int nlRotateAY(int);
int nlTranslate(float, float, float);
int padDirRepeat(int, int);
int panelLogoSwingDraw2(int, Stk3);
int sndSeCursor(void);
int sndSeDecide(void);
int vecAdd(int, int, int, int, int);
int vecMake(int, int, int, int, int, float, float, float);
int courtUsaDrawScoreboard2(void);
int courtUsaDrawScoreboard(void);
void cpuReachRange(int a4, int a5, float f4, float f5, float f6);
void cpuSglMoodUpdate(void);
int entryGridSettingsStep(int a4, int a5, int a6, int a7);

int courtUsaDrawScoreboard2(void)
{
    int t4;
    int t5;
    int t6;
    int t66;
    int t138;
    int t161;
    int t13;
    float u44;
    float u45;
    int t120;
    int t121;
    int stk[23];

    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 4) + 0x24) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x24) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C185408;
    t5 = *(int *)0x8C287B08;
    t6 = *(int *)0x8C287B0C;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 8)) = 0x3;
            *(unsigned int *)(((int)stk + 24)) = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 8)) = 0x5;
                *(unsigned int *)(((int)stk + 24)) = 0x6;
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x6;
                *(unsigned int *)(((int)stk + 24)) = 0x5;
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)0x8C287B18);
        *(unsigned int *)(((int)stk + 24)) = (*(int *)0x8C287B1C);
    }
    *(unsigned int *)(((int)stk + 8)) = ((int)((int)(*(int *)(((int)stk + 8))) % (int)0x64));
    *(unsigned int *)(((int)stk + 24)) = ((int)((int)(*(int *)(((int)stk + 24))) % (int)0x64));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0x8C287B08);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287B0C);
    if ((int)(*(int *)(((int)stk + 4))) > (int)0x5) {
        *(unsigned int *)(((int)stk + 4)) = 0x4;
    }
    if ((int)(*(int *)(((int)stk + 32))) > (int)0x5) {
        *(unsigned int *)(((int)stk + 32)) = 0x4;
    }
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        u44 = 421.200012f;
        u45 = 589.26001f;
    } else {
        nlPushMatrix(0x0);
        u44 = 401.01001f;
        u45 = 592.820007f;
    }
    nlTranslate(28.6499996f, u44, u45);
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut(0xC881CD0);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C12150C;
        nlTranslate((*(float *)0x8C12150C), (*(float *)0x8C121510), (*(float *)0x8C121514));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + 0x8C18B0A0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t66 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 12)) = (t66 + 0xC);
        nlTranslate((*(float *)(((t66 + 0xC) + 0x0))), (*(float *)(((t66 + 0xC) + 0x4))), (*(float *)(((t66 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        t120 = 0x8C18B0A0;
        t121 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 28)) = 0x8C121584;
        nlTranslate((*(float *)0x8C121584), (*(float *)0x8C121588), (*(float *)0x8C12158C));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C121590;
        nlTranslate((*(float *)0x8C121590), (*(float *)0x8C121594), (*(float *)0x8C121598));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C12159C;
        nlTranslate((*(float *)0x8C12159C), (*(float *)0x8C1215A0), (*(float *)0x8C1215A4));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C1215A8;
        nlTranslate((*(float *)0x8C1215A8), (*(float *)0x8C1215AC), (*(float *)0x8C1215B0));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        t120 = 0x8C18B0E8;
        t121 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t121 + t120))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 16)) = 0x8C12153C;
    nlTranslate((*(float *)0x8C12153C), (*(float *)0x8C121540), (*(float *)0x8C121544));
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 4))) << 2) + 0x8C18B14C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t138 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = (t138 + 0xC);
    nlTranslate((*(float *)(((t138 + 0xC) + 0x0))), (*(float *)(((t138 + 0xC) + 0x4))), (*(float *)(((t138 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 32))) << 2) + 0x8C18B14C))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121524;
        nlTranslate((*(float *)0x8C121524), (*(float *)0x8C121528), (*(float *)0x8C12152C));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        courtUsaDrawNumber((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t161 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = (t161 + 0xC);
        nlTranslate((*(float *)(((t161 + 0xC) + 0x0))), (*(float *)(((t161 + 0xC) + 0x4))), (*(float *)(((t161 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        courtUsaDrawNumber((*(int *)(((int)stk + 24))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C121524;
        nlTranslate((*(float *)0x8C121524), (*(float *)0x8C121528), (*(float *)0x8C12152C));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18B130))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C121530;
        nlTranslate((*(float *)0x8C121530), (*(float *)0x8C121534), (*(float *)0x8C121538));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        if ((int)(*(int *)(((int)stk + 24))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C18B130))));
        }
    }
    return (nlPopMatrix(0x1));
}

int courtUsaDrawScoreboard(void)
{
    int t4;
    int t5;
    int t6;
    int t66;
    int t138;
    int t161;
    int t13;
    float u44;
    float u45;
    int t120;
    int t121;
    int stk[23];

    *(unsigned int *)(((int)stk + 12)) = (((int)stk + 4) + 0x24);
    *(unsigned int *)(((((int)stk + 4) + 0x24) + 0x0)) = (*(int *)0x8C2889DC);
    *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 4) + 0x24) + 0x4);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x4) + 0x0)) = (*(int *)0x8C289754);
    *(unsigned int *)(((int)stk + 36)) = ((((int)stk + 4) + 0x24) + 0x8);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0x8) + 0x0)) = (*(int *)0x8C28A4CC);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 4) + 0x24) + 0xC);
    *(unsigned int *)((((((int)stk + 4) + 0x24) + 0xC) + 0x0)) = (*(int *)0x8C28B244);
    t4 = *(int *)0x8C185408;
    t5 = *(int *)0x8C287B08;
    t6 = *(int *)0x8C287B0C;
    if ((*(int *)0x8C287B24) != 0) {
        if (((*(int *)0x8C287B18) == 2) && (t13 = *(int *)0x8C287B1C, t13 == 2)) {
            *(unsigned int *)(((int)stk + 8)) = 0x3;
            *(unsigned int *)(((int)stk + 24)) = 0x3;
        } else {
            if ((*(int *)0x8C287B18) == 3) {
                *(unsigned int *)(((int)stk + 8)) = 0x5;
                *(unsigned int *)(((int)stk + 24)) = 0x6;
            } else {
                *(unsigned int *)(((int)stk + 8)) = 0x6;
                *(unsigned int *)(((int)stk + 24)) = 0x5;
            }
        }
    } else {
        *(unsigned int *)(((int)stk + 8)) = (*(int *)0x8C287B18);
        *(unsigned int *)(((int)stk + 24)) = (*(int *)0x8C287B1C);
    }
    *(unsigned int *)(((int)stk + 8)) = ((int)((int)(*(int *)(((int)stk + 8))) % (int)0x64));
    *(unsigned int *)(((int)stk + 24)) = ((int)((int)(*(int *)(((int)stk + 24))) % (int)0x64));
    *(unsigned int *)(((int)stk + 4)) = (*(int *)0x8C287B08);
    *(unsigned int *)(((int)stk + 32)) = (*(int *)0x8C287B0C);
    if ((int)(*(int *)(((int)stk + 4))) > (int)0x5) {
        *(unsigned int *)(((int)stk + 4)) = 0x4;
    }
    if ((int)(*(int *)(((int)stk + 32))) > (int)0x5) {
        *(unsigned int *)(((int)stk + 32)) = 0x4;
    }
    if ((0x1 & ((t4 + t5) + t6)) != 0) {
        nlPushMatrix(0x0);
        u44 = 421.200012f;
        u45 = 589.26001f;
    } else {
        nlPushMatrix(0x0);
        u44 = 401.01001f;
        u45 = 592.820007f;
    }
    nlTranslate(28.6499996f, u44, u45);
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut(0xC881CD0);
    nlPopMatrix(0x1);
    if ((*(int *)0x8C287ADC) == 2) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 20)) = 0x8C1214AC;
        nlTranslate((*(float *)0x8C1214AC), (*(float *)0x8C1214B0), (*(float *)0x8C1214B4));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + 0x8C18B0A0))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t66 = *(int *)(((int)stk + 20));
        *(unsigned int *)(((int)stk + 12)) = (t66 + 0xC);
        nlTranslate((*(float *)(((t66 + 0xC) + 0x0))), (*(float *)(((t66 + 0xC) + 0x4))), (*(float *)(((t66 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        t120 = 0x8C18B0A0;
        t121 = ((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2);
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 28)) = 0x8C121554;
        nlTranslate((*(float *)0x8C121554), (*(float *)0x8C121558), (*(float *)0x8C12155C));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C121560;
        nlTranslate((*(float *)0x8C121560), (*(float *)0x8C121564), (*(float *)0x8C121568));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 36))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 12)) = 0x8C12156C;
        nlTranslate((*(float *)0x8C12156C), (*(float *)0x8C121570), (*(float *)0x8C121574));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        nlObjPut((*(int *)((((*(int *)(((*(int *)(((int)stk + 16))) + 0x0))) << 2) + 0x8C18B0E8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 16)) = 0x8C121578;
        nlTranslate((*(float *)0x8C121578), (*(float *)0x8C12157C), (*(float *)0x8C121580));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        t120 = 0x8C18B0E8;
        t121 = ((*(int *)(((*(int *)(((int)stk + 20))) + 0x0))) << 2);
    }
    nlObjPut((*(int *)((t121 + t120))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    *(unsigned int *)(((int)stk + 16)) = 0x8C1214DC;
    nlTranslate((*(float *)0x8C1214DC), (*(float *)0x8C1214E0), (*(float *)0x8C1214E4));
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 4))) << 2) + 0x8C18B14C))));
    nlPopMatrix(0x1);
    nlPushMatrix(0x0);
    t138 = *(int *)(((int)stk + 16));
    *(unsigned int *)(((int)stk + 4)) = (t138 + 0xC);
    nlTranslate((*(float *)(((t138 + 0xC) + 0x0))), (*(float *)(((t138 + 0xC) + 0x4))), (*(float *)(((t138 + 0xC) + 0x8))));
    nlRotateAY(0x8000);
    nlRotateAX(0x71C);
    nlObjPut((*(int *)((((*(int *)(((int)stk + 32))) << 2) + 0x8C18B14C))));
    nlPopMatrix(0x1);
    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1214C4;
        nlTranslate((*(float *)0x8C1214C4), (*(float *)0x8C1214C8), (*(float *)0x8C1214CC));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        courtUsaDrawNumber((*(int *)(((int)stk + 8))));
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        t161 = *(int *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 8)) = (t161 + 0xC);
        nlTranslate((*(float *)(((t161 + 0xC) + 0x0))), (*(float *)(((t161 + 0xC) + 0x4))), (*(float *)(((t161 + 0xC) + 0x8))));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        courtUsaDrawNumber((*(int *)(((int)stk + 24))));
    } else {
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 4)) = 0x8C1214C4;
        nlTranslate((*(float *)0x8C1214C4), (*(float *)0x8C1214C8), (*(float *)0x8C1214CC));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        if ((int)(*(int *)(((int)stk + 8))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 8))) << 2) + 0x8C18B130))));
        }
        nlPopMatrix(0x1);
        nlPushMatrix(0x0);
        *(unsigned int *)(((int)stk + 8)) = 0x8C1214D0;
        nlTranslate((*(float *)0x8C1214D0), (*(float *)0x8C1214D4), (*(float *)0x8C1214D8));
        nlRotateAY(0x8000);
        nlRotateAX(0x71C);
        if ((int)(*(int *)(((int)stk + 24))) < (int)0x6) {
            nlObjPut((*(int *)((((*(int *)(((int)stk + 24))) << 2) + 0x8C18B130))));
        }
    }
    return (nlPopMatrix(0x1));
}

void cpuReachRange(int a4, int a5, float f4, float f5, float f6)
{
    int t0;
    float u1;
    float u6;
    int t9;
    int t10;
    int t13;
    int t15;
    float u17;
    float u18;
    float u19;
    int t20;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    float u27;
    float u28;
    float u51;
    float u52;
    int t55;
    int t53;
    float u58;
    float u60;
    int t62;
    int t63;
    float u65;
    float u66;
    float u73;
    int t70;
    int t68;
    float u80;
    float u81;
    float u82;
    float u84;
    float u85;
    float u92;
    float u93;
    int t96;
    int t94;
    int t100;
    int t101;
    int t102;
    float u105;
    float u106;
    float u107;
    float u108;
    float u113;
    float u116;
    float u118;
    float u120;
    float u121;
    float u125;
    float u127;
    float u133;
    float u134;
    int t40;
    int t41;
    float u46;
    float u47;
    float u48;
    int t49;
    int t30;
    int t31;
    float u32;
    float u33;
    float u34;
    float u35;
    float u36;
    int t37;
    int t99;
    float u103;
    float u104;
    int t144;
    int stk[19];

    t0 = *(int *)((a4 + 0xB5C));
    u1 = *(float *)((a4 + 0xAE8));
    if (((*(int *)((a4 + 0xB60))) & 0x100) != 0) {
    } else {
        *(float *)(((int)stk + 16)) = ((*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x2C))) / (*(float *)0x8C102450));
        u6 = *(float *)((a4 + 0xB00));
        t9 = nlArcTan2((u6 * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30)))), (-(u6 * (*(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28))))));
        t10 = ((~(((~(((int)t9 >> 12) + 0x1)) + 0x1) & 0xF)) + 0x1);
        if ((int)(((int)t9 >> 12) + 0x1) >= 0) {
            t10 = ((((int)t9 >> 12) + 0x1) & 0xF);
        }
        t13 = (int)((unsigned int)((int)((unsigned int)t10 + (unsigned int)0x0)) + ((((int)0x0 > (int)t10)) ? 1u : 0u));
        t15 = ((~(((~((-(t13 >> 1)) + 0xA)) + 0x1) & 0x7)) + 0x1);
        if ((int)((-(t13 >> 1)) + 0xA) >= 0) {
            t15 = (((-(t13 >> 1)) + 0xA) & 0x7);
        }
        u17 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x28));
        u18 = *(float *)((((t0 * 0x160) + 0x8C2FC69C) + 0x30));
        u19 = (u18 * u18);
        u19 = u19 + u17 * u17;
        t20 = (int)(_builtin_sqrtf(u19) * 4.0f);
        if ((int)(int)(_builtin_sqrtf(u19) * 4.0f) > (int)0x3) {
            t20 = 0x3;
        }
        if (t20 == 0) {
            t22 = *(int *)0x8C181540;
            t23 = *(int *)((((t15 << 2) + 0x8C181540) + 0x4));
            *(float *)(((int)stk + 20)) = (1.0f - (_builtin_sqrtf(u19) * 4.0f));
            *(float *)(((int)stk + 24)) = (1.0f - ((0.25f - _builtin_sqrtf(u19)) * 4.0f));
            t40 = t23;
            t41 = t22;
            u46 = (1.0f - (_builtin_sqrtf(u19) * 4.0f));
            u47 = (1.0f - ((0.25f - _builtin_sqrtf(u19)) * 4.0f));
            u48 = ((0.25f - _builtin_sqrtf(u19)) * 4.0f);
            t49 = (int)(_builtin_sqrtf(u19) * 4.0f);
        } else {
            if (t20 == 3) {
                t24 = *(int *)((0x8C181540 + ((t15 + 0x11) << 2)));
                *(float *)(((int)stk + 20)) = (1.0f - ((_builtin_sqrtf(u19) + -0.75f) * 4.0f));
                *(float *)(((int)stk + 24)) = (1.0f - ((1.0f - _builtin_sqrtf(u19)) * 4.0f));
                t30 = t24;
                t31 = t24;
                u32 = (1.0f - ((1.0f - _builtin_sqrtf(u19)) * 4.0f));
                u33 = (1.0f - ((_builtin_sqrtf(u19) + -0.75f) * 4.0f));
                u34 = ((1.0f - _builtin_sqrtf(u19)) * 4.0f);
                u35 = -0.75f;
                u36 = 1.0f;
                t37 = (int)(_builtin_sqrtf(u19) * 4.0f);
            } else {
                t25 = *(int *)((0x8C181540 + ((((((t20 - 1) << 2) << 1) + t15) + 0x1) << 2)));
                t26 = *(int *)((0x8C181540 + (((((t20 << 2) << 1) + t15) + 0x1) << 2)));
                u27 = (_builtin_sqrtf(u19) - ((float)t20 * 0.25f));
                *(float *)(((int)stk + 20)) = (1.0f - (u27 * 4.0f));
                u28 = (((float)(t20 + 0x1) * 0.25f) - _builtin_sqrtf(u19));
                *(float *)(((int)stk + 24)) = (1.0f - (u28 * 4.0f));
                t30 = t26;
                t31 = t25;
                u32 = u17;
                u34 = (u28 * 4.0f);
                u35 = (1.0f - (u27 * 4.0f));
                u36 = (1.0f - (u28 * 4.0f));
                t37 = (t20 + 0x1);
            }
            t40 = t30;
            t41 = t31;
            u46 = u35;
            u47 = u36;
            u48 = 0.25f;
            t49 = t37;
        }
        u51 = *(float *)((a4 + 0xB9C));
        u52 = *(float *)((a4 + 0xAE8));
        t55 = 0x1;
        if ((u51 - u52) > 0.0f) {
        } else {
            t53 = 0x0;
            if (0.0f > (u51 - u52)) {
                t53 = 0xFFFFFFFF;
            }
            t55 = t53;
        }
        u58 = *(float *)((a4 + 0xB90));
        u60 = 4.0f;
        u60 = u60 + (1.0f + 1.0f) * ((*(float *)((a4 + 0xB00))) * (float)t55);
        t62 = *(int *)(((t40 + ((int)u60 << 2)) + 0x0));
        t63 = *(int *)(((t41 + ((int)u60 << 2)) + 0x0));
        *(float *)(((int)stk + 12)) = (*(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + ((((*(int *)((a4 + 0xC58))) * 0x6C) + 0x8C102424) + 0x20)) + 0x0)));
        u65 = *(float *)0x8C287B40;
        u66 = (-(u51 / u65));
        if (!(0.0f > (u51 / u65))) {
            u66 = (u51 / u65);
        }
        u73 = (u51 / u65);
        if (u66 > 0.949999988f) {
            t70 = 0x1;
            if ((u51 / u65) > 0.0f) {
            } else {
                t68 = 0x0;
                if (0.0f > (u51 / u65)) {
                    t68 = 0xFFFFFFFF;
                }
                t70 = t68;
            }
            u73 = ((float)t70 * 0.949999988f);
        }
        u80 = 0.300000012f;
        u80 = u80 + 3.29999995f * (*(float *)(((((*(int *)(((0xC6C + a4) + 0x0))) << 2) + ((0x8C102424 + ((*(int *)((a4 + 0xC58))) * 0x6C)) + 0x20)) + 0x0)));
        *(float *)(((int)stk + 4)) = u80;
        u81 = *(float *)((a4 + 0xBA4));
        u82 = (-u81);
        if (!(0.0f > u81)) {
            u82 = u81;
        }
        u84 = *(float *)0x8C291F84;
        u85 = (-u84);
        if (!(0.0f > u84)) {
            u85 = u84;
        }
        if ((u85 + 5.0f) > u82) {
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) * 1.25f);
        }
        u92 = *(float *)((a4 + 0xAE8));
        u93 = *(float *)((a4 + 0xB9C));
        t96 = 0x1;
        if ((u93 - u92) > 0.0f) {
        } else {
            t94 = 0x0;
            if (0.0f > (u93 - u92)) {
                t94 = 0xFFFFFFFF;
            }
            t96 = t94;
        }
        *(float *)(((int)stk + 8)) = ((float)t96 * 0.949999988f);
        nlLocate(0x14, 0x19);
        t100 = t62;
        t101 = t63;
        t102 = 0x0;
        u105 = u1;
        u106 = u58;
        for (;;) {
            u107 = *(float *)((a4 + 0xB9C));
            u108 = (u107 - u105);
            if (!(0.0f > (u107 - u105))) {
            } else {
                u104 = u107;
                u104 = (-u104);
                u108 = (u104 + u105);
            }
            if (!(u108 > 15.0f)) {
                *(float *)((a5 + 0x0)) = u106;
                *(float *)((a5 + 0x4)) = (*(float *)((a4 + 0xB94)));
                *(float *)((a5 + 0x8)) = (*(float *)((a4 + 0xB98)));
                return;
            }
            u103 = (*(float *)((t101 + 0x0)));
            u113 = *(float *)((a4 + 0xB00));
            u104 = (*(float *)((t100 + 0x0)));
            u116 = (u113 * u103);
            u103 = (*(float *)(((int)stk + 20)));
            u118 = (u113 * u104);
            u104 = (*(float *)(((int)stk + 24)));
            u120 = (u116 * u103);
            u103 = (*(float *)(((int)stk + 16)));
            u121 = u105;
            u121 = u121 + u103 * ((-u120) - (u118 * u104));
            u105 = u121;
            u103 = (*(float *)(((int)stk + 12)));
            u125 = u106;
            u125 = u125 + u103 * ((*(float *)(((int)stk + 8))) - u106);
            u106 = u125;
            u127 = (u73 - u106);
            if (!(0.0f > (u106 - u73))) {
                u127 = (u106 - u73);
            }
            u104 = (*(float *)(((int)stk + 4)));
            if (u104 > u127) {
                u103 = (*(float *)(((int)stk + 4)));
                u106 = u73;
                u133 = u106;
                u133 = u133 + u103 * (*(float *)((a4 + 0xB00)));
                u106 = u133;
                u104 = 0.0f;
                u134 = (-u106);
                if (!(u104 > u106)) {
                    u134 = u106;
                }
                if (u134 > 0.949999988f) {
                    if (u106 > 0.0f) {
                        t99 = 0x1;
                    } else {
                        if (0.0f > u106) {
                            t99 = 0xFFFFFFFF;
                        } else {
                            t99 = 0x0;
                        }
                    }
                    u106 = (float)t99;
                    u106 = (u106 * 0.949999988f);
                }
            }
            t102 = (t102 + 0x1);
            t101 = (t101 + 0x8);
            t100 = (t100 + 0x8);
            if (((int)t102 <= (int)0x64) && (t144 = *(short *)((((t0 * 0x160) + 0x8C2FC69C) + 0x118)), t99 = t144, (int)t102 <= (int)t99)) continue;
            break;
        }
        *(float *)((a5 + 0x0)) = u106;
        *(float *)((a5 + 0x4)) = (*(float *)((a4 + 0xB94)));
        *(float *)((a5 + 0x8)) = (*(float *)((a4 + 0xB98)));
    }
}

void cpuSglMoodUpdate(void)
{
    int t17;
    int t25;
    int t32;
    int t50;
    int t61;
    int t62;
    int t70;
    float u80;
    float u90;
    float u100;
    int t115;
    int stk[13];

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
    float F0;
    float F2;
    float F3;
    float F4;
    float F5;
    float F6;
    float F7;
    float F8;
    float F9;
    float F14;
    float F15;
    int T_;
    L_8C042268:;
    *(unsigned int *)0x8C2FCC60 = ((*(int *)0x8C2FCC60) + 0x1);
    R0 = (0x8C0422B8);
    R10 = (0x100);
    R11 = (0x8C287D84);
    R12 = (0x4);
    R13 = (0x0);
    R14 = (0x8C2FC69C);
    R8 = (0x1);
    R9 = (0x8C291F24);
    F14 = (0.100000001f);
    F15 = (32768.0f);
    goto L_8C04262A;
    L_8C04262A:;
    if (((int)R8 < 0)) goto L_8C042632;
    goto L_8C04262E;
    L_8C04262E:;
    goto L_8C0422C8;
    L_8C0422C8:;
    R4 = (0x8C10D380);
    F5 = (32767.0f);
    F7 = (5.0f);
    if ((((*(int *)((R11 + 0xB60))) & R10) == 0)) goto L_8C042316;
    goto L_8C0422DA;
    L_8C0422DA:;
    t17 = *(int *)(((0xC58 + R11) + 0x0));
    *(float *)(((0x10 + R14) + 0x0)) = ((*(float *)(((0x10 + R14) + 0x0))) + (float)(int)((((float)(unsigned char)(*(signed char *)(((((t17 << 2) + t17) + R4) + 0x1))) * (*(float *)((R11 + 0xC90))))) * F7));
    R0 = (0x10);
    if ((!(0.0f > (*(float *)((R14 + 0x10)))))) goto L_8C042316;
    goto L_8C042314;
    L_8C042314:;
    *(float *)((R14 + R0)) = F5;
    goto L_8C042316;
    L_8C042316:;
    t25 = *(int *)((R11 + 0xA24));
    R5 = (R4);
    R6 = (t25);
    F4 = (0.0f);
    if ((t25 == 0)) goto L_8C042328;
    goto L_8C042322;
    L_8C042322:;
    if ((R6 != 4)) goto L_8C042356;
    goto L_8C042328;
    L_8C042328:;
    t32 = *(int *)(((0xC58 + R11) + 0x0));
    *(float *)(((0x14 + R14) + 0x0)) = ((*(float *)(((0x14 + R14) + 0x0))) + (float)(unsigned char)(*(signed char *)(((R5 + ((t32 << 2) + t32)) + 0x3))));
    R0 = (0x14);
    if ((!(0.0f > (*(float *)((R14 + 0x14)))))) goto L_8C042382;
    goto L_8C042352;
    L_8C042352:;
    *(float *)((R14 + R0)) = F5;
    goto L_8C042382;
    L_8C042382:;
    *(float *)((R14 + 0x8)) = F4;
    *(float *)((R14 + 0x0)) = F4;
    *(float *)((R14 + 0x18)) = 1.0f;
    *(unsigned char *)((R14 + 0x1C)) = R13;
    *(float *)((R14 + 0x4)) = F4;
    *(unsigned char *)((R14 + 0xAC)) = R13;
    *(unsigned char *)((R14 + 0xAD)) = R13;
    *(unsigned char *)((R14 + 0xAE)) = R13;
    *(unsigned char *)((R14 + 0xAF)) = R13;
    *(unsigned char *)((R14 + 0xB0)) = R13;
    *(unsigned char *)((R14 + 0xB1)) = R13;
    *(unsigned short *)((R14 + 0xB4)) = R13;
    *(unsigned char *)((R14 + 0xB6)) = R13;
    *(unsigned char *)((R14 + 0xB7)) = R13;
    *(float *)((R14 + 0x130)) = F4;
    *(float *)((R14 + 0x138)) = F4;
    *(unsigned char *)((R14 + 0x12A)) = R13;
    *(unsigned char *)((R14 + 0x24)) = R13;
    *(float *)((R14 + 0x9C)) = F4;
    *(float *)((R14 + 0x98)) = F4;
    *(float *)((R14 + 0x94)) = F4;
    *(float *)((R14 + 0x18)) = 1.0f;
    R4 = (0x8C2FCC1C);
    F5 = (1.0f);
    if (((*(int *)0x8C421F60) == 0)) goto L_8C042408;
    goto L_8C0423E4;
    L_8C0423E4:;
    *(unsigned int *)((R4 + 0x0)) = 0x18;
    goto L_8C042610;
    L_8C042610:;
    *(unsigned int *)((R11 + 0xA24)) = R12;
    R0 = (0xB60);
    if ((((*(int *)((R11 + 0xB60))) & R10) == 0)) goto L_8C042620;
    goto L_8C04261C;
    L_8C04261C:;
    *(unsigned short *)((R14 + 0x22)) = R13;
    R0 = (0x22);
    goto L_8C042620;
    L_8C042620:;
    R11 = ((R11 + 0xD78));
    R14 = ((R14 + 0x160));
    R8 = ((R8 - 1));
    goto L_8C04262A;
    L_8C042408:;
    if (((*(int *)0x8C20D14C) == 6)) goto L_8C042414;
    goto L_8C042410;
    L_8C042410:;
    goto L_8C042554;
    L_8C042554:;
    t50 = *(int *)((R4 + 0x0));
    *(unsigned int *)(((int)stk + 8)) = t50;
    if (((int)t50 >= (int)0x2)) goto L_8C042578;
    goto L_8C042560;
    L_8C042560:;
    *(float *)((R14 + 0x0)) = (float)(((int)((int)(nlRand()) % (int)0xF)) + 0x14);
    goto L_8C042610;
    L_8C042578:;
    if (((int)(*(int *)(((int)stk + 8))) >= (int)R12)) goto L_8C042608;
    goto L_8C04257E;
    L_8C04257E:;
    if ((((*(int *)((R9 + 0x54))) & R12) == 0)) goto L_8C042598;
    goto L_8C042586;
    L_8C042586:;
    R0 = ((((int)((int)(nlRand()) % (int)0x5)) + 0x5));
    goto L_8C0425C0;
    L_8C0425C0:;
    *(float *)((R14 + 0x0)) = (float)R0;
    goto L_8C042610;
    L_8C042598:;
    t61 = *(int *)(((int)stk + 8));
    t62 = nlRand();
    R0 = (t62);
    R3 = ((-((t61 << 1) + t61)));
    if (((int)t62 < 0)) goto L_8C0425B2;
    goto L_8C0425AE;
    L_8C0425AE:;
    R0 = ((R0 & 0x3));
    goto L_8C0425BC;
    L_8C0425BC:;
    R0 = (((R0 + R3) + 0x10));
    goto L_8C0425C0;
    L_8C0425B2:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_8C0425BC;
    L_8C042608:;
    *(volatile int *)(((int)stk + 8));
    *(float *)((R14 + 0x0)) = F4;
    goto L_8C042610;
    L_8C042414:;
    t70 = *(int *)0x8C2FCC20;
    R5 = (t70);
    F6 = (0.850000024f);
    F8 = (0.949999988f);
    F9 = (3.0f);
    if ((t70 != 0)) goto L_8C042470;
    goto L_8C042428;
    L_8C042428:;
    if ((((*(int *)((R9 + 0x54))) & R12) == 0)) goto L_8C042440;
    goto L_8C042430;
    L_8C042430:;
    F3 = (((((*(float *)((R14 + 0x10))) * 15.0f) / F15) + F9));
    goto L_8C042452;
    L_8C042452:;
    *(float *)((R14 + 0x0)) = F3;
    u80 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u80 * 0.300000012f) / F15)) + F8);
    if ((F6 > ((-((u80 * 0.300000012f) / F15)) + F8))) goto L_8C0424B8;
    goto L_8C04246C;
    L_8C04246C:;
    goto L_8C042610;
    L_8C0424B8:;
    *(float *)((R14 + 0x18)) = F6;
    goto L_8C042610;
    L_8C042440:;
    F3 = (((((*(float *)((R14 + 0x10))) * 20.0f) / F15) + 9.0f));
    goto L_8C042452;
    L_8C042470:;
    R0 = (R5);
    if ((R5 != 1)) goto L_8C0424BE;
    goto L_8C042476;
    L_8C042476:;
    if ((((*(int *)((R9 + 0x54))) & R12) == 0)) goto L_8C042488;
    goto L_8C04247E;
    L_8C04247E:;
    F3 = ((((*(float *)((R14 + 0x10))) * F7) / F15));
    goto L_8C042496;
    L_8C042496:;
    *(float *)((R14 + 0x0)) = F3;
    u90 = *(float *)((R14 + 0x10));
    *(float *)((R14 + 0x18)) = ((-((u90 * 0.25f) / F15)) + 0.980000019f);
    if ((F6 > ((-((u90 * 0.25f) / F15)) + 0.980000019f))) goto L_8C0424B8;
    goto L_8C0424B4;
    L_8C0424B4:;
    goto L_8C042610;
    L_8C042488:;
    F3 = (((((*(float *)((R14 + 0x10))) * 10.0f) / F15) + F9));
    goto L_8C042496;
    L_8C0424BE:;
    if ((R0 != 2)) goto L_8C0424FC;
    goto L_8C0424C2;
    L_8C0424C2:;
    *(float *)((R14 + 0x0)) = ((((*(float *)((R14 + 0x10))) * F7) / F15) + F9);
    R0 = (0x10);
    if (((*(int *)((R4 + 0x0))) != 21)) goto L_8C0424E0;
    goto L_8C0424D6;
    L_8C0424D6:;
    *(float *)((R14 + 0x0)) = ((*(float *)((R14 + 0x0))) + (1.0f + 1.0f));
    goto L_8C0424E0;
    L_8C0424E0:;
    u100 = *(float *)((R14 + R0));
    *(float *)((R14 + 0x18)) = ((-((u100 * F14) / F15)) + F5);
    R0 = (0x18);
    if ((F8 > ((-((u100 * F14) / F15)) + F5))) goto L_8C0424F8;
    goto L_8C0424F4;
    L_8C0424F4:;
    goto L_8C042610;
    L_8C0424F8:;
    *(float *)((R14 + R0)) = F8;
    goto L_8C042610;
    L_8C0424FC:;
    *(float *)((R14 + 0x0)) = F4;
    R4 = (0x8C287ACC);
    if (((int)((*(int *)0x8C287B00) + (*(int *)0x8C287B04)) > (int)0xA)) goto L_8C04251C;
    goto L_8C042510;
    L_8C042510:;
    if (((int)(*(int *)(((R4 + 0x34) + 0x0))) <= (int)(*(int *)(((R4 + 0x34) + 0x4))))) goto L_8C042522;
    goto L_8C04251C;
    L_8C04251C:;
    *(float *)((R14 + 0x18)) = F5;
    goto L_8C042540;
    L_8C042540:;
    *(float *)((R14 + 0x18)) = ((*(float *)((R14 + 0x18))) - (((*(float *)(((0x10 + R14) + 0x0))) * F14) / F15));
    goto L_8C042610;
    L_8C042522:;
    *(float *)((R14 + 0x18)) = ((-((float)(((*(int *)(((R4 + 0x34) + 0x4))) - (*(int *)(((R4 + 0x34) + 0x0)))) + 0x1) * 0.0199999996f)) + F5);
    goto L_8C042540;
    L_8C042356:;
    t115 = *(int *)(((0xC58 + R11) + 0x0));
    *(float *)(((0x14 + R14) + 0x0)) = ((*(float *)(((0x14 + R14) + 0x0))) - (float)(unsigned char)(*(signed char *)(((R5 + ((t115 << 2) + t115)) + 0x4))));
    R0 = (0x14);
    if ((!(0.0f > (*(float *)((R14 + 0x14)))))) goto L_8C042382;
    goto L_8C042380;
    L_8C042380:;
    *(float *)((R14 + R0)) = F4;
    goto L_8C042382;
    L_8C042632:;
}


