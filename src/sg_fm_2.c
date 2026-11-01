/* Shinobi library, SG_FM (flash memory): our own C, written from the disassembly. */

typedef struct {
    short partitionId;
    short formatMode;
    int flashBaseAddress;
    int partitionByteCount;
    int cacheBufferAddress;
    int usedRecordCount;
    int recordCapacity;
    int allocationBitmapBlockCount;
    int pendingOperation;       /* +28 */
    int status;       /* +32 */
    int writePhase;
    int recordIndex;      /* +40 */
    int lastResult;
    int dataBufferAddress;        /* +48 */
} FlashMemoryManagerPrefix;

extern FlashMemoryManagerPrefix *gFmMngState;


int fmMngRead(int recordIndex, int dataBufferAddress)
{
    FlashMemoryManagerPrefix *manager = gFmMngState;

    if (manager == 0)
        return -11;
    if (manager->pendingOperation != 0)
        return -9;
    if (recordIndex < 0 || recordIndex >= manager->recordCapacity)
        return -5;
    manager->pendingOperation = 1;
    gFmMngState->status = 2;
    gFmMngState->recordIndex = recordIndex;
    gFmMngState->dataBufferAddress = dataBufferAddress;
    return 0;
}
