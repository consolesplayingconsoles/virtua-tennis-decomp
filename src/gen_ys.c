/* Straight-line functions with calls and guards (batch gen_ys): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int charaTexLoad(int, int);
int nlObjPutFreeTextureOnce(int);
int nlSetCommonTextureOffset(int);
int nlWaitVSync(void);
int plPicLoad(int);
int sprSet173Load(int);
int FUN_8c0b31c2(void);
int FUN_8c0c6440(void);
int FUN_8c018102(void);

int FUN_8c0b31c2(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        t1 = plPicLoad(t0);
        if (t1 != 1) {
            nlWaitVSync();
            continue;
        }
        t3 = sprSet173Load(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x12) {
            break;
        }
    }
    return t3;
}

int FUN_8c0c6440(void)
{
    register int t1;
    register int t0;

    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)(*(int *)0x8C287ADC)) {
            break;
        }
        t0 = 0xC58;
        t0 = (charaTexLoad((*(int *)((((t1 * 0xD78) + 0x8C287D84) + t0))), 0x0));
        t1 = (t1 + 0x1);
    }
    return t0;
}

int FUN_8c018102(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    nlSetCommonTextureOffset(0x320);
    t1 = 0x0;
    t2 = 0x8C13574C;
    for (;;) {
        t3 = *(int *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t4 = nlObjPutFreeTextureOnce(t3);
        t1 = (t1 + 0x1);
        if ((unsigned int)t1 >= (unsigned int)0x280) {
            break;
        }
    }
    return t4;
}
