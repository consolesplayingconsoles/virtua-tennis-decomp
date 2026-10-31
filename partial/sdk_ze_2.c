
void mwRnaStop(int *h, int b, int c, int d)
{
    int cs;

    if (!h) {
        mwRnaErrCallFunc(h, b, c, d, (char *)0x0C176680);
        return;
    }
    if (((unsigned char *)h)[1]) {
        FUN_0c1717d8(&cs);
        mwRnaSetPlaySw(h, 0);
        mwRnaSetTransSw(h, 0);
        mwlRnaClearBuf(h);
        ((unsigned char *)h)[7] = 0;
        ((unsigned char *)h)[1] = 0;
        mwRnaUnlockCs(&cs);
    }
}
