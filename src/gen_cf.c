/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int FUN_8c1e3080(int, int);
int FUN_8c1e3180(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int buIsFormat(int);
int check_isopen(void);
int close_file_handle(int);
int direntry(int, int);
int direntry_dirty(int, int);
int frame_make(void);
int get_fat(int, int, int, int);
int kmyAllocateArea(int, int, int);
int kmytex_ABSalloc(int, int, int, int);
int kmytex_FBAllocEntry(void);
int kmytex_FBDeQueueEntry(int, int, int);
int kmytex_FBEnQueueTop(int, int, int);
int memset(int, int, int);
int motionBackup(int);
int mpdrv_dpf(int, ...);
int mpdrv_v2p(int);
int mwRnaErrCallFunc(int, ...);
int mwlRnaStartCopy(int, int, int, int, int);
int nlDispStripTexOfsTrnsl(int, int, int);
int nlFreePalette(int, int, int, int);
int nlSearchPalette(int, int);
int nlSetPaletteData(int, int, int);
int nlSetPaletteMap(int, int);
float nlSin(int);
int open_file_handle(void);
int primTexVertexSet(int, int, int, int, int, float, float);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int set_vmstime(int, int);
extern int sprPutAtAlpha();
extern int vecMake();
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int);
int decoSwingDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5);
int mpdrv_frame_send(int a4, int a5, int a6);
int kmytex_TXalloc2(int a4, int a5, int a6, int a7);
int kmSetVertexRenderState(int a4, int a5, int a6, float f4);
int syChainAddHandler(int a4, int a5, int a6, int a7);
int nlSpriteChangePalette(int a4, int a5, int a6, int a7);
int primSprDrawScaleFadeY(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int motionAdvance(int a4);
int nlkmCreateTextureSurface_stride(int a4, int a5, int a6);
int mwlRnaStartTrans(int a4, int a5, int a6, int a7);
void syChainDeleteHandler(int a4);
void vmsfs_fclose(int a4, int a5);
void vmsfs_xcreate(int a4, int a5, int a6, int a7);
int nlCharacter(int a4, int a5, int a6, int a7);
int nlPuts(int a4, int a5, int a6);
int vmsfs_init_work_normal(int a4, int a5, int a6);

int decoSwingDraw(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5)
{
    float u15;
    int t0;
    float t1;
    float u3;
    float u5;
    int t56;
    float u21;
    int t22;
    int t37;
    int t73;
    int t69;
    int t9;
    int t28;
    int t43;
    int t105;
    int t89;
    int stk[32];

    stk[20] = a8;
    stk[21] = a9;
    stk[22] = a10;
    stk[23] = a11;
    *(unsigned int *)(((int)stk + 16)) = a5;
    u15 = 1.0f;
    if (a5 == 0) {
        t0 = *(int *)0x8C20D198;
        t1 = nlSin((((t0 << 1) + t0) << 8));
        u3 = t1;
        if (0.0f > t1) {
            u3 = (t1 * (-1.0f));
        }
        u5 = 0.5f;
        u5 = u5 + 0.5f * u3;
        u15 = u5;
    } else {
        t9 = a5;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 16) + 0x10)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) + -53.0f);
    *(float *)(((((int)stk + 16) + 0x4) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x4))) + -14.0f);
    *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) - 44.0f);
    t56 = t9;
    if ((*(int *)(((int)stk + 16))) == 0) {
        u21 = (f4 * 1.0f);
        if ((int)a4 > 0) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
            t22 = ((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C341F88, t9, *(Stk3 *)((((int)stk + 16) + 0x4)), (u21 * u15));
        } else {
            t28 = t9;
        }
        *(float *)(((((int)stk + 16) + 0x4) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x4) + 0x0))) + 93.0f);
        if ((int)a4 < (int)0x2) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x4)); }
            t37 = ((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C341FD8, t28, *(Stk3 *)((((int)stk + 16) + 0x4)), (u21 * u15));
        } else {
            t43 = t28;
        }
        t56 = t43;
    }
    if (a4 != 0) {
        if (a4 != 1) {
            t73 = a4;
            if (a4 != 2) {
            } else {
                *(float *)(((((int)stk + 16) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x4))) + -22.0f);
                *(float *)(((((int)stk + 16) + 0x10) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x4))) + -22.0f);
                *(float *)(((((int)stk + 16) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x0))) + (*(float *)0x8C0A60BC));
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
                t69 = ((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C341EE8, t56, *(Stk3 *)((((int)stk + 16) + 0x40)), f4);
                *(float *)(((((int)stk + 16) + 0x10) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x0))) + -26.0f);
                *(float *)(((((int)stk + 16) + 0x10) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x10) + 0x4))) + 17.0f);
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x10)); }
                t73 = (((int (*)(int, Stk3, float))(sprPutAtAlpha))(0x8C341E48, *(Stk3 *)((((int)stk + 16) + 0x10)), f4));
            }
            t89 = t73;
        } else {
            *(float *)(((((int)stk + 16) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x4))) + -13.0f);
            *(float *)(((((int)stk + 16) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x0))) + -26.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
            t89 = (((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C341E48, t56, *(Stk3 *)((((int)stk + 16) + 0x40)), f4));
        }
        t105 = t89;
    } else {
        *(float *)(((((int)stk + 16) + 0x40) + 0x4)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x4))) + -13.0f);
        *(float *)(((((int)stk + 16) + 0x40) + 0x0)) = ((*(float *)(((((int)stk + 16) + 0x40) + 0x0))) + -22.0f);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((int)stk + 16) + 0x40)); }
        t105 = (((int (*)(int, int, Stk3, float))(sprPutAtAlpha))(0x8C341DF8, t56, *(Stk3 *)((((int)stk + 16) + 0x40)), f4));
    }
    return t105;
}

