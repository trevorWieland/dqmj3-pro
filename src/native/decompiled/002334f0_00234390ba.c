#include "002334f0_00234390ba.h"



void fn_002340e8(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x260) + 0x10))();
  *(undefined4 *)(iVar1 + 0x10) = in_s0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  return;
}



undefined4 fn_00233b7c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar1 = (undefined4 *)fn_002fece8(0x14);
    *(undefined4 **)(param_1 + 8) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[1] = 0;
      puVar1[2] = 0;
      *puVar1 = &DAT_008516ec;
    }
    *(undefined4 *)(*(int *)(param_1 + 8) + 0xc) = param_2;
    *(int *)(*(int *)(param_1 + 8) + 0x10) = param_1;
  }
  return *(undefined4 *)(param_1 + 8);
}


