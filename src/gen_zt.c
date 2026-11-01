/* A function proven on cases written by hand: the generator's C with the replacements []. */

typedef struct { int w[1]; } Stk1;
typedef struct { int w[3]; } Stk3;
int nlCloseEvent2(int);
int panelWidePut(Stk3, Stk1, float);
Stk3 vecMake(float, float, float);
int FUN_8c0860c4(int a4);

int FUN_8c0860c4(int a4)
{
    int stk[9];
    register float u0;
    register float u1;
    register float u2;
    register float u6;
    register int t37;
    register int t44;

    u0 = *(float *)0x8C0861E0;
    u1 = *(float *)0x8C0861E4;
    u2 = *(float *)0x8C0861E8;
    *(int *)((int)stk + 12) = ((int)stk + 16);
    *(Stk3 *)(((int)stk + 16)) = vecMake(u2, u1, u0);
    if ((int)(*(int *)((a4 + 0x14))) > (int)0x64) {
        if ((*(int *)0x8C287C60) == 0) {
            u6 = *(float *)((a4 + 0x18));
            *(float *)((a4 + 0x18)) = (u6 + 0.0500000007f);
            if ((u6 + 0.0500000007f) > 1.0f) {
                *(float *)((a4 + 0x18)) = 1.0f;
            }
        }
    }
    if ((int)(*(int *)((a4 + 0x14))) < (int)0x1E) {
        if ((*(int *)0x8C287C60) == 0) {
            *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) - 0.0333333351f);
            if (0.0f > (*(float *)((a4 + 0x18)))) {
                *(float *)((a4 + 0x18)) = 0.0f;
            }
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((int)stk + 16)); }
    t37 = panelWidePut(*(Stk3 *)(((int)stk + 4)), *(Stk1 *)((int)stk + 4 + 12), (*(float *)((a4 + 0x18))));
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
    }
    t44 = t37;
    if ((int)(*(int *)((a4 + 0x14))) < 0) {
        t44 = (nlCloseEvent2(a4));
    }
    return t44;
}