int mpdrv_frame_send(int a4, int a5, int a6)
{
    int t94;
    int t85;
    int t13;
    int t16;
    int t31;
    int t43;
    int t46;
    int t54;
    int t56;
    int t59;
    int t60;
    int t61;
    int t63;
    int t64;
    int t65;
    int t66;
    int t67;
    int t77;

    t94 = 0xFFFFFFFD;
    if ((*(int *)((0xFC0 + (*(int *)0x8C47317C)))) != 1) {
    } else {
        t85 = 0xFFFFFFFF;
        if (((*(int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
                mpdrv_dpf(0x8C20AFC4);
                t77 = 0xFFFFFFFE;
            } else {
                t13 = *(int *)0x8C47317C;
                if ((*(int *)((t13 + 0xFB0))) != (*(int *)((t13 + 0xFAC)))) {
                    t16 = *(int *)0x8C47317C;
                    *(unsigned int *)((t16 + 0xFB0)) = (*(int *)((t16 + 0xFAC)));
                    if ((*(int *)(((*(int *)0x8C47317C) + 0xFAC))) != 0) {
                        *(unsigned int *)(((0x10C0 + (*(int *)0x8C47317C)) + 0x0)) = (((int)((int)((*(int *)0x8C20A818) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        *(unsigned int *)(((*(int *)0x8C47317C) + 0x10C0)) = 0xC3500000;
                    }
                    *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x14)) = 0x0;
                    t31 = *(int *)0x8C47317C;
                    *(unsigned int *)(((*(int *)((t31 + 0x10F4))) + 0x80)) = ((*(int *)((t31 + 0x10C0))) | (*(int *)((t31 + 0x10D0))));
                    *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x14)) = 0x1;
                }
                frame_make();
                t43 = *(int *)0x8C47317C;
                *(unsigned int *)(((0x10B0 + t43) + 0x0)) = (*(int *)(((((*(int *)(((0x10B8 + t43) + 0x0))) << 2) + (0x10A8 + t43)) + 0x0)));
                t46 = *(int *)0x8C47317C;
                *(unsigned int *)((((*(int *)((t46 + 0x10F4))) + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((((*(int *)(((0x10B8 + t46) + 0x0))) << 2) + (0x10A8 + t46)) + 0x0)))));
                *(unsigned int *)(((*(int *)(((*(int *)0x8C47317C) + 0x10F4))) + 0x18)) = 0x1;
                *(unsigned int *)(((*(int *)0x8C47317C) + 0xFD8)) = 0x0;
                t54 = *(int *)0x8C47317C;
                *(unsigned int *)((t54 + 0x10B8)) = ((*(int *)((t54 + 0x10B8))) ^ 0x1);
                t56 = *(int *)0x8C47317C;
                *(unsigned int *)(((0xFCC + t56) + 0x0)) = (*(int *)(((((*(int *)(((0x10B8 + t56) + 0x0))) << 2) + (0x10A8 + t56)) + 0x0)));
                t59 = *(int *)0x8C47317C;
                t60 = *(int *)((t59 + 0x10B4));
                *(unsigned int *)((t59 + 0x10B4)) = (t60 ^ 0x1);
                t61 = *(int *)0x8C47317C;
                *(unsigned int *)((t61 + 0xFDC)) = 0x0;
                t63 = 0xFDC;
                t64 = (t60 ^ 0x1);
                t65 = t61;
                t66 = ((*(int *)0x8C47317C) + 0x28);
                t67 = 0x0;
                for (;;) {
                    if ((int)t67 >= (int)0x18) {
                        break;
                    }
                    t65 = 0xF90;
                    t63 = (*(int *)0x8C47317C);
                    t65 = (t65 + t63);
                    t65 = (t65 + t67);
                    t64 = (*(signed char *)((t65 + 0x0)));
                    t67 = (t67 + 0x1);
                    if (t64 != 0) {
                        t63 = (*(signed char *)((t66 + 0x6)));
                        *(unsigned char *)((t66 + 0x7)) = t63;
                        t63 = 0x0;
                        *(unsigned char *)((t66 + 0x6)) = t63;
                        t65 = (*(int *)((t66 + 0x18)));
                        *(unsigned int *)((t66 + 0x1C)) = t65;
                        *(unsigned int *)((t66 + 0x18)) = t63;
                    }
                    t66 = (t66 + 0x2C);
                }
                *(unsigned int *)(((*(int *)0x8C47317C) + 0xFC0)) = 0x0;
                *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
                t77 = 0x0;
            }
            t85 = t77;
        }
        t94 = t85;
    }
    return t94;
}

int kmytex_TXalloc2(int a4, int a5, int a6, int a7)
{
    int t0;
    int t3;
    int t30;
    int t31;
    int t35;
    int t36;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;
    int t16;
    int t37;
    int t38;
    int t79;
    int t51;
    int t62;
    int t4;
    int t6;
    int t18;
    int t73;
    int t67;
    int t48;
    int t59;

    t0 = ((a5 + 0x20) & 0xFFFFFFE0);
    if ((0x1F & a5) == 0) {
        t0 = a5;
    }
    t3 = *(int *)((((((short)a7 << 2) << 2) + 0x8C20C9EC) + 0x8));
    t30 = 0x0;
    t31 = 0x0;
    t35 = a5;
    t36 = 0x0;
    if (t3 != 0) {
        t7 = t3;
        t8 = a5;
        t9 = 0x0;
        t10 = 0x0;
        t11 = 0x0;
        for (;;) {
            if ((unsigned int)(*(int *)((t7 + 0x10))) >= (unsigned int)t0) {
                if (t10 == 0) {
                    t10 = t7;
                }
                t6 = (*(int *)((t7 + 0xC)));
                if ((t6 & 0x7FF) != 0) {
                    t8 = (*(int *)((t7 + 0xC)));
                    t6 = 0x800;
                    t16 = t8;
                    t8 = (t8 + t6);
                    t8 = (t8 & (0xFFFFF800));
                    t4 = t16;
                    t4 = (t4 + (*(int *)((t7 + 0x10))));
                    if (((unsigned int)t8 < (unsigned int)t4) && (t18 = *(int *)((t7 + 0xC)), t6 = t8, t6 = (t6 - t18), (unsigned int)t6 < (unsigned int)t0)) {
                        if ((unsigned int)(t4 - t8) >= (unsigned int)t0) {
                            t9 = 0x2;
                            t11 = t7;
                            t7 = 0x0;
                        } else {
                            t7 = (*(int *)((t7 + 0x8)));
                        }
                    } else {
                        t9 = 0x1;
                        t11 = t7;
                        t7 = 0x0;
                    }
                } else {
                    t8 = (*(int *)((t7 + 0xC)));
                    t9 = 0x1;
                    t11 = t7;
                    t7 = 0x0;
                }
            } else {
                t7 = (*(int *)((t7 + 0x8)));
            }
            if (t7 == 0) {
                break;
            }
        }
        t30 = t10;
        t31 = t11;
        t35 = t8;
        t36 = t9;
    }
    t37 = t31;
    t38 = t36;
    if ((t36 == 0) && (t30 != 0)) {
        t37 = t30;
        t38 = 0x1;
    }
    t79 = 0x3;
    if (t37 != 0) {
        if (t38 == 2) {
            *(unsigned int *)((a6 + 0x0)) = t35;
            t73 = (kmytex_ABSalloc(0x0, t0, a6, a7));
        } else {
            if ((*(int *)((t37 + 0x10))) == t0) {
                kmytex_FBDeQueueEntry(((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x8), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0xC), t37);
                kmytex_FBEnQueueTop((0x8C20C9EC + (((short)a7 << 2) << 2)), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x4), t37);
                *(unsigned int *)((a6 + 0x0)) = (*(int *)((t37 + 0xC)));
                *(unsigned int *)((t37 + 0x14)) = a6;
                *(unsigned short *)((t37 + 0x0)) = 0x1;
                if ((short)a7 == 0) {
                    t48 = ((*(short *)((t37 + 0x0))) | 0x10);
                } else {
                    t48 = ((*(short *)((t37 + 0x0))) | 0x20);
                }
                *(unsigned short *)((t37 + 0x0)) = t48;
                *(unsigned short *)((t37 + 0x0)) = ((*(short *)((t37 + 0x0))) | a4);
                t67 = 0x0;
            } else {
                t51 = kmytex_FBAllocEntry();
                t62 = 0x3;
                if (t51 == 0) {
                } else {
                    *(unsigned int *)((t51 + 0xC)) = (*(int *)((t37 + 0xC)));
                    *(unsigned int *)((t51 + 0x10)) = t0;
                    *(unsigned int *)((t37 + 0x10)) = ((*(int *)((t37 + 0x10))) - t0);
                    *(unsigned int *)((t37 + 0xC)) = ((*(int *)((t37 + 0xC))) + t0);
                    kmytex_FBEnQueueTop((0x8C20C9EC + (((short)a7 << 2) << 2)), ((0x8C20C9EC + (((short)a7 << 2) << 2)) + 0x4), t51);
                    *(unsigned int *)((a6 + 0x0)) = (*(int *)((t51 + 0xC)));
                    *(unsigned int *)((t51 + 0x14)) = a6;
                    if ((short)a7 == 0) {
                        t59 = ((*(short *)((t51 + 0x0))) | 0x10);
                    } else {
                        t59 = ((*(short *)((t51 + 0x0))) | 0x20);
                    }
                    *(unsigned short *)((t51 + 0x0)) = t59;
                    *(unsigned short *)((t51 + 0x0)) = ((*(short *)((t51 + 0x0))) | a4);
                    t62 = 0x0;
                }
                t67 = t62;
            }
            t73 = t67;
        }
        t79 = t73;
    }
    return t79;
}

int kmSetVertexRenderState(int a4, int a5, int a6, float f4)
{
    int t4;

    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x0)) = (*(int *)((a5 + 0x90)));
    if (((*(int *)(((*(int *)((a4 + 0x4))) + 0x0))) & 128) != 0) {
        t4 = *(int *)((a4 + 0x4));
        *(unsigned int *)((t4 + 0x0)) = (((*(int *)((t4 + 0x0))) & 0xFFFFFFBF) | (((((-(*(int *)0x8C471E30)) + 0x1) << 2) << 2) << 2));
    }
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x4)) = (*(int *)((a5 + 0x94)));
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x8)) = (*(int *)((a5 + 0x98)));
    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0xC)) = (*(int *)((a5 + 0x9C)));
    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x20;
    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x0)) = ((unsigned int)((unsigned int)((*(int *)(((*(int *)((a4 + 0x4))) + 0x0))) & 0x7000000) >> 16) >> 8);
    if (((*(int *)((a5 + 0x90))) & 0x4900) != 0) {
    } else {
        if (((*(int *)((a5 + 0x90))) & 0x200) != 0) {
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x10)) = (*(int *)(((a5 + 0x70) + 0x0)));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x14)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x18)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
            *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x1C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
        } else {
            if (((*(int *)((a5 + 0x90))) & 0x400) != 0) {
                *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x40;
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x20)) = (*(int *)(((a5 + 0x70) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x24)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x28)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x2C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x30)) = (*(int *)(((a5 + 0x80) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x34)) = (*(int *)((((a5 + 0x80) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x38)) = (*(int *)(((((a5 + 0x80) + 0x4) + 0x4) + 0x0)));
                *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x3C)) = (*(int *)((((((a5 + 0x80) + 0x4) + 0x4) + 0x4) + 0x0)));
            } else {
                if (((*(int *)((a5 + 0x90))) & 0x1000) != 0) {
                    *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0x4)) = 0x40;
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x20)) = (*(int *)(((a5 + 0x70) + 0x0)));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x24)) = (*(int *)((((a5 + 0x70) + 0x4) + 0x0)));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x28)) = (*(int *)(((((a5 + 0x70) + 0x4) + 0x4) + 0x0)));
                    *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x2C)) = (*(int *)((((((a5 + 0x70) + 0x4) + 0x4) + 0x4) + 0x0)));
                } else {
                    if (((*(int *)((a5 + 0x90))) & 0x2000) != 0) {
                        *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x10)) = ((((((int)((*(float *)((a5 + 0x70))) * 255.0f) << 16) << 8) | ((int)((*(float *)((a5 + 0x74))) * 255.0f) << 16)) | ((int)((*(float *)((a5 + 0x78))) * 255.0f) << 8)) | (int)((*(float *)((a5 + 0x7C))) * 255.0f));
                        *(unsigned int *)(((*(int *)((a4 + 0x4))) + 0x14)) = ((((((int)((*(float *)((a5 + 0x80))) * 255.0f) << 16) << 8) | ((int)((*(float *)((a5 + 0x84))) * 255.0f) << 16)) | ((int)((*(float *)((a5 + 0x88))) * 255.0f) << 8)) | (int)((*(float *)((a5 + 0x8C))) * 255.0f));
                    }
                }
            }
        }
    }
    return 0x0;
}

