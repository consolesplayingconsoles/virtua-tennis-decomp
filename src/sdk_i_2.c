/* Small library functions (batch i): Kamui context and DMA helpers, the system config, vmsfs and fiber setup, ADX/SJ
   stream helpers. */

extern char g_8c462180[];
extern char g_8c464598[];

void *memset(void *p, int c, unsigned int n);
void FUN_0c15887e(int *d, int *s, unsigned int n);
int kmiFBSortQueue(void);
int kmiFBGarbageCollect(void);
int kmiWriteRegister(int off, int v);
int kmiQueryFinishDMA(int ch);
int vmsfs_read_retry(int drive, int a, int b);
int vmsfs_write_retry(int drive, int a, int b);
void mwRnaStop(void *r);
void mwRnaDestroy(void *r);
void FUN_0c170fd0(void);
void adxsjd_clear(char *p);
void adxsjd_decode_exec(char *p);
void adxsjd_decode_prep(char *p);
void FUN_0c174394(void);
void buFbrInit(void);
int buFbrCreateServer(int n);
int buFbrCreateFiber(int server, int a, int b, int c);
void memcpy2(short *d, short *s, int n);
int nlsndStreamGetParam(int a, int b, int c);
int memcmp(void *a, void *b, int n);
void ADX_GetCoefficient(int a, int b, void *c, void *d);
void ADXRNA_SetOutVol(int rna, int vol);


int _fmtout_outerr(int *p)
{
    if (p[0] == 1)
        return 0;
    return ((signed char *)p[1])[16] & 64;
}


void ADXRNA_Destroy(void *rna)
{
    mwRnaStop(rna);
    mwRnaDestroy(rna);
}


void ADXSJD_ExecHndl(char *sjd)
{
    if (sjd[1] == 2) {
        adxsjd_decode_exec(sjd);
        return;
    }
    if (sjd[1] == 1)
        adxsjd_decode_prep(sjd);
}


void fmMngClearBuf(char *p, int n)
{
    while (n > 0) {
        n--;
        *p++ = -1;
    }
}


void memcpy2(short *d, short *s, int n)
{
    while (n > 0) {
        *d++ = *s++;
        n--;
    }
}


int mwlSbGetStreamParam(char *s, int b, int c)
{
    return nlsndStreamGetParam(((int *)*(int *)(s + 28))[1], b, c);
}


/* Byte-swaps n words in place. */
int mpdrv_swaplong(unsigned int *p, int n)
{
    unsigned int v;

    do {
        v = *p;
        *p++ = (v >> 24) | ((v >> 8) & 0xFF00) | ((v << 8) & 0xFF0000) | (v << 24);
    } while (--n);
    return 0;
}


void ADXPD_Stop(int *pd)
{
    pd[3] = 0;
    memset((char *)pd + 40, 0, 8);
}


void ADXPD_SetCoef(char *pd, int b, int a)
{
    ADX_GetCoefficient(a, b, pd + 48, pd + 50);
}


void ADXT_SetOutVol(char *adxt, int vol)
{
    *(short *)(adxt + 64) = vol;
    ADXRNA_SetOutVol(((int *)adxt)[3], vol);
}
