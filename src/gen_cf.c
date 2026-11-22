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


