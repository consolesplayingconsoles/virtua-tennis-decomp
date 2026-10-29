/* Straight-line functions with calls and guards (batch gen_ry): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int padLcdModeClear(void);
Stk3 vecMake(float, float, float);
int camInit(void);

int camInit(void)
{
    *(Stk3 *)(0x8C2875F0) = vecMake(0.0f, 0.0f, 0.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875C0) = *(struct mv3 *)(0x8C2875F0); }
    *(Stk3 *)(0x8C2875FC) = vecMake(0.0f, 0.0f, (*(float *)0x8C016754));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875CC) = *(struct mv3 *)(0x8C2875FC); }
    *(unsigned int *)0x8C287634 = 0x0;
    *(unsigned int *)0x8C287638 = 0x0;
    *(unsigned int *)0x8C28763C = 0x0;
    *(unsigned int *)0x8C287630 = 0x0;
    *(unsigned short *)0x8C28764C = 0x0;
    *(unsigned short *)0x8C28764A = 0x0;
    *(unsigned short *)0x8C287648 = 0x0;
    *(float *)0x8C287628 = (*(float *)0x8C016758);
    *(float *)0x8C287620 = 0.0f;
    *(float *)0x8C28761C = 0.0f;
    *(float *)0x8C287618 = 1.0f;
    *(float *)0x8C287614 = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875D8) = *(struct mv3 *)(0x8C2875C0); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C2875E4) = *(struct mv3 *)(0x8C2875CC); }
    *(unsigned short *)0x8C287646 = 0x0;
    *(unsigned short *)0x8C287644 = 0x0;
    *(float *)0x8C287624 = 0.0f;
    *(unsigned int *)0x8C287640 = 0x0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(0x8C287608) = *(struct mv3 *)(0x8C1016D4); }
    return padLcdModeClear();
}
