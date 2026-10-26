/* The ball's flight, written by hand: one step of the ball (int *ball, its words below) moved in substeps of *0x8C23D204 (1.0 or
   less) until the frame's substeps are done and the ball has bounced twice, recording for each player (0x8C287D84, 3448 bytes
   each, *0x8C287ADC of them) where the ball crosses their reach. */

typedef struct { float x, y, z; } Vec;

void nlScaleVector(float *vd, float *vs, float sc);
void nlAddVector(float *vd, float *vs);
Vec vecMake(float x, float y, float z);
Vec vecLineCrossXZ(Vec a, Vec b, Vec c, Vec d);
void netHitBall(int *ball);
int lineJudgeCall(int *ball);
int seFootSlide(int *ball);

#define PLAYER(k) ((char *)0x8C287D84 + (k) * 3448)
#define PI(p, o) (*(int *)((p) + (o)))
#define PF(p, o) (*(float *)((p) + (o)))
#define PV(p, o) (*(Vec *)((p) + (o)))
#define BF(o) (*(float *)((char *)ball + (o)))
#define BI(o) (*(int *)((char *)ball + (o)))
#define BV(o) (*(Vec *)((char *)ball + (o)))
#define NPLAYERS (*(int *)0x8C287ADC)
#define ZERO (*(Vec *)0x8C1016D4)
#define SGN(x) ((x) > 0.0f ? 1 : (0.0f > (x) ? -1 : 0))
#define ABSDIFF(a, b) (0.0f > (a) - (b) ? -(a) + (b) : (a) - (b))

