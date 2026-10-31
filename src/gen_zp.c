/* Written by hand: a load wrapper that hands its caller's two arguments to fileLoadStart (the family of plPicLoad, whose
   own copies load the arguments themselves; this entry is reached with them already in r4 and r5). */

int fileLoadStart(int, int, int);
int fileLoadPoll(void);
int FUN_8c0b5d12(int a4, int a5);

int FUN_8c0b5d12(int a4, int a5)
{
    if (*(int *)0x8C34A1EC == 0) {
        *(int *)0x8C34A1EC = 1;
        fileLoadStart(a4, a5, 0);
    }
    return fileLoadPoll();
}
