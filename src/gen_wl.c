/* Straight-line functions with calls and guards (batch gen_wl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlsndSystemControl(int, int, int);
int set_event(int, int);
int sndPack1FadeCancel(void);
void evCrowdPointStart(int a4);

void evCrowdPointStart(int a4)
{
    register int t5;

    if ((int)a4 >= (int)0x96) {
        if (((*(int *)0x8C20D14C) == 6) && (t5 = *(int *)0x8C287D5C, t5 == 3)) {
        } else {
            if ((*(int *)0x8C40C28C) == 1) {
                sndPack1FadeCancel();
                nlsndSystemControl(0x1, 0x10A0, (*(int *)0x8C38BA64));
            }
            *(unsigned int *)0x8C40C278 = (set_event(0x20, 0x8C0D9072));
            *(unsigned int *)0x8C40C280 = 0x1;
            *(unsigned int *)(((*(int *)0x8C40C278) + 0x14)) = (*(int *)0x8C287AFC);
            *(unsigned int *)(((*(int *)0x8C40C278) + 0x18)) = (int)((float)a4 / (*(float *)0x8C23D204));
            *(unsigned int *)(((*(int *)0x8C40C278) + 0x1C)) = a4;
        }
    }
}
