/* Straight-line functions with calls and guards (batch gen_aq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int colliObjInit(int, int, int, int, int, float);
int motionSet(int, int, int, int, int, int, float);
int mwRnaErrCallFunc(int, ...);
int netJudgeInit(void);
int mwRnaSetSfreq(int a4, int a5);


int mwRnaSetSfreq(int a4, int a5)
{
    int t1;
    int t4;

    if (a4 == 0) {
        return (mwRnaErrCallFunc(0x8C20AC30));
    }
    t1 = *(int *)((a4 + 0x38));
    t4 = ((int (*)(int, int))((*(int *)(((*(int *)((t1 + 0x0))) + 0x24)))))(t1, a5);
    *(unsigned int *)((a4 + 0xC)) = a5;
    return t4;
}
