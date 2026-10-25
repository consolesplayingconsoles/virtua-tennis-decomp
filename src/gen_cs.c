/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
float nlSin(int);
int primSprDrawScaleFadeY(int, int, int, Stk3, float, float, float, float);
int primSprSetSize(int, float, float);
int logoWaveDraw(float f4);

int logoWaveDraw(float f4)
{
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    float u6;
    float u8;
    float u10;
    float t22;
    float t24;
    int t33;
    int t37;
    int t40;
    int t44;
    int t51;
    int t72;
    int t79;
    int t0;
    int stk[50];

    t1 = 0x0;
    for (;;) {
        t2 = 0x8C1848A0;
        t3 = 0x0;
        t4 = 0x8C1848A0;
        t5 = 0x8C184810;
        for (;;) {
            *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184780) + (((t1 << 1) + t1) << 2)) + 0x8)) = f4;
            u6 = *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184780) + (((t1 << 1) + t1) << 2)) + 0x0));
            *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184780) + (((t1 << 1) + t1) << 2)) + 0x0)) = (u6 + 0.200000003f);
            if (!(1024.0f > (u6 + 0.200000003f))) {
                t0 = ((((t3 << 1) + t3) << 2) << 2);
                t0 = (t0 + 0x8C184780);
                t0 = (t0 + (((t1 << 1) + t1) << 2));
                *(float *)((t0 + 0x0)) = -1024.0f;
            }
            *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184810) + (((t1 << 1) + t1) << 2)) + 0x8)) = (f4 + 1.0f);
            u8 = *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184810) + (((t1 << 1) + t1) << 2)) + 0x0));
            *(float *)((((((((t3 << 1) + t3) << 2) << 2) + 0x8C184810) + (((t1 << 1) + t1) << 2)) + 0x0)) = (u8 + 0.200000003f);
            if (!(1024.0f > (u8 + 0.200000003f))) {
                t0 = t5;
                t0 = (t0 + (((t1 << 1) + t1) << 2));
                *(float *)((t0 + 0x0)) = -1024.0f;
            }
            *(float *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x8)) = (f4 + (1.0f + 1.0f));
            u10 = *(float *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x0));
            *(float *)(((t4 + (((t1 << 1) + t1) << 2)) + 0x0)) = (u10 + 0.200000003f);
            if (!(1024.0f > (u10 + 0.200000003f))) {
                t0 = t2;
                t0 = (t0 + (((t1 << 1) + t1) << 2));
                *(float *)((t0 + 0x0)) = -1024.0f;
            }
            t3 = (t3 + 0x1);
            t4 = (t4 + 0x30);
            t2 = (t2 + 0x30);
            t5 = (t5 + 0x30);
            if ((int)t3 >= (int)0x3) {
                break;
            }
        }
        t0 = 0x4;
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)t0) {
            break;
        }
    }
    *(unsigned short *)0x8C184778 = ((*(short *)0x8C184778) + 0xA0);
    *(unsigned short *)0x8C18477A = ((*(short *)0x8C18477A) + 0xF0);
    *(unsigned short *)0x8C18477C = ((*(short *)0x8C18477C) + 0xA0);
    *(unsigned short *)0x8C18477E = ((*(short *)0x8C18477E) + 0xF0);
    *(float *)(((int)stk + 128)) = 0.0f;
    *(float *)(((int)stk + 124)) = 0.0f;
    t22 = nlSin((unsigned short)(*(short *)0x8C18477C));
    t24 = nlSin((unsigned short)(*(short *)0x8C18477E));
    primSprSetSize(0x8C339AF0, (1.0f + 1.0f), (1.0f + 1.0f));
    primSprSetSize(0x8C339B40, (1.0f + 1.0f), (1.0f + 1.0f));
    primSprSetSize(0x8C339B90, (1.0f + 1.0f), (1.0f + 1.0f));
    *(unsigned int *)(((int)stk + 132)) = 0x8C339BE0;
    primSprSetSize(0x8C339BE0, (1.0f + 1.0f), (1.0f + 1.0f));
    *(unsigned int *)(((int)stk + 140)) = 0x8C339C30;
    primSprSetSize(0x8C339C30, (1.0f + 1.0f), (1.0f + 1.0f));
    *(unsigned int *)(((int)stk + 136)) = 0x8C339C80;
    primSprSetSize(0x8C339C80, (1.0f + 1.0f), (1.0f + 1.0f));
    *(unsigned int *)(((int)stk + 144)) = 0x8C184780;
    *(unsigned int *)(((int)stk + 148)) = 0x8C184780;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)(0x8C184780); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)(0x8C184780), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t33 = *(int *)(((int)stk + 148));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)((t33 + 0xC)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)((t33 + 0xC)), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t37 = *(int *)(((int)stk + 148));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((t37 + 0x18)); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)((t37 + 0x18)), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t40 = *(int *)(((int)stk + 148));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)((t40 + 0x24)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)((t40 + 0x24)), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t44 = *(int *)(((int)stk + 144));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)((t44 + 0x30)); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)((t44 + 0x30)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(((t44 + 0x30) + 0xC)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(((t44 + 0x30) + 0xC)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(((t44 + 0x30) + 0x18)); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(((t44 + 0x30) + 0x18)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(((t44 + 0x30) + 0x24)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(((t44 + 0x30) + 0x24)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t51 = *(int *)(((int)stk + 144));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)((t51 + 0x60)); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)((t51 + 0x60)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)(((t51 + 0x60) + 0xC)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(((t51 + 0x60) + 0xC)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(((t51 + 0x60) + 0x18)); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(((t51 + 0x60) + 0x18)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((t51 + 0x60) + 0x24)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(((t51 + 0x60) + 0x24)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    *(unsigned int *)(((int)stk + 144)) = 0x8C184810;
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(0x8C184810); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)(0x8C184810), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(0x8C18481C); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)(0x8C18481C), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C184828); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)(0x8C184828), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C184834); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)(0x8C184834), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t72 = *(int *)(((int)stk + 144));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)((t72 + 0x30)); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)((t72 + 0x30)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(((t72 + 0x30) + 0xC)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(((t72 + 0x30) + 0xC)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)(((t72 + 0x30) + 0x18)); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(((t72 + 0x30) + 0x18)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)(((t72 + 0x30) + 0x24)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(((t72 + 0x30) + 0x24)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    t79 = *(int *)(((int)stk + 144));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)((t79 + 0x60)); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)((t79 + 0x60)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(((t79 + 0x60) + 0xC)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(((t79 + 0x60) + 0xC)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(((t79 + 0x60) + 0x18)); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(((t79 + 0x60) + 0x18)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)(((t79 + 0x60) + 0x24)); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(((t79 + 0x60) + 0x24)), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)(0x8C1848A0); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)(0x8C1848A0), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C1848AC); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)(0x8C1848AC), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 76)) = *(struct mv3 *)(0x8C1848B8); }
    primSprDrawScaleFadeY(0x8C339AF0, 0x100, 0x100, *(Stk3 *)(0x8C1848B8), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(0x8C1848C4); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 132))), 0x100, 0x100, *(Stk3 *)(0x8C1848C4), (1.0f + 1.0f), (1.0f + 1.0f), (*(float *)(((int)stk + 128))), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)(0x8C1848D0); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(0x8C1848D0), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)(0x8C1848DC); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(0x8C1848DC), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)(0x8C1848E8); }
    primSprDrawScaleFadeY(0x8C339B40, 0x100, 0x100, *(Stk3 *)(0x8C1848E8), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(0x8C1848F4); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 140))), 0x100, 0x100, *(Stk3 *)(0x8C1848F4), (1.0f + 1.0f), (1.0f + 1.0f), (((((t22 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(0x8C184900); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(0x8C184900), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 112)) = *(struct mv3 *)(0x8C18490C); }
    primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(0x8C18490C), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 100)) = *(struct mv3 *)(0x8C184918); }
    primSprDrawScaleFadeY(0x8C339B90, 0x100, 0x100, *(Stk3 *)(0x8C184918), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 88)) = *(struct mv3 *)(0x8C184924); }
    return (primSprDrawScaleFadeY((*(int *)(((int)stk + 136))), 0x100, 0x100, *(Stk3 *)(0x8C184924), (1.0f + 1.0f), (1.0f + 1.0f), (((((t24 + 1.0f) * 0.349999994f) / (1.0f + 1.0f)) + 0.100000001f) / (1.0f + 1.0f)), (*(float *)(((int)stk + 124)))));
}
