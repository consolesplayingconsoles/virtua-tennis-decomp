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

extern int kmSetFogDensity(int d);
extern int buSaveFile(int a, int b, int c, int d, void *date, int flags);
extern void syRtcGetDate(void *date);

typedef struct {
    int w[2];
} Date8;


extern void ovLockCs_8c200114(int *cs);
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
extern int vmsfs_c_getstate(int drive);
extern void vmsfs_c_setfunc(int drive, int func);
extern void vmsfs_c_setparam(int drive, int a, int b, int c, int d, int e, int f);
extern void vmsfs_c_setfname(int drive, char *name, char *ext);

extern void adxf_SetCmdHstry(int cmd, int when, void *h, int a, int b);
extern int ADXF_Stop(signed char *h);
extern int syG2Read(unsigned int src, void *dst, int size, int n, int e, int f);
extern void syRtcDbgWriteLog(int v);

extern int memcmp(void *a, void *b, int n);
extern void ovLibEntryTbl(void *e);
extern unsigned int fmcalccrc(int n, unsigned char *p);
extern int mwlSbGetStreamParam(void *h, int item, int x);
extern int syBtFlRead(int addr, unsigned char *buf, int n);

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

extern int syBtFlDeleteSct(int a);
extern int syBtFlWrite(int a, char *b, int n);
extern void fmMngClearBuf(int a, int b);

extern int kmtex_GetTextureLevel(int a, int b);
extern int kmiCopyFromFrameBuffer(char *dst, int off, int n);
extern int kmiCopyToFrameBuffer(int off, char *src, int n);


extern int kmiCopyFromPVRMemory(int a, int off, int n);


/* Destroy every live fiber (292-byte records from +528; count at +520), then clear the server. */


/* Kill every live fiber at or below the given level (+16). */


/* Hand the stream header to the RNA and return what it reports back. */


/* Playing time in hundredths of a second (samples / rate * 100). */


/* A file's size in 2048-byte sectors (rounded up) through gdFsGetDirInfo; returns its result. */


/* Clear a 100-byte handle. */


/* Clear a 72-byte file handle. */


/* Does the port's device report state s (+32)? */


/* Clear an amplifier inside the ADX critical section. */


/* Split a chunk: the first n bytes (at most) into a, the rest into b. */


/* Day of the week (0 = Sunday) by Zeller's rule; January and February count as months 13 and 14 of
   the year before. */


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


/* Stop a playing stream inside the RNA critical section: play and transfer off, buffer cleared,
   both state bytes (+1, +7) cleared. */


/* Queue a VMU load (operation 11): file name, buffer and size; -1 while the drive is busy. */


/* Queue a partial VMU load (operation 14): as buLoadFile with a start offset. */


/* Queue a VMU executable rewrite (operation 20), arguments as buLoadFileEx. */


/* Close an ADX file handle (stopping a read in progress) inside the critical section, logged before
   and after. */


/* Read the AICA clock (two 16-bit halves) into *count; -1 when the read fails. */


/* Read items 7 and 8 of a stream header: the first as is, the second as a level in dB (3 per step
   under 15, -45 for none); both into out and the handle (+72, +76). */


/* Queue a VMU attribute change (operation 10): copy flags and the 8-bit attribute. */


/* Read a peripheral driver setting by number; -1 for an unknown one. */
