
void ADXT_SetOutPan(char *adxt, int ch, short pan)
{
    *(short *)(adxt + 66 + ch * 2) = pan;
    if (ch >= adxt[3]) {
        ADXERR_CallErrFunc(g_8c209be4);
        return;
    }
    ADXRNA_SetOutPan(*(int *)(adxt + 12), ch, pan);
}
