/* Straight-line functions with calls and guards (batch gen_da): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int _builtin_tas(char *);
int kdRecvFrame(void);
int mpdrv_dpf(int, ...);
int mpdrv_set_allstatreq(int);
int mpdrv_set_arctrl(int, int);
int mpdrv_set_bread(int, int, int, int, int);
int mpdrv_set_dkill(int);
int mpdrv_set_dreset(int);
int mpdrv_set_ft4ctrl(int, int);
int mpdrv_set_getcond(int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int mpdrv_set_getminfo(int, int, int);
int mpdrv_set_hreset_ns(int);
int mpdrv_set_setcond(int, int, int, int);
int mpdrv_set_transagain(int);
int mwRnaErrCallFunc(int, ...);
int nlGetMatrix(int);
int nlLoadMatrix(int, float, float, float, float, float, float);
void nlCopyMatrix(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9);
int mpdrv_set_getlerr(int a4, int a5, int a6, int a7, int a8);
int kdSetBlockRead(int a4, int a5, int a6, int a7, int a8);
int mwRnaGetPlaySw(int a4);
int kdSetAllStatusRequest(int a4);
int kdSetDeviceReset(int a4);
int kdSetDeviceKill(int a4);
int kdSetGetCondition(int a4, int a5);
int kdSetGetMediaInfo(int a4, int a5, int a6);
int kdSetARControl(int a4, int a5);
int kdSetFT4Control(int a4, int a5);
int kdSetSetCondition(int a4, int a5, int a6, int a7);
int kdSetTransmitAgain(int a4);
int mwRnaGetNumRoom(int a4);
int mwRnaIsPause(int a4);
int mwRnaGetStat(int a4);
int mwRnaGetBitPerSmpl(int a4);
int mpdrv_set_hreset(int a4);

void nlCopyMatrix(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int t0;
    int t1;
    int t2;
    float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            nlLoadMatrix(a5, f4, f5, f6, f7, f8, f9);
    return;
        }
        return;
    }
    if (a5 == 0) {
        nlGetMatrix(a4);
    return;
    }
    t0 = 0x10;
    t1 = a4;
    t2 = a5;
    for (;;) {
        u3 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (t0 - 0x1);
        *(float *)((t1 + 0x0)) = u3;
        t1 = (t1 + 0x4);
        if (t0 == 0) {
            break;
        }
    }
}

int mpdrv_set_getlerr(int a4, int a5, int a6, int a7, int a8)
{
    int t2;

    if (_builtin_tas((char *)(*(int *)0x8C1FEB48)) == 0) {
        mpdrv_dpf(0x8C20AFF0);
        return 0xFFFFFFFE;
    }
    t2 = mpdrv_set_getlerr_ns(a4, a5, a6, a7, a8);
    *(unsigned char *)(((*(int *)0x8C1FEB48) + 0x0)) = 0x0;
    return t2;
}

int kdSetBlockRead(int a4, int a5, int a6, int a7, int a8)
{
    int t0;

    t0 = mpdrv_set_bread(a4, a5, a6, a7, a8);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int mwRnaGetPlaySw(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
        return 0xFFFFFFFF;
    }
    return ((0x2 & (unsigned char)(*(signed char *)((a4 + 0x1)))) >> 1);
}

int kdSetAllStatusRequest(int a4)
{
    int t0;

    t0 = mpdrv_set_allstatreq(a4);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceReset(int a4)
{
    int t0;

    t0 = mpdrv_set_dreset(a4);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetDeviceKill(int a4)
{
    int t0;

    t0 = mpdrv_set_dkill(a4);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetCondition(int a4, int a5)
{
    int t0;

    t0 = mpdrv_set_getcond(a4, a5);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetGetMediaInfo(int a4, int a5, int a6)
{
    int t0;

    t0 = mpdrv_set_getminfo(a4, a5, a6);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetARControl(int a4, int a5)
{
    int t0;

    t0 = mpdrv_set_arctrl(a4, a5);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int kdSetFT4Control(int a4, int a5)
{
    int t0;

    t0 = mpdrv_set_ft4ctrl(a4, a5);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}


int kdSetTransmitAgain(int a4)
{
    int t0;

    t0 = mpdrv_set_transagain(a4);
    if ((*(int *)(((*(int *)0x8C47317C) + 0x10E8))) != 0) {
        kdRecvFrame();
    }
    return t0;
}

int mwRnaGetNumRoom(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
        return 0xFFFFFFFF;
    }
    return ((*(int *)((a4 + 0x28))) - (*(int *)((a4 + 0x34))));
}

int mwRnaIsPause(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
        return 0x0;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x7)));
}

int mwRnaGetStat(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
        return 0xFFFFFFFF;
    }
    return (unsigned char)(*(signed char *)((a4 + 0x1)));
}

int mwRnaGetBitPerSmpl(int a4)
{
    if (a4 == 0) {
        mwRnaErrCallFunc(0x8C20AC30);
        return 0xFFFFFFFF;
    }
    return (*(int *)((a4 + 0x8)));
}

int mpdrv_set_hreset(int a4)
{
    return mpdrv_set_hreset_ns(a4);
}
