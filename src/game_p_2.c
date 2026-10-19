/* Game-side loops: sound channel resets, setup tables, decimal digit strings. */

extern void FUN_0c05ea98(int i);
extern void FUN_0c02e71e(int ch, int vol);
extern void FUN_0c02e75a(int ch, int x);
extern void gdc_StopStreamVoiceAll(void);

extern void FUN_0c074990(int color);
extern void FUN_0c0749b0(int color);
extern void thunk_kmSetFogTable(float *table);
extern void kmSetFogDensity(int density);
extern void njSetRenderWidth(int w);

/* The fog set-ups: white fog, then a 129-entry table (fog/0C1EE360) of base / d, where d starts at
   1.1 and grows by a step that starts at 0.005 and, past entry 32, by 0.0015 more each entry. */
#define FOG_TABLE(base, first)                          \
    do {                                                \
        float d = 1.0999999f;                           \
        float step = 0.005f;                            \
        float *t = (float *)0x0C1EE360;                 \
        int i;                                          \
        FUN_0c074990(first);                            \
        FUN_0c0749b0(0xFFFFFF);                         \
        for (i = 0; i <= 128; i++) {                    \
            t[i] = *(float *)(base) / d;                \
            d += step;                                  \
            if (i > 32) {                               \
                step += 0.0014999999f;                  \
            }                                           \
        }                                               \
        thunk_kmSetFogTable(t);                         \
    }

extern void nlSprPut(void *spr);

extern void FUN_0c04eb4a(void);
extern void PC_RenderSimpleTaxiShadow(void);
extern void Put_Transporter(void);
extern void Put_Course_Obj_Dist(void);
extern void FUN_0c03b698(int v);
extern void FUN_0c03df1a(void);

extern int GetMenuMode(int which);
extern void FUN_0c053dec(void);
extern void FUN_0c053b76(void);
extern void Put_GearBox(void);
extern void FUN_0c02ea04(void);
extern void frameFlip(void);
extern int pdGetPeripheral(int port);
extern void FUN_0c039434(int mode);
extern void FUN_0c076f70(void);

extern void FUN_0c074680(int a, int b, int c);
extern void FUN_0c05c8e8(void);
extern void FUN_0c05ca3e(void);
extern void FUN_0c05c81c(void);
extern int FUN_0c038ee6(void);
extern void FUN_0c05bb24(void);
extern void FUN_0c05bb76(int on);

extern void FUN_0c07bde0(float *a, float *b, float *c);
extern void camSave(void);
extern int FUN_0c07dcf0(int *tbl, int x, int i, int one);
extern char *GetCollision2D(float *pos, float h);
extern int FUN_0c0321c2(float *p, float *b, float *a);

extern void FUN_0c05778a(float *spr, int id, float x, float y);

typedef struct {
    short x;
    short y;
    short z;
} Short3;

extern void nlRenderTextureBegin(int n);
extern void FUN_0c028908(float scale);
extern void FUN_0c070ede(void *p);
extern void nlCloseEvent(void *e);
extern void Drv_StartAction(int action, int a, int b);
extern void Chat_PickSomeoneUp(int n);

extern void FUN_0c05fd70(int i);
extern void FUN_0c07d450(int a, int b, int c);
extern void FcvStoreBuffer(int id, void *buf, float v);
extern void nlObjPutSetFadeColorOffset(float r, float g, float b);

extern void ADXT_GetTime(int h, int *t, int *f);

extern int CheckAreaGrid(void *pos, int grid);
extern void KillColliObj(void *o);
extern void SetObjFly(void *o);
extern void Voice_ShutUp(int ch);
extern void FUN_0c05765c(void);
extern void FUN_0c041ce2(int n);
extern void FUN_0c040a50(void);

typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

extern void FUN_0c072e90(int ch);
extern void gdc_StopStreamVoice(int ch);
extern void Sound_Request(int id, int a);

extern void pdVmsLcdWrite1(unsigned int port, void *img, int c, int d);
extern void FUN_0c03b698(int v);
extern void FUN_0c03bf42(int n);
extern void FUN_0c03b674(int n);
extern void PutVM_Message(int a, int b, int c, float x, float y);
extern void FUN_0c03bf76(int n);
extern float nlLog10(float x);
extern int gdFsSearchName(char *name, int dir, int c);
extern void FUN_0c0310a0(int x, int y, char *s);
extern float pfLength(char *s);
extern void pfLocate(float x, float y);
extern void pfPuts(char *s);

