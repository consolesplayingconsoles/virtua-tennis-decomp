/* Shinobi library, KAEDE (the Maple bus driver): our own C, written from the disassembly. */

typedef struct {
    char head[0xfcc];
    int *commandWriteCursor;            /* 0xfcc: write cursor */
    int pad0;
    int pad1;
    int previousCommandWords;          /* 0xfd8 */
    unsigned int commandBytesUsed; /* 0xfdc */
    char mid[0x10f4 - 0xfe0];
    void *lightGunState;          /* 0x10f4 */
} MapleDriverStatePrefix;

typedef struct {
    int w0;
    unsigned int dmaAddress;  /* 4 */
    int w2, w3, w4, w5;
    int transferFlags;           /* 24 */
} MapleLightGunStatePrefix;

extern MapleDriverStatePrefix *gMapleDriver;
extern int gKdGunCount;
extern char gKdGunBuf[];
extern int gKdGunBusy;
extern int gKdGunLast;

int mpdrv_setcmd_force(int a, int b, int *c, int d, int e, int f);


int mpdrv_insertnop(int nopCount)
{
    MapleDriverStatePrefix *driver = gMapleDriver;
    int *writeCursor;
    int nopIndex;

    driver->commandWriteCursor = (int *)((char *)driver->commandWriteCursor + driver->previousCommandWords * 4);
    writeCursor = gMapleDriver->commandWriteCursor;
    if (nopCount > 0) {
        nopIndex = 0;
        do {
            nopIndex++;
            *writeCursor = 0x700;
            writeCursor++;
        } while (nopIndex < nopCount);
    }
    gMapleDriver->previousCommandWords = nopCount;
    gMapleDriver->commandBytesUsed += nopCount * 4;
    return 0;
}


void kdExecGun(void)
{
    int gunCount = gKdGunCount;

    if (gunCount != 0) {
        unsigned int dmaAddress;
        int requestWord = 1;
        int lastGunIndex = gunCount - 1;

        dmaAddress = ((unsigned int)gKdGunBuf & 0x1fffffe0) + 32;
        *(unsigned int *)(dmaAddress | 0xa0000000) = ((unsigned int)lastGunIndex << 16) | 0x80000200;
        gKdGunBusy = 1;
        ((MapleLightGunStatePrefix *)gMapleDriver->lightGunState)->dmaAddress = dmaAddress;
        ((MapleLightGunStatePrefix *)gMapleDriver->lightGunState)->transferFlags = 1;
        mpdrv_setcmd_force(lastGunIndex * 6, 9, &requestWord, 1, 0, 0);
        gKdGunLast = gKdGunCount;
    }
}
