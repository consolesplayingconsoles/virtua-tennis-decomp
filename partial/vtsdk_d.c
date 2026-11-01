
void ADXT_SetOutPan(char *adxt, int ch, short pan)
{
    *(short *)(adxt + 66 + ch * 2) = pan;
    if (ch >= adxt[3]) {
        ADXERR_CallErrFunc(strAdxtPanChannelRangeError);
        return;
    }
    ADXRNA_SetOutPan(*(int *)(adxt + 12), ch, pan);
}