extern float FUN_0c089de0(unsigned int a);
extern void *set_event(int pri, void *func);
extern void FUN_0c0563f8(void *e, int a, int b);
extern float nlFloor(float x);
extern float nlCeil(float x);
extern float nlFraction(float x);
extern void SklIpPlay(int a, int f0, int b, int f1, int c, int d, float t);
extern float nlSin(int a);
extern float nlTan(int a);

extern void FUN_0c0630d2(void);
extern void Chat_Execute(void);
extern void LetsPlayTennis(void);
extern void HesLate(void);
extern void FUN_0c057fe2(void);
extern float nlScalor(float *v);
extern void ChangeColliObj(void *o, int kind);
extern void nlScaleUnitVector(float *dst, float *src, float s);

extern float FUN_0c089de8(unsigned int a);
extern void nlObjPutSetLightDirectionV(float *v);
extern void FUN_0c053292(void);
extern void FUN_0c057080(int n);
extern void FUN_0c031158(char *s, int n);
extern void FUN_0c0310c0(void *p);
extern int FUN_0c041016(int n);
extern void menuPutSprites(int spr, void *pos, int x, int y);

extern int nlArcTan2(float y, float x);
extern int CourseSplineGet(int n);
extern int CourseSplineNumGet(int n);
extern void getNearLineIndex(int a, int n, int spline, int *index, float *pos);
extern void CourseObj_Init(void);
extern void nlSubVector3op(float *out, float *a, float *b);
extern void nlGetAverageVector(float *out, float *a, float *b, float wa, float wb);
extern void nlAddVector(float *a, float *b);
extern int volumeToDb(int level);
extern void ADXT_SetOutVol(int h, int db);
extern void nlPushUnitMatrix(void);
extern void FUN_0c077f70(void);
extern void FUN_0c077210(void *a, void *b);
extern void nlGetPushedMatrix(int n);
extern void FUN_0c07c740(int obj, void *m);
extern void nlPopMatrix(int n);

extern void nlGetMatrix(float *m);
extern void nlLoadMatrix(float *m);

extern float nlInnerProduct(float *a, float *b);
extern void nlUnitVector(float *v);

typedef struct {
    int w[3];
} Mat12;

extern void nlRotateAY(unsigned int a);
extern void nlRotateAX(unsigned int a);
extern void FUN_0c0771b0(Vec3f *v, void *light);
extern void nlObjPutSetGlobalAmbience(float a);
extern void nlSetFontSize(int w, int h);
extern void nlLocate(int x, int y);
extern void nlPrintf(char *fmt, ...);
extern void FUN_0c039280(void);
extern void nlScaleVector(float *out, float *v, float s);
extern float nlLength(void *a, float *b);

/* Set a scene's light: the base direction rotated by the light's angles (+18 yaw, +16 pitch) into
   its direction, then its ambience (+12). */
#define SET_LIGHT(base, light)                                      \
    do {                                                            \
        Vec3f v;                                                    \
        char *l = (char *)(light);                                  \
        v = *(Vec3f *)(base);                                       \
        nlPushUnitMatrix();                                         \
        nlRotateAY(*(unsigned short *)(l + 18));                    \
        nlRotateAX(*(unsigned short *)(l + 16));                    \
        FUN_0c0771b0(&v, l);                                        \
        nlPopMatrix(1);                                             \
        nlObjPutSetLightDirectionV((float *)l);                     \
        nlObjPutSetGlobalAmbience(*(float *)(l + 12));              \
    }

extern int nlRand(void);
extern void FUN_0c057130(void *e, int i);

extern int ADXT_GetStat(int h);
extern int ADXT_GetNumSmpl(int h);

extern void FUN_0c0523f8(void);
extern int CheckClipping(float *p, float r);
extern void FUN_0c072348(int which);
extern void nlInitEvent(void);
extern void Sound_Init(void);
extern void FUN_0c02e494(void);
extern void FUN_0c041b04(void);
extern void FUN_0c040b98(int n);

extern void FUN_0c057930(void);
extern void nlRenderTextureFree(int i);
extern int FUN_0c02dd3a(int n);
extern void FUN_0c041ce8(void);
extern void FUN_0c02c094(int n);
extern void FUN_0c07aad0(int n);
extern void FUN_0c07ab30(int obj);
extern void FUN_0c0532de(void);
extern void ResetSpark(void);
extern int acSystemGetSystemFlag(void);
extern void Start_Fog(int kind);

extern void gdc_StopStreamSongAll(void);
extern void nlSetCommonTextureOffset(int off);
extern void nlSpriteFreeTexture(void *tbl, int n);

