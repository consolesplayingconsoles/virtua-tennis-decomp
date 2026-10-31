/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gInterruptHandlerChains[];
extern char gMapleDriver[];
extern char gMapleTransferLockAddress[];
extern char gNlFontHeight[];
extern char gNlFontWidth[];
extern char gVmsIoInterface[];
extern char gVmsVolumeStates[];
extern char g_0c14a7b8[];
extern char g_0c14a7bc[];
extern char g_0c2af158[];
extern char g_0c2b3190[];

typedef struct { int w[3]; } Stk3;
int kmSetHSyncCallback(int, int);
int kmSetVSyncCallback(int, int);
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
    if ((*(int *)((0xFC0 + (*(int *)(int)gMapleDriver)))) != 1) {
    } else {
        t85 = 0xFFFFFFFF;
        if (((*(int *)(((*(int *)(((*(int *)(int)gMapleDriver) + 0x10F4))) + 0x18))) & 0x1) != 0) {
        } else {
            if (_builtin_tas((char *)(*(int *)(int)gMapleTransferLockAddress)) == 0) {
                mpdrv_dpf(0x8C20AFC4);
                t77 = 0xFFFFFFFE;
            } else {
                t13 = *(int *)(int)gMapleDriver;
                if ((*(int *)((t13 + 0xFB0))) != (*(int *)((t13 + 0xFAC)))) {
                    t16 = *(int *)(int)gMapleDriver;
                    *(unsigned int *)((t16 + 0xFB0)) = (*(int *)((t16 + 0xFAC)));
                    if ((*(int *)(((*(int *)(int)gMapleDriver) + 0xFAC))) != 0) {
                        *(unsigned int *)(((0x10C0 + (*(int *)(int)gMapleDriver)) + 0x0)) = (((int)((int)((*(int *)0x8C20A818) * 0x3E8) / (int)0x14)) << 16);
                    } else {
                        *(unsigned int *)(((*(int *)(int)gMapleDriver) + 0x10C0)) = 0xC3500000;
                    }
                    *(unsigned int *)(((*(int *)(((*(int *)(int)gMapleDriver) + 0x10F4))) + 0x14)) = 0x0;
                    t31 = *(int *)(int)gMapleDriver;
                    *(unsigned int *)(((*(int *)((t31 + 0x10F4))) + 0x80)) = ((*(int *)((t31 + 0x10C0))) | (*(int *)((t31 + 0x10D0))));
                    *(unsigned int *)(((*(int *)(((*(int *)(int)gMapleDriver) + 0x10F4))) + 0x14)) = 0x1;
                }
                frame_make();
                t43 = *(int *)(int)gMapleDriver;
                *(unsigned int *)(((0x10B0 + t43) + 0x0)) = (*(int *)(((((*(int *)(((0x10B8 + t43) + 0x0))) << 2) + (0x10A8 + t43)) + 0x0)));
                t46 = *(int *)(int)gMapleDriver;
                *(unsigned int *)((((*(int *)((t46 + 0x10F4))) + 0x4) + 0x0)) = (mpdrv_v2p((*(int *)(((((*(int *)(((0x10B8 + t46) + 0x0))) << 2) + (0x10A8 + t46)) + 0x0)))));
                *(unsigned int *)(((*(int *)(((*(int *)(int)gMapleDriver) + 0x10F4))) + 0x18)) = 0x1;
                *(unsigned int *)(((*(int *)(int)gMapleDriver) + 0xFD8)) = 0x0;
                t54 = *(int *)(int)gMapleDriver;
                *(unsigned int *)((t54 + 0x10B8)) = ((*(int *)((t54 + 0x10B8))) ^ 0x1);
                t56 = *(int *)(int)gMapleDriver;
                *(unsigned int *)(((0xFCC + t56) + 0x0)) = (*(int *)(((((*(int *)(((0x10B8 + t56) + 0x0))) << 2) + (0x10A8 + t56)) + 0x0)));
                t59 = *(int *)(int)gMapleDriver;
                t60 = *(int *)((t59 + 0x10B4));
                *(unsigned int *)((t59 + 0x10B4)) = (t60 ^ 0x1);
                t61 = *(int *)(int)gMapleDriver;
                *(unsigned int *)((t61 + 0xFDC)) = 0x0;
                t63 = 0xFDC;
                t64 = (t60 ^ 0x1);
                t65 = t61;
                t66 = ((*(int *)(int)gMapleDriver) + 0x28);
                t67 = 0x0;
                for (;;) {
                    if ((int)t67 >= (int)0x18) {
                        break;
                    }
                    t65 = 0xF90;
                    t63 = (*(int *)(int)gMapleDriver);
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
                *(unsigned int *)(((*(int *)(int)gMapleDriver) + 0xFC0)) = 0x0;
                *(unsigned char *)(((*(int *)(int)gMapleTransferLockAddress) + 0x0)) = 0x0;
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



void syChainDeleteHandler(int a4)
{
    register int t12;
    register int t20;
    register int t43;
    int stk[9];

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int R12;
    register int R13;
    register int R14;
    register int T_;
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
    R4 = ((int)gInterruptHandlerChains);
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
    kmSetVSyncCallback(0x0, 0x0);
    goto L_8C1E86EE;
    L_8C1E86EE:;
    goto L_8C1E86F0;
    L_8C1E8654:;
    if ((R14 != 0x92)) goto L_8C1E8666;
    goto L_8C1E865A;
    L_8C1E865A:;
    kmSetHSyncCallback(0x0, 0x0);
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
    R10 = ((int)gVmsVolumeStates);
    R11 = (0x148);
    R13 = (0x0);
    if (((*(signed char *)(((((*(int *)((R14 + 0x28))) * 0x148) + (int)gVmsVolumeStates) + 0x2))) != 0)) goto L_8C1EC556;
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
    t44 = ((int (*)(int, int, int))((*(int *)(((*(int *)(int)gVmsIoInterface) + 0x10)))))(R13, 0x2, (*(int *)((R14 + 0x38))));
    t48 = ((int (*)(int, int, int))((*(int *)(((*(int *)(int)gVmsIoInterface) + 0x10)))))(R13, 0x18, (*(int *)((R14 + 0x30))));
    t52 = ((int (*)(int, int, int))((*(int *)(((*(int *)(int)gVmsIoInterface) + 0x10)))))(R13, 0x1A, (*(short *)((R14 + 0x2))));
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
    *(unsigned int *)(((int)stk + 4)) = ((R4 * 0x148) + (int)gVmsVolumeStates);
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
    if (((*(signed char *)((((*(int *)(((int)stk + 16))) + (int)gVmsVolumeStates) + 0x8))) != 0)) goto L_8C1EC21A;
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

    t0 = *(int *)(int)gNlFontWidth;
    u1 = *(float *)(int)g_0c14a7bc;
    t2 = *(int *)(int)gNlFontHeight;
    if ((*(int *)(int)g_0c14a7b8) == 0) {
        t4 = *(short *)(((((signed char)a6 << 1) + (int)g_0c2af158) + 0x2));
        t5 = *(short *)(((((signed char)a6 << 1) + (int)g_0c2af158) + 0x0));
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
        t6 = *(short *)(int)g_0c2b3190;
        t7 = *(short *)(((((signed char)a6 << 1) + (int)g_0c2af158) + 0x0));
        t8 = *(short *)(((((signed char)a6 << 1) + (int)g_0c2af158) + 0x2));
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
    R14 = ((int)gVmsVolumeStates);
    R5 = (0x8C20C73C);
    R7 = ((*(int *)(int)gVmsIoInterface));
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


