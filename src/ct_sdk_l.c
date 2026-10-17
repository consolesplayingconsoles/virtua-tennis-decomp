/* Ported from crazy-taxi-decomp (src/sdk_l.c) by scripts/port_equiv.py: only the functions the destination has. */
/* Small library functions (batch l): more backup-library drive wrappers, the system config getters, ADX file helpers,
   Kamui callback and register setters, record-table allocators. */

int vmsfs_c_getstate(int drive);
int vmsfs_findfirst_ex(int d, int a, int b);
int vmsfs_findnext_ex(int d, int a, int b);
int vmsfs_fopen(int d, int a, int b);
int vmsfs_fgetinfo(int d, int a, int b);
int vmsfs_fcreate(int d, int a, int b, int c);
int vmsfs_xcreate(int d, int a, int b, int c);
char *syCfgGetIDAddress(void);
void ADXERR_CallErrFunc(char *msg);
char *adxf_AllocAdxFs(void);
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int adxf_read_sj32(int a, int b, int c);
void adxf_ExecOne(char *p);
int FUN_0c15f460(int a, int b, int c);
int FUN_0c16dd04(int v);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
int kmiReadRegister(int off);
int kmiWriteRegister(int off, int v);
int kmtex_GetTextureLevel(int a);
int kmiCopyToFrameBuffer(int a, int b, int c);
void FUN_0c07d6e0(int a, int b, int c);
void FUN_0c168026(void);
void ADXSJD_Finish(void);
void FUN_0c168936(void);
void thunk_FUN_0c169a7a(void);
void SJMEM_Finish(void);
void SJRBF_Finish(void);
void SJUNI_Finish(void);
int ADXF_Finish(void);


/* The system config's country code (byte 10 of the ID block), through p; -1 when p is null or there is no block. */
int syCfgGetCountryCode(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 48;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[10];
    return 0;
}


int syCfgGetDefaultLanguage(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 0;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[11];
    return 0;
}


int syCfgGetBroadcastType(int *p)
{
    char *id;

    if (!p)
        return -1;
    *p = 48;
    id = syCfgGetIDAddress();
    if (!id)
        return -1;
    *p = id[12];
    return 0;
}


char *adxf_CreateAdxFs(void)
{
    char *p = adxf_AllocAdxFs();

    if (!p)
        return 0;
    p[1] = 1;
    *(int *)(p + 4) = 0;
    *(int *)(p + 28) = 0;
    *(int *)(p + 32) = 0;
    *(int *)(p + 36) = 0;
    p[2] = 0;
    *(int *)(p + 8) = 0;
    p[0] = 1;
    return p;
}


int ADXF_ReadSj32(char *a, int b, int c)
{
    int r;

    ADXCRS_Lock();
    r = adxf_read_sj32((int)a, b, c);
    a[2] = 1;
    ADXCRS_Unlock();
    return r;
}