int syChainAddHandler(int a4, int a5, int a6, int a7)
{
    int t1;
    int t2;
    int t8;
    int t19;
    int t48;
    int stk[12];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1E82A4:;
    *(unsigned short *)(((int)stk + 8)) = R4;
    *(unsigned int *)(((int)stk + 4)) = R5;
    *(unsigned short *)(((int)stk + 12)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    t1 = *(short *)(((int)stk + 8));
    t2 = *(int *)((0x8C461818 + (((int)t1 >> 4) << 2)));
    t8 = R7;
    R11 = ((R6 | 0x80000000));
    R13 = (t1);
    R4 = (t2);
    R5 = (t2);
    R7 = (0x80000000);
    R8 = t8;
    R9 = (0x8C461818);
    goto L_8C1E82F0;
    L_8C1E82F0:;
    if ((R4 == 0)) goto L_8C1E82FA;
    goto L_8C1E82F4;
    L_8C1E82F4:;
    if (((unsigned int)(*(int *)((R4 + 0xC))) < (unsigned int)R11)) goto L_8C1E82EC;
    goto L_8C1E82FA;
    L_8C1E82FA:;
    R10 = (0x8C460818);
    R12 = (0x1);
    R14 = (0x1);
    R6 = (0x100);
    goto L_8C1E8302;
    L_8C1E8302:;
    if ((((*(int *)(((((R14 << 2) << 2) + R10) + 0xC))) & R7) == 0)) goto L_8C1E8316;
    goto L_8C1E8310;
    L_8C1E8310:;
    t19 = (unsigned int)(R14 + 0x1) < (unsigned int)R6;
    R14 = ((R14 + 0x1));
    if (t19) goto L_8C1E8302;
    goto L_8C1E8316;
    L_8C1E8316:;
    if (((unsigned int)R14 < (unsigned int)R6)) goto L_8C1E831E;
    goto L_8C1E831A;
    L_8C1E831A:;
    goto L_8C1E8426;
    L_8C1E8426:;
    R4 = (0x0);
    goto L_8C1E8428;
    L_8C1E8428:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 12))) & 0xF) << 2) << 2) >> 4));
    return R4;
    L_8C1E831E:;
    if ((R4 != 0)) goto L_8C1E83F2;
    goto L_8C1E8322;
    L_8C1E8322:;
    if ((R5 != 0)) goto L_8C1E83F2;
    goto L_8C1E8326;
    L_8C1E8326:;
    R4 = (0x900);
    if (((int)R13 >= (int)0x900)) goto L_8C1E8344;
    goto L_8C1E832C;
    L_8C1E832C:;
    *(unsigned int *)(((((int)_builtin_get_vbr()) + ((((0xFFFFFE00 + R13) >> 1) >> 1) >> 1)) + 0x200)) = 0x8C1E8452;
    goto L_8C1E8396;
    L_8C1E8396:;
    *(unsigned int *)((R9 + (((int)R13 >> 4) << 2))) = (((R14 << 2) << 2) + R10);
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x4)) = 0x0;
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0x8)) = R8;
    *(unsigned int *)(((((R14 << 2) << 2) + R10) + 0xC)) = R11;
    R4 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(short *)(((int)stk + 8))) >> 2) >> 2) >> 1));
    if ((((int)R13 >> 8) != 10)) goto L_8C1E83DA;
    goto L_8C1E83CA;
    L_8C1E83CA:;
    *(unsigned int *)0xA05F6920 = ((*(int *)0xA05F6920) | (((int)(R4 + 0xC) >= 0) ? (R12 << ((R4 + 0xC) & 31)) : ((-(int)(R4 + 0xC) & 31) ? ((int)R12 >> (-(int)(R4 + 0xC) & 31)) : ((int)R12 >> 31))));
    goto L_8C1E8422;
    L_8C1E8422:;
    R4 = (R14);
    goto L_8C1E8428;
    L_8C1E83DA:;
    if ((((int)R13 >> 8) != 11)) goto L_8C1E8422;
    goto L_8C1E83E4;
    L_8C1E83E4:;
    *(unsigned int *)0xA05F6924 = ((*(int *)0xA05F6924) | (((int)R4 >= 0) ? (R12 << (R4 & 31)) : ((-(int)R4 & 31) ? ((int)R12 >> (-(int)R4 & 31)) : ((int)R12 >> 31))));
    goto L_8C1E8422;
    L_8C1E8344:;
    if ((R13 != R4)) goto L_8C1E837C;
    goto L_8C1E8348;
    L_8C1E8348:;
    FUN_8c1e3180(0x8C1E8476, 0x0);
    goto L_8C1E8396;
    L_8C1E837C:;
    if ((R13 != 0x920)) goto L_8C1E838E;
    goto L_8C1E8382;
    L_8C1E8382:;
    FUN_8c1e3080(0x8C1E84C0, 0x0);
    goto L_8C1E8396;
    L_8C1E838E:;
    *(unsigned int *)((((int)_builtin_get_vbr()) + 0x22C)) = 0x8C1E84E6;
    goto L_8C1E8396;
    L_8C1E83F2:;
    R12 = ((((R14 << 2) << 2) + R10));
    if ((R4 != (*(int *)((R9 + (((int)R13 >> 4) << 2)))))) goto L_8C1E8416;
    goto L_8C1E8408;
    L_8C1E8408:;
    *(unsigned int *)((R12 + 0x4)) = R4;
    *(unsigned int *)((R9 + (((int)R13 >> 4) << 2))) = R12;
    goto L_8C1E841A;
    L_8C1E841A:;
    *(unsigned int *)((R12 + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)((R12 + 0x8)) = R8;
    *(unsigned int *)((R12 + 0xC)) = R11;
    goto L_8C1E8422;
    L_8C1E8416:;
    *(unsigned int *)((R5 + 0x4)) = R12;
    *(unsigned int *)((R12 + 0x4)) = R4;
    goto L_8C1E841A;
    L_8C1E82EC:;
    t48 = R4;
    R4 = ((*(int *)((R4 + 0x4))));
    R5 = t48;
    goto L_8C1E82F0;
}

