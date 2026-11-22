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
    int R1004;
    int R1008;
    int R1012;
    int R1016;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R1016 = *(int *)((int)stk + 16);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    L_8C1EB2D0:;
    R1008 = R5;
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
    R1012 = (((R4 << 8) << 1) + 0x20);
    R1004 = R10;
    R1016 = (((R8 + 0x1) << 8) << 1);
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
    if ((((R1008) & (R1004)) == 0)) goto L_8C1EB3FE;
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
    *(unsigned int *)((R14 + 0x28)) = (((R1016) + R11) + 0x20);
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
    R11 = ((R11 + (R1012)));
    goto L_8C1EB3FE;
    L_8C1EB3FE:;
    R1004 = ((R1004) << 1);
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


