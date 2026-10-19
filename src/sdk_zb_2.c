/* VMU file system (vmsfs): name fields, file info, FAT walks. Drive work records are 128 bytes at
   0C2EC578 (names) and 328 bytes at 0C2EE990 (FAT state). */

extern int vmsfs_write_retry(int drive, int block, int buf);
extern int set_fat(int drive, int block, int value);
extern int search_fat_backward(int drive, int value, int lo, int hi);
extern int get_fat(int drive, int block);
extern int vmsfs_fread1(int *fd, char *buf);
extern int vmsfs_read_retry(int drive, int block, char *buf);

extern int direntry(int drive, int i);
extern int check_file_correct(int drive, char *name);
extern int direntry_dirty(int drive, int i);
extern void *memset(void *p, int c, unsigned int n);
extern int search_dir(int drive, char *name, int *info);


/* Delete a file: free its FAT chain (each block marked 0xFFFC), clear its directory entry and mark
   the entry dirty. -251 when it is not found. */
int clear_file(int drive, char *name)
{
    int info[11];
    int i;
    int e;
    int idx;
    int blk;
    int next;

    idx = search_dir(drive, name, info);
    if (idx < 0) {
        return -251;
    }
    e = direntry(drive, idx);
    if (check_file_correct(drive, name) == 0) {
        blk = info[3];
        for (i = 0; i < info[10]; i++) {
            next = (unsigned short)get_fat(drive, blk);
            set_fat(drive, blk, 0xFFFC);
            blk = next;
        }
    }
    memset((void *)e, 0, 32);
    direntry_dirty(drive, idx);
    return 0;
}
