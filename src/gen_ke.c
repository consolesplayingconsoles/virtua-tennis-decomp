/* Straight-line functions with calls and guards (batch gen_ke): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int hudPanelDraw(int, int, float);
int set_event(int, int);
int evNoticeStart(int a4, int a5, int a6, float f4);

int evNoticeStart(int a4, int a5, int a6, float f4)
{
    int t23;
    int t11;
    int t1;
    float u3;
    int t5;

    t23 = 0x0;
    if ((a4 != 0) || (((int)a5 >= (int)0x15) && ((int)a5 < (int)0x20))) {
        t11 = 0x0;
        if (((((int)(a5 - 1) >= 0) ? (0x1 << ((a5 - 1) & 31)) : ((-(int)(a5 - 1) & 31) ? ((int)0x1 >> (-(int)(a5 - 1) & 31)) : ((int)0x1 >> 31))) & (*(int *)0x8C40C308)) != 0) {
        } else {
            t1 = set_event(0x28, 0x8C0DA8AA);
            hudPanelDraw(0x2, 0x0, 0.0f);
            *(unsigned int *)((t1 + 0x14)) = a4;
            *(float *)((t1 + 0x18)) = f4;
            *(unsigned int *)((t1 + 0x1C)) = a5;
            u3 = *(float *)0x8C23D204;
            *(unsigned int *)((t1 + 0x24)) = (int)((float)a6 / u3);
            *(unsigned int *)((t1 + 0x20)) = (int)((float)a6 / u3);
            if ((*(int *)((t1 + 0x14))) == 0) {
                t5 = *(int *)((t1 + 0x1C));
                *(unsigned int *)0x8C40C308 = ((((int)(t5 - 1) >= 0) ? (0x1 << ((t5 - 1) & 31)) : ((-(int)(t5 - 1) & 31) ? ((int)0x1 >> (-(int)(t5 - 1) & 31)) : ((int)0x1 >> 31))) | (*(int *)0x8C40C308));
            }
            t11 = 0x1;
        }
        t23 = t11;
    }
    return t23;
}
