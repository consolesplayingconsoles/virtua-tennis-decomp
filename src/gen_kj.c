/* Straight-line functions with calls and guards (batch gen_kj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlAddVector3op(int, int, int);
int nlScaleUnitVector(int, int, float);
int nlSubVector3op(int, int, int);
int shadowVolExtrude(int a4, int a5);

int shadowVolExtrude(int a4, int a5)
{
    int stk[7];

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    nlSubVector3op((((int)stk + 4) + 0x8), (*(int *)(((int)stk + 4))), 0x8C2859E8);
    nlScaleUnitVector((((int)stk + 4) + 0x8), (((int)stk + 4) + 0x8), (*(float *)0x8C2859D8));
    return (nlAddVector3op((*(int *)(((int)stk + 8))), (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x8)));
}
