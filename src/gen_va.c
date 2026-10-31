/* Straight-line functions with calls and guards (batch gen_va): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */
extern char gKdGunBusy[];
extern char gKdGunCount[];
extern char gKdGunLast[];
extern char gLightGunPosition[];
extern char g_0c2ec254[];
extern char g_0c2ec28c[];
extern char g_0c2ec4d8[];

int copy_device(void);
int kdRecvFrame(void);
extern int mpdrv_frame_send();
int kdSendFrame(int a4, int a5);

int kdSendFrame(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = 0x0;
    if ((*(int *)0x8C4620DC) == 0) {
    } else {
        *(unsigned int *)0x8C4620F0 = ((*(int *)(int)gKdGunLast) - 1);
        *(unsigned int *)(int)gKdGunLast = 0x0;
        t1 = a5;
        if ((*(int *)(int)gKdGunCount) != 0) {
            *(unsigned int *)(int)gLightGunPosition = ((*(int *)0xA05F80C4) & 0x3FF);
            *(unsigned int *)0x8C4620FC = ((short)((unsigned int)(*(int *)0xA05F80C4) >> 16) & 0x3FF);
            t1 = 0xA05F80C4;
        }
        *(unsigned int *)(int)gKdGunCount = 0x0;
        if ((*(int *)0x8C4620E8) != 0) {
            *(unsigned int *)0xA05F8040 = (*(int *)0x8C4620E4);
            *(unsigned int *)0xA05F80E8 = ((*(int *)0xA05F80E8) & 0xFFFFFFF7);
            *(unsigned int *)0x8C4620E8 = 0x0;
        }
        if (((*(int *)0xA05F6908) & 0xF00) != 0) {
            if (((*(int *)0xA05F6908) & 0x800) != 0) {
                *(unsigned int *)0x8C461E78 = ((*(int *)0x8C461E78) + 0x1);
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t2 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFFE, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x400) != 0) {
                *(unsigned int *)0x8C461E7C = ((*(int *)0x8C461E7C) + 0x1);
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t2 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFFD, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x200) != 0) {
                *(unsigned int *)0x8C461E80 = ((*(int *)0x8C461E80) + 0x1);
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t2 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFFC, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            if (((*(int *)0xA05F6908) & 0x100) != 0) {
                *(unsigned int *)0x8C461E84 = ((*(int *)0x8C461E84) + 0x1);
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t2 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFFB, (*(int *)0x8C461E64), (*(int *)0xA05F6908));
                }
            }
            *(unsigned int *)0xA05F6908 = 0xF00;
            kdRecvFrame();
            t2 = ((int (*)(void))(mpdrv_frame_send))();
            if ((int)t2 >= 0) {
                copy_device();
            } else {
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t3 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFFA, (*(int *)0x8C461E64), t2);
                }
            }
            t3 = t2;
        } else {
            t2 = ((int (*)(int, int, int))(mpdrv_frame_send))(0x8C4620E8, t1, (int)gKdGunCount);
            if ((int)t2 >= 0) {
                *(unsigned int *)(int)gKdGunBusy = 0x0;
                *(unsigned short *)(((((*(int *)(int)g_0c2ec4d8) << 1) + 0x8C461E90) + 0x0)) = 0x0;
                *(unsigned short *)(((((*(int *)(int)g_0c2ec4d8) << 1) + 0x8C461E88) + 0x0)) = ((*(int *)0xA05F810C) & 0x3FF);
                copy_device();
                *(unsigned int *)(int)g_0c2ec254 = ((*(int *)(int)g_0c2ec254) + 0x1);
            } else {
                kdRecvFrame();
                *(unsigned int *)0x8C461E6C = ((*(int *)0x8C461E6C) + 0x1);
                if ((*(int *)(int)g_0c2ec28c) != 0) {
                    t1 = ((int (*)(int, int, int, int))((*(int *)(int)g_0c2ec28c)))(0x1, 0xFFFFFFF9, (*(int *)0x8C461E64), t2);
                }
            }
            t3 = t2;
        }
        t0 = t3;
    }
    return t0;
}
