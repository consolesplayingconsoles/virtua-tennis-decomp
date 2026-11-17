/* Straight-line functions with calls and guards (batch gen_mt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_8c01233e(int);
int FUN_8c0e42b4(int);
int advInit(void);
int advPeriOff(void);
int eepromGetMatch(void);
int eepromGetVsMatch(void);
int eepromIsMatchMax(void);
int entryIsVersus(int);
int nlInitEvent(void);
int sceneObjPutInit(void);
int seSystemApply(void);
int sndFadeFlagsClear(void);
int sprAdvInit(void);
int unlockTestW1(int);
int FUN_8c01219e(int a4);
int FUN_8c0e426a(int a4);

int FUN_8c01219e(int a4)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t7;
    register int t24;
    register int t26;
    register int t27;
    register int t28;
    register int t29;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t16;
    register int t17;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;

    *(int *)((int)stk + 0) = a4;
    *(unsigned int *)0x8C287B3C = 0x0;
    t0 = entryIsVersus(a4);
    if (t0 == 0) {
        (((struct o0_uint *)0x8C287ACC)->v) = 0x0;
    }
    (((struct o8_uint *)0x8C287ACC)->v) = 0x0;
    (((struct o4_uint *)0x8C287ACC)->v) = 0x0;
    (((struct o0_uint *)0x8C295DAC)->v) = 0x0;
    (((struct o4_uint *)0x8C295DAC)->v) = 0x0;
    t2 = 0x8C287D04;
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)0x8C287D4C) {
            break;
        }
        *(unsigned int *)((t2 + 0x0)) = 0x0;
        t2 = (t2 + 0x4);
    }
    (((struct o0_uint *)0x8C20D154)->v) = 0x0;
    (((struct o4_uint *)0x8C20D154)->v) = 0x3;
    t3 = *(int *)0x8C287D5C;
    if (t3 == 0) {
        (((struct o20_uint *)0x8C287C50)->v) = (unsigned char)(eepromIsMatchMax());
        t5 = eepromGetMatch();
        (((struct o1C_uint *)0x8C287C50)->v) = (unsigned char)t5;
        t16 = (unsigned char)t5;
    } else {
        t16 = t3;
        if (t3 == 1) {
            (((struct o20_uint *)0x8C287C50)->v) = (unsigned char)(eepromIsMatchMax());
            t7 = eepromGetVsMatch();
            (((struct o1C_uint *)0x8C287C50)->v) = (unsigned char)t7;
            t16 = (unsigned char)t7;
        } else {
            t17 = 0x8C20D158;
            t27 = 0x8C287D4C;
        }
    }
    t24 = *(int *)0x8C40C300;
    if ((t24 & 0x1) != 0) {
        *(unsigned int *)0x8C29BBBC = 0x1;
    } else {
        *(unsigned int *)0x8C29BBBC = 0x0;
    }
    t26 = 0x0;
    for (;;) {
        if ((unsigned int)t26 >= (unsigned int)0x90) {
            break;
        }
        t27 = 0x8C287B88;
        t27 = (t27 + 0x4);
        t27 = (t27 + t26);
        t26 = (t26 + 0x24);
        *(unsigned int *)((t27 + 0x4)) = 0x0;
        *(unsigned int *)((t27 + 0x0)) = 0x0;
    }
    (((struct o4_uint *)0x8C287C50)->v) = 0x0;
    t28 = t16;
    t29 = t17;
    t30 = t24;
    t31 = 0x8C287C54;
    t32 = t26;
    t33 = t27;
    t34 = 0x90;
    t35 = 0x8C287B88;
    t36 = 0x0;
    for (;;) {
        if ((int)t36 >= (int)0x12) {
            break;
        }
        t28 = ((((struct o10_int *)0x8C287ACC)->v));
        if (t28 != 4) {
            t30 = 0x8C0E87C8;
            t32 = t36;
            t28 = (unlockTestW1(t32));
            if (t28 != 0) {
                t28 = t36;
                t28 = (t28 << 2);
                *(unsigned int *)((0x8C287C74 + t28)) = 0x1;
            } else {
                t28 = t36;
                t28 = (t28 << 2);
                *(unsigned int *)((0x8C287C74 + t28)) = 0x0;
            }
        } else {
            t28 = t36;
            t28 = (t28 << 2);
            *(unsigned int *)((0x8C287C74 + t28)) = 0x1;
            t41 = t29;
            t42 = t30;
            t43 = t31;
            t44 = t32;
            t45 = t33;
            t46 = t34;
            t47 = t35;
        }
        t29 = t41;
        t36 = (t36 + 0x1);
        t30 = t42;
        t31 = t43;
        t32 = t44;
        t33 = t45;
        t34 = t46;
        t35 = t47;
    }
    (((struct o4_uint *)0x8C287CB4)->v) = 0x0;
    (((struct o0_uint *)0x8C287CB4)->v) = 0x0;
    if ((*(int *)0x8C421F60) != 0) {
        advInit();
    } else {
        (((struct o30_uint *)0x8C295DAC)->v) = 0x0;
        if ((*(int *)0x8C287D5C) == 0) {
            *(unsigned int *)0x8C1891F0 = (*(int *)(((((((struct o0_int *)0x8C287ACC)->v)) << 2) + 0x8C1022B8)));
        }
        (((struct o0_uint *)0x8C287C50)->v) = 0x96;
    }
    *(volatile int *)0x8C421F60;
    (((struct o0_uint *)0x8C38BA70)->v) = 0x1;
    (((struct o4_uint *)0x8C38BA70)->v) = 0x1;
    (((struct o8_uint *)0x8C38BA70)->v) = 0x1;
    return FUN_8c01233e((*(int *)(((int)stk + 0))));
}

int FUN_8c0e426a(int a4)
{
    nlInitEvent();
    sndFadeFlagsClear();
    (((struct o0_uint *)0x8C20D150)->v) = 0x1;
    (((struct oC_uint *)0x8C20D150)->v) = 0x0;
    *(unsigned int *)0x8C421F60 = 0x1;
    (((struct o8_uint *)0x8C38BA70)->v) = 0x1;
    (((struct o4_uint *)0x8C38BA70)->v) = 0x1;
    (((struct o0_uint *)0x8C38BA70)->v) = 0x1;
    seSystemApply();
    *(unsigned int *)0x8C185410 = 0x0;
    sceneObjPutInit();
    sprAdvInit();
    advPeriOff();
    return FUN_8c0e42b4(a4);
}
