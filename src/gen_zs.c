/* A function proven on cases written by hand: the generator's C with the replacements ['int camGetPos(int, ...);=>typedef struct { int w; } Stk1;\nint camGetPos(Stk1);', '    camGetPos(0x8C301BCC);=>    { Stk1 s1; s1.w = 0x8C301BCC; camGetPos(s1); }']. */

int FUN_8c0f0860(int);
typedef struct { int w; } Stk1;
int camGetPos(Stk1);
int FUN_8c08785e(int a4);

int FUN_8c08785e(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t2 = *(int *)0x8C18D2B8;
    t3 = *(int *)((a4 + 0x14));
    if (((int)t3 > (int)(*(int *)0x8C301BD8)) && (t0 = *(int *)0x8C301BDC, (int)t3 <= (int)t0)) {
        *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) - 0.800000012f);
    } else {
        t0 = *(int *)((a4 + 0x14));
        if (((int)t0 > (int)(*(int *)0x8C301BE0)) && (t1 = *(int *)0x8C301BE4, (int)t0 <= (int)t1)) {
            *(float *)((a4 + 0x18)) = ((*(float *)((a4 + 0x18))) + 0.400000006f);
        }
    }
    { Stk1 s1; s1.w = 0x8C301BCC; camGetPos(s1); }
    *(float *)0x8C301BD0 = ((*(float *)0x8C301BD0) * 1.20000005f);
    u0 = *(float *)0x8C301BD4;
    if ((((t2 == 2)) ? 1 : 0) != 0) {
        u1 = (-(u0 * ((*(float *)((a4 + 0x18))) / 255.0f)));
    } else {
        u1 = (u0 * ((*(float *)((a4 + 0x18))) / 255.0f));
    }
    *(float *)0x8C301BD4 = u1;
    t0 = FUN_8c0f0860(0x8C301BCC);
    if ((*(int *)0x8C287C60) == 0) {
        *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) + 0x1);
    }
    return t0;
}
