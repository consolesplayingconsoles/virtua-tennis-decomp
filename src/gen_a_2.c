/* Straight-line store functions (batch gen a): each writes constants, or its arguments, to fixed addresses or to its
   pointer argument; generated from the code and checked by tests. */

void ADXAMP_Stop(char *a4)
{
    *(unsigned char *)(a4 + 1) = 0x0;
}


void ADXSJD_SetMaxDecSmpl(char *a4, int a5)
{
    *(unsigned int *)(a4 + 56) = a5;
}


void ADXSTM_EntryEosFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 56) = a5;
    *(unsigned int *)(a4 + 60) = a6;
}


void ADXSTM_SetReqRdSize(char *a4, int a5)
{
    *(unsigned int *)(a4 + 44) = a5;
}


void ADXAMP_SetSfreq(char *a4, int a5)
{
    *(unsigned int *)(a4 + 32) = a5;
}


void ADXSJD_SetDecPos(char *a4, int a5)
{
    *(unsigned int *)(a4 + 52) = a5;
}


void ADXSJD_SetTrapNumSmpl(char *a4, int a5)
{
    *(unsigned int *)(a4 + 60) = a5;
}


void ADXSJD_SetTrapCnt(char *a4, int a5)
{
    *(unsigned int *)(a4 + 64) = a5;
}


void ADXSJD_SetTrapDtLen(char *a4, int a5)
{
    *(unsigned int *)(a4 + 68) = a5;
}


void SJMEM_EntryErrFunc(char *a4, int a5, int a6)
{
    *(unsigned int *)(a4 + 28) = a5;
    *(unsigned int *)(a4 + 32) = a6;
}
