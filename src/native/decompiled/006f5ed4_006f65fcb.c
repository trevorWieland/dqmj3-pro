#include "006f5ed4_006f65fcb.h"



void fn_006f65fc(void)

{
  return;
}



void fn_006f6578(void)

{
  return;
}



bool fn_006f6564(int param_1)

{
  return *(int *)(param_1 + 0x2f8) != -1;
}



void fn_006f6534(void)

{
  return;
}



int fn_006f6394(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint in_s0;
  ulonglong uVar5;
  
  iVar4 = 0;
  fn_006afb84(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  uVar5 = (ulonglong)in_s0;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2 != 0) {
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + uVar2 * 4);
      if (*(float *)(iVar3 + 4) <= (float)uVar5) {
        iVar1 = fn_006b6178(iVar3,param_2);
        if (iVar1 != 0) {
          uVar5 = (ulonglong)*(uint *)(iVar3 + 4);
          iVar4 = iVar3;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c) >> 2));
  }
  return iVar4;
}



void fn_006f62bc(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + 0x24) + 0x24))();
  iVar1 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + 0x24) + 0x24))();
  return;
}



bool fn_006f6290(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  iVar1 = fn_006c3a84(*(undefined4 *)(iVar1 + 0x30));
  return iVar1 == 0;
}



void fn_006f6220(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  (**(code **)(**(int **)(*(int *)(iVar1 + 0x30) + 0x24) + 0x24))();
  return;
}


