/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

void sceneVecStub(void);

void sceneVecStub(void)
{
    int stk[30];

    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 4) + 0x64)) = *(struct mv3 *)(0x8C10DFA8); }
}
