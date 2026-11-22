/* Small library functions (batch k): triangle-put bit fields, Kamui context and callback setters, the backup library's
   drive wrappers, ADX stream helpers, record-list helpers. */

int kmiWriteRegister(int off, int v);
int kmiRegisterCallback(int dev, int kind, void *f, void *p);
int kmiVQFBfree(int *s);
int kmiFBfree(int a);
int kmiPurgeMemory(char *p, int n);
int kmiCopyToPVRMemory(int off, int *src, unsigned int n);
int vmsfs_c_getstate(int drive);
int vmsfs_unmount(int d);
int vmsfs_getinfo(int d, int p);
int vmsfs_diskfree(int d, int p);
int vmsfs_findfirst(int d, int p);
int vmsfs_findnext(int d, int p);
int vmsfs_xfind(int d, int p);
int vmsfs_fisexist(int d, int p);
int vmsfs_fgetsize(int d, int p);
int vmsfs_setwork(int d);
int buMount(int d);
int kdGetDeviceInfo(int d);
int gdFsTell(int h);
int gdFsGetDirInfo(int h, int *info);
int ADXSTM_Tell(int *h);
int ADXSTM_Seek(int h, int pos);
int ADXSJD_GetLpStartOfst(int a);
int toupper_(int c);
int gdFsToUpper(int c);

extern char gVmsVolumeStates[];


int convert_support(unsigned int x)
{
    unsigned int r = (x >> 10) & 0x003FFF00;

    if (x & 0x00020000)
        r |= 0xF0;
    if (x & 0x00010000)
        r |= 0xF;
    return r;
}


int buUnmount(int d)
{
    if (vmsfs_c_getstate(d))
        return -1;
    return vmsfs_unmount(d);
}


int buMountDisk(int d)
{
    int r = vmsfs_setwork(d);

    if (r)
        return r;
    return buMount(d);
}


int pdVibIsReady(int d)
{
    int *info = (int *)kdGetDeviceInfo(d);

    if (*info & 0x100)
        return 1;
    return 0;
}


/* A name's hash: the sum of its upper-cased characters plus 218, shifted down by 2 and cut to a byte. */
int gdFsGetSearchID(char *s)
{
    unsigned int h = 218;

    while (*s)
        h += (unsigned char)gdFsToUpper(*s++);
    return (unsigned char)(h >> 2);
}


/* 192 bytes from 8 source bytes each: bit 3 of each source byte, most significant first. */
void pdVmsLcdBltAsm(char *dst, char *src)
{
    int i, j;

    for (i = 0; i < 192; i++) {
        int v = 0, m = 128;

        for (j = 0; j < 8; j++) {
            if (*src++ & 8)
                v |= m;
            m >>= 1;
        }
        *dst++ = v;
    }
}


