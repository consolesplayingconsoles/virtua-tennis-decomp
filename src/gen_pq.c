/* Straight-line functions with calls and guards (batch gen_pq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int nlDispStripTrnsl(int, int);
int primVertexSet(int, int, int, int, int);
Stk3 vecMake(float, float, float);
int menuDimScreen(void);

int menuDimScreen(void)
{
    float u0;
    int t3;
    float u6;
    float u8;
    int t16;
    int t26;
    int t37;
    int stk[38];

    u0 = *(float *)0x8C0D0B08;
    *(unsigned int *)(((int)stk + 24)) = ((((int)stk + 20) + 0x14) + 0x10);
    *(unsigned int *)(((int)stk + 20)) = ((((int)stk + 20) + 0x14) + 0x10);
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0D0B14), 0.0f, u0);
    t3 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t3;
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, t3);
    *(volatile int *)(((int)stk + 20));
    u6 = *(float *)0x8C0D0B18;
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, 0.0f, u0);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x14);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x14));
    u8 = *(float *)0x8C0D0B1C;
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0D0B14), u8, u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x30);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x30));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, u8, u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x20);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x20));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, 0.0f, u0);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x14);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, 0.0f, u0);
    t16 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t16;
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, t16);
    *(volatile int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, u8, u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x20);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, u8, u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x30);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x30));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0D0B14), u8, u0);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x14);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, u8, u0);
    t26 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t26;
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, t26);
    *(volatile int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake((*(float *)0x8C0D0B14), (*(float *)0x8C0D0B24), u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x20);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, (*(float *)0x8C0D0B24), u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x30);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x30));
    nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14));
    *(unsigned int *)(((int)stk + 20)) = (*(int *)(((int)stk + 24)));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, u8, u0);
    t37 = (*(int *)(((int)stk + 20)));
    *(int *)((int)stk + 4) = t37;
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, t37);
    *(volatile int *)(((int)stk + 20));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, u8, u0);
    *(int *)((int)stk + 4) = (((int)stk + 20) + 0x14);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, (((int)stk + 20) + 0x14));
    *(Stk3 *)(((int)stk + 8)) = vecMake(u6, (*(float *)0x8C0D0B24), u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x30);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x30));
    *(Stk3 *)(((int)stk + 8)) = vecMake(0.0f, (*(float *)0x8C0D0B24), u0);
    *(int *)((int)stk + 4) = ((((int)stk + 20) + 0x14) + 0x20);
    primVertexSet(0x8C000000, 0x0, 0x0, 0x0, ((((int)stk + 20) + 0x14) + 0x20));
    return (nlDispStripTrnsl(0x4, (((int)stk + 20) + 0x14)));
}
