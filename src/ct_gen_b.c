/* Ported from crazy-taxi-decomp (src/gen_b.c) by scripts/port_equiv.py: only the functions the destination has. */



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


int ADXB_GetPcmBuf(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x3C));
    return t0;
}


int ADXB_GetFormat(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0xA8));
    return t0;
}


int ADXB_GetNumChan(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xE));
    return t0;
}


int ADXB_GetBlkLen(int a4)
{
    int t0;

    t0 = *(signed char *)((a4 + 0xF));
    return t0;
}


int ADXB_GetTotalNumSmpl(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x18));
    return t0;
}


int ADXB_GetCof(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x1C));
    return t0;
}


int ADXB_GetNumLoop(int a4)
{
    int t0;

    t0 = *(short *)((a4 + 0x24));
    return t0;
}


int ADXB_GetLpStartPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x28));
    return t0;
}


int ADXB_GetLpEndPos(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x30));
    return t0;
}


int ADXB_GetLpEndOfst(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x34));
    return t0;
}


int FUN_0c17217a(int a4)
{
    int t0;

    t0 = *(int *)((a4 + 0x5C));
    return t0;
}


int FUN_0c1721da(int a4)
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
