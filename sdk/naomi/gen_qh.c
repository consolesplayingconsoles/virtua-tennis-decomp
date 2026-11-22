/* Straight-line functions with calls and guards (batch gen_qh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int kmProcessVertexRenderState(int);
int kmSetVertexRenderState(int, int, int);
int nlstripSetVertexContextTex(int a4, int a5);

int nlstripSetVertexContextTex(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0x8C4241C0;
    t1 = 0x1;
    if ((*(int *)(((((a5 << 2) << 1) + t0) + 0x0))) == 0) {
    } else {
        t2 = *(int *)(((((a5 << 2) << 1) + t0) + 0x4));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x6C)) = ((*(int *)0x8C458608) + (t2 * 0x3C));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x0)) = 0x600608;
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x8)) = (*(int *)((a4 + 0x0)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0xC)) = (*(int *)((a4 + 0x4)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x20)) = (*(int *)((a4 + 0x8)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x44)) = (*(int *)((a4 + 0xC)));
        *(unsigned int *)(((*(int *)0x8C458C10) + 0x40)) = (*(int *)((a4 + 0x10)));
        t0 = *(int *)((((*(int *)0x8C458608) + (t2 * 0x3C)) + 0x34));
        t2 = 0x0;
        if (((((int)t0 >> 27) & 0x7) == 5) || ((((int)t0 >> 27) & 0x7) == 6)) {
            t0 = *(int *)0x8C458C10;
            *(unsigned int *)((t0 + 0x0)) = ((*(int *)((t0 + 0x0))) | 0x80000);
            if ((*(int *)0x8C1DC888) != 0) {
                *(unsigned int *)(((0x68 + (*(int *)0x8C458C10)) + 0x0)) = (*(int *)0x8C454F38);
            } else {
                *(unsigned int *)(((*(int *)0x8C458C10) + 0x68)) = 0x0;
                if ((int)(*(int *)0x8C454F38) < (int)(*(short *)0x8C458E24)) {
                    t0 = *(int *)0x8C454F38;
                    t3 = *(int *)0x8C458E38;
                    if ((*(short *)(((t3 + ((t0 << 2) << 1)) + 0x4))) != 0) {
                        *(unsigned int *)(((*(int *)0x8C458C10) + 0x68)) = (*(short *)(((t3 + ((t0 << 2) << 1)) + 0x0)));
                    }
                }
            }
            t2 = 0x1;
        }
        kmProcessVertexRenderState((*(int *)0x8C458C10));
        t0 = *(int *)0x8C458C10;
        *(unsigned int *)((t0 + 0x90)) = ((*(int *)((t0 + 0x90))) & 0xFFFCFF3F);
        t0 = *(int *)0x8C458C10;
        *(unsigned int *)((t0 + 0x90)) = ((*(int *)((t0 + 0x90))) | (*(int *)0x8C458E04));
        t0 = *(int *)0x8C458C10;
        *(unsigned int *)((t0 + 0x98)) = ((*(int *)((t0 + 0x98))) & 0x31FF0FF);
        t0 = *(int *)0x8C458C10;
        t3 = *(int *)0x8C458E08;
        if ((*(int *)((a4 + 0x0))) == 0) {
            *(unsigned int *)((t0 + 0x98)) = ((*(int *)((t0 + 0x98))) | (t3 | 0x20000000));
        } else {
            *(unsigned int *)(((0x98 + t0) + 0x0)) = ((*(int *)(((0x98 + t0) + 0x0))) | (t3 | ((((*(int *)0x8C424418) ^ 0xFC) << 16) << 8)));
        }
        if (t2 != 0) {
            t0 = *(int *)0x8C458C10;
            *(unsigned int *)((t0 + 0x9C)) = ((*(int *)((t0 + 0x9C))) & 0xF81FFFFF);
            t0 = *(int *)0x8C458C10;
            *(unsigned int *)((t0 + 0x9C)) = ((*(int *)((t0 + 0x9C))) | ((*(int *)(((0x68 + t0) + 0x0))) << 21));
        }
        kmSetVertexRenderState(0x8C454FC0, (*(int *)0x8C458C10), 0x8C458E04);
        t1 = 0x0;
    }
    return t1;
}
