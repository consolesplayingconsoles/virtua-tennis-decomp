/* Small library functions (batch h): NAOMI library setters and stubs, Kamui's register access and system config flags,
   the backup library's jumps into vmsfs, ADX getters and setters. */

extern int *gAdxfPartitionInfoTable[];

void ovMdlEntryTbl(int a);
void ovMdlDeleteTbl(int a);
int buExecServer(void);
int buMount(int drive);
int vmsfs_c_setcompletecallback(void *f);
int vmsfs_c_setprogresscallback(void *f);
int vmsfs_c_setcallbackparam(void *p);
int vmsfs_ismount(int drive);
int vmsfs_isformat(int drive);
int vmsfs_setretry(int n);


/* A language character ('0'...) to its number. */


int ADXT_GetOutPan(char *adxt, int ch)
{
    return ((short *)(adxt + 66))[ch];
}


int ADXF_GetPtinfoSize(int ptid)
{
    return gAdxfPartitionInfoTable[ptid][1];
}