extern void FUN_0c059866(void);
extern void FUN_0c059d9c(void);
extern void FUN_0c05a3ae(void);
extern void FUN_0c05ab80(void);
extern void FUN_0c059f44(void);
extern void FUN_0c05a460(void);
extern void FUN_0c05a5e0(void);
extern void FUN_0c05acc8(void);
extern void nlRotateV(float *out, float *v);
extern void nlUnitMatrix(void);
extern void menuOpenStep(void);
extern void menuCursor(int a, int n, int c);
extern void menuPutFrame(void);
extern void putLevelCTFontAssist(int id, void *tbl, int n, int v, int e);
extern void menuEnterStep(void);

extern void FUN_0c05137c(void);
extern void CarSel_Time_Count(void);
extern void FUN_0c05130a(void);
extern void hudDraw(void);
extern void FUN_0c051d22(void);
extern void FUN_0c05153e(void);
extern void nlRotateAZ(int a);
extern void FUN_0c0789c0(Vec3f *v);
extern void FUN_0c078ff0(void);
extern void ADXF_Stop(int h);
extern void ADXF_Close(int h);
void FUN_0c051a3a(void);

/* Place a scene's camera: position base (0C0CF6B4) plus offset (0C2A72E0), rotated by the angles at
   0C2A72EC (z, x, y, negated), in matrix slot 2. */
#define PLACE_VIEW(base, other, offset, angles)                     \
    do {                                                            \
        Vec3f p;                                                    \
        Vec3f q;                                                    \
        unsigned short *a = (unsigned short *)(angles);             \
        p = *(Vec3f *)(base);                                       \
        q = *(Vec3f *)(other);                                      \
        nlAddVector((float *)&p, (float *)(offset));                \
        FUN_0c077df0(2);                                            \
        nlUnitMatrix();                                             \
        nlRotateAZ(-(int)a[2]);                                     \
        nlRotateAX(-(int)a[0]);                                     \
        nlRotateAY(-(int)a[1]);                                     \
        FUN_0c0789c0(&p);                                           \
        FUN_0c077df0(1);                                            \
        FUN_0c078ff0();                                             \
    }

extern void nlObjPutLoadTexture(int tex, void *table);
extern int IsBoyFriend(int a, int b);

extern void FUN_0c02c528(void);
extern void FUN_0c03b544(int n);
extern void FUN_0c057c3c(void);

extern void FUN_0c0414b8(void);
extern void FUN_0c03ac62(void);
extern int FUN_0c03ace8(void);
extern void FUN_0c07c150(int a, float *v, int d);
extern void InitColliWall(int n);
extern int FUN_0c038f80(void);
extern void nlObjPutSetFadeColor(float r, float g, float b);
extern void ExecArrow(int on, float dist);
extern void ResetFadeColor(void);
extern int buIsReady(int drive);
extern int padPortAConnected(void);

typedef struct {
    int w[8];
} Block32;

extern void SetColliObj(void *o, int kind);
extern void adxStartAfs2(int ch, int file);
extern int FUN_0c02e58a(int ch);
extern void nlFogTableSet(float *t);

extern void FUN_0c072580(float *p, int b);
extern void FUN_0c07270c(float *p, int b);
extern void FUN_0c07250c(void *a, void *b);

/* The result screen's icon rows: item i appears once the count (0C2A96F4) passes its threshold
   (3 frames apart), 33 pixels apart, at y = 0C2A9748 + 328 with scale 0C2A9758 + 1. */
#define RESULT_ROW(n, sprites, x0, t0)                                      \
    do {                                                                    \
        float *s = (float *)0x0C2A96F8;                                     \
        int i;                                                              \
        for (i = 0; i < (n); i++) {                                         \
            if (*(int *)0x0C2A96F4 > (t0) + i * 3) {                        \
                ((int *)s)[0] = ((int *)(sprites))[i];                      \
                s[1] = (float)((x0) + i * 33);                              \
                s[2] = (float)(*(int *)0x0C2A9748 + 328);                   \
                s[4] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[5] = *(float *)0x0C2A9758 + 1.0f;                         \
                s[7] = 0.0f;                                                \
                s[9] = 1.0f;                                                \
                ((int *)s)[10] = 0;                                         \
                nlSprPut(s);                                                \
            }                                                               \
        }                                                                   \
    }

extern void FUN_0c02f870(void);
extern void gdc_SpriteFreeMenu(void);
extern int gdc_FileLoad(int dst, int name, int size);
extern void nlObjPutSetReplaceTextureDirName(void *tbl, void *dir);
extern void Set_StandWaitDist(int mode);
extern void kyakuInitStops(void);
extern void FUN_0c0246dc(void);
extern void FUN_0c031492(int n);

