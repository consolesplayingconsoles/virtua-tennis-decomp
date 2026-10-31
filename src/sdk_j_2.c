/* Small library functions (batch j): matrix and line helpers, Kamui vertex buffer and callback setters, the backup and
   system config queries, ADX getters. */

float nlCosf(float a);
float nlSinf(float a);
void FUN_0c078450(float s, float c);
void nlTranslate(float x, float y, float z);
void FUN_0c07d450(int a, int b, int c);
int kmiQueryFinishDMA(int ch);
int kmiWriteRegister(int off, int v);
void kmiUnloadDevice(void);
void kmiRegisterCallback(int dev, int kind, void *f, void *p);
int vmsfs_c_getstate(int drive);
int kbCfgIni(int a);
int kbCfgGetId(void);
int ADXSJD_GetTotalNumSmpl(int sjd);
int FUN_0c16883e(int sjd);
int ADXSJD_GetNumChan(int sjd);
void ADXERR_CallErrFunc(char *msg);


/* A translation by minus the vector v. */
void nlTranslateNV(float *v)
{
    nlTranslate(-v[0], -v[1], -v[2]);
}


int buStat(int drive)
{
    if (vmsfs_c_getstate(drive))
        return -1;
    return 0;
}


int syCfgGetIDAddress(void)
{
    if (kbCfgIni(0))
        return 0;
    return kbCfgGetId();
}


/* 1 when the n bytes at p are all 0. */
int _allzero(char *p, int n)
{
    int i;

    for (i = 0; i < n; i++, p++)
        if (*p)
            return 0;
    return 1;
}
