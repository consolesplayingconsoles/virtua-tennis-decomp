/* Functions the analysis missed (found by tools/1-2-baseline/missed_funcs.py and read in full): entries of callback tables
   that sat inside a bigger function. Written by hand from the code; cases in tests/missing_a/. */

int nlInitMatrix(int, int);
int nlObjPutInit(void);
int nlMatrixMode(int);
int nlUnitMatrix(void);
int nlPerspective(float, float, float, int);
int resetBackColorZ(int, int, int);
int nlInitEvent(void);
int sndFadeFlagsClear(void);
int entryIsVersus(void);
int fadeScreenStart(int, int, int);
int dbgMenuInit(void);
int matchStart(void);
int FUN_8c0123e8(int a4);

/* the second entry of the three-callback table at 8c10132c: sets up the 3D view, the event list and the match, then runs on
   into the third entry with the argument it was given */
int FUN_8c01233e(int a4)
{
    nlInitMatrix(0x8C285A04, 16);
    nlObjPutInit();
    nlMatrixMode(3);
    nlUnitMatrix();
    nlPerspective(1.3333334f, 0.3f, 300.0f, 7464);
    nlMatrixMode(1);
    resetBackColorZ(0, 0, 0);
    nlInitEvent();
    sndFadeFlagsClear();
    if (entryIsVersus() != 0 && *(int *)0x8C421F60 == 0) {
        fadeScreenStart(2, 1, 15);
    }
    dbgMenuInit();
    matchStart();
    *(int *)0x8C287C54 = 0;
    *(float *)0x8C287A04 = 10.0f;
    *(int *)0x8C287C60 = 0;
    *(int *)0x8C285A00 = -1;
    if (*(int *)0x8C421F60 == 0) {
        *(int *)0x8C287B3C |= 0x8000;
    }
    *(int *)0x8C20D150 = 1;
    return FUN_8c0123e8(a4);
}

int commonViewInit(void);
int sprPutAlpha(int, float);
int thunk_nlSprPut(int);
int fileLoadClose(void);
int fileLoadStart(int, int, int);
int fileLoadPoll(void);
int nlSetCommonTextureOffset(int);
int nlSpriteFreeTextureOnce(int, int, int);
int stageFreeAll(void);
int stageTexSetGarbagedAll(void);
int titleSprTexLoad(void);
int titleSprLoad(void);
int sndSeDecide(void);

#define FRAME (*(int *)0x8C20D15C)
#define MODE (*(int *)0x8C20D150)

/* the title screen's per-frame step (the callback at 8c126ed0): the frame counter at 8c20d15c fades the logo in over frames
   15-30, shows it to 330, loads the next file at 310, and any pad's start/A press (or frame 330 with the file ready) leaves
   for the next mode */
void FUN_8c0e42b4(void)
{
    int f = FRAME;
    int *p;
    if (f < 15) {
        if (f == 0) {
            *(int *)0x8C421F60 = 1;
            *(int *)0x8C1D8638 = 0;
            commonViewInit();
            fadeScreenStart(3, 0, 16);
        }
        if (FRAME == 14) {
            resetBackColorZ(-1, -1, -1);
        }
    } else if (f < 30) {
        sprPutAlpha(0x8C40C5D4, (float)(f - 15) / 15.0f);
    } else if (f <= 330) {
        thunk_nlSprPut(0x8C40C5D4);
    }
    if (FRAME == 310) {
        fileLoadClose();
        fileLoadStart(0x8CA80000, 0x8C126EE8, 0);
        fadeScreenStart(3, 1, 21);
    }
    if (FRAME > 310) {
        if (fileLoadPoll() == 1) {
            *(int *)0x8C1D8638 = 1;
        }
    }
    if (FRAME == 329) {
        resetBackColorZ(0xFF000000, 0xFF000000, 0xFF000000);
    }
    if (FRAME > 330 && *(int *)0x8C1D8638 != 0) {
        nlSetCommonTextureOffset(0);
        nlSpriteFreeTextureOnce(0x8C18281C, 0, 141);
        stageFreeAll();
        stageTexSetGarbagedAll();
        titleSprTexLoad();
        MODE = 2;
        FRAME = 0;
        return;
    }
    if (FRAME < 310) {
        for (p = (int *)0x8C29B898; p < (int *)0x8C29B898 + 4; p++) {
            int *pad = (int *)*p;
            if (!(pad[4] & 8)) {
                continue;
            }
            if (!(pad[2] & 0x200) || !(pad[2] & 0x400) || !(pad[2] & 2) || !(pad[2] & 5)) {
                if (MODE == 3) {
                    continue;
                }
                nlInitEvent();
                *(int *)0x8C20D14C = 0;
                MODE = 2;
                sndSeDecide();
                *(int *)0x8C421F74 = 0;
                *(int *)0x8C421F64 = 0;
                *(int *)0x8C421F68 = 0;
                FRAME = 0;
                *(int *)0x8C1D8278 = 1;
                titleSprLoad();
                fileLoadClose();
                nlSetCommonTextureOffset(0);
                nlSpriteFreeTextureOnce(0x8C18281C, 0, 141);
                return;
            }
        }
    }
    FRAME = FRAME + 1;
}
