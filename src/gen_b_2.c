int SJRBF_GetBufPtr(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x1C));
    return t0;
}


int SJRBF_GetXtrSize(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x24));
    return t0;
}


int ADXB_GetPcmBuf(int decoderAddress)
{
    int pcmBufferAddress;

    pcmBufferAddress = *(int *)((decoderAddress + 0x3C));
    return pcmBufferAddress;
}


int ADXB_GetFormat(int decoderAddress)
{
    int audioFormat;

    audioFormat = *(short *)((decoderAddress + 0xA8));
    return audioFormat;
}


int ADXB_GetNumChan(int decoderAddress)
{
    int channelCount;

    channelCount = *(signed char *)((decoderAddress + 0xE));
    return channelCount;
}


int ADXB_GetBlkLen(int decoderAddress)
{
    int blockLength;

    blockLength = *(signed char *)((decoderAddress + 0xF));
    return blockLength;
}


int ADXB_GetTotalNumSmpl(int decoderAddress)
{
    int totalSampleCount;

    totalSampleCount = *(int *)((decoderAddress + 0x18));
    return totalSampleCount;
}


int ADXB_GetCof(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x1C));
    return t0;
}


int ADXB_GetNumLoop(int decoderAddress)
{
    int loopCount;

    loopCount = *(short *)((decoderAddress + 0x24));
    return loopCount;
}


int ADXB_GetLpStartPos(int decoderAddress)
{
    int loopStartPosition;

    loopStartPosition = *(int *)((decoderAddress + 0x28));
    return loopStartPosition;
}


int ADXB_GetLpEndPos(int decoderAddress)
{
    int loopEndPosition;

    loopEndPosition = *(int *)((decoderAddress + 0x30));
    return loopEndPosition;
}


int ADXB_GetLpEndOfst(int decoderAddress)
{
    int loopEndOffset;

    loopEndOffset = *(int *)((decoderAddress + 0x34));
    return loopEndOffset;
}


int mwlSbGetGain(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x5C));
    return t0;
}


int mwlSbGetDrctLvl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x64));
    return t0;
}


int ADXPD_GetStat(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0xC));
    return t0;
}
