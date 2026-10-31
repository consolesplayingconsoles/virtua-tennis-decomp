/* Straight-line functions with calls and guards (batch gen_yq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_8c0eaf00(int, int, int);
int fileLoadPoll(int, int);
int fileLoadStartOfs(int, int, int, int);
int nlChgModelPolyAttrOn(int);
int nlInitEvent(void);
int nlObjPutMvInit(int);
int sndStopAllExcept(int);
int FUN_8c030376(void);
int FUN_8c0b5da8(int a4, int a5);

int FUN_8c030376(void)
{
    *(unsigned int *)0x8C287D5C = 0x2;
    sndStopAllExcept(0x0);
    nlInitEvent();
    nlObjPutMvInit(0x80);
    nlChgModelPolyAttrOn(0xC9B0000);
    FUN_8c0eaf00(0xFF000000, 0xFF000000, 0xFF000000);
    *(unsigned int *)0x8C2FBE1C = 0x0;
    *(unsigned int *)0x8C2FBE58 = 0x0;
    *(unsigned int *)0x8C2FBE54 = 0x0;
    *(unsigned int *)0x8C20D150 = 0x3;
    return 0x8C20D150;
}

int FUN_8c0b5da8(int a4, int a5)
{
    register int t5;
    register int t6;

    if ((*(int *)0x8C34A1EC) == 0) {
        *(unsigned int *)0x8C34A1EC = 0x1;
        fileLoadStartOfs(0x8CA80000, (*(int *)(((a4 << 2) + 0x8C18911C))), 0x0, a5);
    } else {
        t5 = 0x8C34A1EC;
        t6 = a5;
    }
    return fileLoadPoll(t5, t6);
}
