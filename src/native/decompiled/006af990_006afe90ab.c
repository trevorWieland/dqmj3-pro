#include "006af990_006afe90ab.h"



void fn_006afb6c(void)

{
  return;
}



void fn_006afb54(void)

{
  return;
}



void fn_006afb3c(void)

{
  return;
}



int fn_006afb24(int param_1,int param_2)

{
  return (int)*(char *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x55);
}



void fn_006afb0c(void)

{
  return;
}



int fn_006afaf4(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x74 + 7;
}



int fn_006afad4(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 0x74 + 0x18);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  return iVar1;
}


