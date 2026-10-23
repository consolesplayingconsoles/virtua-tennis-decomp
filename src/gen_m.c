/* Straight-line functions with calls and guards (batch gen_m): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int strmCallName(int);
int eepromGetDeuceMode(void);
extern void _builtin_prefetch(void *);
int kmiFLWCTRLCheckVBufOverflow(int, int, int, int);
int strmUmpireCall(int a4, int a5, int a6);
int kmiFLWCTRLFinalizePass(int a4);

int strmUmpireCall(int a4, int a5, int a6)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t59;
    int t60;
    int t61;
    int t62;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t133;
    int t134;
    int t135;
    int t136;
    int t71;
    int t72;
    int t73;
    int t74;
    int t145;
    int t146;
    int t147;
    int t148;

    t0 = *(int *)0x8C287B3C;
    if ((t0 & 0x4000) != 0) {
        return ((int (*)(int, int, int, int))(0x8C0D74A0))(a4, a5, a6, 0x8C287ACC);
    }
    t1 = *(int *)0x8C20D14C;
    if (t1 != 2) {
        if (t1 != 6) {
            return ((int (*)(int, int, int, int))(0x8C0D74A0))(a4, t1, a6, 0x8C287ACC);
        }
        if (a6 != -1) {
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, t1, a6, 0x8C287ACC);
        }
        t2 = *(int *)0x8C1891E8;
        if (a4 == 0) {
            if (a5 == 0) {
                return ((int (*)(int, int, int, int))(0x8C0D74A0))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 1) {
                t3 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t4 = *(int *)((((((t3 << 2) << 2) << 2) + 0x8C1D4800) + 0x0));
            } else {
                if (a5 == 2) {
                    t5 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t6 = *(int *)((((((t5 << 2) << 2) << 2) + 0x8C1D4800) + 0x4));
                } else {
                    if (a5 != 3) {
                    } else {
                        t7 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                        t8 = *(int *)((((((t7 << 2) << 2) << 2) + 0x8C1D4800) + 0x8));
                    }
                }
            }
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a4 == 1) {
            if (a5 == 0) {
                t15 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t16 = *(int *)((((((t15 << 2) << 2) << 2) + 0x8C1D4800) + 0xC));
            } else {
                if (a5 == 1) {
                    t17 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t18 = *(int *)((((((t17 << 2) << 2) << 2) + 0x8C1D4800) + 0x10));
                } else {
                    if (a5 == 2) {
                        t19 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                        t20 = *(int *)((((((t19 << 2) << 2) << 2) + 0x8C1D4800) + 0x14));
                    } else {
                        if (a5 != 3) {
                        } else {
                            t21 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                            t22 = *(int *)((((((t21 << 2) << 2) << 2) + 0x8C1D4800) + 0x18));
                        }
                    }
                }
            }
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a4 == 2) {
            if (a5 == 0) {
                t32 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t33 = *(int *)((((((t32 << 2) << 2) << 2) + 0x8C1D4800) + 0x1C));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 1) {
                t34 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t35 = *(int *)((((((t34 << 2) << 2) << 2) + 0x8C1D4800) + 0x20));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 2) {
                t36 = *(int *)0x8C287B20;
                if (t36 == 0) {
                    t37 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t38 = *(int *)((((((t37 << 2) << 2) << 2) + 0x8C1D4800) + 0x24));
                } else {
                    t39 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t40 = *(int *)((((((t39 << 2) << 2) << 2) + 0x8C1D4800) + 0x3C));
                }
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 3) {
                t43 = *(int *)0x8C287B20;
                if (t43 == 0) {
                    t44 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t45 = *(int *)((((((t44 << 2) << 2) << 2) + 0x8C1D4800) + 0x28));
                    return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
                }
                t46 = *(int *)0x8C287B10;
                t47 = 0x1;
                if (t46 == 3) {
                    t47 = 0x0;
                }
                return strmCallName(t47);
            }
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a4 == 3) {
            if (a5 == 0) {
                t49 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t50 = *(int *)((((((t49 << 2) << 2) << 2) + 0x8C1D4800) + 0x2C));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 1) {
                t51 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                t52 = *(int *)((((((t51 << 2) << 2) << 2) + 0x8C1D4800) + 0x30));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            if (a5 == 2) {
                t53 = *(int *)0x8C287B20;
                if (t53 == 0) {
                    t54 = *(int *)((((t2 << 2) + 0x8C1D4770) + 0x0));
                    t55 = *(int *)((((((t54 << 2) << 2) << 2) + 0x8C1D4800) + 0x34));
                    return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
                }
                t56 = *(int *)0x8C287B10;
                t57 = 0x1;
                if (t56 == 3) {
                    t57 = 0x0;
                }
                return strmCallName(t57);
            }
            if (a5 == 3) {
                t59 = eepromGetDeuceMode();
                if ((unsigned char)t59 == 0) {
                    t60 = *(int *)0x8C1891E8;
                    t61 = *(int *)(((t60 << 2) + 0x8C1D4770));
                    t62 = *(int *)(((((t61 << 2) << 2) << 2) + 0x8C1D4838));
                }
            } else {
                t71 = a4;
                t72 = ((t2 << 2) + 0x8C1D4770);
                t73 = 0x8C1D4800;
                t74 = 0x8C287ACC;
            }
            return ((int (*)(int, int, int, int))(0x8C0D7492))(t71, t72, t73, t74);
        }
        return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t2 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
    }
    if (a6 != -1) {
        return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, t1, a6, 0x8C287ACC);
    }
    t76 = *(int *)0x8C1891E8;
    if (a4 == 0) {
        if (a5 == 0) {
            return ((int (*)(int, int, int, int))(0x8C0D74A0))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 1) {
            t77 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t78 = *(int *)((((((t77 << 2) << 2) << 2) + 0x8C1D4800) + 0x0));
        } else {
            if (a5 == 2) {
                t79 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t80 = *(int *)((((((t79 << 2) << 2) << 2) + 0x8C1D4800) + 0x4));
            } else {
                if (a5 != 3) {
                } else {
                    t81 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                    t82 = *(int *)((((((t81 << 2) << 2) << 2) + 0x8C1D4800) + 0x8));
                }
            }
        }
        return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
    }
    if (a4 == 1) {
        if (a5 == 0) {
            t89 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t90 = *(int *)((((((t89 << 2) << 2) << 2) + 0x8C1D4800) + 0xC));
        } else {
            if (a5 == 1) {
                t91 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t92 = *(int *)((((((t91 << 2) << 2) << 2) + 0x8C1D4800) + 0x10));
            } else {
                if (a5 == 2) {
                    t93 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                    t94 = *(int *)((((((t93 << 2) << 2) << 2) + 0x8C1D4800) + 0x14));
                } else {
                    if (a5 != 3) {
                    } else {
                        t95 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                        t96 = *(int *)((((((t95 << 2) << 2) << 2) + 0x8C1D4800) + 0x18));
                    }
                }
            }
        }
        return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
    }
    if (a4 == 2) {
        if (a5 == 0) {
            t106 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t107 = *(int *)((((((t106 << 2) << 2) << 2) + 0x8C1D4800) + 0x1C));
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 1) {
            t108 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t109 = *(int *)((((((t108 << 2) << 2) << 2) + 0x8C1D4800) + 0x20));
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 2) {
            t110 = *(int *)0x8C287B20;
            if (t110 == 0) {
                t111 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t112 = *(int *)((((((t111 << 2) << 2) << 2) + 0x8C1D4800) + 0x24));
            } else {
                t113 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t114 = *(int *)((((((t113 << 2) << 2) << 2) + 0x8C1D4800) + 0x3C));
            }
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 3) {
            t117 = *(int *)0x8C287B20;
            if (t117 == 0) {
                t118 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t119 = *(int *)((((((t118 << 2) << 2) << 2) + 0x8C1D4800) + 0x28));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            t120 = *(int *)0x8C287B10;
            t121 = 0x1;
            if (t120 == 3) {
                t121 = 0x0;
            }
            return strmCallName(t121);
        }
        return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
    }
    if (a4 == 3) {
        if (a5 == 0) {
            t123 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t124 = *(int *)((((((t123 << 2) << 2) << 2) + 0x8C1D4800) + 0x2C));
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 1) {
            t125 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
            t126 = *(int *)((((((t125 << 2) << 2) << 2) + 0x8C1D4800) + 0x30));
            return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
        }
        if (a5 == 2) {
            t127 = *(int *)0x8C287B20;
            if (t127 == 0) {
                t128 = *(int *)((((t76 << 2) + 0x8C1D4770) + 0x0));
                t129 = *(int *)((((((t128 << 2) << 2) << 2) + 0x8C1D4800) + 0x34));
                return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
            }
            t130 = *(int *)0x8C287B10;
            t131 = 0x1;
            if (t130 == 3) {
                t131 = 0x0;
            }
            return strmCallName(t131);
        }
        if (a5 == 3) {
            t133 = eepromGetDeuceMode();
            if ((unsigned char)t133 == 0) {
                t134 = *(int *)0x8C1891E8;
                t135 = *(int *)(((t134 << 2) + 0x8C1D4770));
                t136 = *(int *)(((((t135 << 2) << 2) << 2) + 0x8C1D4838));
            }
        } else {
            t145 = a4;
            t146 = ((t76 << 2) + 0x8C1D4770);
            t147 = 0x8C1D4800;
            t148 = 0x8C287ACC;
        }
        return ((int (*)(int, int, int, int))(0x8C0D7492))(t145, t146, t147, t148);
    }
    return ((int (*)(int, int, int, int))(0x8C0D7492))(a4, ((t76 << 2) + 0x8C1D4770), 0x8C1D4800, 0x8C287ACC);
}

int kmiFLWCTRLFinalizePass(int a4)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t8;
    int t6;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t54;
    int t55;
    int t56;
    int t32;
    int t25;
    int t52;

    t0 = *(int *)((a4 + 0x8));
    t1 = *(int *)((a4 + 0x18));
    t2 = *(int *)((t0 + 0x10));
    t3 = *(int *)((t1 + 0xC));
    t4 = *(int *)0x8C4607B0;
    *(unsigned int *)((((t2 << 2) + (0x184 + t4)) + 0x0)) = 0x0;
    t5 = *(int *)0x8C460784;
    t8 = 0x0;
    if (t5 == 0) {
    } else {
        t6 = *(int *)0xFFD8000C;
        *(unsigned int *)0x8C45F8F8 = t6;
        t8 = t3;
    }
    t12 = *(int *)((a4 + 0x8));
    t13 = *(int *)((a4 + 0x0));
    t14 = *(int *)((t12 + 0xC));
    t15 = *(int *)(((t8 << 2) + t13));
    t16 = *(int *)((a4 + 0xC));
    t17 = *(int *)(((t14 << 2) + t16));
    t18 = *(int *)(((t8 << 2) + (t17 + (((t2 << 2) + t2) << 2))));
    *(unsigned int *)(((((t4 + 0x44) + (((t2 << 2) + t2) << 2)) + (t8 << 2)) + 0x0)) = t18;
    *(unsigned int *)(((((0xE4 + t4) + (((t2 << 2) + t2) << 2)) + (t8 << 2)) + 0x0)) = (t15 - t18);
    t19 = *(int *)0x8C460784;
    if (t19 != 0) {
        if (t8 != t3) {
            kmiFLWCTRLCheckVBufOverflow(a4, t4, t2, t8);
        } else {
            t25 = t0;
        }
        t32 = t25;
    } else {
        kmiFLWCTRLCheckVBufOverflow(a4, t4, t2, t8);
    }
    t34 = *(int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))));
    if (t34 == 0) {
        return ((int (*)(int))(0x8C1FA5E0))(t32);
    }
    t35 = *(int *)0x8C460784;
    if (t35 == 0) {
        t36 = *(int *)((a4 + 0x0));
        t37 = *(int *)(((t8 << 2) + t36));
        t38 = *(int *)(((t8 << 2) + t36));
        *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t38 >> 16) >> 8);
        *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t38 >> 16) >> 8);
        *(unsigned int *)((((t37 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = 0x0;
        _builtin_prefetch((void *)((t37 & 0x3FFFFFF) | 0xE0000000));
        t39 = *(int *)((a4 + 0x0));
        t40 = *(int *)(((t8 << 2) + t39));
        *(unsigned int *)(((t8 << 2) + t39)) = (t40 + 0x20);
        t41 = *(int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))));
        *(unsigned int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = (t41 + 0x20);
        t42 = *(int *)((((0x184 + t4) + (t2 << 2)) + 0x0));
        *(unsigned int *)((((0x184 + t4) + (t2 << 2)) + 0x0)) = (t42 | (((int)t8 >= 0) ? (0x1 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x1 >> (-(int)t8 & 31)) : ((int)0x1 >> 31))));
        return ((int (*)(int))(0x8C1FA5E0))(((t37 & 0x3FFFFFF) | 0xE0000000));
    }
    if (t8 != t3) {
        t43 = *(int *)((a4 + 0x0));
        t44 = *(int *)(((t8 << 2) + t43));
        t45 = *(int *)(((t8 << 2) + t43));
        *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t45 >> 16) >> 8);
        *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t45 >> 16) >> 8);
        *(unsigned int *)((((t44 & 0x3FFFFFF) | 0xE0000000) + 0x0)) = 0x0;
        _builtin_prefetch((void *)((t44 & 0x3FFFFFF) | 0xE0000000));
        t46 = *(int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2))));
        *(unsigned int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = (t46 + 0x20);
        t47 = *(int *)((((0x184 + t4) + (t2 << 2)) + 0x0));
        *(unsigned int *)((((0x184 + t4) + (t2 << 2)) + 0x0)) = (t47 | (((int)t8 >= 0) ? (0x1 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x1 >> (-(int)t8 & 31)) : ((int)0x1 >> 31))));
        t52 = ((t44 & 0x3FFFFFF) | 0xE0000000);
    } else {
        t48 = *(int *)((((0x184 + t4) + (t2 << 2)) + 0x0));
        *(unsigned int *)((((0x184 + t4) + (t2 << 2)) + 0x0)) = (t48 | (((int)t8 >= 0) ? (0x1 << (t8 & 31)) : ((-(int)t8 & 31) ? ((int)0x1 >> (-(int)t8 & 31)) : ((int)0x1 >> 31))));
        *(unsigned int *)(((t8 << 2) + ((t4 + 0x44) + (((t2 << 2) + t2) << 2)))) = 0x8C206960;
        *(unsigned int *)(((t8 << 2) + ((0xE4 + t4) + (((t2 << 2) + t2) << 2)))) = 0x20;
        t52 = t32;
    }
    t54 = *(int *)((a4 + 0x0));
    t55 = *(int *)(((t8 << 2) + t54));
    *(unsigned int *)(((t8 << 2) + t54)) = (t55 + 0x20);
    t56 = *(int *)0x8C4607D0;
    if (t2 != (t56 - 1)) {
        return ((int (*)(int))(0x8C1FA5A6))(t52);
    }
    return ((int (*)(int))(0x8C1FA5E0))(t52);
}
