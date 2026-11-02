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


