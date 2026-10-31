/* Fiber server teardown, the MMU table clear and ADX amplifier start. */

extern void _destructFiber(char *srv, char *fbr);
extern void buFbrKillFiber(char *srv, int i);
extern void *memset(void *p, int c, unsigned int n);
extern void syMmuDeleteEntry(int e);

extern void mwRnaSetStmHdInfo(int h, int info, int *out);
extern void syRtcGetDate(void *date);
extern void syRtcDateToCount(void *date, int *count);
extern void ADXT_GetTime(int h, int *t, int *f);
extern int gdFsGetDirInfo(int dir, int *info);

extern int gdFsLoadDir(int dir, int buf);
extern int *mpdrv_get_device(int port);
extern void *memmove(void *d, void *s, unsigned int n);
extern void ADXCRS_Lock(void);
extern void ADXCRS_Unlock(void);

typedef struct {
    int ptr;
    int len;
} Chunk;

extern int syBtCfgSet(int item, int value);
extern int kmiFBgetfreemem(int *a, int *b, int *c, int *d);

extern void kmSetFogDensity(int d);
extern void FUN_0c158860(int a, int *v, int n);
extern int buSaveFile(int a, int b, int c, int d, void *date, int flags);
extern void syRtcGetDate(void *date);

typedef struct {
    int w[2];
} Date8;

extern int FUN_0c156934(int big, int size, int a, int *b, int e, int f);

extern void FUN_0c1717d8(int *cs);
extern void mwRnaSetPlaySw(int *h, int on);
extern void mwRnaSetTransSw(int *h, int on);
extern void mwlRnaClearBuf(int *h);
extern void mwRnaUnlockCs(int *cs);
extern void mwRnaErrCallFunc(int *h, int b, int c, int d, char *msg);

extern int syRtcAicaSetWriteFlag(void);
extern int syRtcAicaSetDateLo(int lo);
extern int syRtcAicaSetDateHi(int hi);
extern unsigned int syRtcGetCountForce(void);
extern void kmiFBgetfreememEx(int *a, int *b);
extern int FUN_0c156e0a(int big, int a, int b);
extern int vmsfs_c_getstate(int drive);
extern void vmsfs_c_setfunc(int drive, int func);
extern void vmsfs_c_setparam(int drive, int a, int b, int c, int d, int e, int f);
extern void vmsfs_c_setfname(int drive, char *name, char *ext);

extern void adxf_SetCmdHstry(int cmd, int when, void *h, int a, int b);
extern int ADXF_Stop(signed char *h);
extern int syG2Read(unsigned int src, void *dst, int size, int n, int e, int f);
extern void syRtcDbgWriteLog(int v);

extern int FUN_0c0813e0(void *a, void *b, int n);
extern void ovLibEntryTbl(void *e);
extern void thunk_FUN_0c1708b2(void *d, void *s, int n);
extern unsigned int fmcalccrc(int n, unsigned char *p);
extern int mwlSbGetStreamParam(void *h, int item, int x);
extern int FUN_0c1677d8(void);
extern int FUN_0c170834(int addr, unsigned char *buf, int n);
extern void FUN_0c14f182(void *p, int n);

extern int mpdrv_get_nopcount(int a, int b, int c, int d);
extern int mpdrv_get_timeout(int a, int b, int c, int d);
extern int mpdrv_get_dreqcount(int a, int b, int c, int d);
extern int mpdrv_get_speed(int a, int b, int c, int d);
extern int mpdrv_get_debugmode(int a, int b, int c, int d);
extern int mpdrv_get_swapmode(int a, int b, int c, int d);
extern int mpdrv_get_optimize(int a, int b, int c, int d);
extern int mpdrv_get_rootplay(int a, int b, int c, int d);
extern int mpdrv_get_gunmode(int a, int b, int c, int d);
extern int mpdrv_get_autoflash(int a, int b, int c, int d);
extern int gdFsGetSearchID(char *name);
extern int thunk_FUN_0c15fa1c(char *name, char *entry);
extern int FUN_0c15fa32(char *name, char *entry);

extern unsigned char DECtoBCD(int v);

extern void kmProcessVertexRenderState(int *s);
extern void kmSetVertexRenderState(int *s);

extern int vmsio_isready(int drive);
extern void vmsfs_unmount(int drive);
extern int vmsio_ismount(int drive);
extern int buIsFormat(int drive);
extern int check_isopen(int drive, char *name);
extern int search_dir(int drive, char *name, int *info);

extern int syChainAddHandler(int event, void *func, int pri, int arg);
extern void kdVbInHandler(void);
extern void kdDmaEndHandler0(void);
extern void kdDmaEndHandler1(void);
extern void kdVbOverHandler(void);