/* manual: written by hand from the Dreamcast code (the generator's reader timed out on it: a substep loop around two player loops); tools must not regenerate it */
void ballMove(int *ball)
{
    float *dt = (float *)0x8C23D204;
    Vec pos, vel, spin, tmp, sv, nearA[4], nearB[4];
    int nearAstep[4], nearBstep[4], nearAt[4], nearBt[4], reachHit[4], peak[4], low[4], lastHit[4], hit[4];
    float bestA[4], bestB[4];
    int n = 0, bounces = 0, k;
    float vy0, t, f;
    char *p;
    int idx;

    pos = BV(24);
    vel = BV(36);
    spin = BV(64);
    for (k = 0; k < 4; k++) {
        lastHit[k] = 0;
        low[k] = 0;
        peak[k] = 0;
        reachHit[k] = 0;
        hit[k] = 0;
        bestA[k] = 9999.0f;
        bestB[k] = 9999.0f;
        nearAt[k] = 0;
        nearBt[k] = 0;
        nearA[k] = ZERO;
        nearB[k] = ZERO;
        nearAstep[k] = 0;
        nearBstep[k] = 0;
        PI(PLAYER(k), 2912) &= ~4;
    }
    BI(84) &= ~1;
    do {
        vy0 = vel.y;
        if (*dt != 1.0f) {
            vel.y = vel.y - BF(112) * *dt;
            vel.x = *dt * spin.x + vel.x;
            vel.z = *dt * spin.z + vel.z;
            spin.x = spin.x * (1.0f - *dt * 0.01f);
            spin.z = spin.z * (1.0f - *dt * 0.01f);
            vel.x = vel.x * (1.0f - *dt * 0.01f);
            vel.z = vel.z * (1.0f - *dt * 0.01f);
            nlScaleVector(&tmp.x, &vel.x, *dt);
            nlAddVector(&pos.x, &tmp.x);
        } else {
            vel.y = vel.y - BF(112);
            vel.x = vel.x + spin.x;
            vel.z = vel.z + spin.z;
            spin.x = spin.x * 0.99f;
            spin.z = spin.z * 0.99f;
            vel.x = vel.x * 0.99f;
            vel.z = vel.z * 0.99f;
            nlAddVector(&pos.x, &vel.x);
        }
        t = (float)n;
        if (0.35f > pos.y) {
            bounces++;
            if (t == BF(48)) {
                BI(76)++;
                BI(84) |= 1;
            }
            spin = ZERO;
            if (bounces == 1)
                BV(88) = pos;
            if (bounces == 2)
                BV(100) = pos;
            pos.y = 0.35f;
            idx = *(int *)0x8C295DDC;
            idx = (idx & 16) || (idx & 1) ? 1 : *(int *)0x8C1891E8;
            f = -(*(float *)(0x8C105FD0 + BI(80) * 24) * *(float *)(0x8C106314 + idx * 292));
            vel.y = vel.y * f;
            f = *(float *)(0x8C105FD4 + BI(80) * 24) * *(float *)(0x8C106314 + idx * 292 + 4);
            vel.x = vel.x * f;
            vel.z = vel.z * f;
        }
        if (t == BF(48)) {
            BV(12) = pos;
            BV(52) = vel;
        }
        if (n < 300) {
            ((Vec *)0x8C294670)[n] = pos;
            *(int *)0x8C295480 = n;
        }
        if (t > BF(48)) {
            for (k = 0, p = PLAYER(0); k < NPLAYERS; k++, p += 3448) {
                if (PI(p, 2912) & 0x100) {
                    if (*(int *)(0x8C105FE0 + PI(p, 3164) * 24) & 0x40000) {
                        if (reachHit[k] != 0 || SGN(vel.z) != -SGN(PF(p, 2816)) || SGN(pos.z - PF(p, 2992)) == -SGN(vel.z))
                            continue;
                        if (PI(p, 2912) & 0x4000) {
                            PF(p, 2984) = pos.x;
                            PF(p, 2988) = pos.y;
                        }
                        PI(p, 3156) = (int)(t - BF(48));
                        reachHit[k] = 1;
                    } else {
                        if (hit[k] != 0 || SGN(vel.z) != -SGN(PF(p, 2816)) || SGN(pos.z - PF(p, 2980)) == -SGN(vel.z))
                            continue;
                        if (PI(p, 2912) & 0x4000) {
                            PF(p, 2972) = pos.x;
                            PF(p, 2976) = pos.y;
                        }
                        PI(p, 3152) = (int)(t - BF(48));
                        hit[k] = 1;
                    }
                    continue;
                }
                if (lastHit[k] == 0 && bounces == 1 && 0.0f > vel.y && 5.0f > pos.y) {
                    PV(p, 2996) = pos;
                    lastHit[k] = 1;
                }
                if (low[k] == 0 && bounces == 1 && !(0.0f > vy0) && 0.0f > vel.y) {
                    PV(p, 3008) = pos;
                    low[k] = 1;
                }
                if (SGN(pos.z) == SGN(PF(p, 2800)) && 28.0f > pos.y && pos.y > 25.0f
                    && bestB[k] > ABSDIFF(PF(p, 2800), pos.z)) {
                    nearBt[k] = (int)(t - BF(48));
                    nearB[k] = pos;
                    bestB[k] = ABSDIFF(PF(p, 2800), pos.z);
                    PI(p, 2912) |= 4;
                    nearBstep[k] = bounces;
                }
                if (SGN(pos.z) == SGN(PF(p, 2800)) && 28.0f > pos.y && pos.y > 22.0f
                    && bestA[k] > ABSDIFF(PF(p, 2800), pos.z)) {
                    nearAt[k] = (int)(t - BF(48));
                    nearA[k] = pos;
                    bestA[k] = ABSDIFF(PF(p, 2800), pos.z);
                    PI(p, 2912) |= 4;
                    nearAstep[k] = bounces;
                }
            }
        }
        for (k = 0, p = PLAYER(0); k < NPLAYERS; k++, p += 3448) {
            if (PI(p, 2912) & 0x100)
                continue;
            if (peak[k] == 0) {
                f = 0.0f > PF(p, 2800) ? -PF(p, 2800) : PF(p, 2800);
                if (f > (0.0f > PF(p, 3004) ? -PF(p, 3004) : PF(p, 3004)))
                    sv = PV(p, 2996);
                else
                    sv = PV(p, 2792);
                if (25.0f > ABSDIFF(pos.z, sv.z)) {
                    PI(p, 3376) = n;
                    peak[k] = 1;
                }
            }
            if (hit[k] != 0 || SGN(vel.z) != -SGN(PF(p, 2816)) || SGN(pos.z - PF(p, 2800)) == -SGN(vel.z))
                continue;
            if (t - BF(48) > 0.0f)
                PI(p, 3152) = (int)(t - BF(48));
            else
                PI(p, 3152) = 1;
            PV(p, 2972) = pos;
            hit[k] = 1;
        }
        n++;
    } while (!((float)n > BF(48)) || bounces < 2);
    for (k = 0, p = PLAYER(0); k < NPLAYERS; k++, p += 3448) {
        if (PI(p, 2912) & 0x100)
            continue;
        if (PI(p, 2912) & 4) {
            if (9999.0f > bestB[k]) {
                PV(p, 2984) = nearB[k];
                PI(p, 3156) = nearBt[k];
                PI(p, 3260) = nearBstep[k];
            } else {
                PV(p, 2984) = nearA[k];
                PI(p, 3156) = nearAt[k];
                PI(p, 3260) = nearAstep[k];
            }
        } else {
            PI(p, 3156) = PI(p, 3152);
            PV(p, 2984) = PV(p, 2972);
        }
        if (SGN(vel.z) == -SGN(PF(p, 2816)) && hit[k] == 0) {
            PV(p, 2972) = vecLineCrossXZ(BV(12), BV(52), PV(p, 2792), vecMake(1.0f, 0.0f, 0.0f));
            PI(p, 3152) = 1;
        }
    }
    netHitBall(ball);
    if (BI(84) & 1) {
        if (BI(76) == 1)
            lineJudgeCall(ball);
        if (*(int *)0x8C38BA70)
            seFootSlide(ball);
    }
}
