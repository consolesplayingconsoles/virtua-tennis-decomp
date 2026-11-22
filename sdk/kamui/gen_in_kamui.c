/* Straight-line functions with calls and guards (batch gen_in): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int charaTexFree(int);
int cpuAimPointSet(int, int, float, float);
int entryCountJoined(void);
int kmtex_GetTextureLevel(int, int);
int kmyCopyToTexture(int, int, int, int);
int kmyCopyToTextureRom(int, int, int, int);
int kmyMemCopy(int, int, int);
int ndbIsValid(void);
int ndbLoadStart(void);
int nlRand(void);
int padDirAny(int);
int padDirRepeat(int, int);
int selCellClear(int);
int selModelSpawn(int, int);
int selSlot0FlagSet(void);
int set_event(int, int);
int sndSe05_04(void);
int sndSeCursor(void);
int syG2AicaFifoWaitEmpty(void);
int syG2DmaResumeAll(void);
int syG2DmaSuspendAll(void);
int syG2FifoWaitEmpty(void);
int selCursorInputB(int a4, int a5, int a6, int a7);
int selCursorInput(int a4, int a5);
int ndbGetTargets(int a4, int a5, int a6);
int cpuMeterInput(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int resultTallyStart(int a4, int a5, int a6, int a7);
int kmSetUserClipping(int a4, int a5, int a6, int a7);
int syG2Write(int a4, int a5, int a6, int a7, int a8, int a9);
int _pd_peripheral_set_data(int a4, int a5, int a6);
int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7);
int copySmallVQToTextureRom(int a4, int a5, int a6, int a7);
int cpuDblIsMyBall(int a4);


int kmtex_ConvertSmallVQToMem(int a4, int a5, int a6, int a7)
{
    int t0;
    int t6;
    int t7;

    t0 = kmtex_GetTextureLevel(a6, a6);
    if ((a7 & 0x80000000) != 0) {
        t6 = ((*(int *)(((t0 << 2) + 0x8C20AF34))) + 0xA);
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEC0)));
    } else {
        t6 = (*(int *)(((t0 << 2) + 0x8C20AF08)));
        t7 = (*(int *)(((t0 << 2) + 0x8C20AEA4)));
    }
    kmyCopyToTexture(a4, a5, t7, 0x0);
    return kmyCopyToTexture((a4 + 0x800), (a5 + t7), t6, 0x0);
}

int copySmallVQToTextureRom(int textureAddress, int sourceAddress, int textureSize, int textureFlags)
{
    int textureLevel;
    int indexBytes;
    int codebookBytes;

    textureLevel = kmtex_GetTextureLevel(textureSize, textureSize);
    if ((textureFlags & 0x80000000) != 0) {
        indexBytes = ((*(int *)(((textureLevel << 2) + 0x8C20AF34))) + 0xA);
        codebookBytes = (*(int *)(((textureLevel << 2) + 0x8C20AEC0)));
    } else {
        indexBytes = (*(int *)(((textureLevel << 2) + 0x8C20AF08)));
        codebookBytes = (*(int *)(((textureLevel << 2) + 0x8C20AEA4)));
    }
    kmyCopyToTextureRom(textureAddress, sourceAddress, codebookBytes, 0x0);
    return kmyCopyToTextureRom((textureAddress + 0x800), (sourceAddress + codebookBytes), indexBytes, 0x0);
}