extern void kdInitSystem(int a, int b);
extern int kdGetDeviceInfo(int port);
extern void _pd_peripheral_set_null(void *slot);

extern int kmSetBackGroundRenderState(int *s);

extern void ADXERR_CallErrFunc(char *msg);
extern void ADXSTM_Stop(int h);
extern void ADXSTM_GetCurOfst(int h, int *ofs);
extern void adxf_CloseSjStm(signed char *h);

extern int FUN_0c17085c(int a);
extern int FUN_0c170848(int a, char *b, int n);
extern void fmMngClearBuf(int a, int b);
extern int FUN_0c1709a6(char *st);

extern int kmtex_GetTextureLevel(int a, int b);
extern int kmiCopyFromFrameBuffer(char *dst, int off, int n);
extern int kmiCopyToFrameBuffer(int off, char *src, int n);
extern void FUN_0c15888e(void *p);

extern int *FUN_0c157220(int pos, int *out);

extern int kmiCopyFromPVRMemory(int a, int off, int n);
extern int FUN_0c15ca40(int a, int off, int b, int c);
extern int FUN_0c15c98a(int a, int off, int b);


/* Destroy every live fiber (292-byte records from +528; count at +520), then clear the server. */
void buFbrDestroyServer(char *srv)
{
    char *f = srv + 528;
    int i;

    for (i = 0; i < *(int *)(srv + 520); i++) {
        if (*(int *)(f + 12)) {
            _destructFiber(srv, f);
        }
        f += 292;
    }
    memset(srv, 0, 3452);
}


/* Kill every live fiber at or below the given level (+16). */
void buFbrKillFiberLevel(char *srv, int level)
{
    char *f = srv + 528;
    int i;

    for (i = 0; i < *(int *)(srv + 520); i++) {
        if (*(int *)(f + 12) && !(*(int *)(f + 16) > level)) {
            buFbrKillFiber(srv, i);
        }
        f += 292;
    }
}


/* Hand the stream header to the RNA and return what it reports back. */
int ADXRNA_SetStmHdInfo(int h, int info)
{
    int out;

    mwRnaSetStmHdInfo(h, info, &out);
    return out;
}


/* Playing time in hundredths of a second (samples / rate * 100). */
int ADXT_GetTimeReal(int h)
{
    int t;
    int f;

    ADXT_GetTime(h, &t, &f);
    return (int)((float)t / (float)f * 100.0f);
}


/* A file's size in 2048-byte sectors (rounded up) through gdFsGetDirInfo; returns its result. */
int ADXSTM_GetFsizeSct(int dir, int *sct)
{
    int info[3];
    int r;

    r = gdFsGetDirInfo(dir, info);
    *sct = (info[1] + 2047) / 2048;
    return r;
}


/* Clear a 100-byte handle. */
void ADXSTMF_Destroy(void *h)
{
    memset(h, 0, 100);
}


/* Clear a 72-byte file handle. */
void close_file_handle(void *h)
{
    memset(h, 0, 72);
}


/* Does the port's device report state s (+32)? */
int mpdrv_stat(int port, int s)
{
    return mpdrv_get_device(port)[8] == s;
}


/* Clear an amplifier inside the ADX critical section. */
void ADXAMP_Destroy(void *amp)
{
    if (amp) {
        ADXCRS_Lock();
        memset(amp, 0, 48);
        ADXCRS_Unlock();
    }
}


/* Split a chunk: the first n bytes (at most) into a, the rest into b. */
void SJ_SplitChunk(Chunk *src, int n, Chunk *a, Chunk *b)
{
    *a = *src;
    b->len = a->len;
    if (a->len > n) {
        a->len = n;
    }
    b->ptr = a->ptr + a->len;
    b->len -= a->len;
}


/* Day of the week (0 = Sunday) by Zeller's rule; January and February count as months 13 and 14 of
   the year before. */
int syRtcMakeDayOfWeek(int year, int month, int day)
{
    unsigned short y;

    if ((unsigned char)month <= 2) {
        month += 12;
        year--;
    }
    y = year;
    return ((y >> 2) + ((unsigned char)month * 13 + 8) / 5 + y + (unsigned char)day - 15) % 7;
}


/* Fog density as the kit's 8.8 form: the float's mantissa top byte (with the hidden bit) and its
   exponent, denormalised for values under 1. Returns the value set. */