int nlSpriteChangePalette(int a4, int a5, int a6, int a7)
{
    int t2;
    int t3;
    int t4;
    int t7;
    int t15;
    int t18;
    int t20;
    int t25;
    int t27;
    int t32;
    int t68;
    int t10;
    int t57;
    int t36;

    t2 = *(short *)((((a4 + (*(int *)0x8C458DCC)) << 1) + (*(int *)0x8C454C80)));
    t3 = *(int *)0x8C454C90;
    t4 = *(int *)((((((t2 << 2) << 2) << 1) + t3) + 0xC));
    if ((*(int *)0x8C1DC888) != 0) {
        if (((0x7 & ((unsigned int)t4 >> 27)) == 5) || ((0x7 & ((unsigned int)t4 >> 27)) == 6)) {
            t7 = *(int *)((((((t2 << 2) << 2) << 1) + t3) + 0xC));
            *(unsigned int *)((((((t2 << 2) << 2) << 1) + t3) + 0xC)) = ((t7 & 0xF81FFFFF) | (a5 << 21));
            t10 = (0x3F & ((unsigned int)t7 >> 21));
        }
        t68 = t10;
    } else {
        if (((*(int *)0x8C450BF8) != 0) && (((0x7 & ((unsigned int)t4 >> 27)) == 5) || ((0x7 & ((unsigned int)t4 >> 27)) == 6))) {
            t15 = *(short *)((((((t2 << 2) << 2) << 1) + t3) + 0x16));
            nlFreePalette((unsigned short)t15, a5, a6, a7);
            *(unsigned short *)((((((t2 << 2) << 2) << 1) + t3) + 0x16)) = 0xFFFF;
            if ((int)a5 < (int)(*(short *)0x8C458E24)) {
                *(unsigned short *)((((((t2 << 2) << 2) << 1) + t3) + 0x16)) = a5;
                t18 = *(int *)0x8C458E38;
                t20 = *(int *)0x8C450BF8;
                if ((*(short *)(((t18 + ((a5 << 2) << 1)) + 0x4))) != 0) {
                    *(unsigned short *)(((t18 + ((a5 << 2) << 1)) + 0x4)) = ((*(short *)(((t18 + ((a5 << 2) << 1)) + 0x4))) + 0x1);
                    t36 = (*(short *)(((t18 + ((a5 << 2) << 1)) + 0x0)));
                } else {
                    *(unsigned char *)(((t18 + ((a5 << 2) << 1)) + 0x2)) = (*(signed char *)((((((a5 << 1) + a5) << 2) + t20) + 0x2)));
                    *(unsigned char *)(((t18 + ((a5 << 2) << 1)) + 0x3)) = ((int)((*(int *)((((((a5 << 1) + a5) << 2) + t20) + 0x8))) + 0xF) >> 4);
                    *(unsigned short *)(((t18 + ((a5 << 2) << 1)) + 0x4)) = 0x1;
                    *(unsigned short *)(((t18 + ((a5 << 2) << 1)) + 0x6)) = a5;
                    t25 = *(int *)((((((a5 << 1) + a5) << 2) + t20) + 0x8));
                    t27 = nlSearchPalette((*(short *)((((((a5 << 1) + a5) << 2) + t20) + 0x2))), t25);
                    t32 = 0x0;
                    if ((int)t27 >= 0) {
                        *(unsigned short *)(((t18 + ((a5 << 2) << 1)) + 0x0)) = t27;
                        nlSetPaletteMap(t27, t25);
                        nlSetPaletteData(((t27 << 2) << 2), (*(int *)((((((a5 << 1) + a5) << 2) + t20) + 0x4))), t25);
                        t32 = t27;
                    }
                    t36 = t32;
                }
                *(unsigned int *)((((((t2 << 2) << 2) << 1) + t3) + 0xC)) = (((*(int *)((((((t2 << 2) << 2) << 1) + t3) + 0xC))) & 0xF81FFFFF) | (t36 << 21));
            }
            t57 = (unsigned short)t15;
        }
        t68 = t57;
    }
    return t68;
}


int motionAdvance(int a4)
{
    int t1;
    float u2;
    float u12;
    int t28;
    float u8;
    float u9;
    float u21;

    if ((*(float *)((a4 + 0x4))) != 0.0f) {
        t1 = *(int *)((a4 + 0x18));
        u2 = *(float *)((a4 + 0x4));
        if (!(1.0f > ((float)t1 / u2))) {
            *(float *)((a4 + 0x0)) = (*(float *)((a4 + 0x4)));
        } else {
            if (((*(int *)((a4 + 0x44))) == 0) && (u8 = *(float *)0x8C014100, u9 = *(float *)((a4 + 0x4)), u9 > u8)) {
                u12 = (*(float *)0x8C014104);
                u12 = u12 + (*(float *)0x8C014108) * ((float)t1 / u2);
                u21 = ((*(float *)((a4 + 0x0))) + ((nlSin((int)u12)) + 1.0f));
            } else {
                u21 = (float)(*(int *)((a4 + 0x18)));
            }
            *(float *)((a4 + 0x0)) = u21;
        }
        t28 = *(int *)((a4 + 0x18));
        *(unsigned int *)((a4 + 0x18)) = (t28 + 0x1);
        if ((float)(t28 + 0x1) > (*(float *)((a4 + 0x4)))) {
            *(float *)((a4 + 0x4)) = 0.0f;
            *(unsigned int *)((a4 + 0x1C)) = (*(int *)((a4 + 0x20)));
            *(float *)((a4 + 0x8)) = (*(float *)((a4 + 0xC)));
            *(float *)((a4 + 0x10)) = (*(float *)((a4 + 0x14)));
            *(unsigned int *)((a4 + 0x24)) = (*(int *)((a4 + 0x28)));
            *(unsigned int *)((a4 + 0x2C)) = (*(int *)((a4 + 0x30)));
            *(unsigned int *)((a4 + 0x50)) = (*(int *)((a4 + 0x54)));
            *(unsigned int *)((a4 + 0x44)) = 0x0;
        }
    }
    *(float *)((a4 + 0x8)) = ((*(float *)((a4 + 0x8))) + (*(float *)(((0x10 + a4) + 0x0))));
    if ((*(int *)((a4 + 0x24))) == 1) {
        if (!((float)(*(int *)((a4 + 0x2C))) > (*(float *)((a4 + 0x8))))) {
            *(float *)((a4 + 0x8)) = ((*(float *)((a4 + 0x8))) - (float)(*(int *)((a4 + 0x2C))));
        } else {
            if ((*(int *)((a4 + 0x24))) == 0) {
                if ((*(float *)((a4 + 0x8))) > ((float)(*(int *)((a4 + 0x2C))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))))) {
                    *(float *)((a4 + 0x8)) = ((float)(*(int *)((a4 + 0x2C))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))));
                    *(float *)((a4 + 0x10)) = 0.0f;
                }
            }
        }
    } else {
        if ((*(int *)((a4 + 0x24))) == 0) {
            if ((*(float *)((a4 + 0x8))) > ((float)(*(int *)((a4 + 0x2C))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))))) {
                *(float *)((a4 + 0x8)) = ((float)(*(int *)((a4 + 0x2C))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))));
                *(float *)((a4 + 0x10)) = 0.0f;
            }
        }
    }
    *(unsigned int *)((a4 + 0x5C)) = ((*(int *)((a4 + 0x5C))) & 0xFFFFFFFE);
    *(float *)((a4 + 0xC)) = ((*(float *)((a4 + 0xC))) + (*(float *)(((0x14 + a4) + 0x0))));
    if ((*(int *)((a4 + 0x28))) == 1) {
        if (!((float)(*(int *)((a4 + 0x30))) > (*(float *)((a4 + 0xC))))) {
            *(float *)((a4 + 0xC)) = ((*(float *)((a4 + 0xC))) - (float)(*(int *)((a4 + 0x30))));
            *(unsigned int *)(((0x5C + a4) + 0x0)) = ((*(int *)((a4 + 0x5C))) | 0x1);
        } else {
            if ((*(int *)((a4 + 0x28))) == 0) {
                if ((*(float *)((a4 + 0xC))) > ((float)(*(int *)((a4 + 0x30))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))))) {
                    *(float *)((a4 + 0xC)) = ((float)(*(int *)((a4 + 0x30))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))));
                    *(float *)((a4 + 0x14)) = 0.0f;
                    *(unsigned int *)(((0x5C + a4) + 0x0)) = ((*(int *)((a4 + 0x5C))) | 0x1);
                }
            }
        }
    } else {
        if ((*(int *)((a4 + 0x28))) == 0) {
            if ((*(float *)((a4 + 0xC))) > ((float)(*(int *)((a4 + 0x30))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))))) {
                *(float *)((a4 + 0xC)) = ((float)(*(int *)((a4 + 0x30))) - (1.0f / (*(float *)((((*(int *)((a4 + 0x1C))) + 0xC) + 0x0)))));
                *(float *)((a4 + 0x14)) = 0.0f;
                *(unsigned int *)(((0x5C + a4) + 0x0)) = ((*(int *)((a4 + 0x5C))) | 0x1);
            }
        }
    }
    return motionBackup(a4);
}