extern void nlPushMatrix(int n);
extern void nlTranslateV(float *v);
extern void humanDraw(int model, int a, int frame, int b);
extern int nlMalloc(int size);

extern void FUN_0c03b81e(int n);
extern void FUN_0c0409a6(void);
extern void FUN_0c03933e(void);
extern void FUN_0c039378(float a, float b, float c);
extern void FUN_0c03101a(float a);
extern int FUN_0c03b788(void);
extern void FUN_0c037534(void);

extern int FUN_0c05db72(void);
extern void SetCameraPosVelocity(float *v);
extern void GetAng4Mat(int *ang);
extern void FUN_0c0288e0(int a, float b);
extern void camSetTarget(float *pos, int mode);
extern void FUN_0c0287d4(float a, float b);
extern void SetCameraMode(int mode);
extern int GetAverageAngle(int a, int b, float w);

extern void FUN_0c075120(void);
extern void FUN_0c0775d0(void *p, int n);
extern void FUN_0c074d20(void);
extern void FUN_0c074de0(int n);
extern void FUN_0c074d10(int n);
extern void FUN_0c074eb0(int n);
extern void FUN_0c075090(int a, int b, int c);
extern void nlInitPrint(void);
extern void nlPrnIndentOn(void);
extern void nlPerspective(float a, float b, float c, int d);
extern void nlInitCommonTexture(void *p, int a, int b);
extern void nlInitSprite(void *p, int a, int b);
extern void nlInitPalette(void *p, int n);
extern void paletteSetMode(int m);
extern void FUN_0c0742c0(int n);
extern void nlObjPutInit(void);
extern void setBorderColor(int c);

extern void FUN_0c055bec(void);
extern void FUN_0c055d48(void);
extern void FUN_0c055ecc(void);
extern void FUN_0c05614e(void);

extern void Init_Standard(void);
extern void FUN_0c052574(void);
extern void FUN_0c0525fc(void);
extern void FUN_0c052a1c(void);
extern void FUN_0c0528c8(void);
extern void FUN_0c0527ec(void);
extern void FUN_0c052c9e(void);
extern void FUN_0c052d28(void);
extern void FUN_0c0525b4(void);
void FUN_0c0526a0(void);

extern void sysCfgRead(void);
extern void FUN_0c040e1c(void);
extern void saveBufferInit(void *buf);
extern void FUN_0c041a3e(int n);
extern void FUN_0c03b674(int n);

extern void TOANG(short *a, short *b, float x, float y, float z);
extern void nlScale(float x, float y, float z);
extern void nlObjPut(void *obj);

extern float getNearCoursePoint(int a, int i, int *res, float *pos);

extern void gdFsMemcpy(char *src, char *dst, int n);
extern int FUN_0c15fa92(char *name);

extern int kmSetCheapShadowMode(int mode);
extern void FUN_0c07d430(void);
extern int kmUseAnotherModifier(int m);

extern void FUN_0c0606e2(int a, int b);
extern void FUN_0c060740(int tbl, int a, int b, int c, int d);

extern float FUN_0c0288f0(void);
extern void camSetEye(float *pos, int mode);

extern int VSklIpPlay(int a, int b, int c, int d, float t, int e, int f);

extern float nlLdexpf(float x, int n);

extern void FUN_0c058f08(float *p);
/* nlObjPutSetLightDirection(x, y, z): the second entry of nlObjPutSetLightDirectionV (0C07AE00), which loads the vector's components and falls into it */
extern void nlObjPutSetLightDirection(float a, float b, float c);

extern void hudHidePickUpNag(void);


/* Round an ASCII decimal string at digit n: when s[n] > '4' it becomes '0', the digit before it goes
   up by one, and carries ripple left (s[0] last). */
void FUN_0c0886cc(char *s, int n)
{
    char *q;
    int k;

    if (s[n] > '4') {
        s[n] = '0';
        s[n - 1] += 1;
        q = s + n - 1;
        for (k = n - 1; k > 0; k--, q--) {
            if (*q > '9') {
                *q -= 10;
                q[-1] += 1;
            }
        }
        if (s[1] > '9') {
            s[1] -= 10;
            s[0] += 1;
        }
    }
}


/* a -= b over n bytes, most significant first. Returns -1 when it underflows and sign is 0,
   otherwise 0 for a zero result and 1 for a nonzero one. */
