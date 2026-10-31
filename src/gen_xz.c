/* Straight-line functions with calls and guards (batch gen_xz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int);
int advPeriOff(void);
int commonViewInit(void);
int fadeScreenStart(int, int, int, int, int, int);
int fileLoadClose(void);
int fileLoadPoll(int);
int fileLoadStart(int, int, int);
int nlInitEvent(void);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int sceneObjPutInit(void);
int seSystemApply(void);
int sndFadeFlagsClear(void);
int sndSeDecide(void);
int sprAdvInit(void);
int sprPutAlpha(int, float);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int thunk_FUN_8c0f41f0(int);
int titleSprLoad(void);
int titleSprTexLoad(int, int, int, int, int, int, int, int, int);
int FUN_8c0e426a(int a4);

int FUN_8c0e426a(int a4)
{
    int stk[10];
    register int t6;
    register int t27;
    register int t54;
    register int t59;
    register int t55;
    register int t75;
    register int t81;
    register int t82;
    int t84;
    register int t85;
    register int t86;
    register int t40;
    register int t10;
    register int t15;
    register int t34;
    register int t21;
    register int t50;
    register int t56;
    register int t69;
    register int t76;
    register int t83;
    register int t95;
    register int t96;
    register int t97;
    register int t98;

    *(int *)((int)stk + 32) = a4;
    nlInitEvent();
    sndFadeFlagsClear();
    *(unsigned int *)0x8C20D150 = 0x1;
    *(unsigned int *)0x8C20D15C = 0x0;
    *(unsigned int *)0x8C421F60 = 0x1;
    *(unsigned int *)0x8C38BA78 = 0x1;
    *(unsigned int *)0x8C38BA74 = 0x1;
    *(unsigned int *)0x8C38BA70 = 0x1;
    seSystemApply();
    *(unsigned int *)0x8C185410 = 0x0;
    sceneObjPutInit();
    sprAdvInit();
    advPeriOff();
    t6 = *(int *)0x8C20D15C;
    if ((int)t6 < (int)0xF) {
        if (t6 == 0) {
            *(unsigned int *)0x8C421F60 = 0x1;
            *(unsigned int *)0x8C1D8638 = 0x0;
            commonViewInit();
            fadeScreenStart(0x3, 0x0, 0x10, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
        } else {
            t10 = 0xF;
        }
        if ((*(int *)0x8C20D15C) == 14) {
            FUN_8c0eaf00(0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF);
        } else {
            t15 = t10;
        }
        t40 = t15;
    } else {
        if (1 && ((int)t6 < (int)0x1E)) {
            sprPutAlpha(0x8C40C5D4, ((float)(t6 - 15) / 15.0f));
        } else {
            t27 = 0xF;
            if ((int)t6 >= (int)0x1E) {
                if (!((float)t6 > 330.0f)) {
                    thunk_FUN_8c0f41f0(0x8C40C5D4);
                } else {
                    t21 = 0xF;
                }
                t27 = t21;
            }
            t34 = t27;
        }
        t40 = t34;
    }
    if ((float)(*(int *)0x8C20D15C) == 310.0f) {
        fileLoadClose();
        fileLoadStart(0x8CA80000, 0x8C126EE8, 0x0);
        fadeScreenStart(0x3, 0x1, 0x15, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4));
    } else {
        t50 = t40;
    }
    t54 = *(int *)0x8C20D15C;
    t59 = t54;
    if ((float)t54 > 310.0f) {
        t55 = fileLoadPoll(t50);
        if (t55 == 1) {
            *(unsigned int *)0x8C1D8638 = 0x1;
            t56 = 0x8C1D8638;
        }
        t59 = t56;
    }
    if ((float)(*(int *)0x8C20D15C) == 329.0f) {
        FUN_8c0eaf00(0xFF000000, 0xFF000000, 0xFF000000);
    } else {
        t69 = t59;
    }
    t75 = *(int *)0x8C20D15C;
    if (((float)t75 > 330.0f) && (t76 = *(int *)0x8C1D8638, t76 != 0)) {
        nlSetCommonTextureOffset(0x0);
        nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8D);
        stageFreeAll();
        stageTexSetGarbagedAll();
        t81 = titleSprTexLoad(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16));
        *(unsigned int *)0x8C20D150 = 0x2;
        *(unsigned int *)0x8C20D15C = 0x0;
        return t81;
    }
    if ((310.0f > (float)t75) && ((unsigned int)0x8C29B898 < (unsigned int)0x8C29B8A8)) {
        t82 = 0x8C0E4438;
        t84 = t69;
        t85 = 0x8C29B898;
        for (;;) {
            t86 = *(int *)((t85 + 0x0));
            t85 = (t85 + 0x4);
            if (((*(int *)((t86 + 0x10))) & 0x8) != 0) {
                t84 = (*(int *)((t86 + 0x8)));
                if (((t84 & 0x200) != 0) && ((t95 = *(int *)((t86 + 0x8)), t83 = t95, t96 = ((t84 & 0x200) == 0), t84 = 0x400, (t83 & t84) != 0) && ((t97 = *(int *)((t86 + 0x8)), t82 = t97, (t82 & 2) != 0) && (t98 = *(int *)((t86 + 0x8)), t82 = t98, (t82 & 5) != 0)))) {
                    if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                        t84 = (*(int *)0x8C20D15C);
                        t84 = (t84 + 0x1);
                        *(unsigned int *)0x8C20D15C = t84;
                        return t82;
                    }
                    continue;
                }
                t82 = (*(int *)0x8C20D150);
                if (t82 != 3) {
                    break;
                }
                if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                    t84 = (*(int *)0x8C20D15C);
                    t84 = (t84 + 0x1);
                    *(unsigned int *)0x8C20D15C = t84;
                    return t82;
                }
                continue;
            }
            if ((unsigned int)t85 >= (unsigned int)0x8C29B8A8) {
                t84 = (*(int *)0x8C20D15C);
                t84 = (t84 + 0x1);
                *(unsigned int *)0x8C20D15C = t84;
                return t82;
            }
        }
        nlInitEvent();
        *(unsigned int *)0x8C20D14C = 0x0;
        *(unsigned int *)0x8C20D150 = 0x2;
        sndSeDecide();
        *(unsigned int *)0x8C421F74 = 0x0;
        *(unsigned int *)0x8C421F64 = 0x0;
        *(unsigned int *)0x8C421F68 = 0x0;
        *(unsigned int *)0x8C20D15C = 0x0;
        *(unsigned int *)0x8C1D8278 = 0x1;
        titleSprLoad();
        fileLoadClose();
        nlSetCommonTextureOffset(0x0);
        return nlSpriteFreeTextureOnce(0x8C18281C, 0x0, 0x8D);
    }
    *(unsigned int *)0x8C20D15C = ((*(int *)0x8C20D15C) + 0x1);
    return 0x8C0E4438;
}