int nlkmCreateTextureSurface_stride(int a4, int a5, int a6)
{
    int t25;
    int t26;
    int t21;
    int t22;
    int t17;
    int t18;
    int t13;
    int t14;
    int t9;
    int t10;
    int t6;
    int t7;
    int t3;
    int t4;
    int t0;
    int t1;
    int t53;
    int t54;
    int t49;
    int t50;
    int t45;
    int t46;
    int t41;
    int t42;
    int t37;
    int t38;
    int t34;
    int t35;
    int t31;
    int t32;
    int t28;
    int t29;

    t25 = 0x8;
    t26 = 0x0;
    if ((int)a5 <= (int)0x8) {
    } else {
        t21 = 0x10;
        t22 = 0x8;
        if ((int)a5 <= (int)0x10) {
        } else {
            t17 = 0x20;
            t18 = 0x10;
            if ((int)a5 <= (int)0x20) {
            } else {
                t13 = 0x40;
                t14 = 0x18;
                if ((int)a5 <= (int)0x40) {
                } else {
                    t9 = 0x80;
                    t10 = 0x20;
                    if ((int)a5 <= (int)0x80) {
                    } else {
                        t6 = 0x100;
                        t7 = 0x28;
                        if ((int)a5 <= (int)0x100) {
                        } else {
                            t3 = 0x200;
                            t4 = 0x30;
                            if ((int)a5 <= (int)0x200) {
                            } else {
                                t0 = a4;
                                t1 = a5;
                                if ((int)a5 <= (int)0x400) {
                                    t0 = 0x400;
                                    t1 = 0x38;
                                }
                                t3 = t0;
                                t4 = t1;
                            }
                            t6 = t3;
                            t7 = t4;
                        }
                        t9 = t6;
                        t10 = t7;
                    }
                    t13 = t9;
                    t14 = t10;
                }
                t17 = t13;
                t18 = t14;
            }
            t21 = t17;
            t22 = t18;
        }
        t25 = t21;
        t26 = t22;
    }
    t53 = 0x8;
    t54 = 0x0;
    if ((int)a6 <= (int)0x8) {
    } else {
        t49 = 0x10;
        t50 = 0x1;
        if ((int)a6 <= (int)0x10) {
        } else {
            t45 = 0x20;
            t46 = 0x2;
            if ((int)a6 <= (int)0x20) {
            } else {
                t41 = 0x40;
                t42 = 0x3;
                if ((int)a6 <= (int)0x40) {
                } else {
                    t37 = 0x80;
                    t38 = 0x4;
                    if ((int)a6 <= (int)0x80) {
                    } else {
                        t34 = 0x100;
                        t35 = 0x5;
                        if ((int)a6 <= (int)0x100) {
                        } else {
                            t31 = 0x200;
                            t32 = 0x6;
                            if ((int)a6 <= (int)0x200) {
                            } else {
                                t28 = a6;
                                t29 = 0x8;
                                if ((int)a6 <= (int)0x400) {
                                    t28 = 0x400;
                                    t29 = 0x7;
                                }
                                t31 = t28;
                                t32 = t29;
                            }
                            t34 = t31;
                            t35 = t32;
                        }
                        t37 = t34;
                        t38 = t35;
                    }
                    t41 = t37;
                    t42 = t38;
                }
                t45 = t41;
                t46 = t42;
            }
            t49 = t45;
            t50 = t46;
        }
        t53 = t49;
        t54 = t50;
    }
    *(unsigned int *)((a4 + 0x18)) = 0x0;
    *(unsigned int *)((a4 + 0x0)) = 0x2;
    *(unsigned int *)((a4 + 0x4)) = 0x1;
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)0x8C44FBE8) << 27);
    *(unsigned int *)((a4 + 0xC)) = t25;
    *(unsigned int *)((a4 + 0x10)) = t53;
    *(unsigned int *)((a4 + 0x18)) = (((((*(int *)((a4 + 0x18))) | t26) | t54) | 0x4000000) | 0x2000000);
    *(unsigned int *)((a4 + 0x14)) = ((a5 * a6) << 1);
    return (kmyAllocateArea(0x1, ((a5 * a6) << 1), (a4 + 0x1C)));
}


void syChainDeleteHandler(int a4)
{
    int t12;
    int t20;
    int t43;
    int stk[9];

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
    int R12;
    int R13;
    int R14;
    int T_;
    R4 = a4;
    L_8C1E85AC:;
    *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
    _builtin_set_imask(0xF);
    R12 = (((R4 << 2) << 2));
    R13 = ((((R4 << 2) << 2) + 0x8C460818));
    R4 = (0x100);
    R5 = (0x1);
    R6 = (0x1);
    R7 = (0x8C460818);
    goto L_8C1E85E2;
    L_8C1E85E2:;
    R14 = ((((R6 << 2) << 2) + R7));
    if (((*(int *)(((((R6 << 2) << 2) + R7) + 0x4))) != R13)) goto L_8C1E85F8;
    goto L_8C1E85F0;
    L_8C1E85F0:;
    if ((((*(int *)((R14 + 0xC))) & 0x80000000) != 0)) goto L_8C1E85FE;
    goto L_8C1E85F8;
    L_8C1E85F8:;
    t12 = (unsigned int)(R6 + 0x1) < (unsigned int)R4;
    R6 = ((R6 + 0x1));
    if (t12) goto L_8C1E85E2;
    goto L_8C1E85FE;
    L_8C1E85FE:;
    R1 = (0x0);
    if ((R6 == R4)) goto L_8C1E8616;
    goto L_8C1E8604;
    L_8C1E8604:;
    *(unsigned int *)(((((R6 << 2) << 2) + R7) + 0x4)) = (*(int *)(((R12 + R7) + 0x4)));
    *(unsigned int *)(((R12 + R7) + 0xC)) = R1;
    goto L_8C1E86F0;
    L_8C1E86F0:;
    _builtin_set_imask(((unsigned int)((((unsigned short)(*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
    return;
    L_8C1E8616:;
    t20 = (R12 + R7);
    R10 = (0xA05F6920);
    R12 = (0xC0);
    R13 = t20;
    R14 = (R5);
    R4 = (0x8C461818);
    R7 = (0x90);
    R8 = (0x200);
    R9 = (0xA05F6924);
    goto L_8C1E8628;
    L_8C1E8628:;
    if (((*(int *)((R4 + (R14 << 2)))) != R13)) goto L_8C1E86E8;
    goto L_8C1E8632;
    L_8C1E8632:;
    *(unsigned int *)((((R14 << 2) + R4) + 0x0)) = (*(int *)((R13 + 0x4)));
    *(unsigned int *)((R13 + 0xC)) = R1;
    if (((*(int *)((((R14 << 2) + R4) + 0x0))) != 0)) goto L_8C1E86EE;
    goto L_8C1E8644;
    L_8C1E8644:;
    if ((R14 != R7)) goto L_8C1E8654;
    goto L_8C1E8648;
    L_8C1E8648:;
    FUN_8c1e3180(0x0, 0x0);
    goto L_8C1E86EE;
    L_8C1E86EE:;
    goto L_8C1E86F0;
    L_8C1E8654:;
    if ((R14 != 0x92)) goto L_8C1E8666;
    goto L_8C1E865A;
    L_8C1E865A:;
    FUN_8c1e3080(0x0, 0x0);
    goto L_8C1E86EE;
    L_8C1E8666:;
    R0 = (((int)(short)((R14 << 2) << 2) >> 8));
    R13 = (((R14 << 2) << 2));
    R7 = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)((R14 << 2) << 2) >> 2) >> 2) >> 1));
    if ((((int)(short)((R14 << 2) << 2) >> 8) != 10)) goto L_8C1E8692;
    goto L_8C1E8682;
    L_8C1E8682:;
    *(unsigned int *)((R10 + 0x0)) = ((*(int *)((R10 + 0x0))) & (~(((int)(R7 + 0xC) >= 0) ? (R5 << ((R7 + 0xC) & 31)) : ((-(int)(R7 + 0xC) & 31) ? ((int)R5 >> (-(int)(R7 + 0xC) & 31)) : ((int)R5 >> 31)))));
    goto L_8C1E86A2;
    L_8C1E86A2:;
    *(unsigned int *)((((((int)_builtin_get_vbr()) + ((unsigned int)((unsigned int)(R13 - 512) >> 2) >> 1)) + R8) + 0x0)) = 0x8C1FC640;
    goto L_8C1E86EE;
    L_8C1E8692:;
    if ((R0 != 11)) goto L_8C1E86A2;
    goto L_8C1E8696;
    L_8C1E8696:;
    *(unsigned int *)((R9 + 0x0)) = ((*(int *)((R9 + 0x0))) & (~(((int)R7 >= 0) ? (R5 << (R7 & 31)) : ((-(int)R7 & 31) ? ((int)R5 >> (-(int)R7 & 31)) : ((int)R5 >> 31)))));
    goto L_8C1E86A2;
    L_8C1E86E8:;
    t43 = (unsigned int)(R14 + 0x1) < (unsigned int)R12;
    R14 = ((R14 + 0x1));
    if (t43) goto L_8C1E8628;
    goto L_8C1E86EE;
}

void vmsfs_fclose(int a4, int a5)
{
    int t13;
    int t19;
    int t24;
    int t31;
    int t37;
    int t44;
    int t48;
    int t52;
    int t63;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    L_8C1EC522:;
    *(unsigned int *)(((int)stk + 4)) = R5;
    R14 = (R4);
    if ((R4 != 0)) goto L_8C1EC53E;
    goto L_8C1EC538;
    L_8C1EC538:;
    R0 = (0xFFFFFF00);
    goto L_8C1EC67A;
    L_8C1EC67A:;
    return;
    L_8C1EC53E:;
    R10 = (0x8C464598);
    R11 = (0x148);
    R13 = (0x0);
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * 0x148) + 0x8C464598) + 0x2))) != 0)) goto L_8C1EC556;
    goto L_8C1EC552;
    L_8C1EC552:;
    goto L_8C1EC672;
    L_8C1EC672:;
    close_file_handle(R14);
    R0 = (R13);
    goto L_8C1EC67A;
    L_8C1EC556:;
    t13 = (vmsio_ismount((*(int *)((R14 + 0x28))))) != 0;
    if (t13) goto L_8C1EC564;
    goto L_8C1EC560;
    L_8C1EC560:;
    goto L_8C1EC672;
    L_8C1EC564:;
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * R11) + R10) + 0x8))) != 0)) goto L_8C1EC576;
    goto L_8C1EC572;
    L_8C1EC572:;
    goto L_8C1EC672;
    L_8C1EC576:;
    t19 = (vmsio_isready((*(int *)((R14 + 0x28))))) != 0;
    if (t19) goto L_8C1EC588;
    goto L_8C1EC580;
    L_8C1EC580:;
    vmsfs_unmount((*(int *)((R14 + 0x28))));
    goto L_8C1EC672;
    L_8C1EC588:;
    t24 = (int)(buIsFormat((*(int *)((R14 + 0x28))))) < 0;
    if (t24) goto L_8C1EC672;
    goto L_8C1EC592;
    L_8C1EC592:;
    R12 = ((*(int *)((R14 + 0x28))));
    if (((*(int *)((R14 + 0x4))) == 0)) goto L_8C1EC670;
    goto L_8C1EC59A;
    L_8C1EC59A:;
    if (((*(int *)(((int)stk + 4))) == 0)) goto L_8C1EC5BC;
    goto L_8C1EC5A0;
    L_8C1EC5A0:;
    *(unsigned int *)((((R12 * R11) + R10) + 0x30)) = 0x1;
    t31 = *(int *)((((R12 * R11) + R10) + 0x4));
    *(unsigned int *)((((R12 * R11) + R10) + 0x34)) = (*(int *)((((((t31 << 2) + t31) << 2) << 2) + 0x8C20C75C)));
    R4 = (((R12 * R11) + R10));
    goto L_8C1EC5BC;
    L_8C1EC5BC:;
    t37 = (*(int *)((R14 + 0x8))) != 1;
    R13 = ((direntry(R12, (*(int *)((R14 + 0x2C))))));
    if (t37) goto L_8C1EC5F8;
    goto L_8C1EC5CC;
    L_8C1EC5CC:;
    R4 = (0xCC);
    goto L_8C1EC5FA;
    L_8C1EC5FA:;
    *(unsigned char *)((R13 + 0x0)) = R4;
    *(unsigned char *)((R13 + 0x1)) = (*(signed char *)((R14 + 0x1)));
    t44 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(R13, 0x2, (*(int *)((R14 + 0x38))));
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(R13, 0x18, (*(int *)((R14 + 0x30))));
    t52 = ((int (*)(int, int, int))((*(int *)(((*(int *)0x8C464594) + 0x10)))))(R13, 0x1A, (*(short *)((R14 + 0x2))));
    R11 = ((R13 + 0x10));
    R4 = ((R13 + 0x4));
    R5 = ((R14 + 0x10));
    goto L_8C1EC63C;
    L_8C1EC63C:;
    if (((unsigned int)R4 < (unsigned int)R11)) goto L_8C1EC636;
    goto L_8C1EC640;
    L_8C1EC640:;
    R4 = (R11);
    R5 = ((R14 + 0x20));
    R6 = ((R13 + 0x18));
    goto L_8C1EC652;
    L_8C1EC652:;
    if (((unsigned int)R4 < (unsigned int)R6)) goto L_8C1EC64C;
    goto L_8C1EC656;
    L_8C1EC656:;
    direntry_dirty(R12, (*(int *)((R14 + 0x2C))));
    t63 = write_dir(R12);
    R13 = (t63);
    if (((int)t63 < 0)) goto L_8C1EC672;
    goto L_8C1EC66A;
    L_8C1EC66A:;
    write_fat(R12);
    goto L_8C1EC670;
    L_8C1EC670:;
    R13 = (0x0);
    goto L_8C1EC672;
    L_8C1EC64C:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_8C1EC652;
    L_8C1EC636:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R5 + 0x0)));
    R4 = ((R4 + 0x1));
    R5 = ((R5 + 0x1));
    goto L_8C1EC63C;
    L_8C1EC5F8:;
    R4 = (0x33);
    goto L_8C1EC5FA;
}

void vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int t8;
    int t12;
    int t17;
    int t24;
    int t26;
    int t29;
    int t32;
    int t33;
    int t38;
    int stk[22];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R10;
    int R11;
    int R12;
    int R13;
    int R14;
    float F0;
    float F15;
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C1EC1BA:;
    *(unsigned int *)(((int)stk + 12)) = R6;
    *(unsigned int *)(((int)stk + 8)) = R7;
    *(unsigned int *)(((int)stk + 16)) = (R4 * 0x148);
    *(unsigned int *)(((int)stk + 4)) = ((R4 * 0x148) + 0x8C464598);
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = 0x0;
    R11 = (0x0);
    R12 = (R5);
    R14 = (R4);
    if (((*(signed char *)(((*(int *)(((int)stk + 4))) + 0x2))) == 0)) goto L_8C1EC214;
    goto L_8C1EC1EC;
    L_8C1EC1EC:;
    t8 = (vmsio_isready(R14)) != 0;
    if (t8) goto L_8C1EC1FE;
    goto L_8C1EC1F6;
    L_8C1EC1F6:;
    vmsfs_unmount(R14);
    goto L_8C1EC214;
    L_8C1EC214:;
    R0 = (0xFFFFFF01);
    goto L_8C1EC30E;
    L_8C1EC30E:;
    return;
    L_8C1EC1FE:;
    t12 = (vmsio_ismount(R14)) == 0;
    if (t12) goto L_8C1EC214;
    goto L_8C1EC208;
    L_8C1EC208:;
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) + 0x8C464598) + 0x8))) != 0)) goto L_8C1EC21A;
    goto L_8C1EC214;
    L_8C1EC21A:;
    t17 = (int)(buIsFormat(R14)) >= 0;
    if (t17) goto L_8C1EC22A;
    goto L_8C1EC224;
    L_8C1EC224:;
    R0 = (0xFFFFFF03);
    goto L_8C1EC30E;
    L_8C1EC22A:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 4))) + 0x1C))) + 0x38))) == 0)) goto L_8C1EC2B0;
    goto L_8C1EC234;
    L_8C1EC234:;
    t24 = (int)(check_isopen()) < 0;
    if (t24) goto L_8C1EC2B0;
    goto L_8C1EC240;
    L_8C1EC240:;
    t26 = (int)(search_dir(R14, R12, (((int)stk + 4) + 0x10))) < 0;
    if (t26) goto L_8C1EC280;
    goto L_8C1EC250;
    L_8C1EC250:;
    R0 = (0xFFFFFF06);
    goto L_8C1EC30E;
    L_8C1EC280:;
    t29 = (int)(search_exec_file(R14, (((int)stk + 4) + 0x10))) < 0;
    if (t29) goto L_8C1EC294;
    goto L_8C1EC28E;
    L_8C1EC28E:;
    R0 = (0xFFFFFF09);
    goto L_8C1EC30E;
    L_8C1EC294:;
    t32 = (unsigned short)(get_fat(R14, 0x0, R6, R7)) != 0xFFFC;
    if (t32) goto L_8C1EC2B0;
    goto L_8C1EC2A4;
    L_8C1EC2A4:;
    t33 = search_free_dir(R14);
    R10 = (t33);
    if (((int)t33 >= 0)) goto L_8C1EC2B6;
    goto L_8C1EC2B0;
    L_8C1EC2B0:;
    R0 = (0xFFFFFF08);
    goto L_8C1EC30E;
    L_8C1EC2B6:;
    direntry(R14, R10);
    t38 = open_file_handle();
    R13 = (t38);
    if ((t38 != 0)) goto L_8C1EC2D0;
    goto L_8C1EC2CA;
    L_8C1EC2CA:;
    R0 = (0xFFFFFF07);
    goto L_8C1EC30E;
    L_8C1EC2D0:;
    *(unsigned int *)((R13 + 0x8)) = 0x1;
    *(unsigned int *)((R13 + 0x4)) = 0x2;
    *(unsigned int *)((R13 + 0x2C)) = R10;
    *(unsigned int *)((R13 + 0x38)) = 0xFFFF;
    *(unsigned int *)((R13 + 0x30)) = R11;
    *(unsigned int *)((R13 + 0x28)) = R14;
    *(unsigned short *)((R13 + 0x2)) = 0x1;
    *(unsigned char *)((R13 + 0x1)) = R11;
    R4 = ((R13 + 0x10));
    goto L_8C1EC2F6;
    L_8C1EC2F6:;
    if (((*(signed char *)((R12 + 0x0))) != 0)) goto L_8C1EC2F0;
    goto L_8C1EC2FC;
    L_8C1EC2FC:;
    *(unsigned char *)((R4 + 0x0)) = R11;
    set_vmstime((R13 + 0x20), (*(int *)(((int)stk + 12))));
    *(unsigned int *)(((*(int *)(((int)stk + 8))) + 0x0)) = R13;
    R0 = (0x0);
    goto L_8C1EC30E;
    L_8C1EC2F0:;
    *(unsigned char *)((R4 + 0x0)) = (*(signed char *)((R12 + 0x0)));
    R12 = ((R12 + 0x1));
    R4 = ((R4 + 0x1));
    goto L_8C1EC2F6;
}

