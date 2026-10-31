/* Straight-line functions with calls and guards (batch gen_ki): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char Player[];
extern char charaTbl[];

typedef struct { int w[3]; } Stk3;
int charaTexFreeAll(void);
int fileLoadClose(void);
int motionSet(int, int, int, int, int, int, float);
int muneSlotReset(int, int);
int playerSetup(int, int, int, int);
int uniformSlotReset(int, int);
Stk3 vecMake(float, float, float);
int circuitMapInit(void);

int circuitMapInit(void)
{
    playerSetup((int)Player, 0x0, (unsigned char)(*(signed char *)0x8C2FBC7C), (*(int *)0x8C421F70));
    motionSet((int)Player, 0x115604, 0x1, 0x12755C, ((*(int *)(((int)charaTbl + ((*(int *)0x8C2889DC) * 0x6C))))), ((*(int *)0x8C2873D0)), (*(float *)0x8C23D204));
    *(Stk3 *)(0x8C28886C) = vecMake(14.0f, -8.0f, -45.0f);
    *(float *)0x8C28889C = 0.0f;
    *(unsigned short *)0x8C28888A = 0x0;
    *(float *)0x8C2FBE94 = 0.0f;
    *(unsigned int *)0x8C2FBEA0 = 0x0;
    *(unsigned int *)0x8C2FBE60 = 0x1;
    *(unsigned int *)0x8C2FBEA4 = (*(signed char *)0x8C2FBC83);
    fileLoadClose();
    *(unsigned int *)0x8C2FBE74 = 0xFFFFFFFF;
    charaTexFreeAll();
    muneSlotReset((*(int *)0x8C421F70), (*(int *)0x8C2889DC));
    return uniformSlotReset((*(int *)0x8C421F70), (*(signed char *)0x8C2FBC83));
}
