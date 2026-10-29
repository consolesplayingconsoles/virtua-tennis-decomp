/* Straight-line functions with calls and guards (batch gen_ti): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

float nlScalor(int);
int nlsndSeqRequest(int);
int seBallSpeed(int, int, int, int, int, int, int, int, int, int);
void seShotHit2(int a4, int a5);

void seShotHit2(int a4, int a5)
{
    int stk[11];
    float u7;
    int t13;
    float t16;
    int t29;
    float u31;
    float u32;
    int t1;
    int t21;
    int t36;
    int t41;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    if (((*(int *)0x8C38BA70) != 0) && (t1 = *(int *)0x8C38BA74, t1 != 0)) {
        u7 = *(float *)(((*(int *)(((int)stk + 8))) + 0xAF0));
        t13 = 0x0;
        if ((*(int *)0x8C402C0C) != ((u7 > 0.0f) - (0.0f > u7))) {
            t13 = 0x1;
        }
        t16 = nlScalor(((*(int *)(((int)stk + 4))) + 0x24));
        if (t16 > 4.0f) {
            if (t13 == 0) {
                t21 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x4)));
            } else {
                t21 = (*(int *)(((((*(int *)0x8C402C04) * 0x54) + 0x8C1D2B2C) + 0x24)));
            }
            nlsndSeqRequest(t21);
        }
        seBallSpeed(0x0, (*(int *)(((int)stk + 8))), 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20));
        t29 = *(int *)0x8C402C04;
        u31 = *(float *)(((*(int *)(((int)stk + 4))) + 0x2C));
        u32 = (-u31);
        if (!(0.0f > u31)) {
            u32 = u31;
        }
        if (4.0f > u32) {
            if (t13 == 0) {
                t36 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0xC)));
            } else {
                t36 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x2C)));
            }
            nlsndSeqRequest(t36);
        } else {
            if (t13 == 0) {
                t41 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x10)));
            } else {
                t41 = (*(int *)((((t29 * 0x54) + 0x8C1D2B2C) + 0x30)));
            }
            nlsndSeqRequest(t41);
        }
    }
}
