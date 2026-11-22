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


float cpuDblPathCross(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13)
{
    int t0;
    int t1;
    int t2;
    int t4;
    int t10;
    float u13;
    float u15;
    float u16;
    float u19;
    int t22;
    int t24;
    float u25;
    float u27;
    float u28;
    float u31;
    float u38;
    int stk[52];
    int R1088;

    R1088 = *(int *)((int)stk + 88);

    stk[38] = a8;
    stk[39] = a9;
    stk[40] = a10;
    stk[41] = a11;
    stk[42] = a12;
    stk[43] = a13;
    R1088 = a4;
    if (0x1 != 0) {
        t0 = 0x1;
        t1 = a4;
        for (;;) {
            t2 = ((~(((~t0) + 0x1) & 0x7)) + 0x1);
            if ((int)t0 >= 0) {
                t2 = (t0 & 0x7);
            }
            (*(int *)((int)stk + 92)) = t2;
            t4 = R1088;
            *(Stk3 *)(((int)stk + 76)) = vecMake(((*(float *)((t1 + 0x0))) - (*(float *)((((((t2 << 1) + t2) << 2) + t4) + 0x0)))), 0.0f, ((*(float *)((t1 + 0x8))) - (*(float *)((((((t2 << 1) + t2) << 2) + t4) + 0x8)))));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t1); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
            cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 28)) = *(struct mv3 *)((((int)stk + 40) + 0x38)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 16)) = *(struct mv3 *)(((((t2 << 1) + t2) << 2) + t4)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)(t1); }
            t10 = cpuInRange(*(Stk3 *)(((int)stk + 4)), *(Stk3 *)(((int)stk + 16)), *(Stk3 *)(((int)stk + 28)));
            if (t10 != 0) {
                break;
            }
            t0 = (t0 + 0x1);
            t1 = (t1 + 0xC);
            if ((int)t0 >= (int)0x9) {
                t1 = (R1088);
                t0 = t1;
                t0 = (t0 + 0x60);
                u13 = (*(float *)0x8C05D220);
                for (;;) {
                    *(Stk3 *)(((int)stk + 76)) = vecMake(1.0f, 0.0f, 0.0f);
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t1); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
                    cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
                    u15 = *(float *)((t1 + 0x0));
                    u16 = *(float *)(((int)stk + 96));
                    u19 = ((-u16) + u15);
                    if (!(0.0f > (u16 - u15))) {
                        u19 = (u16 - u15);
                    }
                    t1 = (t1 + 0xC);
                    if (u13 > u19) {
                        u13 = u19;
                    }
                    if ((unsigned int)t1 >= (unsigned int)t0) {
                        break;
                    }
                }
                return u13;
            }
        }
        u38 = 0.0f;
    } else {
        t22 = R1088;
        t24 = t22;
        u25 = (*(float *)0x8C05D220);
        for (;;) {
            *(Stk3 *)(((int)stk + 76)) = vecMake(1.0f, 0.0f, 0.0f);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 64)) = *(struct mv3 *)(t24); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 52)) = *(struct mv3 *)((((int)stk + 88) + 0x4C)); }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 40)) = *(struct mv3 *)((((int)stk + 88) + 0x40)); }
            cpuSegCrossXZ((((int)stk + 40) + 0x38), *(Stk3 *)(((int)stk + 40)), *(Stk3 *)(((int)stk + 52)), *(Stk3 *)(((int)stk + 64)), *(Stk3 *)((int)stk + 40 + 36));
            u27 = *(float *)((t24 + 0x0));
            u28 = *(float *)(((int)stk + 96));
            u31 = ((-u28) + u27);
            if (!(0.0f > (u28 - u27))) {
                u31 = (u28 - u27);
            }
            t24 = (t24 + 0xC);
            if (u25 > u31) {
                u25 = u31;
            }
            if ((unsigned int)t24 >= (unsigned int)(t22 + 0x60)) {
                break;
            }
        }
        u38 = u25;
    }
    return u38;
}


