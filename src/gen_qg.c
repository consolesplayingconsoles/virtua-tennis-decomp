/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gNlRenderTextureTableState[];
extern char gNlTextureSurfaces[];

int kmBeginPass(int);
int kmBeginScene(int);
int kmEndPass(int);
int kmEndScene(int);
int kmRenderTexture(int, int);
int nlMatrixMode(int);
int nlSetWindowSize(float, float, float, float);
int nl_action_PixelClipping(void);
int nl_set_cnv_proj_pers(void);
void nlRenderTextureEnd(void);

void nlRenderTextureEnd(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0x8C44FBF4;
    t1 = *(int *)(int)gNlRenderTextureTableState;
    if ((int)t0 >= 0) {
        t2 = *(int *)(((t1 + ((t0 << 2) << 2)) + 0x4));
        if ((*(int *)((((*(int *)(int)gNlTextureSurfaces) + (t2 * 0x3C)) + 0x28))) == 0) {
            if ((*(int *)0x8C424460) == 0) {
                kmEndPass(0x8C454FC0);
                nl_action_PixelClipping();
                kmRenderTexture(((*(int *)(int)gNlTextureSurfaces) + (t2 * 0x3C)), 0x0);
                kmEndScene(0x8C42420C);
                kmBeginScene(0x8C42420C);
                kmBeginPass(0x8C454FC0);
                *(unsigned int *)0x8C42445C = (*(int *)0x8C454FC0);
            } else {
                nl_action_PixelClipping();
                kmRenderTexture(((*(int *)(int)gNlTextureSurfaces) + (t2 * 0x3C)), 0x0);
            }
        }
        *(unsigned int *)0x8C44FBF4 = 0xFFFFFFFF;
        nlSetWindowSize((*(float *)0x8C44FBF8), (*(float *)0x8C44FBFC), (*(float *)0x8C44FC00), (*(float *)0x8C44FC04));
        t0 = *(signed char *)0x8C450858;
        nlMatrixMode(0x3);
        nl_set_cnv_proj_pers();
        nlMatrixMode(t0);
    return;
    }
}