int nlCharacter(int a4, int a5, int a6, int a7)
{
    int t0;
    float u1;
    int t2;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;

    t0 = *(int *)0x8C44F95C;
    u1 = *(float *)0x8C1DC8D0;
    t2 = *(int *)0x8C44F960;
    if ((*(int *)0x8C1DC8CC) == 0) {
        t4 = *(short *)(((((signed char)a6 << 1) + 0x8C44F9E4) + 0x2));
        t5 = *(short *)(((((signed char)a6 << 1) + 0x8C44F9E4) + 0x0));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a5;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)a4 + (float)t0);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a5 + (float)t2);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)a4;
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a5 + (float)t2);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t5;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = (t5 | 0x3F800000);
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t4 | 0x3F800000);
    } else {
        t6 = *(short *)0x8C458DD8;
        t7 = *(short *)(((((signed char)a6 << 1) + 0x8C44F9E4) + 0x0));
        t8 = *(short *)(((((signed char)a6 << 1) + 0x8C44F9E4) + 0x2));
        *(unsigned int *)((a7 + 0x0)) = 0xF0000000;
        *(float *)(((a7 + 0x4) + 0x0)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x8) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0xC) + 0x0)) = u1;
        *(float *)(((a7 + 0x10) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        *(float *)(((a7 + 0x14) + 0x0)) = (float)a4;
        *(float *)(((a7 + 0x18) + 0x0)) = u1;
        *(float *)(((a7 + 0x1C) + 0x0)) = ((float)(((-a5) - t2) + t6) + (float)t2);
        _builtin_prefetch((void *)a7);
        *(float *)(((a7 + 0x20) + 0x0)) = ((float)a4 + (float)t0);
        *(float *)(((a7 + 0x20) + 0x4)) = u1;
        *(float *)(((a7 + 0x20) + 0x8)) = (float)(((-a5) - t2) + t6);
        *(float *)(((a7 + 0x20) + 0xC)) = ((float)a4 + (float)t0);
        *(unsigned int *)(((a7 + 0x20) + 0x10)) = ((((((signed char)a6 << 16) << 8) | ((signed char)a6 << 16)) | ((signed char)a6 << 8)) | (signed char)a6);
        *(unsigned int *)(((a7 + 0x20) + 0x14)) = t8;
        *(unsigned int *)(((a7 + 0x20) + 0x18)) = t7;
        *(unsigned int *)(((a7 + 0x20) + 0x1C)) = (t7 | 0x3F800000);
    }
    _builtin_prefetch((void *)(a7 + 0x20));
    return ((a7 + 0x20) + 0x20);
}

int nlPuts(int a4, int a5, int a6)
{
    int t1;
    int t4;
    int t5;
    int t6;
    int t7;
    int t11;
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
    int t55;
    int t56;
    int t50;
    int t52;
    int t53;
    int t44;
    int t46;
    int t47;
    int t39;
    int t41;
    int t42;

    t1 = 0x2;
    if ((*(int *)0x8C44F9C0) != 0) {
        t1 = 0x0;
    }
    t4 = *(int *)(((t1 << 2) + (*(int *)0x8C42445C)));
    t5 = *(int *)0x8C44F950;
    t6 = *(int *)0x8C44F954;
    t7 = *(int *)0x8C44F958;
    *(unsigned int *)0xFF000038 = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)0xFF00003C = ((unsigned int)((unsigned int)t4 >> 16) >> 8);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x0)) = (*(int *)0x8C44F9AC);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x4)) = (*(int *)0x8C44F9B0);
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x8)) = (*(int *)0x8C44F9B4);
    t11 = *(int *)0x8C44F9B8;
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0xC)) = t11;
    *(unsigned int *)((((0x3FFFFFF & t4) | 0xE0000000) + 0x10)) = (*(int *)0x8C44F9BC);
    _builtin_prefetch((void *)((0x3FFFFFF & t4) | 0xE0000000));
    t13 = 0xFF000038;
    t14 = t11;
    t15 = 0xE0000000;
    t16 = 0x8C44F9AC;
    t17 = t4;
    t18 = a6;
    t19 = t7;
    t20 = a4;
    t21 = (((0x3FFFFFF & t4) | 0xE0000000) + 0x20);
    t22 = t6;
    for (;;) {
        if ((*(signed char *)((t20 + 0x0))) == 0) {
            break;
        }
        t13 = (*(signed char *)((t20 + 0x0)));
        if (t13 != 32) {
            t13 = (*(signed char *)((t20 + 0x0)));
            t16 = 0x0;
            t18 = 0x8C44F964;
            t17 = (*(int *)((t18 + 0x0)));
            if (t13 == 10) {
                t22 = t16;
                if ((t5 & 0x1) != 0) {
                    t22 = t17;
                }
                t16 = 0x8C44F960;
                t19 = (t19 + (*(int *)((t16 + 0x0))));
                t44 = t14;
                t46 = t17;
                t47 = t18;
            } else {
                if (t13 == 13) {
                    t22 = t16;
                    if ((t5 & 0x1) != 0) {
                        t22 = t17;
                    }
                    t39 = t14;
                    t41 = t17;
                    t42 = t18;
                } else {
                    t18 = (*(signed char *)((t20 + 0x0)));
                    t17 = t19;
                    t16 = t22;
                    t13 = (nlCharacter(t16, t17, t18, t21));
                    t21 = t13;
                    t16 = 0x8C44F95C;
                    t15 = (*(int *)((t16 + 0x0)));
                    t22 = (t22 + t15);
                }
                t44 = t39;
                t46 = t41;
                t47 = t42;
            }
            t50 = t44;
            t52 = t46;
            t53 = t47;
        } else {
            t16 = 0x8C44F95C;
            t15 = (*(int *)((t16 + 0x0)));
            t22 = (t22 + t15);
            t50 = t14;
            t52 = t17;
            t53 = t18;
        }
        t14 = t50;
        t20 = (t20 + 0x1);
        t17 = t52;
        t18 = t53;
    }
    *(unsigned int *)0x8C44F954 = t22;
    *(unsigned int *)0x8C44F958 = t19;
    t55 = *(int *)0x8C42445C;
    t56 = *(int *)((((t1 << 2) + t55) + 0x0));
    *(unsigned int *)((((t1 << 2) + t55) + 0x0)) = ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
    return ((t56 & 0xFC000000) | (t21 & 0x3FFFFFF));
}

