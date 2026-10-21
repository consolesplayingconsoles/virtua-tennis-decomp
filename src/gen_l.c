/* Straight-line functions with calls and guards (batch gen_l): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int check_caps(int);
int memset(int, int, int);
int set_fat(int, int);
int set_vmstime(int, int);
int vmsfs_mediainfo_retry(int, int);
int vmsfs_write_retry(int, int, int);
int vmsio_ismount(int);
int write_dir_all(int);
int vmsfs_format(int a4, int a5, int a6, int a7, int a8);
int FUN_8c20731c(int a4, int a5, int a6, int a7, int a8);

int vmsfs_format(int a4, int a5, int a6, int a7, int a8)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t11;
    int t12;
    int t13;
    int t14;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t27;
    int t28;
    int t29;
    int t30;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t39;
    int t41;
    int t42;
    int t43;
    int t44;
    int t45;
    int t46;
    int t47;
    int t48;
    int t49;
    int t50;
    int t51;
    int t52;
    int t53;
    int t54;
    int t55;
    int t56;
    int t57;
    int t58;
    int t59;
    int t60;
    int t61;
    int t62;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t68;
    int t69;
    int t70;
    int t71;
    int t72;
    int t73;
    int t74;
    int t75;
    int t76;
    int t77;
    int t78;
    int t79;
    int t80;
    int t81;
    int t82;
    int t83;
    int t84;
    int t85;
    int t86;
    int t87;
    int t88;
    int t89;
    int t90;
    int t91;
    int t92;
    int t93;
    int t94;
    int t95;
    int t96;
    int t97;
    int t98;
    int t99;
    int t100;
    int t101;
    int t102;
    int t103;
    int t104;
    int t105;
    int t106;
    int t107;
    int t108;
    int t109;
    int t110;
    int t111;
    int t112;
    int t113;
    int t114;
    int t115;
    int t116;
    int t117;
    int t118;
    int t119;
    int t120;
    int t121;
    int t122;
    int t123;
    int t124;
    int t125;
    int t126;
    int t127;
    int t128;
    int t129;
    int t130;
    int t131;
    int t132;
    int t133;
    int t134;
    int t135;
    int t136;
    int t137;
    int t138;
    int t142;
    int t139;
    int t146;
    int t31;
    int t32;
    int t40;
    int stk[15] = {0};

    *(unsigned int *)(((int)stk + 12)) = a5;
    *(unsigned int *)(((int)stk + 16)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    *(unsigned int *)(((int)stk + 8)) = (a4 * 0x148);
    t0 = *(signed char *)((((a4 * 0x148) + 0x8C464598) + 0x2));
    if (t0 == 0) {
        return ((int (*)(int, int, int, int))(0x8C1EBCBA))(a4, a5, a6, a7);
    }
    if (a8 != 0) {
        *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
        t1 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
        t2 = *(int *)(((0x8C20C74C + ((((t1 << 2) + t1) << 2) << 2)) + 0xC));
        *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = t2;
    } else {
        *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
        t3 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
        t4 = *(int *)(((((((t3 << 2) + t3) << 2) << 2) + 0x8C20C74C) + 0xC));
        t5 = (int)((int)t4 / (int)0xA);
        *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = t5;
    }
    t11 = vmsio_ismount(a4);
    if (t11 == 0) {
        return ((int (*)(void))(0x8C1EBCBA))();
    }
    t12 = *(int *)(((int)stk + 8));
    t13 = *(signed char *)(((t12 + 0x8C464598) + 0x8));
    if (t13 == 0) {
        return ((int (*)(void))(0x8C1EBCBA))();
    }
    t14 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    memset(t14, 0x0, 0x200);
    t16 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t17 = *(int *)((t16 + 0x8));
    t18 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t19 = vmsfs_write_retry(a4, t17, t18);
    if ((int)t19 < 0) {
        if (t19 != 0xFFFFFF40) {
            return ((int (*)(int))(0x8C1EBCBA))(t19);
        }
        return ((int (*)(int))(0x8C1EBCBA))(t19);
    }
    t20 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t21 = vmsfs_mediainfo_retry(a4, t20);
    if ((int)t21 < 0) {
        return ((int (*)(void))(0x8C1EBCBA))();
    }
    t22 = check_caps(((a4 * 0x148) + 0x8C464598));
    if ((int)t22 < 0) {
        return ((int (*)(void))(0x8C1EBCBA))();
    }
    t23 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t24 = *(int *)((t23 + 0x1C));
    *(unsigned int *)((t23 + 0x30)) = t24;
    t25 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    memset(t25, 0x0, 0x200);
    t27 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t28 = memset((t27 + 0x10), 0x20, 0x20);
    t29 = *(int *)(((int)stk + 12));
    t30 = t28;
    t33 = 0x0;
    t34 = t29;
    for (;;) {
        if ((int)t33 >= (int)0x20) {
            break;
        }
        t35 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
        t30 = t35;
        t31 = t33;
        t36 = *(signed char *)((t34 + 0x0));
        t32 = t36;
        t34 = (t34 + 0x1);
        t31 = (t31 + 0x10);
        t33 = (t33 + 0x1);
        *(unsigned char *)((t31 + t30)) = t32;
    }
    t37 = *(int *)(((int)stk + 4));
    set_vmstime((((int)stk + 4) + 0x10), t37);
    t39 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t41 = (t39 + 0x30);
    t42 = 0x0;
    t43 = (((int)stk + 4) + 0x10);
    for (;;) {
        if ((int)t42 >= (int)0x8) {
            break;
        }
        t44 = *(signed char *)((t43 + 0x0));
        t40 = t44;
        t43 = (t43 + 0x1);
        t42 = (t42 + 0x1);
        *(unsigned char *)((t41 + 0x0)) = t40;
        t41 = (t41 + 0x1);
    }
    t45 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    *(unsigned int *)(((int)stk + 4)) = t45;
    t46 = *(int *)((t45 + 0xC));
    *(unsigned int *)(((int)stk + 8)) = t46;
    t47 = *(int *)(((int)stk + 4));
    t48 = *(int *)((t47 + 0x14));
    *(unsigned int *)(((int)stk + 12)) = t48;
    t49 = *(int *)0x8C464594;
    t50 = *(int *)(((int)stk + 4));
    t51 = *(int *)((t49 + 0x10));
    t52 = *(int *)((t50 + 0x4));
    t53 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t54 = ((int (*)(int, int, int, int))(t51))(t53, 0x42, t52, t43);
    t55 = *(int *)(((int)stk + 16));
    t56 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    *(unsigned char *)((t56 + 0x4E)) = t55;
    t57 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    *(unsigned char *)((t57 + 0x4F)) = 0x0;
    t58 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t59 = *(int *)0x8C464594;
    t60 = *(int *)((t58 + 0x0));
    t61 = *(int *)((t59 + 0x10));
    t62 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t63 = ((int (*)(int, int, int))(t61))(t62, 0x40, t60);
    t64 = *(int *)0x8C464594;
    t65 = *(int *)(((int)stk + 12));
    t66 = *(int *)((t64 + 0x10));
    t67 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t68 = ((int (*)(int, int, int))(t66))(t67, 0x4A, t65);
    t69 = *(int *)0x8C464594;
    t70 = *(int *)(((int)stk + 8));
    t71 = *(int *)((t69 + 0x10));
    t72 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t73 = ((int (*)(int, int, int))(t71))(t72, 0x46, t70);
    t74 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t75 = *(int *)0x8C464594;
    t76 = *(int *)((t74 + 0x18));
    t77 = *(int *)((t75 + 0x10));
    t78 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t79 = ((int (*)(int, int, int))(t77))(t78, 0x4C, t76);
    t80 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t81 = *(int *)0x8C464594;
    t82 = *(int *)((t80 + 0x10));
    t83 = *(int *)((t81 + 0x10));
    t84 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t85 = ((int (*)(int, int, int))(t83))(t84, 0x48, t82);
    t86 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t87 = *(int *)0x8C464594;
    t88 = *(int *)((t86 + 0x1C));
    t89 = *(int *)((t87 + 0x10));
    t90 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t91 = ((int (*)(int, int, int))(t89))(t90, 0x50, t88);
    t92 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t93 = *(int *)0x8C464594;
    t94 = *(int *)((t92 + 0x20));
    t95 = *(int *)((t93 + 0x10));
    t96 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t97 = ((int (*)(int, int, int))(t95))(t96, 0x52, t94);
    t98 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t99 = *(int *)0x8C464594;
    t100 = *(int *)((t98 + 0x34));
    t101 = *(int *)((t99 + 0x10));
    t102 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t103 = ((int (*)(int, int, int))(t101))(t102, 0x54, t100);
    t104 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t105 = *(int *)0x8C464594;
    t106 = *(int *)((t104 + 0x38));
    t107 = *(int *)((t105 + 0x10));
    t108 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t109 = ((int (*)(int, int, int))(t107))(t108, 0x56, t106);
    t110 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
    t111 = *(int *)0x8C464594;
    t112 = *(int *)((t110 + 0x0));
    t113 = *(int *)((t111 + 0x10));
    t114 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x20));
    t115 = ((int (*)(int, int, int))(t113))(t114, 0x44, t112);
    t116 = memset((((a4 << 8) << 1) + 0x8C4694A4), 0x0, 0x200);
    t117 = t116;
    t118 = 0x0;
    for (;;) {
        t119 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
        t120 = *(int *)((t119 + 0x0));
        if ((int)t118 >= (int)t120) {
            t121 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
            t122 = *(int *)((t121 + 0x18));
            t123 = *(int *)(((0x30 + t121) + 0x0));
            *(unsigned int *)(((int)stk + 4)) = t122;
            t124 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x28));
            t125 = memset(t124, 0x0, ((t122 << 8) << 1));
            t117 = t125;
            t126 = write_dir_all(a4);
            t117 = t126;
            t127 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
            t118 = 0xFFFA;
            t128 = *(int *)((t127 + 0x8));
            t129 = set_fat(a4, t128);
            t117 = t129;
            t130 = 0x0;
            for (;;) {
                t131 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                t132 = *(int *)((t131 + 0x10));
                if ((int)t130 >= (int)t132) {
                    break;
                }
                t133 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
                t134 = *(int *)((t133 + 0xC));
                t135 = set_fat(a4, (t134 + t130));
                t117 = t135;
                t130 = (t130 + 0x1);
            }
            t136 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x1C));
            t137 = *(int *)((t136 + 0x8));
            t138 = set_fat(a4, t137);
            t117 = t138;
            return ((int (*)(void))(0x8C1EBC88))();
        }
        t142 = 0x0;
        if (a8 != 0) {
            t139 = vmsfs_write_retry(a4, t118, (((a4 << 8) << 1) + 0x8C4694A4));
            t117 = t139;
            t142 = t117;
        }
        t117 = t142;
        if (t117 != 0xFFFFFF01) {
            
            t146 = set_fat(a4, t118);
            t117 = t146;
            t118 = (t118 + 0x1);
            continue;
        }
        break;
    }
    return ((int (*)(int))(0x8C1EBCBA))(t142);
}

int FUN_8c20731c(int a4, int a5, int a6, int a7, int a8)
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
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    int t15;
    int t16;
    int t17;
    int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    int t23;
    int t24;
    int t25;
    int t26;
    int t27;
    int t28;
    int t29;
    int t30;
    int t31;
    int t32;
    int t33;
    int t34;
    int t35;
    int t36;
    int t37;
    int t38;
    int t39;
    int t40;
    int t41;
    int t42;
    int stk[11] = {0};

    t0 = *(signed char *)((a4 + 0x1));
    t1 = *(signed char *)((a4 + 0x0));
    t2 = *(signed char *)((a4 + 0x2));
    t3 = *(signed char *)((a4 + 0x3));
    *(unsigned int *)(((int)stk + 12)) = (((((unsigned char)t0 << 8) | ((unsigned char)t2 << 16)) | (((unsigned char)t3 << 16) << 8)) | (unsigned char)t1);
    t4 = *(signed char *)(((a4 + 0x4) + 0x1));
    t5 = *(signed char *)(((a4 + 0x4) + 0x2));
    t6 = *(signed char *)(((a4 + 0x4) + 0x3));
    t7 = *(signed char *)(((a4 + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 8)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) >> 16) >> 8) | (((int)(((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) >> 8) & 0xFF00)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) << 8) & 0xFF0000)) | (((((((unsigned char)t4 << 8) | ((unsigned char)t5 << 16)) | (((unsigned char)t6 << 16) << 8)) | (unsigned char)t7) << 16) << 8));
    t8 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x1));
    t9 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x2));
    t10 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x3));
    t11 = *(signed char *)((((a4 + 0x4) + 0x4) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (((((unsigned char)t8 << 8) | ((unsigned char)t9 << 16)) | (((unsigned char)t10 << 16) << 8)) | (unsigned char)t11);
    t12 = *(int *)(((int)stk + 12));
    if (t12 == 0x4D524F46) {
        t13 = *(int *)(((int)stk + 4));
        if (t13 == 0x46464941) {
            t14 = *(int *)(((int)stk + 8));
            if ((unsigned int)(((a4 + 0x4) + 0x4) + 0x4) >= (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                return ((int (*)(int))(0x8C2075E8))((((a4 + 0x4) + 0x4) + 0x4));
            }
            t15 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x1));
            t16 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x0));
            t17 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x2));
            t18 = *(signed char *)(((((a4 + 0x4) + 0x4) + 0x4) + 0x3));
            *(unsigned int *)(((int)stk + 8)) = (((((unsigned char)t15 << 8) | ((unsigned char)t17 << 16)) | (((unsigned char)t18 << 16) << 8)) | (unsigned char)t16);
            t19 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
            t20 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
            t21 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
            t22 = *(signed char *)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
            *(unsigned int *)(((int)stk + 4)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) >> 16) >> 8) | (((int)(((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) >> 8) & 0xFF00)) | (((((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) << 8) & 0xFF0000)) | (((((((unsigned char)t19 << 8) | ((unsigned char)t21 << 16)) | (((unsigned char)t22 << 16) << 8)) | (unsigned char)t20) << 16) << 8));
            if ((((((unsigned char)t15 << 8) | ((unsigned char)t17 << 16)) | (((unsigned char)t18 << 16) << 8)) | (unsigned char)t16) != 0x4D4D4F43) {
                if ((((((unsigned char)t15 << 8) | ((unsigned char)t17 << 16)) | (((unsigned char)t18 << 16) << 8)) | (unsigned char)t16) == 0x444E5353) {
                    if (0x0 == 0) {
                        t23 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
                        t24 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
                        t25 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2));
                        t26 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x3));
                        *(unsigned int *)(((int)stk + 12)) = (((((unsigned char)((unsigned int)((unsigned int)(((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) >> 16) >> 8) | (((unsigned int)(((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) >> 8) & 0xFF00)) | (((((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) << 8) & 0xFF0000)) | (((((((unsigned char)t23 << 8) | ((unsigned char)t25 << 16)) | (((unsigned char)t26 << 16) << 8)) | (unsigned char)t24) << 16) << 8)) + ((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                        if (0x0 != 0) {
                            if (0x1 != 0) {
                                return ((int (*)(int))(0x8C2075E8))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                            }
                            if ((unsigned int)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                                return ((int (*)(int))(0x8C2075E4))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                            }
                            return ((int (*)(int))(0x8C2075E8))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                        }
                        if ((unsigned int)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                            return ((int (*)(int))(0x8C2075E4))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                        }
                        return ((int (*)(int))(0x8C2075E8))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                    }
                    if ((unsigned int)(((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                        return ((int (*)(int))(0x8C2075E4))((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                    }
                    return ((int (*)(int))(0x8C2075E8))((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                }
                t27 = *(int *)(((int)stk + 4));
                if ((unsigned int)((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + ((t27 + 0x1) & 0xFFFFFFFE)) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                    return ((int (*)(int))(0x8C2075E4))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + ((t27 + 0x1) & 0xFFFFFFFE)));
                }
                return ((int (*)(int))(0x8C2075E8))(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + ((t27 + 0x1) & 0xFFFFFFFE)));
            }
            if (0x0 != 0) {
                if ((unsigned int)(((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                    return ((int (*)(int))(0x8C2075E4))((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
                }
                return ((int (*)(int))(0x8C2075E8))((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
            }
            t28 = *(int *)(((int)stk + 4));
            if ((int)t28 < (int)0x12) {
                return ((int (*)(int))(0x8C2075EA))((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4));
            }
            t29 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x1));
            t30 = *(signed char *)(((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x0));
            *(unsigned int *)((a6 + 0x0)) = ((unsigned char)((int)(((unsigned char)t29 << 8) | (unsigned char)t30) >> 8) | (((((unsigned char)t29 << 8) | (unsigned char)t30) << 8) & 0xFF00));
            t31 = *(signed char *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x1));
            t32 = *(signed char *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x0));
            t33 = *(signed char *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x2));
            t34 = *(signed char *)((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x3));
            *(unsigned int *)((a8 + 0x0)) = ((((unsigned char)(signed char)((unsigned int)((unsigned int)(((((unsigned char)t31 << 8) | ((unsigned char)t33 << 16)) | (((unsigned char)t34 << 16) << 8)) | (unsigned char)t32) >> 16) >> 8) | (((int)(((((unsigned char)t31 << 8) | ((unsigned char)t33 << 16)) | (((unsigned char)t34 << 16) << 8)) | (unsigned char)t32) >> 8) & 0xFF00)) | (((((((unsigned char)t31 << 8) | ((unsigned char)t33 << 16)) | (((unsigned char)t34 << 16) << 8)) | (unsigned char)t32) << 8) & 0xFF0000)) | (((((((unsigned char)t31 << 8) | ((unsigned char)t33 << 16)) | (((unsigned char)t34 << 16) << 8)) | (unsigned char)t32) << 16) << 8));
            t35 = *(signed char *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x1));
            t36 = *(signed char *)(((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x0));
            *(unsigned int *)((a7 + 0x0)) = ((unsigned char)((int)(((unsigned char)t35 << 8) | (unsigned char)t36) >> 8) | (((((unsigned char)t35 << 8) | (unsigned char)t36) << 8) & 0xFF00));
            t37 = *(signed char *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x1));
            t38 = *(signed char *)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x0));
            *(unsigned short *)(((int)stk + 4)) = (((unsigned char)t37 << 8) | (unsigned char)t38);
            t39 = *(signed char *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x1));
            t40 = *(signed char *)(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x0));
            *(unsigned short *)(((int)stk + 8)) = (((unsigned char)t39 << 8) | (unsigned char)t40);
            *(unsigned int *)(((int)stk + 4)) = (unsigned short)(((unsigned char)t39 << 8) | (unsigned char)t40);
            t41 = *(int *)(((int)stk + 4));
            *(unsigned short *)(((int)stk + 4)) = ((unsigned char)((int)(unsigned short)(((unsigned char)t39 << 8) | (unsigned char)t40) >> 8) | ((t41 << 8) & 0xFF00));
            t42 = *(short *)(((int)stk + 4));
            *(unsigned int *)((a5 + 0x0)) = (((int)(-(0x400E - (unsigned short)((unsigned char)((int)(unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) >> 8) | (((unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) << 8) & 0xFF00)))) >= 0) ? ((unsigned short)t42 << ((-(0x400E - (unsigned short)((unsigned char)((int)(unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) >> 8) | (((unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) << 8) & 0xFF00)))) & 31)) : ((-(int)(-(0x400E - (unsigned short)((unsigned char)((int)(unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) >> 8) | (((unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) << 8) & 0xFF00)))) & 31) ? ((unsigned int)(unsigned short)t42 >> (-(int)(-(0x400E - (unsigned short)((unsigned char)((int)(unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) >> 8) | (((unsigned short)(((unsigned char)t37 << 8) | (unsigned char)t38) << 8) & 0xFF00)))) & 31)) : 0));
            if (0x1 != 0) {
                if (0x0 != 0) {
                    return ((int (*)(int, int, int, int))(0x8C2075E8))(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8), a5, a6, a7);
                }
                if ((unsigned int)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                    return ((int (*)(int, int, int, int))(0x8C2075E4))(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8), a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0x8C2075E8))(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8), a5, a6, a7);
            }
            if ((unsigned int)((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8) < (unsigned int)((t14 + (((a4 + 0x4) + 0x4) + 0x4)) - 4)) {
                return ((int (*)(int, int, int, int))(0x8C2075E4))(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8), a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0x8C2075E8))(((((((((((a4 + 0x4) + 0x4) + 0x4) + 0x4) + 0x4) + 0x2) + 0x4) + 0x2) + 0x2) + 0x8), a5, a6, a7);
        }
        return ((int (*)(int))(0x8C2075EA))((((a4 + 0x4) + 0x4) + 0x4));
    }
    return ((int (*)(int))(0x8C2075EA))((((a4 + 0x4) + 0x4) + 0x4));
}
