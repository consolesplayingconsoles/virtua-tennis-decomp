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
int ccitt_updcrc(int a, int b, int c);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
int kmiReadRegister(int off);
int kmiWriteRegister(int off, int v);
int kmtex_GetTextureLevel(int a);
int kmiCopyToFrameBuffer(int a, int b, int c);
void ADXSJD_Finish(void);
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


