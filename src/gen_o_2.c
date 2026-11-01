/* Straight-line functions with calls and guards (batch gen_o): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXT_SetOutVol(int, int);
int ADXT_StartAfs(int, int, int);
int kbCfgGetId(void);
int gdc_FileLoad(int, int, int);
int gdc_StopStreamSongAll(int);
int kbCfgIni(int);
int kmiWriteRegister(int, int);
int memmove(int, int, int);
int syCfgIIDCheckSum(int);
int volumeToDb(int);


int syCfgGetIndividualID(int a4)
{
    int t1;
    int t3;
    int t4;

    if ((a4 == 0)) {
        return 0x0;
        }
    kbCfgIni(0x0);
    t1 = kbCfgGetId();
    memmove(a4, (t1 + 0x2), 0x6);
    t3 = syCfgIIDCheckSum(t1);
    
    if (!(t3 == 0)) {
        t4 = 0x1;
        } else {
        t4 = 0x2;
        }
    return t4;
}