int nlFogDensityF(float d)
{
    int bits = *(int *)&d;
    int e = (bits >> 23) - 127;
    int m = (unsigned char)((short)((unsigned int)bits >> 16) | 128);
    int v;

    if (e < 0) {
        m >>= -e;
        e = 0;
    }
    v = (m << 8) | (unsigned char)e;
    kmSetFogDensity(v);
    return v;
}


/* Age of the moon in days: seconds since a known new moon (count 0x5CB417D1) modulo the synodic
   month (2551423 s), counted back for earlier dates. */
unsigned int syRtcMakeAgeOfMoon(void *date)
{
    unsigned int c;
    unsigned int r;

    syRtcDateToCount(date, (int *)&c);
    if (c >= 0x5CB417D1) {
        r = (c + 0xA34BE82F) % 0x26EE7F;
    } else {
        r = 0x26EE7F - (0x5CB417D1 - c) % 0x26EE7F;
    }
    return r / 86400;
}


/* Stop a playing stream inside the RNA critical section: play and transfer off, buffer cleared,
   both state bytes (+1, +7) cleared. */


/* Queue a VMU load (operation 11): file name, buffer and size; -1 while the drive is busy. */
int buLoadFile(int drive, char *name, int buf, int size)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 11);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, 0, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}


/* Queue a partial VMU load (operation 14): as buLoadFile with a start offset. */
int buLoadFileEx(int drive, char *name, int buf, int size, int start)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 14);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, start, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}


/* Queue a VMU executable rewrite (operation 20), arguments as buLoadFileEx. */
int buRewriteExecFile(int drive, char *name, int buf, int size, int start)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 20);
    vmsfs_c_setparam(drive, drive, (int)name, buf, size, start, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}


/* Close an ADX file handle (stopping a read in progress) inside the critical section, logged before
   and after. */
void ADXF_Close(signed char *h)
{
    adxf_SetCmdHstry(3, 0, h, -1, -1);
    if (h) {
        ADXCRS_Lock();
        if (h[1] == 2) {
            ADXF_Stop(h);
        }
        memset(h, 0, 48);
        ADXCRS_Unlock();
        adxf_SetCmdHstry(3, 1, h, -1, -1);
    }
}


/* Read the AICA clock (two 16-bit halves) into *count; -1 when the read fails. */
int syRtcAicaGetCount(unsigned int *count)
{
    int w[2];

    if (syG2Read(0xA0710000, w, 4, 2, 1, 1)) {
        return -1;
    }
    *count = ((w[0] << 16) & 0xFFFF0000) | (unsigned short)w[1];
    syRtcDbgWriteLog(w[0]);
    syRtcDbgWriteLog(w[1]);
    return 0;
}


/* Read items 7 and 8 of a stream header: the first as is, the second as a level in dB (3 per step
   under 15, -45 for none); both into out and the handle (+72, +76). */
void mwlSbGetFx(char *h, int *a, int *db)
{
    int x = mwlSbGetStreamParam(h, 7, 0);
    int y = mwlSbGetStreamParam(h, 8, 0);

    if (y <= 0) {
        *db = -45;
    } else if (y >= 15) {
        *db = 0;
    } else {
        *db = (y - 15) * 3;
    }
    *a = x;
    *(int *)(h + 72) = x;
    *(int *)(h + 76) = *db;
}


/* Queue a VMU attribute change (operation 10): copy flags and the 8-bit attribute. */
int buSetFileAttr(int drive, char *name, unsigned short copy, unsigned char attr)
{
    if (vmsfs_c_getstate(drive)) {
        return -1;
    }
    vmsfs_c_setfunc(drive, 10);
    vmsfs_c_setparam(drive, drive, (int)name, copy, attr, 0, 0);
    vmsfs_c_setfname(drive, name, name);
    return 0;
}


/* Read a peripheral driver setting by number; -1 for an unknown one. */
int kdGetDriverMode(int mode, int b, int c, int d)
{
    switch (mode) {
    case 1:
        return mpdrv_get_nopcount(mode, b, c, d);
    case 2:
        return mpdrv_get_timeout(mode, b, c, d);
    case 4:
        return mpdrv_get_dreqcount(mode, b, c, d);
    case 3:
        return mpdrv_get_speed(mode, b, c, d);
    case 6:
        return mpdrv_get_debugmode(mode, b, c, d);
    case 5:
        return mpdrv_get_swapmode(mode, b, c, d);
    case 0:
        return mpdrv_get_optimize(mode, b, c, d);
    case 7:
        return mpdrv_get_rootplay(mode, b, c, d);
    case 8:
        return mpdrv_get_gunmode(mode, b, c, d);
    case 9:
        return mpdrv_get_autoflash(mode, b, c, d);
    }
    return -1;
}
