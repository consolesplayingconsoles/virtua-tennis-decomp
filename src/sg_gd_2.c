/* Shinobi library, SG_GD (the GD-ROM file system): our own C, written from the disassembly. */

typedef struct {
    int globalStateAddress;
    int directoryEntryId;
    int startFad;
    int fileByteCount;
    int sectorCount;     /* 16 */
    int sectorPosition, completedTransferAmount, requestedSectorCount, transferByteCount, readCompletionCallbackAddress;
    int readCompletionCallbackArgument;        /* untouched */
    int f44;
    int f48;        /* untouched */
    int errorCallbackAddress;
    int errorCallbackArgument;        /* untouched */
    int commandRequestId;
    int driverStatusWord2;
    int driverErrorDetail;
    short requestKind;
    short transferStatus;
    short allocated;   /* 76 */
    short transferMode;
    short driveStatus;    /* 80 */
    short errorCode;
} GdFsFileHandle;

extern short gGdFsDefaultTransferMode;

GdFsFileHandle *gdFsCreateHnG(GdFsFileHandle *handle, int directoryEntryId, int startFad, int fileByteCount)
{
    if (handle->allocated != 0)
        return 0;
    handle->directoryEntryId = directoryEntryId;
    handle->startFad = startFad;
    handle->fileByteCount = fileByteCount;
    handle->sectorCount = (fileByteCount + 2047) >> 11;
    handle->sectorPosition = 0;
    handle->completedTransferAmount = 0;
    handle->requestedSectorCount = 0;
    handle->transferByteCount = 0;
    handle->readCompletionCallbackAddress = 0;
    handle->f44 = 0;
    handle->errorCallbackAddress = 0;
    handle->commandRequestId = 0;
    handle->driverStatusWord2 = 0;
    handle->driverErrorDetail = 0;
    handle->requestKind = 0;
    handle->transferStatus = 0;
    handle->allocated = 1;
    handle->transferMode = gGdFsDefaultTransferMode;
    handle->driveStatus = 0;
    handle->errorCode = 0;
    return handle;
}
