#include "002715b0_00273a74aba.h"



void fn_00271e64(int param_1,undefined4 param_2,byte param_3)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),param_2,1);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_3;
  return;
}


