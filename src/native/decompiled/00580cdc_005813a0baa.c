#include "00580cdc_005813a0baa.h"



void fn_00581030(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00445184();
  *puVar1 = &DAT_008424a8;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x2a] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0x43;
  return;
}



void fn_00581008(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002febd8(param_2);
  fn_001782b8(param_1 + 0x58,param_2,iVar1 + 1);
  return;
}


