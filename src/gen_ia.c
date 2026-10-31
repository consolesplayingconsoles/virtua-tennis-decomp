/* Straight-line functions with calls and guards (batch gen_ia): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Ball[];
extern char charaTbl[];
extern char playerMotionTbl[];

typedef struct { int w[3]; } Stk3;
int colliObjInit(int, int, int, int, int, float);
int effServeSpeedShow(int);
int evSkidMarkSpawn(int, int, int);
int lightOverrideAmbient(int, int);
int lightOverrideDiffuse(int, int);
int motionRootFirst(int, int, int, int, int);
int motionSet(int, int, int, int, int, int, float);
int playerRecA20Clear(int);
int seFootstepCheck(int, int, int, int, int, int, int, int, int);
int serveGetPos(int, int, int, int, int);
int serveGetReceiver(void);
int serveGetServer(void);
Stk3 vecMake(float, float, float);
void playerInit(int a4, int a5, int a6, int a7);

void playerInit(int a4, int a5, int a6, int a7)
{
    int stk[16];
    float u4;
    int t10;
    int t13;
    int t14;
    int t15;
    int t16;
    int t23;
    int t25;
    int t28;
    int t35;
    int t55;
    int t56;
    int t58;
    float u74;
    int t95;
    int t105;
    int t108;
    int t111;
    int t128;
    int t129;
    int t131;
    int t86;
    int t88;
    int t38;
    int t39;
    int t40;
    int t69;
    int t104;
    int t132;

    if ((*(int *)((a4 + 0xC58))) == -1) {
        *(unsigned int *)((a4 + 0xC58)) = 0x0;
    }
    *(unsigned int *)((a4 + 0xB5C)) = a5;
    *(int *)((int)stk + 12) = (0xAE8 + a4);
    serveGetPos(a5, a5, a6, a7, (0xAE8 + a4));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAF4 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned short *)((a4 + 0xB0A)) = 0x0;
    *(unsigned short *)((a4 + 0xB0C)) = 0x0;
    u4 = *(float *)((a4 + 0xAF0));
    *(float *)((a4 + 0xB00)) = (float)(-((u4 > 0.0f) - (0.0f > u4)));
    *(unsigned short *)(((0xB04 + a4) + 0x0)) = ((short)((((*(float *)((a4 + 0xAF0))) > 0.0f)) ? 1 : 0) * (short)0xFFFF8000);
    t10 = *(short *)((a4 + 0xB04));
    *(unsigned short *)((a4 + 0xB08)) = t10;
    *(unsigned short *)((a4 + 0xB06)) = t10;
    *(unsigned short *)((a4 + 0xB0E)) = (*(short *)((a4 + 0xB04)));
    *(unsigned short *)((a4 + 0xB10)) = 0x0;
    *(unsigned short *)((a4 + 0xB12)) = (*(short *)((a4 + 0xB06)));
    *(float *)((a4 + 0xB14)) = 0.0f;
    *(float *)((a4 + 0xB18)) = 1.0f;
    t13 = *(short *)((a4 + 0xB06));
    *(unsigned short *)((a4 + 0xB1E)) = t13;
    *(unsigned short *)((a4 + 0xB1C)) = t13;
    *(float *)((a4 + 0xB24)) = 0.0f;
    *(float *)((a4 + 0xB20)) = 0.0f;
    *(unsigned short *)((a4 + 0xB2A)) = 0x0;
    *(unsigned short *)((a4 + 0xB28)) = 0x0;
    *(float *)((a4 + 0xB30)) = 0.0f;
    *(float *)((a4 + 0xB2C)) = 0.0f;
    t14 = 0x0;
    t15 = 0x0;
    for (;;) {
        *(unsigned short *)((((0xB34 + a4) + t14) + 0x0)) = 0x0;
        t16 = ((0xB3A + a4) + t14);
        t14 = (t14 + 0x2);
        *(unsigned short *)((t16 + 0x0)) = 0x0;
        *(float *)((((0xB4C + a4) + t15) + 0x0)) = 0.0f;
        *(float *)((((0xB40 + a4) + t15) + 0x0)) = 0.0f;
        t15 = (t15 + 0x4);
        if ((unsigned int)t14 >= (unsigned int)0x6) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xB68)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB6C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(int *)((int)stk + 12) = (0xB78 + a4);
    *(Stk3 *)((0xB78 + a4)) = vecMake(0.100000001f, 0.0f, 0.100000001f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB84 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB90 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xB9C + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBA8 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBB4 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xBC0 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xBCC)) = 0x0;
    *(unsigned int *)((a4 + 0xBD0)) = 0x0;
    *(unsigned int *)((a4 + 0xBD4)) = 0x0;
    *(unsigned int *)((a4 + 0xBD8)) = 0x1;
    *(float *)((a4 + 0xBDC)) = 1.0f;
    *(unsigned int *)((a4 + 0xB60)) = 0x0;
    if ((*(int *)0x8C287ADC) == 4) {
        *(unsigned int *)((a4 + 0xD50)) = 0x6;
    }
    t23 = serveGetServer();
    if (t23 != a5) {
        *(unsigned int *)((a4 + 0xB58)) = 0x0;
        t25 = (*(int *)0x8C2873D0);
        *(int *)((int)stk + 12) = t25;
        t28 = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + (int)charaTbl) + 0x0)));
        *(int *)((int)stk + 8) = t28;
        motionSet(a4, (*(int *)((((*(int *)((a4 + 0xB58))) << 2) + 0x8C102C6C))), 0x1, 0x12755C, t28, t25, (*(float *)0x8C23D204));
        *(float *)((a4 + 0x4C)) = (*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + (int)charaTbl) + 0x4)));
        t35 = serveGetReceiver();
        if (t35 == a5) {
            *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x8);
            *(unsigned int *)0x8C287AF8 = a5;
            if (((*(int *)0x8C287B00) == 0) && ((t38 = *(int *)0x8C287B04, t38 == 0) && ((t39 = *(int *)0x8C287B10, t39 == 0) && (t40 = *(int *)0x8C287B14, t40 == 0)))) {
                *(unsigned int *)((a4 + 0xD50)) = 0x7;
            } else {
                *(unsigned int *)((a4 + 0xD50)) = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + (int)charaTbl) + 0x40)));
            }
        }
        t86 = 0xD40;
        t88 = 0x8C01DE1A;
    } else {
        *(unsigned int *)((a4 + 0xB60)) = ((*(int *)((a4 + 0xB60))) | 0x40000);
        *(unsigned int *)((a4 + 0xB58)) = 0x0;
        t55 = (*(int *)0x8C2873D0);
        *(int *)((int)stk + 12) = t55;
        t56 = *(int *)((a4 + 0xC58));
        *(unsigned int *)(((int)stk + 16)) = ((t56 * 0x6C) + (int)charaTbl);
        t58 = (*(int *)((((t56 * 0x6C) + (int)charaTbl) + 0x0)));
        *(int *)((int)stk + 8) = t58;
        motionSet(a4, (*(int *)(((((*(int *)(((*(int *)(((int)stk + 16))) + 0x34))) << 2) << 2) + (int)playerMotionTbl))), 0x1, 0x12755C, t58, t55, (*(float *)0x8C23D204));
        *(float *)((a4 + 0x4C)) = (*(float *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + (int)charaTbl) + 0x4)));
        effServeSpeedShow(a5);
        if ((((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) == 0) && (t69 = *(int *)0x8C287B28, t69 == 0)) {
            *(float *)((a4 + 0xD00)) = 0.0f;
        }
        if ((*(float *)((a4 + 0xD00))) != 0.0f) {
            u74 = *(float *)((a4 + 0xAE8));
            *(float *)((a4 + 0xAE8)) = ((float)((u74 > 0.0f) - (0.0f > u74)) * (*(float *)((a4 + 0xD00))));
        }
        *(unsigned int *)((a4 + 0xD40)) = 0x8C02414C;
        t86 = 0xD50;
        t88 = 0x5;
    }
    *(unsigned int *)((a4 + t86)) = t88;
    t95 = 0x0;
    for (;;) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((0xBE0 + a4) + t95) + 0x30)) = *(struct mv3 *)(0x8C1016D4); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xBE0 + a4) + t95)) = *(struct mv3 *)(0x8C1016D4); }
        t95 = (t95 + 0xC);
        if ((unsigned int)t95 >= (unsigned int)0x30) {
            break;
        }
    }
    *(unsigned int *)((a4 + 0xC40)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC44 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned short *)((a4 + 0xD44)) = 0x0;
    *(unsigned short *)((a4 + 0xD46)) = 0x0;
    *(unsigned short *)((a4 + 0xD48)) = 0x0;
    *(unsigned short *)((a4 + 0xD4A)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xAD0 + a4) + 0xC)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAD0 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((0xAB8 + a4) + 0xC)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xAB8 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xC50)) = 0x63;
    *(unsigned int *)((a4 + 0xC54)) = 0x63;
    *(unsigned int *)((a4 + 0xC5C)) = 0x0;
    *(unsigned int *)((a4 + 0xC60)) = 0x0;
    *(unsigned int *)((a4 + 0xC64)) = 0x0;
    *(unsigned int *)((a4 + 0xC68)) = 0x0;
    *(float *)((a4 + 0xC70)) = 1.0f;
    *(unsigned int *)((a4 + 0xC74)) = 0x1;
    *(unsigned int *)((a4 + 0xC6C)) = 0x0;
    *(unsigned int *)((a4 + 0xC78)) = 0x0;
    *(float *)((a4 + 0xC7C)) = 0.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xC80 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned short *)((a4 + 0xC8C)) = 0x0;
    *(float *)((a4 + 0xC90)) = 0.0f;
    *(float *)((a4 + 0xC94)) = 1.0f;
    *(unsigned int *)((a4 + 0xC9C)) = 0x0;
    *(unsigned int *)((a4 + 0xCA0)) = 0x0;
    *(unsigned int *)((a4 + 0xCB0)) = 0x0;
    *(float *)((a4 + 0xCB4)) = 0.0f;
    *(unsigned int *)((a4 + 0xCBC)) = 0x0;
    *(unsigned int *)((a4 + 0xCC0)) = 0x0;
    *(unsigned int *)((a4 + 0xCC4)) = 0x1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCD4 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCC8 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCE0 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xCEC)) = 0x0;
    *(unsigned int *)((a4 + 0xCF0)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xCF4 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xC98)) = 0x0;
    *(unsigned int *)((a4 + 0xC9C)) = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD04 + a4)) = *(struct mv3 *)(0x8C1016D4); }
    *(unsigned int *)((a4 + 0xD10)) = 0x0;
    *(unsigned int *)((a4 + 0xD14)) = 0x0;
    *(float *)(((0xD34 + a4) + 0x4)) = 1.0f;
    *(float *)(((0xD34 + a4) + 0x0)) = 1.0f;
    *(unsigned short *)((a4 + 0xD3E)) = 0x3E7;
    *(unsigned short *)((a4 + 0xD3C)) = 0x3E7;
    *(unsigned int *)((a4 + 0xD30)) = 0x63;
    *(unsigned int *)((a4 + 0xD4C)) = (*(int *)(((((*(int *)((a4 + 0xC58))) * 0x6C) + (int)charaTbl) + 0x3C)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD60 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0xD54 + a4)) = *(struct mv3 *)((0xAE8 + a4)); }
    *(unsigned int *)((a4 + 0xD6C)) = 0xFFFFFFFF;
    *(unsigned int *)((a4 + 0xD70)) = 0x0;
    *(unsigned int *)((a4 + 0xD74)) = 0x0;
    playerRecA20Clear((0xA20 + a4));
    *(int *)((int)stk + 12) = (0xA40 + a4);
    colliObjInit((0xAE8 + a4), 0x0, 0x0, 0x0, (0xA40 + a4), 5.0f);
    *(unsigned int *)((a4 + 0xA70)) = (*(int *)((a4 + 0xB5C)));
    if (((*(int *)0x8C421F60) != 0) && (t104 = *(int *)0x8C295DDC, (t104 & 32) != 0)) {
        *(unsigned short *)((a4 + 0xB06)) = 0x0;
        t105 = 0x6148;
        if (a5 == 0) {
            t105 = 0x2C4C;
        }
        t108 = (*(int *)0x8C2873E0);
        *(int *)((int)stk + 12) = t108;
        t111 = (*(int *)((((int)charaTbl + ((*(int *)((a4 + 0xC58))) * 0x6C)) + 0x0)));
        *(int *)((int)stk + 8) = t111;
        motionSet(a4, t105, 0x0, 0x7D204, t111, t108, (*(float *)0x8C23D204));
        *(int *)((int)stk + 4) = (0xAE8 + a4);
        motionRootFirst(a4, 0x0, 0x0, 0x0, (0xAE8 + a4));
        *(unsigned int *)((a4 + 0xD40)) = 0x8C025500;
    }
    lightOverrideAmbient((*(int *)((a4 + 0xB5C))), 0x0);
    lightOverrideDiffuse((*(int *)((a4 + 0xB5C))), 0x0);
    seFootstepCheck(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 16), *(int *)((int)stk + 16 + 4), *(int *)((int)stk + 16 + 8), *(int *)((int)stk + 16 + 12), *(int *)((int)stk + 16 + 16));
    evSkidMarkSpawn(a4, 0x0, 0x0);
    t128 = 0x8C28B364;
    for (;;) {
        t129 = a4;
        t131 = (t128 + (a5 * 0xD78));
        for (;;) { t132 = *(int *)t129; t129 = (t129 + 4); if ((unsigned int)((a4 + 3448)) < (unsigned int)t129) break; *(unsigned int *)t131 = t132; t131 = (t131 + 4); }
        t128 = (t128 + 0x35E0);
        if ((unsigned int)t128 >= (unsigned int)(int)Ball) {
            break;
        }
    }
}