int FUN_0c08933c(int sign, unsigned char *a, unsigned char *b, int n)
{
    int borrow = 0;
    int zero = 1;
    int d;
    int i;

    for (i = n - 1; i >= 0; i--) {
        d = a[i] - b[i] - borrow;
        if (d < 0) {
            d += 256;
            borrow = 1;
        } else {
            borrow = 0;
        }
        if (d != 0) {
            zero = 0;
        }
        a[i] = d;
    }
    if (borrow == 1 && sign == 0) {
        return -1;
    }
    if (zero == 1) {
        return 0;
    }
    return 1;
}


/* Pass the 32-bit fog table colour to the kit split into its parts as well. */
void nlFogTableColor(int c)
{
    kmSetFogTableColor(c, (short)((unsigned int)c >> 16), c >> 8, (signed char)((unsigned int)c >> 24), c);
}


/* Parse one ISO 9660 directory record (rec) into out: +0 extent, +4 size, +8 flags, +9 the name's
   hash, +10 the name. Records shorter than 34 give 0. A plain file's name loses its ";1" (2 bytes);
   a directory's "." and ".." entries (names 0 and 1) become "." and "..". */
int FUN_0c15fab8(unsigned char *rec, char *out)
{
    int n;

    if (rec[0] < 34) {
        return 0;
    }
    gdFsMemcpy((char *)rec + 2, out, 4);
    gdFsMemcpy((char *)rec + 10, out + 4, 4);
    out[8] = rec[25];
    n = rec[32];
    if (!(out[8] & 2)) {
        n -= 2;
    }
    gdFsMemcpy((char *)rec + 33, out + 10, n);
    out[10 + n] = 0;
    if (out[8] & 2) {
        if (out[10] == 0) {
            out[10] = 46;
        } else if (out[10] == 1) {
            out[10] = 46;
            out[11] = 46;
            out[12] = 0;
        }
    }
    out[9] = FUN_0c15fa92(out + 10);
    return rec[0];
}


/* Is the copy finished on every channel (h+3 of them)? Each channel object (h+56) answers through
   its vtable slot +80; both flags must be 1. When so, the pending flag (+92) is cleared. */
int mwlRnaIsCopyEnd(char *h)
{
    int ok[2];
    int *p0 = &ok[0];
    int *p1 = &ok[1];
    int res;
    int i;
    int *obj;

    if (*(int *)(h + 92) == 0) {
        return 0;
    }
    res = 1;
    *p1 = 1;
    *p0 = 1;
    for (i = 0; i < (unsigned char)h[3]; i++) {
        obj = *(int **)(h + 56);
        if ((*(int (**)(int *, int))(*obj + 80))(obj, i) != 1) {
            ok[i] = 0;
        }
    }
    if (*p0 == 0 || *p1 == 0) {
        res = 0;
    }
    if (res == 1) {
        *(int *)(h + 92) = 0;
    }
    return res;
}


/* A point on the line through p and q (x, y, z each) found for the third coordinate: with a different z
   in q the line is solved for z = t = (dz*px - dx*pz) / (k*dz - dx), x = k*t and y follows the line;
   with the same z, z stays p's, x = k*pz and y follows the line, or is out's own when q has the same
   x too. The result goes to out. (The factor k is the float argument.) */
void FUN_0c07bee0(float *p, float *q, float *out, float k)
{
    float tmp[3];
    float dy = q[1] - p[1];
    float dz = q[2] - p[2];
    float dx = q[0] - p[0];
    float t;

    if (dz == 0.0f) {
        tmp[2] = p[2];
        tmp[0] = k * p[2];
        if (dx == 0.0f) {
            tmp[1] = out[1];
        } else {
            tmp[1] = dy * (tmp[0] - p[0]) / dx + p[1];
        }
    } else {
        t = (dz * p[0] - dx * p[2]) / (k * dz - dx);
        tmp[2] = t;
        tmp[0] = k * t;
        tmp[1] = dy * (t - p[2]) / dz + p[1];
    }
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
}


/* The same with x and y swapped: y = k*t, and x follows the line. */
void FUN_0c07bf70(float *p, float *q, float *out, float k)
{
    float tmp[3];
    float dy = q[1] - p[1];
    float dz = q[2] - p[2];
    float dx = q[0] - p[0];
    float t;

    if (dz == 0.0f) {
        tmp[2] = p[2];
        tmp[1] = k * p[2];
        if (dy == 0.0f) {
            tmp[0] = out[0];
        } else {
            tmp[0] = dx * (tmp[1] - p[1]) / dy + p[0];
        }
    } else {
        t = (dz * p[1] - dy * p[2]) / (k * dz - dy);
        tmp[2] = t;
        tmp[1] = k * t;
        tmp[0] = dx * (t - p[2]) / dz + p[0];
    }
    out[0] = tmp[0];
    out[1] = tmp[1];
    out[2] = tmp[2];
}
