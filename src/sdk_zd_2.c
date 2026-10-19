/* Functions whose control flow the generator cannot follow (an unconditional jump over a block). */

extern void ADXSTM_Stop(int *h);
extern void gdFsClose(int fd);
extern void FUN_0c1689c0(int *h);

extern void kmfSetFatalErrorCallback(void *f);

extern void set_file_info(unsigned char *dir, void *info);
extern int search_fat(int drive, int value);
extern int check_fat_xross(int drive, int block);
extern int set_fat(int drive, int block, int value);


/* Stop the stream, close its file if it has one, then release the handle. */
void ADXSTM_Close(int *h)
{
    if (h) {
        ADXSTM_Stop(h);
        if (h[2]) {
            gdFsClose(h[2]);
        }
        FUN_0c1689c0(h);
    }
}


/* A free FAT block whose chain does not cross a used one; each crossing block found on the way is
   marked 0xFFFA. -1 when none is left. */
int search_fat_free_xross(int drive)
{
    int b;

    for (;;) {
        b = search_fat(drive, 0xFFFC);
        if (b < 0) {
            return -1;
        }
        if (check_fat_xross(drive, b) >= 0) {
            return b;
        }
        set_fat(drive, b, 0xFFFA);
    }
}
