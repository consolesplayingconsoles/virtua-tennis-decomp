/* Straight-line functions with calls and guards (batch gen_gn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int panelLogoInit(int, int, int, int, Stk3);
int panelLogoSetup(int a4, int a5, int a6, int a7);

int panelLogoSetup(int a4, int a5, int a6, int a7)
{
    int stk[5];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C1016D4); }
    return (panelLogoInit(0x8C337C50, 0x0, a6, a7, *(Stk3 *)(((int)stk + 4))));
}
