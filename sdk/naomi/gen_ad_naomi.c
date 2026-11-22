/* Straight-line functions with calls and guards (batch gen_ad): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_ExecServer(void);
int ADXF_GetNumReadSct(int);
int ADXF_GetStat(int);
int ADXF_ReadNw32(int, int, int);
int ADXSTM_ExecServer(void);
int _destructFiber(int, int);
int adxf_ChkPrmGfr(int, int);
int adxf_wait_1ms(void);
int fadeReset(void);
int fileLoadClose(void);
int fileLoadCloseSlot(int);
int fileLoadPoll(void);
int fileLoadStart(int, int, int);
int fileLoadSync(int, int, int);
int frameHookNop(void);
int gameModeSet(int, int, int);
int gdFsExecServer(int);
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTextureRom(int, int);
int kmQueryFinishLastTextureDMA(void);
int kmyContinueTA(int);
int kmyEnableASyncCopy(int);
int kmyQueryFinishDMA(int);
int kmyRequestCallback(int);
int kmySetupTA(int);
int longjmp(int, int);
int memset(int, int, int);
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlInitEvent(void);
int nlInitTextureSurface(int, int);
int nlLoadMatrix(int, float, float, float, float, float, float);
int nlMultiMatrix(int);
int nlObjPut(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlQuickInvertMatrix(void);
int nlSpriteSetImaginaryScreenSize(float, float);
int nlWaitVSync(void);
int nlsndG2Write(int, int);
int padLcdModeClear(void);
int rankSprTexLoad(void);
int setjmp(int, int, int, int, float, float, float, float, float, float, float, float);
int sndPack2LoadSync(void);
int sprInitRectF(int, int, int, int, int, int);
int stageFreeAll(void);
int stageSoftReset(void);
int strmControl(int, int);
int titleSprTexLoad(void);
int vmsfs_fclose(int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fopen(int, int, int);
int vmsfs_fread1(int, int);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int vmsio_init(void);
int vmsfs_init(int a4, int a5, int a6);
int ADXF_GetFileRange(int a4, int a5, int a6, int a7);
int nlsndPackLoadInit(int a4, int a5, int a6, int a7);
int buFbrExecFiberServer(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int hudBarSprInit(void);
int adxf_LoadData(int a4, int a5, int a6);
int kmiFLWCTRLStartPass(int a4);
int nlLoadTextureMem(int a4, int a5, int a6);
int mainSoftReset(int a4);
int sklDrawNodeOne(int a4, float f4, float f5, float f6, float f7, float f8, float f9);
int nlInitSprite(int a4, int a5, int a6);
int vmsfs_load_file(int a4, int a5, int a6, int a7);
int rankDispLoad(void);
int nlInitCommonTexture(int a4, int a5, int a6);


int nlsndPackLoadInit(int a4, int a5, int a6, int a7)
{
    int t4;
    int t10;
    int t22;
    int t30;
    int t32;
    int t36;
    int stk[8];

    int R0;
    int R1;
    int R2;
    int R3;
    int R4;
    int R5;
    int R6;
    int R7;
    int R11;
    int R12;
    int R13;
    int T_;
    int R1004;
    int R1008;
    int R1012;
    R1004 = *(int *)((int)stk + 4);
    R1008 = *(int *)((int)stk + 8);
    R1012 = *(int *)((int)stk + 12);
    R4 = a4;
    R5 = a5;
    R6 = a6;
    R7 = a7;
    L_8C0F4EA0:;
    R1004 = R5;
    R1012 = R7;
    *(unsigned int *)0x8C454CBC = ((*(int *)0x8C454CBC) + R6);
    R1008 = (((R4 << 1) + R4) << 2);
    *(unsigned int *)((((((R4 << 1) + R4) << 2) + 0x8C454DD4) + 0x0)) = (R1004);
    *(unsigned int *)((((((R4 << 1) + R4) << 2) + 0x8C454DD4) + 0x8)) = R6;
    nlsndG2Write((R1004), ((R4 << 2) + 0xA0800060));
    t4 = (unsigned int)(((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4) < (unsigned int)0x8C454DD4;
    R1004 = (((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4);
    t10 = (((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4);
    R1 = (0x8C454DD4);
    R11 = (0x8C454DD4);
    R12 = (R6);
    R13 = (R4);
    R4 = ((((((R4 - 1) << 1) + (R4 - 1)) << 2) + 0x8C454DD4));
    R5 = t10;
    R6 = (0x0);
    R7 = (0x0);
    if (t4) goto L_8C0F4F18;
    goto L_8C0F4EFA;
    L_8C0F4EFA:;
    if (((*(int *)((R4 + 0x0))) == -1)) goto L_8C0F4F10;
    goto L_8C0F4F00;
    L_8C0F4F00:;
    R6 = (((*(int *)((R5 + 0x4))) + (*(int *)((R5 + 0x8)))));
    goto L_8C0F4F18;
    L_8C0F4F18:;
    if ((R6 != 0)) goto L_8C0F4F20;
    goto L_8C0F4F1C;
    L_8C0F4F1C:;
    R6 = ((*(int *)0x8C454CB0));
    goto L_8C0F4F20;
    L_8C0F4F20:;
    *(unsigned int *)((((R1008) + R1) + 0x4)) = R6;
    R1004 = R11;
    R1008 = (((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11);
    t22 = R1004;
    R1 = ((t22 + 0x60));
    R4 = ((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11));
    R5 = ((((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11));
    if (((unsigned int)(((((R13 + 0x1) << 1) + (R13 + 0x1)) << 2) + R11) >= (unsigned int)(t22 + 0x60))) goto L_8C0F4F5C;
    goto L_8C0F4F44;
    L_8C0F4F44:;
    if (((*(int *)((R4 + 0x0))) == -1)) goto L_8C0F4F54;
    goto L_8C0F4F4A;
    L_8C0F4F4A:;
    t30 = *(int *)((R5 + 0x8));
    *(unsigned int *)((R5 + 0x4)) = ((*(int *)((R5 + 0x4))) + R12);
    R7 = ((R7 + t30));
    goto L_8C0F4F54;
    L_8C0F4F54:;
    t32 = (unsigned int)(R4 + 0xC) < (unsigned int)R1;
    R4 = ((R4 + 0xC));
    R5 = ((R5 + 0xC));
    if (t32) goto L_8C0F4F44;
    goto L_8C0F4F5C;
    L_8C0F4F5C:;
    *(unsigned int *)(((R1012) + 0x0)) = R7;
    return R6;
    L_8C0F4F10:;
    t36 = (unsigned int)(R4 - 12) >= (unsigned int)R1;
    R4 = ((R4 - 12));
    R5 = ((R5 - 12));
    if (t36) goto L_8C0F4EFA;
    goto L_8C0F4F18;
}


int nlInitSprite(int a4, int a5, int a6)
{
    int t4;
    int t5;
    int t10;
    int t12;
    int t14;

    *(unsigned int *)0x8C454C7C = 0xFFFFFFFF;
    nlSpriteSetImaginaryScreenSize((*(float *)0x8C0F3CC0), (*(float *)0x8C0F3CBC));
    *(unsigned int *)0x8C454C84 = a6;
    *(unsigned int *)0x8C454C88 = a5;
    *(unsigned int *)0x8C454C80 = a4;
    *(unsigned int *)0x8C454C8C = ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC);
    *(unsigned int *)0x8C454C90 = ((((((int)((int)(a5 + 0x1F) / (int)0x20)) << 2) + ((((a6 << 1) + a4) + 0x3) & 0xFFFFFFFC)) + 0x3) & 0xFFFFFFFC);
    if ((int)a6 > 0) {
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            t4 = (t4 + 0x1);
            *(unsigned short *)((t5 + (*(int *)0x8C454C80))) = 0xFFFFFFFF;
            t5 = (t5 + 0x2);
            if ((int)t4 >= (int)a6) {
                break;
            }
        }
    }
    t10 = 0x0;
    for (;;) {
        t12 = (int)((int)((*(int *)0x8C454C88) + 0x1F) / (int)0x20);
        if ((int)t10 >= (int)t12) {
            break;
        }
        t14 = (t10 << 2);
        t10 = (t10 + 0x1);
        *(unsigned int *)(((*(int *)0x8C454C8C) + t14)) = 0x0;
    }
    return t12;
}


int nlInitCommonTexture(int workspaceAddress, int textureCount, int commonTextureCount)
{
    int roundedBitmapBits;
    int bitmapWordsOrEntryAddress;
    int entryOffset;
    int entryIndex;
    int bitmapOrConfigurationAddress;
    int bitmapByteOffset;
    int bitmapWordIndex;

    nlInitTextureSurface(workspaceAddress, (textureCount + 0x1));
    *(unsigned int *)0x8C4241C0 = ((((textureCount + 0x1) * 0x3C) + workspaceAddress) + 0x8);
    *(unsigned int *)0x8C4241C4 = ((((commonTextureCount + 0x1) << 2) << 1) + ((((textureCount + 0x1) * 0x3C) + workspaceAddress) + 0x8));
    roundedBitmapBits = ((commonTextureCount + 0x1) + 0x1F);
    if ((int)((commonTextureCount + 0x1) + 0x1F) < 0) {
        roundedBitmapBits = (((commonTextureCount + 0x1) + 0x1F) + 0x1F);
    }
    *(unsigned int *)0x8C1DC880 = ((int)roundedBitmapBits >> 5);
    *(unsigned int *)0x8C1DC87C = ((commonTextureCount + 0x1) - 1);
    bitmapWordsOrEntryAddress = ((int)roundedBitmapBits >> 5);
    entryOffset = 0xFFFFFFF8;
    entryIndex = 0xFFFFFFFF;
    for (;;) {
        if ((int)entryIndex >= (int)(*(int *)0x8C1DC87C)) {
            break;
        }
        entryIndex = (entryIndex + 0x1);
        *(unsigned int *)((((*(int *)0x8C4241C0) + entryOffset) + 0x0)) = 0x0;
        bitmapWordsOrEntryAddress = (*(int *)0x8C4241C0);
        bitmapWordsOrEntryAddress = (bitmapWordsOrEntryAddress + entryOffset);
        entryOffset = (entryOffset + 0x8);
        *(unsigned int *)((bitmapWordsOrEntryAddress + 0x4)) = 0xFFFFFFFF;
    }
    bitmapOrConfigurationAddress = 0x8C1DC87C;
    bitmapByteOffset = 0x0;
    bitmapWordIndex = 0x0;
    for (;;) {
        if ((int)bitmapWordIndex >= (int)(*(int *)0x8C1DC880)) {
            break;
        }
        bitmapOrConfigurationAddress = (*(int *)0x8C4241C4);
        bitmapWordIndex = (bitmapWordIndex + 0x1);
        *(unsigned int *)((bitmapByteOffset + bitmapOrConfigurationAddress)) = 0x0;
        bitmapByteOffset = (bitmapByteOffset + 0x4);
    }
    *(unsigned int *)0x8C458DCC = 0x0;
    return bitmapOrConfigurationAddress;
}