int vmsfs_init_work_normal(int a4, int a5, int a6)
{
    int stk[14];

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
    int T_;
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1EB2D0:;
    *(unsigned int *)(((int)stk + 8)) = R5;
    R0 = (R4);
    R10 = (0x1);
    R12 = (0x8C20C72C);
    R13 = (0x0);
    R14 = (0x8C464598);
    R5 = (0x8C20C73C);
    R7 = ((*(int *)0x8C464594));
    if ((R4 == 15)) goto L_8C1EB308;
    goto L_8C1EB2F8;
    L_8C1EB2F8:;
    if ((R0 == 33)) goto L_8C1EB310;
    goto L_8C1EB2FC;
    L_8C1EB2FC:;
    if ((R0 == 65)) goto L_8C1EB31A;
    goto L_8C1EB300;
    L_8C1EB300:;
    if ((R0 == 122)) goto L_8C1EB324;
    goto L_8C1EB304;
    L_8C1EB304:;
    goto L_8C1EB330;
    L_8C1EB330:;
    R0 = (0xFFFFFF00);
    goto L_8C1EB412;
    L_8C1EB412:;
    return R0;
    L_8C1EB324:;
    *(unsigned int *)((R7 + 0x4)) = 0x3;
    R1 = ((*(int *)((R5 + 0xC))));
    R8 = ((*(int *)((R12 + 0xC))));
    goto L_8C1EB32C;
    L_8C1EB32C:;
    *(unsigned int *)(((int)stk + 20)) = R1;
    goto L_8C1EB35C;
    L_8C1EB35C:;
    *(unsigned int *)(((int)stk + 12)) = (((R4 << 8) << 1) + 0x20);
    *(unsigned int *)(((int)stk + 4)) = R10;
    *(unsigned int *)(((int)stk + 16)) = (((R8 + 0x1) << 8) << 1);
    R11 = (R6);
    R12 = (0x8C0F7F30);
    R9 = (R13);
    goto L_8C1EB40A;
    L_8C1EB40A:;
    if (((int)R9 < (int)0x8)) goto L_8C1EB378;
    goto L_8C1EB410;
    L_8C1EB410:;
    R0 = (0x0);
    goto L_8C1EB412;
    L_8C1EB378:;
    if ((((*(int *)(((int)stk + 8))) & (*(int *)(((int)stk + 4)))) == 0)) goto L_8C1EB3FE;
    goto L_8C1EB380;
    L_8C1EB380:;
    *(unsigned char *)((R14 + 0x2)) = R10;
    *(unsigned short *)((R14 + 0x0)) = R9;
    *(unsigned int *)((R14 + 0x1C)) = ((R9 * 0x4C) + 0x8C468FF8);
    *(unsigned char *)((R14 + 0xA)) = R13;
    *(unsigned char *)((R14 + 0xB)) = R13;
    *(unsigned char *)((R14 + 0xC)) = R13;
    *(unsigned int *)((R14 + 0x2C)) = R11;
    *(unsigned int *)((R14 + 0x20)) = (R11 + 0x20);
    *(unsigned int *)((R14 + 0x24)) = (0x220 + R11);
    *(unsigned int *)((R14 + 0x28)) = (((*(int *)(((int)stk + 16))) + R11) + 0x20);
    *(unsigned char *)((R14 + 0x8)) = R13;
    *(unsigned char *)((R14 + 0x9)) = R13;
    *(unsigned short *)((R14 + 0xE)) = R10;
    *(unsigned short *)((R14 + 0x10)) = R8;
    *(unsigned short *)((R14 + 0x12)) = (*(short *)(((int)stk + 20)));
    *(unsigned short *)((R14 + 0x14)) = 0x20;
    memset((R14 + 0x38), 0x0, 0x10);
    memset((R14 + 0x48), 0x0, 0x100);
    memset((*(int *)((R14 + 0x2C))), 0x47, 0x20);
    memset((*(int *)((R14 + 0x20))), 0x53, 0x20);
    memset((*(int *)((R14 + 0x24))), 0x46, 0x20);
    memset((*(int *)((R14 + 0x28))), 0x44, 0x20);
    R11 = ((R11 + (*(int *)(((int)stk + 12)))));
    goto L_8C1EB3FE;
    L_8C1EB3FE:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) << 1);
    R14 = ((R14 + 0x148));
    R9 = ((R9 + 0x1));
    goto L_8C1EB40A;
    L_8C1EB31A:;
    *(unsigned int *)((R7 + 0x4)) = 0x2;
    R1 = ((*(int *)((R5 + 0x8))));
    R8 = ((*(int *)((R12 + 0x8))));
    goto L_8C1EB32C;
    L_8C1EB310:;
    *(unsigned int *)((R7 + 0x4)) = R10;
    R2 = ((*(int *)((R5 + 0x4))));
    R8 = ((*(int *)((R12 + 0x4))));
    goto L_8C1EB316;
    L_8C1EB316:;
    *(unsigned int *)(((int)stk + 20)) = R2;
    goto L_8C1EB35C;
    L_8C1EB308:;
    *(unsigned int *)((R7 + 0x4)) = R13;
    R2 = ((*(int *)((R5 + 0x0))));
    R8 = ((*(int *)((R12 + 0x0))));
    goto L_8C1EB316;
}

int mwlRnaStartTrans(int a4, int a5, int a6, int a7)
{
    int t1;
    int t4;
    int t5;
    int t17;
    int t18;
    int t20;
    int t21;
    int t24;
    int t27;
    int t28;
    int t29;
    int t37;
    int t38;
    int t40;
    int t41;
    int t42;
    int t44;
    int t45;
    int t46;
    int t47;
    int t63;
    int t64;
    int t65;
    int t67;
    int t68;
    int t69;
    int t31;
    int t34;
    int t70;
    int t58;
    int stk[13];

    t1 = (int)((int)0x20 / (int)(*(int *)((a4 + 0x8))));
    t4 = (int)((int)((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34)))) / (int)((t1 << 2) << 1));
    t5 = 0x0;
    for (;;) {
        if ((int)t5 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        if ((*(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0))) == 0) {
            mwRnaErrCallFunc(0x8C20ACB0);
        }
        t17 = *(int *)((((t5 << 2) + (a4 + 0x10)) + 0x0));
        *(unsigned int *)(((int)stk + 8)) = t17;
        t18 = *(int *)((a4 + 0x8));
        t20 = *(int *)(((*(int *)((t17 + 0x0))) + 0x18));
        t21 = ((t4 * ((t1 << 2) << 1)) * t18);
        if ((int)((t4 * ((t1 << 2) << 1)) * t18) < 0) {
            t21 = (((t4 * ((t1 << 2) << 1)) * t18) + 0x7);
        }
        t24 = ((int (*)(int, int, int, int))(t20))((*(int *)(((int)stk + 8))), 0x1, (((t21 >> 1) >> 1) >> 1), (((t5 << 2) << 1) + (a4 + 0x18)));
        t5 = (t5 + 0x1);
    }
    if ((unsigned char)(*(signed char *)((a4 + 0x3))) == 1) {
        t31 = (*(int *)((a4 + 0x1C)));
        t34 = a7;
    } else {
        *(unsigned int *)(((int)stk + 16)) = (a4 + 0x18);
        t27 = *(int *)(((a4 + 0x18) + 0x4));
        *(unsigned int *)(((int)stk + 12)) = ((a4 + 0x18) + 0x8);
        t28 = *(int *)((((a4 + 0x18) + 0x8) + 0x4));
        t29 = t28;
        if ((int)t27 < (int)t28) {
            t29 = t27;
        }
        t31 = t29;
        t34 = t28;
    }
    t37 = (int)((int)t31 / (int)(*(int *)((a4 + 0x8))));
    t38 = ((t37 << 2) << 1);
    if ((int)((t37 << 2) << 1) >= (int)(t4 * ((t1 << 2) << 1))) {
        t38 = (t4 * ((t1 << 2) << 1));
    }
    t40 = *(int *)((a4 + 0x28));
    t41 = *(int *)((a4 + 0x2C));
    t42 = t38;
    if ((int)t38 >= (int)(t40 - t41)) {
        t42 = (t40 - t41);
    }
    t44 = (int)((int)t42 / (int)((t1 << 2) << 1));
    if ((int)(t44 * ((t1 << 2) << 1)) <= 0) {
        t45 = (t44 * ((t1 << 2) << 1));
        t46 = 0x0;
        t47 = 0x0;
        for (;;) {
            if ((int)t46 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t47 = t46;
            t47 = (t47 << 2);
            if ((*(int *)((((a4 + 0x10) + t47) + 0x0))) == 0) {
                mwRnaErrCallFunc(0x8C20ACB0);
            } else {
                t58 = t34;
            }
            t45 = a4;
            t45 = (t45 + 0x10);
            t45 = (t45 + t47);
            t45 = (*(int *)((t45 + 0x0)));
            t63 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t45 + 0x0))) + 0x1C)))))(t45, 0x1, (((t46 << 2) << 1) + (a4 + 0x18)), t58);
            t46 = (t46 + 0x1);
        }
        t70 = 0x0;
    } else {
        t64 = 0x8C46EB4C;
        t65 = 0x0;
        for (;;) {
            if ((int)t65 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
                break;
            }
            t67 = *(int *)((a4 + 0x2C));
            t68 = *(int *)(((((t65 << 2) << 1) + (a4 + 0x18)) + 0x0));
            *(unsigned int *)0x8C46EB4C = 0x0;
            t64 = a4;
            t69 = mwlRnaStartCopy(t64, t65, t67, t68, (t44 * ((t1 << 2) << 1)));
            t65 = (t65 + 0x1);
            *(unsigned int *)0x8C46EB50 = 0x0;
            t64 = t69;
        }
        *(unsigned int *)((a4 + 0x3C)) = t64;
        t70 = t64;
    }
    return t70;
}

