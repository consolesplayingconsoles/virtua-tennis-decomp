/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

int nlLocate(int, int);
int nlPrintf(int, ...);
int nlWaitVSync(void);
int pdExecPeripheralServer(void);
int FUN_8c017ae8(int a4);

int FUN_8c017ae8(int a4)
{
    register int t3;

    for (;;) {
        pdExecPeripheralServer();
        nlLocate(0xA, 0x14);
        nlPrintf(0x8C1016E8, a4);
        t3 = nlWaitVSync();
        if (((*(int *)(((*(int *)0x8C29B898) + 0x10))) & 0x400) != 0) {
            break;
        }
    }
    return t3;
}
