/* Straight-line functions with calls and guards (batch gen_eq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_fat_all(int, int, int);
int copy_device(void);
int get_fat(int, int, int);
int kdGetDevice(int);
int kdGetDeviceInfo(int);
int kdGetStatus(int, int);
int kdIsChanged(int);
int kdSetBlockWrite(int, int, int, int, int, int, int);
int kdSetGetLastError(int, int, int, int, int);
int kmQueryFinishLastTextureDMA(void);
int kmResetRenderer(void);
int kmiAllocateFB(int);
int kmiCalculateWorkSize(int);
int kmiCheckSysConfigSetting(int);
int kmiFLWCTRLFinalizePass(int);
int kmiFLWCTRLGetRenderPacket(int, int);
int kmiInitVertexBufferDesc(int);
int kmiQueryFinishAllPacket(void);
int kmiSetDisplayClipSize(void);
int kmiSetFBSurfaceDesc(int);
int kmiSetNativeBufferInfo(int);
int kmiSetVertexBufferBase(int);
int kmyConnectInterrupt(int, int, int);
int kmyCreateRegionArray(int);
int kmyDeleteNativeBuffer(int, int);
int kmyEnableASyncCopy(int);
int kmyEnableHolizontalScaler(int, int);
int kmyGetDisplayRegionSize(int, int, int, int);
int kmyInitAllocator(int, int, int, int, int);
int kmyReleaseFrameBufferHandle(int);
int kmySetBGPlane(int);
int kmySetDMAErrorCallback(int, int);
int kmySetDisplayFrameBuffer(int, int);
int kmySetPassDepth(int, int, int, int);
int kmySetStripBuffer(int, int);
int kmySetVirticalFilterMode(int, int);
int kmyZeroMemory(int, int);
int memset(int, int, int);
int menuStatusDraw(int, int, int, int, int, int, int, int, int);
int mpdrv_frame_recv_main(void);
int mpdrv_frame_recv_post(void);
int mpdrv_frame_recv_pre(void);
int mpdrv_get_gunmode(void);
float nlSin(int);
int padDirOn(int, int);
int playerInputSide(int);
int primSprDrawScaleAlpha(int, int, int, Stk3, float, float, float);
int search_dir_by_startfat(int, int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int, int);
int strlen(int);
int syChainAddHandler(int, int, int, int);
int syG2DmaReset(int);
int syG2DmaSetProtect(int, int);
int trigger(void);
Stk3 vecMake(float, float, float);
int vmsfb_sleep(void);
int vmsfs_read_retry(int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_retry(int, int, int);
int vmsfs_xfind(int, int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int);
int selGridDraw(void);
int syG2SysInit(void);
int kmBeginScene(int a4, int a5);
void vmsio_block_write(int a4, int a5, int a6);
int ADX_DecodeSteFloat(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, float f4, float f5, float f6);
int kdRecvFrame(void);
int kmSetSystemConfiguration(int a4);
int kmyGetFreeSize(int a4, int a5);
int vmsfs_xdefrag(int a4, int a5);
int kmEndPass(int a4);
int playerReadPad(int a4);
int kmiFLWCTRLInitFLWControl(void);


int playerReadPad(int a4)
{
    int t1;
    int t3;
    int t5;
    int t11;
    int t13;
    int t16;
    int t63;
    int t64;
    int t80;
    int t81;
    int t42;
    int t43;
    int t44;

    t1 = padDirOn((*(int *)((a4 + 0xB64))), 0x10);
    t3 = padDirOn((*(int *)((a4 + 0xB64))), 0x20);
    t5 = padDirOn((*(int *)((a4 + 0xB64))), 0x40);
    *(unsigned short *)((a4 + 0xD46)) = (((t1 | t3) | t5) | (padDirOn((*(int *)((a4 + 0xB64))), 0x80)));
    playerInputSide(a4);
    t11 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x10));
    t13 = 0x1;
    if (((t11 & 0x2) == 0) && ((0x400 & t11) == 0)) {
        t13 = 0x0;
    }
    *(unsigned short *)(((0xD44 + a4) + 0x0)) = ((((((0x5 & t11) == 0)) ? 1 : 0) ^ 0x1) + (t13 << 1));
    t16 = *(int *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x4));
    if (((0x100000 & t16) != 0) && ((0x200000 & t16) != 0)) {
        if (((*(int *)((a4 + 0xB60))) & 0x40000) != 0) {
            if (((*(int *)((a4 + 0xB68))) == 2) && (t42 = *(int *)((a4 + 0xB64)), t43 = *(int *)(((t42 << 2) + 0x8C29B898)), t44 = *(short *)((t43 + 0x22)), (int)t44 < (int)0xFFFFFFE2)) {
                *(unsigned short *)((a4 + 0xD44)) = 0x1;
            }
            if ((*(int *)((a4 + 0xB68))) == 5) {
                if ((int)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x22))) <= (int)0x1E) {
                    t63 = *(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x20));
                    t64 = (-t63);
                    if ((int)t63 >= 0) {
                        t64 = t63;
                    }
                    if ((int)t64 <= (int)0x1E) {
                    } else {
                        *(unsigned short *)((a4 + 0xD44)) = 0x2;
                    }
                } else {
                    *(unsigned short *)((a4 + 0xD44)) = 0x1;
                }
            }
        } else {
            t80 = *(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x20));
            t81 = (-t80);
            if ((int)t80 >= 0) {
                t81 = t80;
            }
            if ((int)t81 > (int)0x1E) {
                *(unsigned short *)((a4 + 0xD44)) = 0x1;
            } else {
                if ((int)(*(short *)(((*(int *)((0x8C29B898 + ((*(int *)((a4 + 0xB64))) << 2)))) + 0x22))) < (int)0xFFFFFFE2) {
                    *(unsigned short *)((a4 + 0xD44)) = 0x2;
                }
            }
        }
    }
    if ((int)(*(short *)((a4 + 0xD44))) > (int)0x3) {
        *(unsigned short *)((a4 + 0xD44)) = 0x0;
    }
    return 0xD44;
}

