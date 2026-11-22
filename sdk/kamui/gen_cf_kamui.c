/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
int primTexVertexSet(int, int, int, int, int, Stk3, float, float);
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


