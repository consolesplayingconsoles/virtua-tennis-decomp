/* Straight-line functions with calls and guards (batch gen_bf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlObjPutFreeTextureOnce(int);
int nlSetCommonTextureOffset(int);
extern int sprPutAtAlpha();
float cpuOppLineX(int a4);
int phrasePut(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4);
int stageTexFree(void);



int stageTexFree(void)
{
    int t0;
    int t1;
    int t108;
    int t6;
    int t7;
    int t8;
    int t11;
    int t12;
    int t13;
    int t16;
    int t17;
    int t18;
    int t21;
    int t22;
    int t23;
    int t26;
    int t27;
    int t28;
    int t31;
    int t32;
    int t33;
    int t36;
    int t37;
    int t38;
    int t41;
    int t42;
    int t43;
    int t46;
    int t47;
    int t48;
    int t51;
    int t52;
    int t53;
    int t56;
    int t57;
    int t58;
    int t61;
    int t62;
    int t63;
    int t66;
    int t67;
    int t68;
    int t71;
    int t72;
    int t73;
    int t76;
    int t77;
    int t78;
    int t81;
    int t82;
    int t83;
    int t86;
    int t87;
    int t88;
    int t91;
    int t92;
    int t93;

    t0 = 0x0;
    t1 = 0xFFFFFFFF;
    for (;;) {
        if ((*(int *)((0x8C343F98 + (t0 << 2)))) != 0) {
            t1 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x12) {
            break;
        }
    }
    t108 = t1;
    if (t1 != -1) {
        if ((unsigned int)t1 >= (unsigned int)0x12) {
        } else {
            switch ((t1 << 1)) {
                case 0:
                {
                    nlSetCommonTextureOffset(0x700);
                    t6 = 0x0;
                    t7 = 0x8C186AC8;
                    for (;;) {
                        t8 = *(int *)((t7 + 0x0));
                        t7 = (t7 + 0x4);
                        nlObjPutFreeTextureOnce(t8);
                        t6 = (t6 + 0x1);
                        if ((unsigned int)t6 >= (unsigned int)0x12B) {
                            break;
                        }
                    }
                }
                    break;
                case 2:
                {
                    nlSetCommonTextureOffset(0x500);
                    t11 = 0x0;
                    t12 = 0x8C1865BC;
                    for (;;) {
                        t13 = *(int *)((t12 + 0x0));
                        t12 = (t12 + 0x4);
                        nlObjPutFreeTextureOnce(t13);
                        t11 = (t11 + 0x1);
                        if ((unsigned int)t11 >= (unsigned int)0x11D) {
                            break;
                        }
                    }
                }
                    break;
                case 4:
                {
                    nlSetCommonTextureOffset(0x900);
                    t16 = 0x0;
                    t17 = 0x8C186048;
                    for (;;) {
                        t18 = *(int *)((t17 + 0x0));
                        t17 = (t17 + 0x4);
                        nlObjPutFreeTextureOnce(t18);
                        t16 = (t16 + 0x1);
                        if ((unsigned int)t16 >= (unsigned int)0x136) {
                            break;
                        }
                    }
                }
                    break;
                case 6:
                {
                    nlSetCommonTextureOffset(0xB00);
                    t21 = 0x0;
                    t22 = 0x8C18700C;
                    for (;;) {
                        t23 = *(int *)((t22 + 0x0));
                        t22 = (t22 + 0x4);
                        nlObjPutFreeTextureOnce(t23);
                        t21 = (t21 + 0x1);
                        if ((unsigned int)t21 >= (unsigned int)0x119) {
                            break;
                        }
                    }
                }
                    break;
                case 8:
                {
                    nlSetCommonTextureOffset(0xD00);
                    t26 = 0x0;
                    t27 = 0x8C1874D4;
                    for (;;) {
                        t28 = *(int *)((t27 + 0x0));
                        t27 = (t27 + 0x4);
                        nlObjPutFreeTextureOnce(t28);
                        t26 = (t26 + 0x1);
                        if ((unsigned int)t26 >= (unsigned int)0x154) {
                            break;
                        }
                    }
                }
                    break;
                case 10:
                {
                    nlSetCommonTextureOffset(0x1600);
                    t31 = 0x0;
                    t32 = 0x8C187A6C;
                    for (;;) {
                        t33 = *(int *)((t32 + 0x0));
                        t32 = (t32 + 0x4);
                        nlObjPutFreeTextureOnce(t33);
                        t31 = (t31 + 0x1);
                        if ((unsigned int)t31 >= (unsigned int)0xCB) {
                            break;
                        }
                    }
                }
                    break;
                case 12:
                {
                    nlSetCommonTextureOffset(0x1700);
                    t36 = 0x0;
                    t37 = 0x8C187DC4;
                    for (;;) {
                        t38 = *(int *)((t37 + 0x0));
                        t37 = (t37 + 0x4);
                        nlObjPutFreeTextureOnce(t38);
                        t36 = (t36 + 0x1);
                        if ((unsigned int)t36 >= (unsigned int)0xC5) {
                            break;
                        }
                    }
                }
                    break;
                case 14:
                {
                    nlSetCommonTextureOffset(0x1900);
                    t41 = 0x0;
                    t42 = 0x8C1880F0;
                    for (;;) {
                        t43 = *(int *)((t42 + 0x0));
                        t42 = (t42 + 0x4);
                        nlObjPutFreeTextureOnce(t43);
                        t41 = (t41 + 0x1);
                        if ((unsigned int)t41 >= (unsigned int)0xCB) {
                            break;
                        }
                    }
                }
                    break;
                case 16:
                {
                    nlSetCommonTextureOffset(0x1E00);
                    t46 = 0x0;
                    t47 = 0x8C188440;
                    for (;;) {
                        t48 = *(int *)((t47 + 0x0));
                        t47 = (t47 + 0x4);
                        nlObjPutFreeTextureOnce(t48);
                        t46 = (t46 + 0x1);
                        if ((unsigned int)t46 >= (unsigned int)0xCA) {
                            break;
                        }
                    }
                }
                    break;
                case 18:
                {
                    nlSetCommonTextureOffset(0x2400);
                    t51 = 0x0;
                    t52 = 0x8C188794;
                    for (;;) {
                        t53 = *(int *)((t52 + 0x0));
                        t52 = (t52 + 0x4);
                        nlObjPutFreeTextureOnce(t53);
                        t51 = (t51 + 0x1);
                        if ((unsigned int)t51 >= (unsigned int)0xE0) {
                            break;
                        }
                    }
                }
                    break;
                case 20:
                {
                    nlSetCommonTextureOffset(0x1080);
                    t56 = 0x0;
                    t57 = 0x8C188B98;
                    for (;;) {
                        t58 = *(int *)((t57 + 0x0));
                        t57 = (t57 + 0x4);
                        nlObjPutFreeTextureOnce(t58);
                        t56 = (t56 + 0x1);
                        if ((unsigned int)t56 >= (unsigned int)0x8) {
                            break;
                        }
                    }
                }
                    break;
                case 22:
                {
                    nlSetCommonTextureOffset(0x1100);
                    t61 = 0x0;
                    t62 = 0x8C188BB8;
                    for (;;) {
                        t63 = *(int *)((t62 + 0x0));
                        t62 = (t62 + 0x4);
                        nlObjPutFreeTextureOnce(t63);
                        t61 = (t61 + 0x1);
                        if ((unsigned int)t61 >= (unsigned int)0x7) {
                            break;
                        }
                    }
                }
                    break;
                case 24:
                {
                    nlSetCommonTextureOffset(0x1180);
                    t66 = 0x0;
                    t67 = 0x8C188BD4;
                    for (;;) {
                        t68 = *(int *)((t67 + 0x0));
                        t67 = (t67 + 0x4);
                        nlObjPutFreeTextureOnce(t68);
                        t66 = (t66 + 0x1);
                        if ((unsigned int)t66 >= (unsigned int)0x7) {
                            break;
                        }
                    }
                }
                    break;
                case 26:
                {
                    nlSetCommonTextureOffset(0x1200);
                    t71 = 0x0;
                    t72 = 0x8C188BF0;
                    for (;;) {
                        t73 = *(int *)((t72 + 0x0));
                        t72 = (t72 + 0x4);
                        nlObjPutFreeTextureOnce(t73);
                        t71 = (t71 + 0x1);
                        if ((unsigned int)t71 >= (unsigned int)0x8) {
                            break;
                        }
                    }
                }
                    break;
                case 28:
                {
                    nlSetCommonTextureOffset(0x1280);
                    t76 = 0x0;
                    t77 = 0x8C188C10;
                    for (;;) {
                        t78 = *(int *)((t77 + 0x0));
                        t77 = (t77 + 0x4);
                        nlObjPutFreeTextureOnce(t78);
                        t76 = (t76 + 0x1);
                        if ((unsigned int)t76 >= (unsigned int)0x7) {
                            break;
                        }
                    }
                }
                    break;
                case 30:
                {
                    nlSetCommonTextureOffset(0x1300);
                    t81 = 0x0;
                    t82 = 0x8C188C2C;
                    for (;;) {
                        t83 = *(int *)((t82 + 0x0));
                        t82 = (t82 + 0x4);
                        nlObjPutFreeTextureOnce(t83);
                        t81 = (t81 + 0x1);
                        if ((unsigned int)t81 >= (unsigned int)0x8) {
                            break;
                        }
                    }
                }
                    break;
                case 32:
                {
                    nlSetCommonTextureOffset(0x1380);
                    t86 = 0x0;
                    t87 = 0x8C188C4C;
                    for (;;) {
                        t88 = *(int *)((t87 + 0x0));
                        t87 = (t87 + 0x4);
                        nlObjPutFreeTextureOnce(t88);
                        t86 = (t86 + 0x1);
                        if ((unsigned int)t86 >= (unsigned int)0x7) {
                            break;
                        }
                    }
                }
                    break;
                default:
                {
                    nlSetCommonTextureOffset(0x1400);
                    t91 = 0x0;
                    t92 = 0x8C188C68;
                    for (;;) {
                        t93 = *(int *)((t92 + 0x0));
                        t92 = (t92 + 0x4);
                        nlObjPutFreeTextureOnce(t93);
                        t91 = (t91 + 0x1);
                        if ((unsigned int)t91 >= (unsigned int)0x7) {
                            break;
                        }
                    }
                }
                    break;
            }
        }
        *(unsigned int *)0x8C343F40 = 0x0;
        *(unsigned int *)((0x8C343F98 + (t1 << 2))) = 0x0;
        t108 = (t1 << 2);
    }
    return t108;
}
