/* Straight-line functions with calls and guards (batch gen_ag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int commonEtcTexLoad(void);
int commonSprInitAll(void);
int fileLoadPoll(int, int, int, int);
int fileLoadStart(int, int, int);
int motFileLoadBegin(void);
int motFileLoadStep(int, int, int, int);
int sndLoadStep(int);
int sprCommonLoad(void);
int titleSprTexLoad(void);
int commonLoadStep(int a4, int a5, int a6, int a7);

int commonLoadStep(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t6;
    int t14;
    int t22;
    int t28;
    int t34;
    int t42;
    int t47;
    int t53;

    t0 = *(int *)0x8C40C5D0;
    if ((unsigned int)t0 >= (unsigned int)0xC) {
    } else {
        switch ((t0 << 1)) {
            case 0:
            {
                t1 = fileLoadPoll(a4, a5, a6, a7);
                if (t1 == 1) {
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                    fileLoadStart(0x8CA80000, 0x8C1265BC, 0x0);
                }
            }
                break;
            case 2:
            {
                t6 = fileLoadPoll(a4, a5, a6, a7);
                if (t6 == 1) {
                    commonEtcTexLoad();
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            case 4:
            {
                fileLoadStart(0x8CA80000, 0x8C1265D4, 0x0);
                *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
            }
                break;
            case 6:
            {
                t14 = fileLoadPoll(a4, a5, a6, a7);
                if (t14 == 1) {
                    sprCommonLoad();
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            case 8:
            {
                fileLoadStart(0x8C680000, 0x8C1265F0, 0x0);
                *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
            }
                break;
            case 10:
            {
                t22 = fileLoadPoll(a4, a5, a6, a7);
                if (t22 == 1) {
                    fileLoadStart(0x8CA30000, 0x8C126608, 0x0);
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            case 12:
            {
                t28 = fileLoadPoll(a4, a5, a6, a7);
                if (t28 == 1) {
                    fileLoadStart(0x8CA80000, 0x8C126628, 0x0);
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            case 14:
            {
                t34 = fileLoadPoll(a4, a5, a6, a7);
                if (t34 == 1) {
                    commonSprInitAll();
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            case 16:
            {
                sndLoadStep(0x0);
                *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
            }
                break;
            case 18:
            {
                t42 = sndLoadStep(0x1);
                if (t42 == 99) {
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                    motFileLoadBegin();
                }
            }
                break;
            case 20:
            {
                t47 = motFileLoadStep(a4, a5, a6, a7);
                if (t47 == -1) {
                    fileLoadStart(0x8CA80000, 0x8C126644, 0x0);
                    *(unsigned int *)0x8C40C5D0 = ((*(int *)0x8C40C5D0) + 0x1);
                }
            }
                break;
            default:
            {
                t53 = fileLoadPoll(a4, a5, a6, a7);
                if (t53 == 1) {
                    titleSprTexLoad();
                    *(unsigned int *)0x8C40C5D0 = 0x63;
                }
            }
                break;
        }
    }
    return (*(int *)0x8C40C5D0);
}
