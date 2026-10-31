/* Straight-line functions with calls and guards (batch gen_s): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXF_Close(int);
int ADXF_GetStat(int);
int ADXF_LoadPartition(int, int, int, int);
int ADXF_OpenAfs(int, int);
int ADXF_ReadNw32(int, int, int);
int nlSetCommonTextureOffset(int);
int texLoadIndexed(int, int);


void fmMngMcpy4(int sourceAddress, int destinationAddress, int byteCount)
{
    int divisionAdjustedByteCount;
    int sourceCursor;
    int destinationCursor;
    int wordsRemaining;
    int hasMoreWords;
    int copiedWord;

    divisionAdjustedByteCount = byteCount;
    if ((int)byteCount < 0) {
        divisionAdjustedByteCount = (byteCount + 0x3);
    }
    sourceCursor = sourceAddress;
    destinationCursor = destinationAddress;
    wordsRemaining = ((divisionAdjustedByteCount >> 1) >> 1);
    for (;;) {
        hasMoreWords = ((int)wordsRemaining > 0);
        wordsRemaining = (wordsRemaining - 1);
        if (!hasMoreWords) break;
        copiedWord = *(int *)((sourceCursor + 0x0));
        sourceCursor = (sourceCursor + 0x4);
        *(unsigned int *)((destinationCursor + 0x0)) = copiedWord;
        destinationCursor = (destinationCursor + 0x4);
    }
}


void fmMngNum2Bit(int usedRecordCount, int bitmapAddress, int bitmapBlockCount)
{
    int bytesRemaining;
    int usedBitsRemaining;
    int bitmapCursor;
    int bitmapByteAccumulator;
    int bitsRemaining;

    bytesRemaining = (((bitmapBlockCount << 2) << 2) << 2);
    usedBitsRemaining = usedRecordCount;
    bitmapCursor = bitmapAddress;
    bitmapByteAccumulator = bitmapBlockCount;
    while ((int)bytesRemaining > 0) {
        if ((int)usedBitsRemaining >= (int)0x8) {
            *(unsigned char *)((bitmapCursor + 0x0)) = 0x0;
            bitmapCursor = (bitmapCursor + 0x1);
            usedBitsRemaining = (usedBitsRemaining - 8);
        } else {
            if ((int)usedBitsRemaining > 0) {
                bitsRemaining = 0x8;
                do {
                    bitmapByteAccumulator = (bitmapByteAccumulator << 1);
                    if ((int)usedBitsRemaining > 0) {
                        usedBitsRemaining = (usedBitsRemaining - 1);
                    } else {
                        bitmapByteAccumulator = (bitmapByteAccumulator | 0x1);
                    }
                    bitsRemaining = (bitsRemaining - 0x1);
                } while (bitsRemaining != 0);
                *(unsigned char *)((bitmapCursor + 0x0)) = bitmapByteAccumulator;
            } else {
                *(unsigned char *)((bitmapCursor + 0x0)) = 0xFFFFFFFF;
            }
            bitmapCursor = (bitmapCursor + 0x1);
        }
        bytesRemaining = (bytesRemaining - 1);
    }
}
