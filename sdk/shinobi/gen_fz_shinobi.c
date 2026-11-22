/* Straight-line functions with calls and guards (batch gen_fz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
int cpuDblChase(int);
int cpuDblHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblIsMyBall(int);
int cpuDblMove(int);
int cpuDblNetmanPos(int);
int cpuDblReceivePos(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuDblServe(int);
int cpuDblShot(int);
int cpuDblSwingInput(int);
float cpuDistXZ(int, int);
int cpuGiveUpCheck(int);
int cpuInRange(Stk3, Stk3, Stk3);
int cpuLineCrossXZ(int, int, int, int, Stk3, Stk3, Stk3, float, float);
int cpuPointOverInput(int);
int cpuSegCrossXZ(int, Stk3, Stk3, Stk3, Stk3);
int cpuSglChase(int);
int cpuSglHitCheck(int, int, int, int, int, int, int, int, int, int, int, int);
int cpuSglMove(int);
int cpuSglReceivePos(int, float, float);
int cpuSglServe(int);
int cpuSglShot(int);
int cpuSglSwingInput(int);
int cpuStickNudge(int);
int serveGetReceiver(void);
Stk3 vecMake(float, float, float);
int vmsfs_diskfree(int, int);
int vmsfs_fclose(int, int);
int vmsfs_fcreate(int, int, int, int);
int vmsfs_fgetsize(int, int);
int vmsfs_fwrite1(int, int);
int vmsfs_save_file_verify(int, int, int, int, int, int);
int cpuSglAimRateOpp3(int a4, int a5);
int cpuDblThink(int a4, int a5, int a6, int a7);
int cpuSglThink(int a4, int a5, int a6, int a7, float f4, float f5);
float cpuDblPathCross(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13);
int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9);


int vmsfs_save_file(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int t0;
    int t1;
    int t2;
    int t43;
    int t37;
    int t6;
    int t31;
    int t8;
    int t9;
    int t11;
    int t12;
    int t14;
    int t32;
    int stk[11];

    *(unsigned int *)(((int)stk + 16)) = a6;
    t0 = vmsfs_diskfree(a4, 0x0);
    t1 = vmsfs_fgetsize(a4, a5);
    t2 = t0;
    if ((int)t1 > 0) {
        t2 = (t0 + t1);
    }
    t43 = t2;
    if ((int)t2 >= 0) {
        t37 = 0xFFFFFF04;
        if ((unsigned int)t2 < (unsigned int)a7) {
        } else {
            if ((0x80000000 & a9) != 0) {
                t32 = (vmsfs_save_file_verify(a4, a5, (*(int *)(((int)stk + 16))), a7, a8, a9));
            } else {
                t6 = vmsfs_fcreate(a4, a5, a8, ((int)stk + 12));
                t31 = t6;
                if ((int)t6 >= 0) {
                    *(unsigned char *)(((*(int *)(((int)stk + 12))) + 0x1)) = a9;
                    t8 = *(int *)(((int)stk + 16));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x30)) = 0x1;
                    t9 = *(int *)((((a4 * 0x148) + 0x8C464598) + 0x4));
                    *(unsigned int *)((((a4 * 0x148) + 0x8C464598) + 0x34)) = ((*(int *)((((((t9 << 2) + t9) << 2) << 2) + 0x8C20C77C))) + a7);
                    if ((unsigned int)0x0 < (unsigned int)a7) {
                        t11 = t8;
                        t12 = 0x0;
                        for (;;) {
                            t14 = vmsfs_fwrite1((*(int *)(((int)stk + 12))), t11);
                            if ((int)t14 >= 0) {
                                t12 = (t12 + 0x1);
                                t11 = (t11 + 0x200);
                                if ((unsigned int)t12 >= (unsigned int)a7) {
                                    break;
                                }
                                continue;
                            }
                            vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                            return t14;
                        }
                    }
                    vmsfs_fclose((*(int *)(((int)stk + 12))), 0x0);
                    t31 = 0x0;
                }
                t32 = t31;
            }
            t37 = t32;
        }
        t43 = t37;
    }
    return t43;
}


