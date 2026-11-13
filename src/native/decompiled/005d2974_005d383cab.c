#include "005d2974_005d383cab.h"



void fn_005d2adc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00242984(param_2);
  *(undefined4 *)(param_1 + 0x544) = *(undefined4 *)(iVar1 + 8);
  return;
}



void fn_005d2aac(int param_1)

{
  *(undefined4 *)(param_1 + 0x548) = 0;
  return;
}



void fn_005d2a74(int param_1)

{
  *(float *)(param_1 + 0x544) = *(float *)(param_1 + 0x544) - 0.05;
  return;
}



void fn_005d2a24(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0084c4bc;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}


