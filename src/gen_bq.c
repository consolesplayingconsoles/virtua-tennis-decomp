/* Straight-line functions with calls and guards (batch gen_bq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int charaModelCount();
int charaTexCount(int);
int cpuAimPointSet(int, int, float, float);
int fileLoadCloseSlot(int);
int modelSwapMaterial(int, int, int);
int nlObjPutFreeTextureOnce(int);
int nlObjPutLoadTexture(int, int);
int nlRand(void);
int nlSetCommonTextureOffset(int);
int serveGetReceiver(void);
int serveGetServer(void);
int uniformTexLoad(int, int, int);
int uniformTexRestore(int);
int uniformSlotLoad(int a4, int a5, int a6);
int cpuDblAimAddShort(int a4, int a5);
int cpuDblPickTactic(void);

int uniformSlotLoad(int a4, int a5, int a6)
{
    int t1;
    int t18;
    int t19;
    int t28;
    int t29;
    int t30;
    int t46;
    int t47;
    int t53;
    int t54;
    int t252;
    int t75;
    int t243;
    int t78;
    int t84;
    int t234;
    int t91;
    int t101;
    int t103;
    int t106;
    int t107;
    int t109;
    int t110;
    int t142;
    int t147;
    int t148;
    int t149;
    int t150;
    int t188;
    int t189;
    int t190;
    int t203;
    int t204;
    int t205;
    int t206;
    int t207;
    int t208;
    int t220;
    int t221;
    int t226;
    int t227;
    int t4;
    int stk[219];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned int *)(((int)stk + 28)) = (charaTexCount(a6));
    t1 = *(int *)(((int)stk + 4));
    if (((*(int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA5C))) != (*(int *)(((int)stk + 24)))) && (t4 = *(int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA60)), t4 != -99)) {
        fileLoadCloseSlot((*(int *)(((int)stk + 4))));
        *(unsigned int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA60)) = 0xFFFFFF9D;
    }
    *(unsigned int *)(((int)stk + 32)) = ((*(int *)(((int)stk + 4))) << 2);
    *(unsigned int *)(((int)stk + 36)) = ((*(int *)(((int)stk + 4))) * 0x70);
    if ((int)(*(int *)(((int)stk + 24))) >= 0) {
    } else {
        if ((*(int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA68))) == 0) {
            *(unsigned int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0x10)) = 0x1;
            *(unsigned int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0x0)) = 0xFFFFFFFF;
            nlSetCommonTextureOffset((*(int *)(((a6 << 2) + 0x8C1B05DC))));
            *(unsigned int *)(((int)stk + 8)) = (0x8C1AF85C + (a6 << 2));
            t18 = 0x0;
            for (;;) {
                t19 = ((int (*)(int))(charaModelCount))(a6);
                if ((int)t18 >= (int)t19) {
                    break;
                }
                nlObjPutFreeTextureOnce((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + (t18 << 2)))));
                t18 = (t18 + 0x1);
            }
            t28 = *(int *)(((int)stk + 32));
            if ((int)(*(int *)(((int)stk + 28))) > 0) {
                t29 = 0x0;
                t30 = 0x0;
                for (;;) {
                    { struct mv4 { int w[4]; }; *(struct mv4 *)((t29 + (((int)stk + 4) + 0x28))) = *(struct mv4 *)(((*(int *)(((0x8C1B0594 + (a6 << 2)) + 0x0))) + t29)); }
                    t30 = (t30 + 0x1);
                    *(unsigned int *)(((t29 + (((int)stk + 4) + 0x28)) + 0x8)) = ((*(int *)(((t29 + (((int)stk + 4) + 0x28)) + 0x8))) + (*(int *)(((t28 + 0x8C124AE0) + 0x0))));
                    t29 = (t29 + 0x10);
                    if ((int)t30 >= (int)(*(int *)(((int)stk + 28)))) {
                        break;
                    }
                }
            }
            uniformTexRestore((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C3437C4))));
            *(unsigned int *)(((int)stk + 8)) = (0x8C1AF85C + (a6 << 2));
            t46 = 0x0;
            for (;;) {
                t47 = ((int (*)(int))(charaModelCount))(a6);
                if ((int)t46 >= (int)t47) {
                    break;
                }
                nlObjPutLoadTexture((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + (t46 << 2)))), (((int)stk + 4) + 0x28));
                t46 = (t46 + 0x1);
            }
            *(unsigned int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA64)) = 0x0;
            t53 = ((*(int *)(((int)stk + 36))) + 0x8C1AF8A4);
            t54 = 0x0;
            for (;;) {
                *(unsigned int *)((t53 + 0x0)) = 0x0;
                t54 = (t54 + 0x1);
                t53 = (t53 + 0x4);
                if ((int)t54 >= (int)0x1C) {
                    break;
                }
            }
            *(unsigned int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C3437C4))) * 0x38) + 0x8C343298)) = 0xFFFFFFFF;
        }
    }
    *(unsigned int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA5C)) = (*(int *)(((int)stk + 24)));
    t252 = 0x8C37DA5C;
    if ((int)(*(int *)(((int)stk + 24))) < 0) {
    } else {
        t75 = *(int *)(((int)stk + 24));
        *(unsigned int *)(((int)stk + 40)) = (t75 << 2);
        t243 = 0x8C37DA5C;
        if ((*(int *)(((((*(int *)(((int)stk + 36))) + 0x8C1AF8A4) + (t75 << 2)) + 0x0))) != 0) {
        } else {
            t78 = charaTexCount(a6);
            *(unsigned int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA60)) = (*(int *)(((int)stk + 24)));
            t84 = uniformTexLoad((*(int *)(((int)stk + 24))), ((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C124AE0))) + 0x30000), (*(int *)(((int)stk + 4))));
            t234 = t84;
            if (t84 != 1) {
            } else {
                *(unsigned int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C3437C4))) * 0x38) + 0x8C343294)) = (*(int *)(((int)stk + 24)));
                *(unsigned int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0x0)) = (*(int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0x8)));
                nlSetCommonTextureOffset((*(int *)(((a6 << 2) + 0x8C1B05DC))));
                *(unsigned int *)(((int)stk + 4)) = 0x0;
                *(unsigned int *)(((int)stk + 8)) = (0x8C1AF85C + (a6 << 2));
                for (;;) {
                    t91 = ((int (*)(int))(charaModelCount))(a6);
                    if ((int)(*(int *)(((int)stk + 4))) >= (int)t91) {
                        break;
                    }
                    nlObjPutFreeTextureOnce((*(int *)(((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) + ((*(int *)(((int)stk + 4))) << 2)))));
                    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
                }
                t101 = *(int *)(((int)stk + 24));
                if ((*(int *)((((((t1 << 2) + t1) << 2) + 0x8C37DA58) + 0xC))) == 0) {
                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                    *(unsigned int *)(((int)stk + 12)) = (((t101 << 2) << 2) + 0x8C124C10);
                    *(unsigned int *)(((int)stk + 4)) = (0x8C124AF0 + ((a6 << 2) << 2));
                    *(unsigned int *)(((int)stk + 8)) = (0x8C1AF85C + (a6 << 2));
                    for (;;) {
                        t103 = ((int (*)(int, int))(charaModelCount))(a6, (((t101 << 2) << 2) + 0x8C124C10));
                        if ((int)(*(int *)(((int)stk + 16))) >= (int)t103) {
                            break;
                        }
                        t106 = *(int *)(((int)stk + 8));
                        t107 = *(int *)(((int)stk + 16));
                        t109 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
                        t110 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
                        *(unsigned int *)(((int)stk + 20)) = (t107 << 2);
                        modelSwapMaterial((*(int *)(((t107 << 2) + (*(int *)((t106 + 0x0)))))), t110, (t109 + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x4))), ((*(int *)(((*(int *)(((int)stk + 12))) + 0x4))) + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))))), (*(int *)(((*(int *)(((int)stk + 4))) + 0x8))), ((*(int *)(((*(int *)(((int)stk + 12))) + 0x8))) + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))))), (*(int *)(((*(int *)(((int)stk + 4))) + 0xC))), ((*(int *)(((*(int *)(((int)stk + 12))) + 0xC))) + (t78 - 27)));
                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
                    }
                    *(unsigned int *)(((((t1 << 2) + t1) << 2) + 0x8C37DA68)) = 0x0;
                } else {
                    *(unsigned int *)(((int)stk + 16)) = 0x0;
                    *(unsigned int *)(((int)stk + 4)) = (((t101 << 2) << 2) + 0x8C124C10);
                    *(unsigned int *)(((int)stk + 8)) = (0x8C37DA58 + (((t1 << 2) + t1) << 2));
                    *(unsigned int *)(((int)stk + 12)) = (0x8C1AF85C + (a6 << 2));
                    for (;;) {
                        t142 = ((int (*)(int, int))(charaModelCount))(a6, (((t101 << 2) << 2) + 0x8C124C10));
                        if ((int)(*(int *)(((int)stk + 16))) >= (int)t142) {
                            break;
                        }
                        t147 = *(int *)(((int)stk + 16));
                        t148 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
                        t149 = *(int *)(((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + 0x8C124C10));
                        t150 = *(int *)(((int)stk + 12));
                        *(unsigned int *)(((int)stk + 20)) = (t147 << 2);
                        modelSwapMaterial((*(int *)(((t147 << 2) + (*(int *)((t150 + 0x0)))))), (t149 + (t78 - 27)), (t148 + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))))), ((*(int *)(((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + 0x8C124C14))) + (t78 - 27)), ((*(int *)(((*(int *)(((int)stk + 4))) + 0x4))) + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))))), ((*(int *)(((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + 0x8C124C18))) + (t78 - 27)), ((*(int *)(((*(int *)(((int)stk + 4))) + 0x8))) + (t78 - 27)));
                        modelSwapMaterial((*(int *)(((*(int *)(((int)stk + 20))) + (*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))))), ((*(int *)(((((*(int *)(((*(int *)(((int)stk + 8))) + 0x0))) << 2) << 2) + 0x8C124C1C))) + (t78 - 27)), ((*(int *)(((*(int *)(((int)stk + 4))) + 0xC))) + (t78 - 27)));
                        *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x1);
                    }
                }
                t188 = *(int *)(((int)stk + 32));
                if ((int)(*(int *)(((int)stk + 28))) > 0) {
                    t189 = 0x0;
                    t190 = 0x0;
                    for (;;) {
                        { struct mv4 { int w[4]; }; *(struct mv4 *)((t189 + (((int)stk + 4) + 0x28))) = *(struct mv4 *)(((*(int *)(((0x8C1B0594 + (a6 << 2)) + 0x0))) + t189)); }
                        t190 = (t190 + 0x1);
                        *(unsigned int *)(((t189 + (((int)stk + 4) + 0x28)) + 0x8)) = ((*(int *)(((t189 + (((int)stk + 4) + 0x28)) + 0x8))) + (*(int *)(((t188 + 0x8C124AE0) + 0x0))));
                        t189 = (t189 + 0x10);
                        if ((int)t190 >= (int)(*(int *)(((int)stk + 28)))) {
                            break;
                        }
                    }
                }
                t203 = *(int *)(((int)stk + 28));
                t204 = *(int *)(((int)stk + 40));
                t205 = *(int *)(((int)stk + 32));
                if ((int)t203 < (int)(t203 + 0x4)) {
                    t206 = (((t203 << 2) << 2) + (((int)stk + 4) + 0x28));
                    t207 = t203;
                    t208 = (((t203 - t203) << 2) << 2);
                    for (;;) {
                        { struct mv4 { int w[4]; }; *(struct mv4 *)(t206) = *(struct mv4 *)(((*(int *)(((t204 + 0x8C1B1B3C) + 0x0))) + t208)); }
                        t207 = (t207 + 0x1);
                        t208 = (t208 + 0x10);
                        *(unsigned int *)((t206 + 0x8)) = ((*(int *)((t206 + 0x8))) + ((*(int *)(((t205 + 0x8C124AE0) + 0x0))) + 0x30000));
                        t206 = (t206 + 0x10);
                        if ((int)t207 >= (int)(t203 + 0x4)) {
                            break;
                        }
                    }
                }
                nlSetCommonTextureOffset((*(int *)(((a6 << 2) + 0x8C1B05DC))));
                t220 = 0x0;
                for (;;) {
                    t221 = ((int (*)(int))(charaModelCount))(a6);
                    if ((int)t220 >= (int)t221) {
                        break;
                    }
                    nlObjPutLoadTexture((*(int *)(((*(int *)(((0x8C1AF85C + (a6 << 2)) + 0x0))) + (t220 << 2)))), (((int)stk + 4) + 0x28));
                    t220 = (t220 + 0x1);
                }
                t226 = ((*(int *)(((int)stk + 36))) + 0x8C1AF8A4);
                t227 = 0x0;
                for (;;) {
                    *(unsigned int *)((t226 + 0x0)) = 0x0;
                    t227 = (t227 + 0x1);
                    t226 = (t226 + 0x4);
                    if ((int)t227 >= (int)0x1C) {
                        break;
                    }
                }
                *(unsigned int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0x8)) = 0xFFFFFF9D;
                *(unsigned int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0xC)) = ((*(int *)(((0x8C37DA58 + (((t1 << 2) + t1) << 2)) + 0xC))) + 0x1);
                *(unsigned int *)((((*(int *)(((int)stk + 36))) + 0x8C1AF8A4) + (*(int *)(((int)stk + 40))))) = 0x1;
                *(unsigned int *)((((*(int *)(((*(int *)(((int)stk + 32))) + 0x8C3437C4))) * 0x38) + 0x8C343298)) = (*(int *)(((int)stk + 24)));
                t234 = 0x8C343298;
            }
            t243 = t234;
        }
        t252 = t243;
    }
    return t252;
}

int cpuDblAimAddShort(int a4, int a5)
{
    int t5;
    int t7;
    int t9;
    int t11;
    int t12;
    int t13;
    int t15;
    int t16;
    int t18;
    int t20;
    int t28;
    float u29;
    float u30;
    int t39;
    float u33;
    float u34;
    int t36;
    float u47;
    float u48;
    int t55;
    int t73;
    int t93;
    float u75;
    float u77;
    int t85;
    float u99;
    float u100;
    int t125;
    float u152;
    float u153;
    int t160;
    int t178;
    int t198;
    float u180;
    float u182;
    int t190;
    float u204;
    float u205;
    int t228;
    int t24;
    int t258;
    int t146;
    int t141;
    int t107;
    int t111;
    float u114;
    float u115;
    int t250;
    int t242;
    float u243;
    int t212;
    int t216;
    float u219;
    float u220;

    if (((*(int *)0x8C287B3C) & 0x4000) != 0) {
        t5 = (int)((int)(((*(int *)0x8C287B10) + (*(int *)0x8C287B14)) + 0x6) % (int)0x6);
        t7 = (int)((unsigned int)((int)((unsigned int)t5 + (unsigned int)0x0)) + ((((int)0x0 > (int)t5)) ? 1u : 0u));
        t9 = ((~(((~((t7 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t7 >> 1) + 0x2) >= 0) {
            t9 = (((t7 >> 1) + 0x2) & 0x1);
        }
        t24 = ((((-t9) + 0x1) << 1) - 1);
    } else {
        t11 = *(int *)0x8C287B10;
        t12 = *(int *)0x8C287B14;
        t13 = ((~(((~((t11 + t12) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t11 + t12) + 0x2) >= 0) {
            t13 = (((t11 + t12) + 0x2) & 0x1);
        }
        t15 = *(int *)0x8C287B00;
        t16 = *(int *)0x8C287B04;
        t18 = (int)((unsigned int)((int)((unsigned int)(t15 + t16) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t15 + t16))) ? 1u : 0u));
        t20 = ((~(((~((t18 >> 1) + 0x2)) + 0x1) & 0x1)) + 0x1);
        if ((int)((t18 >> 1) + 0x2) >= 0) {
            t20 = (((t18 >> 1) + 0x2) & 0x1);
        }
        t24 = (((-(t13 << 1)) + 0x1) * ((-(t20 << 1)) + 0x1));
    }
    t28 = *(int *)(((0x8C287D84 + ((serveGetServer()) * 0xD78)) + 0xB5C));
    u29 = *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
    u30 = (-u29);
    if (!(0.0f > u29)) {
        u30 = u29;
    }
    t39 = 0x2;
    if (32.0f > u30) {
    } else {
        u33 = *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAF0));
        u34 = (-u33);
        if (!(0.0f > u33)) {
            u34 = u33;
        }
        t36 = 0x0;
        if (64.0f > u34) {
            t36 = 0x3;
        }
        t39 = t36;
    }
    if ((*(int *)(((((*(int *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xB5C))) << 2) + 0x8C287AE0) + 0x0))) != 0) {
        u47 = *(float *)0x8C291F7C;
        u48 = (-u47);
        if (!(0.0f > u47)) {
            u48 = u47;
        }
        if (15.0f > u48) {
            t55 = a5;
            if (t39 != 0) {
                cpuAimPointSet(a5, t39, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t55 = (a5 + 0x1);
            }
            cpuAimPointSet(t55, 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
            cpuAimPointSet((t55 + 0x1), 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((t55 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t73 = (int)((int)(nlRand()) % (int)0x5);
            t93 = (((t55 + 0x1) + 0x1) + 0x1);
            if (t73 != 0) {
            } else {
                u75 = *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u77 = (-u75);
                if (!(0.0f > u75)) {
                    u77 = (*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)));
                }
                t85 = (((t55 + 0x1) + 0x1) + 0x1);
                if (27.4249992f > u77) {
                    cpuAimPointSet((((t55 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((((t55 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t85 = (((((t55 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t93 = t85;
            }
            t146 = t93;
        } else {
            u99 = *(float *)0x8C291F7C;
            u100 = (-u99);
            if (!(0.0f > u99)) {
                u100 = u99;
            }
            if (u100 > 30.0f) {
                if (t39 != 0) {
                    t107 = a5;
                    t111 = t39;
                    u114 = ((float)(-t24) * 54.8499985f);
                    u115 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                } else {
                    cpuAimPointSet(a5, 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t107 = (a5 + 0x1);
                    t111 = 0x1;
                    u114 = ((float)t24 * 54.8499985f);
                    u115 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                }
                cpuAimPointSet(t107, t111, u114, u115);
                cpuAimPointSet((t107 + 0x1), 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 59.4249992f));
                t141 = ((t107 + 0x1) + 0x1);
            } else {
                t125 = a5;
                if (t39 != 0) {
                    cpuAimPointSet(a5, t39, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t125 = (a5 + 0x1);
                }
                cpuAimPointSet(t125, 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                cpuAimPointSet((t125 + 0x1), 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 47.5400009f));
                t141 = ((t125 + 0x1) + 0x1);
            }
            cpuAimPointSet(t141, 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t146 = (t141 + 0x1);
        }
        t258 = t146;
    } else {
        u152 = *(float *)0x8C291F7C;
        u153 = (-u152);
        if (!(0.0f > u152)) {
            u153 = u152;
        }
        if (15.0f > u153) {
            t160 = a5;
            if (t39 != 0) {
                cpuAimPointSet(a5, t39, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t160 = (a5 + 0x1);
            }
            cpuAimPointSet(t160, 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 35.6550026f));
            cpuAimPointSet((t160 + 0x1), 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            cpuAimPointSet(((t160 + 0x1) + 0x1), 0x1, 0.0f, ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t178 = (int)((int)(nlRand()) % (int)0x5);
            t198 = (((t160 + 0x1) + 0x1) + 0x1);
            if (t178 != 0) {
            } else {
                u180 = *(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8));
                u182 = (-u180);
                if (!(0.0f > u180)) {
                    u182 = (*(float *)((((((t28 + 0x2) & 0x3) * 0xD78) + 0x8C287D84) + 0xAE8)));
                }
                t190 = (((t160 + 0x1) + 0x1) + 0x1);
                if (!(27.4249992f > u182)) {
                } else {
                    cpuAimPointSet((((t160 + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    cpuAimPointSet(((((t160 + 0x1) + 0x1) + 0x1) + 0x1), 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t190 = (((((t160 + 0x1) + 0x1) + 0x1) + 0x1) + 0x1);
                }
                t198 = t190;
            }
            t250 = t198;
        } else {
            u204 = *(float *)0x8C291F7C;
            u205 = (-u204);
            if (!(0.0f > u204)) {
                u205 = u204;
            }
            if (u205 > 30.0f) {
                if (t39 != 0) {
                    t212 = a5;
                    t216 = t39;
                    u219 = ((float)(-t24) * 54.8499985f);
                    u220 = ((*(float *)((a4 + 0xB00))) * 118.849998f);
                } else {
                    cpuAimPointSet(a5, 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 11.8850002f));
                    t212 = (a5 + 0x1);
                    t216 = 0x1;
                    u219 = ((float)t24 * 54.8499985f);
                    u220 = ((*(float *)((a4 + 0xB00))) * 11.8850002f);
                }
                cpuAimPointSet(t212, t216, u219, u220);
                t242 = (t212 + 0x1);
                u243 = 59.4249992f;
            } else {
                t228 = a5;
                if (t39 != 0) {
                    cpuAimPointSet(a5, t39, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                    t228 = (a5 + 0x1);
                }
                cpuAimPointSet(t228, 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
                t242 = (t228 + 0x1);
                u243 = 47.5400009f;
            }
            cpuAimPointSet(t242, 0x1, ((float)t24 * 54.8499985f), ((*(float *)((a4 + 0xB00))) * u243));
            cpuAimPointSet((t242 + 0x1), 0x1, ((float)(-t24) * 54.8499985f), ((*(float *)((a4 + 0xB00))) * 118.849998f));
            t250 = ((t242 + 0x1) + 0x1);
        }
        t258 = t250;
    }
    return (t258 - a5);
}

int cpuDblPickTactic(void)
{
    int t3;
    int t4;
    int t7;
    int t14;
    int t19;
    int t22;
    int t27;
    int t34;
    int t41;
    int t46;
    int t53;
    int t57;
    int t64;
    int t71;
    int t76;
    int t87;
    int t90;
    int t95;
    int t98;
    int t110;
    int t126;
    int t132;
    int t138;
    int stk[12];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R8;
    int R9;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    int T_;
    L_8C05C598:;
    *(unsigned int *)(((int)stk + 4)) = 0x8C287ACC;
    *(unsigned int *)(((int)stk + 8)) = 0x8C287D84;
    *(unsigned int *)(((int)stk + 12)) = 0x8C289874;
    R10 = (0x0);
    R12 = (0x8C2FCC1C);
    R9 = (0x8C10D674);
    goto L_8C05C5C0;
    L_8C05C5C0:;
    t3 = *(int *)(((int)stk + 8));
    t4 = *(int *)((t3 + 0xB5C));
    t7 = *(int *)(((t4 << 2) + ((*(int *)(((int)stk + 4))) + 0x14)));
    R0 = (t7);
    R11 = (t3);
    R13 = ((((*(int *)(((((0x3 & (t4 + 0x2)) * 0xD78) + 0x8C287D84) + 0xB5C))) * 0x160) + 0x8C2FC69C));
    R14 = (((t4 * 0x160) + 0x8C2FC69C));
    R8 = ((((0x3 & (t4 + 0x2)) * 0xD78) + 0x8C287D84));
    if ((t7 == 1)) goto L_8C05C5FE;
    goto L_8C05C5FA;
    L_8C05C5FA:;
    goto L_8C05C9DC;
    L_8C05C9DC:;
    t14 = *(int *)(((int)stk + 8));
    *(unsigned int *)(((int)stk + 8)) = (t14 + 0xD78);
    if (((unsigned int)(t14 + 0xD78) >= (unsigned int)(*(int *)(((int)stk + 12))))) goto L_8C05C9EE;
    goto L_8C05C9EA;
    L_8C05C9EA:;
    goto L_8C05C5C0;
    L_8C05C9EE:;
    return R0;
    L_8C05C5FE:;
    t19 = (serveGetServer()) == (*(int *)(((0xB5C + R11) + 0x0)));
    if (t19) goto L_8C05C622;
    goto L_8C05C60E;
    L_8C05C60E:;
    t22 = (serveGetServer()) == (*(int *)(((0xB5C + R8) + 0x0)));
    if (t22) goto L_8C05C622;
    goto L_8C05C61E;
    L_8C05C61E:;
    goto L_8C05C7F6;
    L_8C05C7F6:;
    if (((int)(*(int *)((R12 + 0x0))) >= (int)0x14)) goto L_8C05C802;
    goto L_8C05C7FE;
    L_8C05C7FE:;
    goto L_8C05C930;
    L_8C05C930:;
    t27 = (*(int *)(((0xB5C + R11) + 0x0))) != (serveGetServer());
    if (t27) goto L_8C05C95A;
    goto L_8C05C940;
    L_8C05C940:;
    *(unsigned char *)((R14 + 0x12B)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x0)));
    *(unsigned char *)(((0x12B + R13) + 0x0)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x1)));
    goto L_8C05C95A;
    L_8C05C95A:;
    t34 = (*(int *)(((0xB5C + R11) + 0x0))) != (serveGetReceiver());
    if (t34) goto L_8C05C986;
    goto L_8C05C96A;
    L_8C05C96A:;
    *(unsigned char *)(((0x12B + R14) + 0x0)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x2)));
    *(unsigned char *)(((0x12B + R13) + 0x0)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x3)));
    goto L_8C05C986;
    L_8C05C986:;
    t41 = (*(int *)(((0xB5C + R8) + 0x0))) != (serveGetServer());
    if (t41) goto L_8C05C9B0;
    goto L_8C05C996;
    L_8C05C996:;
    *(unsigned char *)(((0x12B + R14) + 0x0)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x1)));
    *(unsigned char *)((R13 + 0x12B)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x0)));
    goto L_8C05C9B0;
    L_8C05C9B0:;
    t46 = serveGetReceiver();
    R0 = (t46);
    if (((*(int *)(((0xB5C + R8) + 0x0))) != t46)) goto L_8C05C9DC;
    goto L_8C05C9C0;
    L_8C05C9C0:;
    *(unsigned char *)(((0x12B + R14) + 0x0)) = (*(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x3)));
    t53 = *(signed char *)(((((*(int *)((R12 + 0x0))) << 2) + R9) + 0x2));
    *(unsigned char *)(((0x12B + R13) + 0x0)) = t53;
    R0 = (t53);
    goto L_8C05C9DC;
    L_8C05C802:;
    t57 = (*(int *)(((0xB5C + R11) + 0x0))) != (serveGetServer());
    if (t57) goto L_8C05C82E;
    goto L_8C05C812;
    L_8C05C812:;
    *(unsigned char *)((R14 + 0x12B)) = (*(signed char *)((((*(int *)((R11 + 0xC58))) << 2) + 0x8C10D6AC)));
    *(unsigned char *)((R13 + 0x12B)) = (*(signed char *)((((*(int *)((R8 + 0xC58))) << 2) + 0x8C10D6AD)));
    goto L_8C05C82E;
    L_8C05C82E:;
    t64 = (*(int *)(((0xB5C + R11) + 0x0))) != (serveGetReceiver());
    if (t64) goto L_8C05C85A;
    goto L_8C05C83E;
    L_8C05C83E:;
    *(unsigned char *)((R14 + 0x12B)) = (*(signed char *)((((*(int *)((R11 + 0xC58))) << 2) + 0x8C10D6AE)));
    *(unsigned char *)((R13 + 0x12B)) = (*(signed char *)((((*(int *)((R8 + 0xC58))) << 2) + 0x8C10D6AF)));
    goto L_8C05C85A;
    L_8C05C85A:;
    t71 = (*(int *)(((0xB5C + R8) + 0x0))) != (serveGetServer());
    if (t71) goto L_8C05C886;
    goto L_8C05C86A;
    L_8C05C86A:;
    *(unsigned char *)((R14 + 0x12B)) = (*(signed char *)((((*(int *)((R11 + 0xC58))) << 2) + 0x8C10D6AD)));
    *(unsigned char *)((R13 + 0x12B)) = (*(signed char *)((((*(int *)((R8 + 0xC58))) << 2) + 0x8C10D6AC)));
    goto L_8C05C886;
    L_8C05C886:;
    t76 = serveGetReceiver();
    R0 = (t76);
    if (((*(int *)(((0xB5C + R8) + 0x0))) != t76)) goto L_8C05C8B2;
    goto L_8C05C896;
    L_8C05C896:;
    *(unsigned char *)((R14 + 0x12B)) = (*(signed char *)((((*(int *)((R11 + 0xC58))) << 2) + 0x8C10D6AF)));
    *(unsigned char *)((R13 + 0x12B)) = (*(signed char *)((((*(int *)((R8 + 0xC58))) << 2) + 0x8C10D6AE)));
    R0 = (0x12B);
    goto L_8C05C8B2;
    L_8C05C8B2:;
    if (((*(int *)0x8C2FCC20) == 0)) goto L_8C05C8BE;
    goto L_8C05C8BA;
    L_8C05C8BA:;
    goto L_8C05C9DC;
    L_8C05C8BE:;
    t87 = *(signed char *)((R14 + 0x12B));
    R0 = (t87);
    if ((t87 == 2)) goto L_8C05C8CA;
    goto L_8C05C8C6;
    L_8C05C8C6:;
    goto L_8C05C9DC;
    L_8C05C8CA:;
    t90 = *(signed char *)((R13 + 0x12B));
    R0 = (t90);
    if ((t90 == 2)) goto L_8C05C8D6;
    goto L_8C05C8D2;
    L_8C05C8D2:;
    goto L_8C05C9DC;
    L_8C05C8D6:;
    t95 = (*(int *)(((0xB5C + R11) + 0x0))) == (serveGetServer());
    if (t95) goto L_8C05C8F6;
    goto L_8C05C8E6;
    L_8C05C8E6:;
    t98 = (*(int *)(((0xB5C + R11) + 0x0))) != (serveGetReceiver());
    if (t98) goto L_8C05C900;
    goto L_8C05C8F6;
    L_8C05C8F6:;
    *(unsigned char *)((R13 + 0x12B)) = 0x2;
    *(unsigned char *)((R14 + 0x12B)) = R10;
    R0 = (0x12B);
    goto L_8C05C9DC;
    L_8C05C900:;
    *(unsigned char *)((R13 + 0x12B)) = R10;
    *(unsigned char *)((R14 + 0x12B)) = 0x2;
    R0 = (0x12B);
    goto L_8C05C9DC;
    L_8C05C622:;
    if (((int)(*(int *)((R12 + 0x0))) < (int)0x9)) goto L_8C05C6CC;
    goto L_8C05C62A;
    L_8C05C62A:;
    if (((int)(*(int *)((R12 + 0x0))) > (int)0xA)) goto L_8C05C6CC;
    goto L_8C05C632;
    L_8C05C632:;
    if (((*(int *)((R11 + 0xC58))) == 4)) goto L_8C05C642;
    goto L_8C05C63A;
    L_8C05C63A:;
    if (((*(int *)((R8 + 0xC58))) != 4)) goto L_8C05C6CC;
    goto L_8C05C642;
    L_8C05C642:;
    t110 = (int)((int)(nlRand()) % (int)0x64);
    *(unsigned char *)((R13 + 0x13F)) = 0x2;
    *(unsigned char *)((R14 + 0x13F)) = 0x2;
    R4 = (t110);
    if (((int)t110 >= (int)0x28)) goto L_8C05C6AC;
    goto L_8C05C660;
    L_8C05C660:;
    *(unsigned char *)((R13 + 0x140)) = R10;
    *(unsigned char *)((R14 + 0x140)) = R10;
    goto L_8C05C6CC;
    L_8C05C6CC:;
    if (((*(int *)((R12 + 0x0))) != 8)) goto L_8C05C784;
    goto L_8C05C6D2;
    L_8C05C6D2:;
    if (((int)(*(int *)((((*(int *)(((int)stk + 4))) + 0x44) + (((*(int *)((R11 + 0xB5C))) & 0x1) << 2)))) > (int)(*(int *)((((*(int *)(((int)stk + 4))) + 0x44) + ((((*(int *)((R11 + 0xB5C))) + 0x1) & 0x1) << 2)))))) goto L_8C05C784;
    goto L_8C05C6F4;
    L_8C05C6F4:;
    if (((int)(*(int *)((((*(int *)(((int)stk + 4))) + 0x44) + ((((*(int *)((R11 + 0xB5C))) + 0x1) & 0x1) << 2)))) < (int)0x2)) goto L_8C05C784;
    goto L_8C05C70A;
    L_8C05C70A:;
    t126 = nlRand();
    R0 = (t126);
    if (((int)t126 < 0)) goto L_8C05C718;
    goto L_8C05C714;
    L_8C05C714:;
    R0 = ((R0 & 0x3));
    goto L_8C05C722;
    L_8C05C722:;
    if ((R0 == 0)) goto L_8C05C784;
    goto L_8C05C726;
    L_8C05C726:;
    t132 = (int)((int)(nlRand()) % (int)0x64);
    *(unsigned char *)((R13 + 0x13F)) = 0x1;
    *(unsigned char *)((R14 + 0x13F)) = 0x1;
    R4 = (t132);
    if (((int)t132 >= (int)0x28)) goto L_8C05C74C;
    goto L_8C05C744;
    L_8C05C744:;
    *(unsigned char *)((R13 + 0x140)) = R10;
    *(unsigned char *)((R14 + 0x140)) = R10;
    goto L_8C05C784;
    L_8C05C784:;
    if (((*(int *)((R12 + 0x0))) != 7)) goto L_8C05C7F6;
    goto L_8C05C78A;
    L_8C05C78A:;
    t138 = (int)((int)(nlRand()) % (int)0x64);
    *(unsigned char *)((R13 + 0x13F)) = R10;
    *(unsigned char *)((R14 + 0x13F)) = R10;
    R4 = (t138);
    if (((int)t138 >= (int)0x1E)) goto L_8C05C7BC;
    goto L_8C05C7A6;
    L_8C05C7A6:;
    *(unsigned char *)((R13 + 0x140)) = R10;
    *(unsigned char *)((R14 + 0x140)) = R10;
    goto L_8C05C7F6;
    L_8C05C7BC:;
    if (((int)R4 >= (int)0x3C)) goto L_8C05C7D4;
    goto L_8C05C7C2;
    L_8C05C7C2:;
    *(unsigned char *)(((0x140 + R13) + 0x0)) = 0x1;
    *(unsigned char *)(((0x140 + R14) + 0x0)) = 0x1;
    goto L_8C05C7F6;
    L_8C05C7D4:;
    if (((int)R4 >= (int)0x5A)) goto L_8C05C7EE;
    goto L_8C05C7DA;
    L_8C05C7DA:;
    *(unsigned char *)(((0x140 + R13) + 0x0)) = 0x2;
    *(unsigned char *)(((0x140 + R14) + 0x0)) = 0x2;
    goto L_8C05C7F6;
    L_8C05C7EE:;
    *(unsigned char *)((R13 + 0x140)) = 0x3;
    *(unsigned char *)((R14 + 0x140)) = 0x3;
    goto L_8C05C7F6;
    L_8C05C74C:;
    if (((int)R4 >= (int)0x50)) goto L_8C05C764;
    goto L_8C05C752;
    L_8C05C752:;
    *(unsigned char *)(((0x140 + R13) + 0x0)) = 0x1;
    *(unsigned char *)(((0x140 + R14) + 0x0)) = 0x1;
    goto L_8C05C784;
    L_8C05C764:;
    if (((int)R4 >= (int)0x5A)) goto L_8C05C77C;
    goto L_8C05C76A;
    L_8C05C76A:;
    *(unsigned char *)(((0x140 + R13) + 0x0)) = 0x2;
    *(unsigned char *)(((0x140 + R14) + 0x0)) = 0x2;
    goto L_8C05C784;
    L_8C05C77C:;
    *(unsigned char *)((R13 + 0x140)) = 0x3;
    *(unsigned char *)((R14 + 0x140)) = 0x3;
    goto L_8C05C784;
    L_8C05C718:;
    R0 = (((~(((~R0) + 0x1) & 0x3)) + 0x1));
    goto L_8C05C722;
    L_8C05C6AC:;
    if (((int)R4 >= (int)0x50)) goto L_8C05C6C4;
    goto L_8C05C6B2;
    L_8C05C6B2:;
    *(unsigned char *)(((0x140 + R13) + 0x0)) = 0x1;
    *(unsigned char *)(((0x140 + R14) + 0x0)) = 0x1;
    goto L_8C05C6CC;
    L_8C05C6C4:;
    *(unsigned char *)((R13 + 0x140)) = 0x2;
    *(unsigned char *)((R14 + 0x140)) = 0x2;
    goto L_8C05C6CC;
}
